/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
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
#undef powerpc
#undef unix
typedef struct tyObject_MemFile_j4SnXNrJDFBxAz4BlbM9aIQ tyObject_MemFile_j4SnXNrJDFBxAz4BlbM9aIQ;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
struct tyObject_MemFile_j4SnXNrJDFBxAz4BlbM9aIQ {
void* mem;
NI size;
int handle;
};
typedef NU8 tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A;
typedef NU8 tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ;
typedef N_NIMCALL_PTR(void, tyProc_ojoeKfW4VYIm36I9cpDTQIg) (void* p, NI op);
typedef N_NIMCALL_PTR(void*, tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ) (void* p);
struct TNimType {
NI size;
tyEnum_TNimKind_jIBKr1ejBgsfM33Kxw4j7A kind;
tySet_tyEnum_TNimTypeFlag_v8QUszD1sWlSIWZz7mC4bQ flags;
TNimType* base;
TNimNode* node;
void* finalizer;
tyProc_ojoeKfW4VYIm36I9cpDTQIg marker;
tyProc_WSm2xU5ARYv9aAR4l0z9c9auQ deepcopy;
};
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
TNimType NTI_j4SnXNrJDFBxAz4BlbM9aIQ_;
extern TNimType NTI_vr5DoT1jILTGdRlYv1OYpw_;
extern TNimType NTI_rR5Bzr1D5krxoo1NcNyeMA_;
extern TNimType NTI_nlCscttRCss70IBTyuBqnA_;
NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesInit000)(void) {
}

NIM_EXTERNC N_NOINLINE(void, stdlib_memfilesDatInit000)(void) {
static TNimNode* TM_mFfhe8Jm7Jqn2Znr3841fw_2[3];
static TNimNode TM_mFfhe8Jm7Jqn2Znr3841fw_0[4];
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.size = sizeof(tyObject_MemFile_j4SnXNrJDFBxAz4BlbM9aIQ);
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.kind = 18;
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.base = 0;
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.flags = 3;
TM_mFfhe8Jm7Jqn2Znr3841fw_2[0] = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[1];
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].kind = 1;
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].offset = offsetof(tyObject_MemFile_j4SnXNrJDFBxAz4BlbM9aIQ, mem);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].typ = (&NTI_vr5DoT1jILTGdRlYv1OYpw_);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[1].name = "mem";
TM_mFfhe8Jm7Jqn2Znr3841fw_2[1] = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[2];
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].kind = 1;
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].offset = offsetof(tyObject_MemFile_j4SnXNrJDFBxAz4BlbM9aIQ, size);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].typ = (&NTI_rR5Bzr1D5krxoo1NcNyeMA_);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[2].name = "size";
TM_mFfhe8Jm7Jqn2Znr3841fw_2[2] = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[3];
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].kind = 1;
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].offset = offsetof(tyObject_MemFile_j4SnXNrJDFBxAz4BlbM9aIQ, handle);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].typ = (&NTI_nlCscttRCss70IBTyuBqnA_);
TM_mFfhe8Jm7Jqn2Znr3841fw_0[3].name = "handle";
TM_mFfhe8Jm7Jqn2Znr3841fw_0[0].len = 3; TM_mFfhe8Jm7Jqn2Znr3841fw_0[0].kind = 2; TM_mFfhe8Jm7Jqn2Znr3841fw_0[0].sons = &TM_mFfhe8Jm7Jqn2Znr3841fw_2[0];
NTI_j4SnXNrJDFBxAz4BlbM9aIQ_.node = &TM_mFfhe8Jm7Jqn2Znr3841fw_0[0];
}
