{.used.}

import
  std/[unittest, options, tables, sets, times, os, strutils],
  chronos,
  ../../waku/v2/node/storage/message/waku_message_store,
  ../../waku/v2/node/storage/sqlite,
  ../../waku/v2/protocol/waku_store/waku_store,
  ./utils

suite "Message Store":
  test "set and get works":
    let 
      database = SqliteDatabase.init("", inMemory = true)[]
      store = WakuMessageStore.init(database)[]
      topic = ContentTopic("/waku/2/default-content/proto")
      pubsubTopic =  "/waku/2/default-waku/proto"

      t1 = epochTime()
      t2 = epochTime()
      t3 = high(float64)
    var msgs = @[
      WakuMessage(payload: @[byte 1, 2, 3], contentTopic: topic, version: uint32(0), timestamp: t1),
      WakuMessage(payload: @[byte 1, 2, 3, 4], contentTopic: topic, version: uint32(1), timestamp: t2),
      WakuMessage(payload: @[byte 1, 2, 3, 4, 5], contentTopic: topic, version: high(uint32), timestamp: t3),
    ]

    defer: store.close()

    var indexes: seq[Index] = @[]
    for msg in msgs:
      var index = computeIndex(msg)
      let output = store.put(index, msg, pubsubTopic)
      check output.isOk
      indexes.add(index)


    # flags for version
    var v0Flag, v1Flag, vMaxFlag: bool = false
    # flags for sender timestamp
    var t1Flag, t2Flag, t3Flag: bool = false
    # flags for receiver timestamp
    var rt1Flag, rt2Flag, rt3Flag: bool = false
    # flags for message/pubsubTopic (default true)
    var msgFlag, psTopicFlag = true

    var responseCount = 0
    proc data(receiverTimestamp: float64, msg: WakuMessage, psTopic: string) {.raises: [Defect].} =
      responseCount += 1

      # Note: cannot use `check` within `{.raises: [Defect].}` block:
      # @TODO: /Nim/lib/pure/unittest.nim(577, 16) Error: can raise an unlisted exception: Exception
      if msg notin msgs:
        msgFlag = false

      if psTopic != pubsubTopic:
        psTopicFlag = false

      # check the correct retrieval of versions
      if msg.version == uint32(0): v0Flag = true
      if msg.version == uint32(1): v1Flag = true
      # high(uint32) is the largest value that fits in uint32, this is to make sure there is no overflow in the storage
      if msg.version == high(uint32): vMaxFlag = true

      # check correct retrieval of sender timestamps
      if msg.timestamp == t1: t1Flag = true
      if msg.timestamp == t2: t2Flag = true
      if msg.timestamp == t3: t3Flag = true

      # check correct retrieval of receiver timestamps
      if receiverTimestamp == indexes[0].receiverTime: rt1Flag = true
      if receiverTimestamp == indexes[1].receiverTime: rt2Flag = true
      if receiverTimestamp == indexes[2].receiverTime: rt3Flag = true


    let res = store.getAll(data)
    
    check:
      res.isErr == false
      responseCount == 3
      # check version
      v0Flag == true
      v1Flag == true
      vMaxFlag == true
      # check sender timestamp
      t1Flag == true
      t2Flag == true
      t3Flag == true
      # check receiver timestamp
      rt1Flag == true
      rt2Flag == true
      rt3Flag == true
      # check messages and pubsubTopic
      msgFlag == true
      psTopicFlag == true
  test "set and get user version":
    let 
      database = SqliteDatabase.init("", inMemory = true)[]
      store = WakuMessageStore.init(database)[]
    defer: store.close()

    let res = database.setUserVersion(5)
    check res.isErr == false

    let ver = database.getUserVersion()
    check:
      ver.isErr == false
      ver.value == 5
  test "migration":
    let 
      database = SqliteDatabase.init("", inMemory = true)[]
      store = WakuMessageStore.init(database)[]
    defer: store.close()

    template sourceDir: string = currentSourcePath.rsplit(DirSep, 1)[0]
    let migrationPath = sourceDir

    let res = database.migrate(migrationPath, 10)
    check:
      res.isErr == false

    let ver = database.getUserVersion()
    check:
      ver.isErr == false
      ver.value == 10
