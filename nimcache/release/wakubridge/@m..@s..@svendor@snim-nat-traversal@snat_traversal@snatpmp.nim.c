/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/certs -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/common -o nimcache/release/wakubridge/@m..@s..@svendor@snim-nat-traversal@snat_traversal@snatpmp.nim.c.o nimcache/release/wakubridge/@m..@s..@svendor@snim-nat-traversal@snat_traversal@snatpmp.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include "natpmp.h"
#include <sys/select.h>
#include <time.h>
#include <sys/types.h>
#include <string.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#undef LANGUAGE_C
#undef MIPSEB
#undef MIPSEL
#undef PPC
#undef R3000
#undef R4000
#undef i386
#undef linux
#undef mips
#undef near
#undef far
#undef powerpc
#undef unix
#define nimfr_(x, y)
#define nimln_(x, y)
typedef struct tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
typedef struct tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ;
typedef struct tyObject_Result__HNnt9ck0SSM6g9ctpv9bOfKNQ tyObject_Result__HNnt9ck0SSM6g9ctpv9bOfKNQ;
typedef struct tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA;
typedef struct tyObject_Result__h9b1jynKZrDS9bX4he8zIyhQ tyObject_Result__h9b1jynKZrDS9bX4he8zIyhQ;
typedef unsigned char tyArray__q9adO6katJkFXevPyBMqH9aA[12];
struct tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A {natpmp_t cstruct;
};
typedef NU8 tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc__ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {NI size;
tyEnum_TNimKind__jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag__v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc__ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc__WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
NCSTRING name;
TNimType* nextType;
NI instances;
NI sizes;
};
struct TGenericSeq {NI len;
NI reserved;
};
struct NimStringDesc {  TGenericSeq Sup;NIM_CHAR data[SEQ_DECL_SIZE];
};
struct tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ {NIM_BOOL o;
union{
struct {NCSTRING e;
} _o_1;
struct {NIM_BOOL v;
} _o_2;
};
};
struct tyObject_Result__HNnt9ck0SSM6g9ctpv9bOfKNQ {NIM_BOOL o;
union{
struct {NimStringDesc* e;
} _o_1;
struct {NCSTRING v;
} _o_2;
};
};
struct tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA {NIM_BOOL o;
union{
struct {NimStringDesc* e;
} _o_1;
struct {NIM_BOOL v;
} _o_2;
};
};
typedef long tyArray__RpaqwQ7H8ofV6NGQYsCBHQ[16];
typedef NU8 tyEnum_NatPmpProtocol__7XY4RnUVS4BQVoQnihfr7A;
struct tyObject_Result__h9b1jynKZrDS9bX4he8zIyhQ {NIM_BOOL o;
union{
struct {NimStringDesc* e;
} _o_1;
struct {unsigned short v;
} _o_2;
};
};
typedef NU8 tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {tyEnum_TNimNodeKind__unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
N_LIB_PRIVATE N_NIMCALL(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*, eqdeepCopy___v54Y9cnJH0H5xQ9bF5HxAvbg)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* x_0);
N_LIB_PRIVATE N_NIMCALL(void, failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A)(NimStringDesc* msg);
static N_NIMCALL(void, Marker_tyRef__qbCtlC8JkMfh4n5uobqojg)(void* p, NI op);
N_LIB_PRIVATE N_NIMCALL(void*, newObj)(TNimType* typ, NI size);
static N_INLINE(void, nimZeroMem)(void* p, NI size);
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size);
N_LIB_PRIVATE N_NOINLINE(void, chckNil)(void* p);
N_LIB_PRIVATE N_NIMCALL(void, unsureAsgnRef)(void** dest, void* src);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
N_LIB_PRIVATE N_NIMCALL(void, getNatPmpResponse__nVOXt1NSF2QdNeuebast3Q)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self, natpmpresp_t* natPmpResponsePtr, tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA* Result);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, osErrorMsg__33xViSVWAmDrexoKkLfMhg)(NI32 errorCode);
N_LIB_PRIVATE N_NIMCALL(NI32, osLastError__9bUWNxbcGnToMWA9b79aTXLIw)(void);
N_LIB_PRIVATE N_NIMCALL(NimStringDesc*, error__CfJlPwbJz8Fz2gNGiRdrJA)(tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA self);
N_LIB_PRIVATE N_NIMCALL(void, doMapping__23mUfIicvJd6alZrC9bhKdw_2)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self, unsigned short eport, unsigned short iport, tyEnum_NatPmpProtocol__7XY4RnUVS4BQVoQnihfr7A protocol_0, unsigned long lifetime_0, tyObject_Result__h9b1jynKZrDS9bX4he8zIyhQ* Result);
N_LIB_PRIVATE TNimType NTI__4iGDGTllLmktszOIvur11A_;
N_LIB_PRIVATE TNimType NTI__aruVm2Iul9aMIeUfPk8oS9cg_;
STRING_LITERAL(TM__81MlxrXpMEOQ5p17X9aoCPw_2, "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/na"
"t_traversal/natpmp.nim(220, 11) `false` not implemented", 118);
N_LIB_PRIVATE TNimType NTI__qbCtlC8JkMfh4n5uobqojg_;
N_LIB_PRIVATE TNimType NTI__7XY4RnUVS4BQVoQnihfr7A_;
extern TNimType* nimTypeRoot;

#line 219 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*, eqdeepCopy___v54Y9cnJH0H5xQ9bF5HxAvbg)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* x_0) {	tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* result;	result = (tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*)0;
#line 220 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	{		if (!NIM_TRUE) goto LA3_;

#line 220 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 220 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		failedAssertImpl__W9cjVocn1tjhW7p7xohJj6A(((NimStringDesc*) &TM__81MlxrXpMEOQ5p17X9aoCPw_2));
	}
	LA3_: ;
	return result;}
static N_NIMCALL(void, Marker_tyRef__qbCtlC8JkMfh4n5uobqojg)(void* p, NI op) {
	tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* a;
	NI T1_;	a = (tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*)p;
	T1_ = (NI)0;}

#line 209 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*, newNatPmp__J4rbQ4KB4Nh0GxYcEL0r6w)(void) {	tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* result;	result = (tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*)0;
#line 210 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	result = (tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*) newObj((&NTI__qbCtlC8JkMfh4n5uobqojg_), sizeof(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A));	return result;}

#line 22 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory)(void* a, int v, NI size) {	void* T1_;
#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 24 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	T1_ = (void*)0;	T1_ = memset(a, v, ((size_t) (size)));}

#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
static N_INLINE(void, nimZeroMem)(void* p, NI size) {
#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/memory.nim"
	nimSetMem__zxfKBYntu9cBapkhrCOk1fgmemory(p, ((int) 0), size);
}

#line 212 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ, init__ru5ecGwN9ao0Sr85F1zxhEA)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self) {	tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ result;	int res;	nimZeroMem((void*)(&result), sizeof(tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ));
#line 213 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 213 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	res = initnatpmp((&(*self).cstruct), ((int) 0), ((unsigned long) 0));
#line 214 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	{
#line 214 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		if (!(res == ((NI32) 0))) goto LA3_;

#line 300 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)(&result));		nimZeroMem((void*)(&result), sizeof(tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ));		result.o = NIM_TRUE;		result._o_2.v = NIM_TRUE;	}
	goto LA1_;
	LA3_: ;
	{
#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)(&result));		nimZeroMem((void*)(&result), sizeof(tyObject_Result__ilFFiS4FzkKdKwqy8wvy9cQ));		result.o = NIM_FALSE;
#line 217 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 217 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		result._o_1.e = strnatpmperr(res);	}
	LA1_: ;
	return result;}

#line 222 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(void, getNatPmpResponse__nVOXt1NSF2QdNeuebast3Q)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self, natpmpresp_t* natPmpResponsePtr, tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA* Result) {	int res;	struct timeval timeout;	fd_set fds;{	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	(*Result)._o_2.v = 0;	break;
	} 
	(*Result).o = 0;	res = (int)0;	nimZeroMem((void*)(&timeout), sizeof(struct timeval));	nimZeroMem((void*)(&fds), sizeof(fd_set));	{
#line 228 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		while (1) {
#line 229 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 229 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			FD_ZERO((&fds));

#line 230 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 230 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			FD_SET((*self).cstruct.s, (&fds));

#line 231 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 231 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			res = getnatpmprequesttimeout((&(*self).cstruct), (&timeout));
#line 232 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			{				NCSTRING T7_;
#line 232 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 232 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				if (!!((res == ((NI32) 0)))) goto LA5_;

#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
				chckNil((void*)Result);				switch ((*Result).o) {
				case NIM_FALSE:
				unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);				break;
				case NIM_TRUE:
				(*Result)._o_2.v = 0;				break;
				} 
				(*Result).o = 0;				(*Result).o = NIM_FALSE;
#line 233 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 233 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 233 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				T7_ = (NCSTRING)0;				T7_ = strnatpmperr(res);				unsureAsgnRef((void**) (&(*Result)._o_1.e), cstrToNimstr(T7_));
#line 234 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				goto BeforeRet_;
			}
			LA5_: ;

#line 235 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 235 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			res = select(((int) 1024), (&fds), NIM_NIL, NIM_NIL, (&timeout));
#line 236 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			{				NI32 T12_;
#line 236 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				if (!(res == ((NI32) -1))) goto LA10_;

#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
				chckNil((void*)Result);				switch ((*Result).o) {
				case NIM_FALSE:
				unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);				break;
				case NIM_TRUE:
				(*Result)._o_2.v = 0;				break;
				} 
				(*Result).o = 0;				(*Result).o = NIM_FALSE;
#line 237 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 237 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 237 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				T12_ = (NI32)0;				T12_ = osLastError__9bUWNxbcGnToMWA9b79aTXLIw();
#line 237 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				unsureAsgnRef((void**) (&(*Result)._o_1.e), osErrorMsg__33xViSVWAmDrexoKkLfMhg(T12_));
#line 238 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				goto BeforeRet_;
			}
			LA10_: ;

#line 239 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 239 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			res = readnatpmpresponseorretry((&(*self).cstruct), natPmpResponsePtr);
#line 240 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			{				NIM_BOOL T15_;				NCSTRING T19_;
#line 240 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				T15_ = (NIM_BOOL)0;
#line 240 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				T15_ = (res < ((NI32) 0));				if (!(T15_)) goto LA16_;

#line 240 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 240 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				T15_ = !((res == ((int) -100)));				LA16_: ;
				if (!T15_) goto LA17_;

#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
				chckNil((void*)Result);				switch ((*Result).o) {
				case NIM_FALSE:
				unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);				break;
				case NIM_TRUE:
				(*Result)._o_2.v = 0;				break;
				} 
				(*Result).o = 0;				(*Result).o = NIM_FALSE;
#line 241 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 241 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 241 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				T19_ = (NCSTRING)0;				T19_ = strnatpmperr(res);				unsureAsgnRef((void**) (&(*Result)._o_1.e), cstrToNimstr(T19_));
#line 242 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				goto BeforeRet_;
			}
			LA17_: ;

#line 243 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
			{
#line 243 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 243 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				if (!!((res == ((int) -100)))) goto LA22_;

#line 244 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
				goto LA1;
			}
			LA22_: ;
		}
	} LA1: ;

#line 300 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	(*Result)._o_2.v = 0;	break;
	} 
	(*Result).o = 0;	(*Result).o = NIM_TRUE;	(*Result)._o_2.v = NIM_TRUE;	}BeforeRet_: ;
}

#line 249 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(void, externalIPAddress__U1YOwBlZ8wFyYXvrlrLdfg)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self, tyObject_Result__HNnt9ck0SSM6g9ctpv9bOfKNQ* Result) {	int res;	natpmpresp_t natPmpResponse;{	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	(*Result)._o_2.v = NIM_NIL;	break;
	} 
	(*Result).o = 0;	res = (int)0;	nimZeroMem((void*)(&natPmpResponse), sizeof(natpmpresp_t));
#line 254 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 254 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	res = sendpublicaddressrequest((&(*self).cstruct));
#line 255 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	{		NCSTRING T5_;
#line 255 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		if (!(res < ((NI32) 0))) goto LA3_;

#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)Result);		switch ((*Result).o) {
		case NIM_FALSE:
		unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);		break;
		case NIM_TRUE:
		(*Result)._o_2.v = NIM_NIL;		break;
		} 
		(*Result).o = 0;		(*Result).o = NIM_FALSE;
#line 256 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 256 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 256 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		T5_ = (NCSTRING)0;		T5_ = strnatpmperr(res);		unsureAsgnRef((void**) (&(*Result)._o_1.e), cstrToNimstr(T5_));
#line 257 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		goto BeforeRet_;
	}
	LA3_: ;

#line 258 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	{		tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA r;		nimZeroMem((void*)(&r), sizeof(tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA));
#line 258 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 258 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		getNatPmpResponse__nVOXt1NSF2QdNeuebast3Q(self, (&natPmpResponse), (&r));

#line 258 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		if (!!(r.o)) goto LA8_;

#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)Result);		switch ((*Result).o) {
		case NIM_FALSE:
		unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);		break;
		case NIM_TRUE:
		(*Result)._o_2.v = NIM_NIL;		break;
		} 
		(*Result).o = 0;		(*Result).o = NIM_FALSE;
#line 259 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 259 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		unsureAsgnRef((void**) (&(*Result)._o_1.e), error__CfJlPwbJz8Fz2gNGiRdrJA(r));
#line 260 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		goto BeforeRet_;
	}
	LA8_: ;

#line 300 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	(*Result)._o_2.v = NIM_NIL;	break;
	} 
	(*Result).o = 0;	(*Result).o = NIM_TRUE;
#line 261 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 261 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	(*Result)._o_2.v = inet_ntoa(natPmpResponse.pnu.publicaddress.addr);	}BeforeRet_: ;
}

#line 267 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(void, doMapping__23mUfIicvJd6alZrC9bhKdw_2)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self, unsigned short eport, unsigned short iport, tyEnum_NatPmpProtocol__7XY4RnUVS4BQVoQnihfr7A protocol_0, unsigned long lifetime_0, tyObject_Result__h9b1jynKZrDS9bX4he8zIyhQ* Result) {	int res;	natpmpresp_t natPmpResponse;{	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	(*Result)._o_2.v = 0;	break;
	} 
	(*Result).o = 0;	res = (int)0;	nimZeroMem((void*)(&natPmpResponse), sizeof(natpmpresp_t));
#line 272 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 272 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	res = sendnewportmappingrequest((&(*self).cstruct), ((int) (protocol_0)), iport, eport, lifetime_0);
#line 273 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	{		NCSTRING T5_;
#line 273 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		if (!(res < ((NI32) 0))) goto LA3_;

#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)Result);		switch ((*Result).o) {
		case NIM_FALSE:
		unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);		break;
		case NIM_TRUE:
		(*Result)._o_2.v = 0;		break;
		} 
		(*Result).o = 0;		(*Result).o = NIM_FALSE;
#line 274 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 274 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 274 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		T5_ = (NCSTRING)0;		T5_ = strnatpmperr(res);		unsureAsgnRef((void**) (&(*Result)._o_1.e), cstrToNimstr(T5_));
#line 275 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		goto BeforeRet_;
	}
	LA3_: ;

#line 276 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	{		tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA r;		nimZeroMem((void*)(&r), sizeof(tyObject_Result__eZlmLdJ9b4dSB3wslQQC9bRA));
#line 276 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 276 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		getNatPmpResponse__nVOXt1NSF2QdNeuebast3Q(self, (&natPmpResponse), (&r));

#line 276 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		if (!!(r.o)) goto LA8_;

#line 319 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
		chckNil((void*)Result);		switch ((*Result).o) {
		case NIM_FALSE:
		unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);		break;
		case NIM_TRUE:
		(*Result)._o_2.v = 0;		break;
		} 
		(*Result).o = 0;		(*Result).o = NIM_FALSE;
#line 277 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 277 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		unsureAsgnRef((void**) (&(*Result)._o_1.e), error__CfJlPwbJz8Fz2gNGiRdrJA(r));
#line 278 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
		goto BeforeRet_;
	}
	LA8_: ;

#line 300 "/home/runner/work/nim-waku/nim-waku/vendor/nim-stew/stew/results.nim"
	chckNil((void*)Result);	switch ((*Result).o) {
	case NIM_FALSE:
	unsureAsgnRef((void**)&(*Result)._o_1.e, NIM_NIL);	break;
	case NIM_TRUE:
	(*Result)._o_2.v = 0;	break;
	} 
	(*Result).o = 0;	(*Result).o = NIM_TRUE;	(*Result)._o_2.v = natPmpResponse.pnu.newportmapping.mappedpublicport;	}BeforeRet_: ;
}

#line 283 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(void, addPortMapping__23mUfIicvJd6alZrC9bhKdw)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self, unsigned short eport, unsigned short iport, tyEnum_NatPmpProtocol__7XY4RnUVS4BQVoQnihfr7A protocol_0, unsigned long lifetime_0, tyObject_Result__h9b1jynKZrDS9bX4he8zIyhQ* Result) {{
#line 284 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 284 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 284 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	doMapping__23mUfIicvJd6alZrC9bhKdw_2(self, eport, iport, protocol_0, lifetime_0, Result);
	goto BeforeRet_;
	}BeforeRet_: ;
}

#line 286 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
N_LIB_PRIVATE N_NIMCALL(void, deletePortMapping__tTP4MvH38Uctfis3ovOlow)(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A* self, unsigned short eport, unsigned short iport, tyEnum_NatPmpProtocol__7XY4RnUVS4BQVoQnihfr7A protocol_0, tyObject_Result__h9b1jynKZrDS9bX4he8zIyhQ* Result) {{
#line 287 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 287 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"

#line 287 "/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/nat_traversal/natpmp.nim"
	doMapping__23mUfIicvJd6alZrC9bhKdw_2(self, eport, iport, protocol_0, ((unsigned long) 0), Result);
	goto BeforeRet_;
	}BeforeRet_: ;
}
N_LIB_PRIVATE N_NIMCALL(void, nat_traversal_natpmpDatInit000)(void) {

#line 999999 "generated_not_to_break_here"
static TNimNode* TM__81MlxrXpMEOQ5p17X9aoCPw_3_2[2];
NI TM__81MlxrXpMEOQ5p17X9aoCPw_5;
static char* NIM_CONST TM__81MlxrXpMEOQ5p17X9aoCPw_4[2] = {
"UDP", 
"TCP"};
static TNimNode TM__81MlxrXpMEOQ5p17X9aoCPw_0[5];NTI__4iGDGTllLmktszOIvur11A_.size = sizeof(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A);
NTI__4iGDGTllLmktszOIvur11A_.kind = 18;
NTI__4iGDGTllLmktszOIvur11A_.base = 0;
NTI__4iGDGTllLmktszOIvur11A_.flags = 3;
NTI__4iGDGTllLmktszOIvur11A_.name = "NatPmp:ObjectType";
NTI__4iGDGTllLmktszOIvur11A_.nextType = nimTypeRoot; nimTypeRoot=&NTI__4iGDGTllLmktszOIvur11A_;
NTI__aruVm2Iul9aMIeUfPk8oS9cg_.size = sizeof(natpmp_t);
NTI__aruVm2Iul9aMIeUfPk8oS9cg_.kind = 18;
NTI__aruVm2Iul9aMIeUfPk8oS9cg_.base = 0;
NTI__aruVm2Iul9aMIeUfPk8oS9cg_.flags = 3;
NTI__aruVm2Iul9aMIeUfPk8oS9cg_.name = "natpmp_t";
NTI__aruVm2Iul9aMIeUfPk8oS9cg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__aruVm2Iul9aMIeUfPk8oS9cg_;
NTI__aruVm2Iul9aMIeUfPk8oS9cg_.node = &TM__81MlxrXpMEOQ5p17X9aoCPw_0[1];
TM__81MlxrXpMEOQ5p17X9aoCPw_0[0].kind = 1;
TM__81MlxrXpMEOQ5p17X9aoCPw_0[0].offset = offsetof(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A, cstruct);
TM__81MlxrXpMEOQ5p17X9aoCPw_0[0].typ = (&NTI__aruVm2Iul9aMIeUfPk8oS9cg_);
TM__81MlxrXpMEOQ5p17X9aoCPw_0[0].name = "cstruct";
NTI__4iGDGTllLmktszOIvur11A_.node = &TM__81MlxrXpMEOQ5p17X9aoCPw_0[0];
NTI__4iGDGTllLmktszOIvur11A_.deepcopy =(void* (N_RAW_NIMCALL*)(void*))eqdeepCopy___v54Y9cnJH0H5xQ9bF5HxAvbg;
NTI__qbCtlC8JkMfh4n5uobqojg_.size = sizeof(tyObject_NatPmpcolonObjectType___4iGDGTllLmktszOIvur11A*);
NTI__qbCtlC8JkMfh4n5uobqojg_.kind = 22;
NTI__qbCtlC8JkMfh4n5uobqojg_.base = (&NTI__4iGDGTllLmktszOIvur11A_);
NTI__qbCtlC8JkMfh4n5uobqojg_.flags = 2;
NTI__qbCtlC8JkMfh4n5uobqojg_.name = "NatPmp";
NTI__qbCtlC8JkMfh4n5uobqojg_.nextType = nimTypeRoot; nimTypeRoot=&NTI__qbCtlC8JkMfh4n5uobqojg_;
NTI__qbCtlC8JkMfh4n5uobqojg_.marker = Marker_tyRef__qbCtlC8JkMfh4n5uobqojg;
NTI__7XY4RnUVS4BQVoQnihfr7A_.size = sizeof(tyEnum_NatPmpProtocol__7XY4RnUVS4BQVoQnihfr7A);
NTI__7XY4RnUVS4BQVoQnihfr7A_.kind = 14;
NTI__7XY4RnUVS4BQVoQnihfr7A_.base = 0;
NTI__7XY4RnUVS4BQVoQnihfr7A_.flags = 3;
NTI__7XY4RnUVS4BQVoQnihfr7A_.name = "NatPmpProtocol";
NTI__7XY4RnUVS4BQVoQnihfr7A_.nextType = nimTypeRoot; nimTypeRoot=&NTI__7XY4RnUVS4BQVoQnihfr7A_;
for (TM__81MlxrXpMEOQ5p17X9aoCPw_5 = 0; TM__81MlxrXpMEOQ5p17X9aoCPw_5 < 2; TM__81MlxrXpMEOQ5p17X9aoCPw_5++) {
TM__81MlxrXpMEOQ5p17X9aoCPw_0[TM__81MlxrXpMEOQ5p17X9aoCPw_5+2].kind = 1;
TM__81MlxrXpMEOQ5p17X9aoCPw_0[TM__81MlxrXpMEOQ5p17X9aoCPw_5+2].offset = TM__81MlxrXpMEOQ5p17X9aoCPw_5;
TM__81MlxrXpMEOQ5p17X9aoCPw_0[TM__81MlxrXpMEOQ5p17X9aoCPw_5+2].name = TM__81MlxrXpMEOQ5p17X9aoCPw_4[TM__81MlxrXpMEOQ5p17X9aoCPw_5];
TM__81MlxrXpMEOQ5p17X9aoCPw_3_2[TM__81MlxrXpMEOQ5p17X9aoCPw_5] = &TM__81MlxrXpMEOQ5p17X9aoCPw_0[TM__81MlxrXpMEOQ5p17X9aoCPw_5+2];
}
TM__81MlxrXpMEOQ5p17X9aoCPw_0[2].offset = 1;
TM__81MlxrXpMEOQ5p17X9aoCPw_0[3].offset = 2;
TM__81MlxrXpMEOQ5p17X9aoCPw_0[4].len = 2; TM__81MlxrXpMEOQ5p17X9aoCPw_0[4].kind = 2; TM__81MlxrXpMEOQ5p17X9aoCPw_0[4].sons = &TM__81MlxrXpMEOQ5p17X9aoCPw_3_2[0];
NTI__7XY4RnUVS4BQVoQnihfr7A_.node = &TM__81MlxrXpMEOQ5p17X9aoCPw_0[4];
NTI__7XY4RnUVS4BQVoQnihfr7A_.flags = 1<<2;
}
