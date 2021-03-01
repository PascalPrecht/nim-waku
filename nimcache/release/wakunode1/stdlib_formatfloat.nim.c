/* Generated by Nim Compiler v1.2.6 */
/*   (c) 2020 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Linux, amd64, gcc */
/* Command for C compiler:
   gcc -c  -w -pthread -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace -I/home/runner/work/nim-waku/nim-waku/vendor/nim-libbacktrace/install/usr/include -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-secp256k1/secp256k1_wrapper/secp256k1/src -DHAVE_CONFIG_H -DHAVE_BUILTIN_EXPECT -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/src -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/inc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-bearssl/bearssl/csources/tools -DBR_USE_UNIX_TIME=1 -DBR_USE_URANDOM=1 -DBR_LE_UNALIGNED=1 -DBR_64=1  -DBR_amd64=1 -DBR_INT128=1 -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/miniupnp/miniupnpc -I/home/runner/work/nim-waku/nim-waku/vendor/nim-nat-traversal/vendor/libnatpmp-upstream -DENABLE_STRNATPMPERR -march=native -g3 -Og -O3 -fno-strict-aliasing -fno-ident  -I/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib -I/home/runner/work/nim-waku/nim-waku/waku/v1/node -o nimcache/release/wakunode1/stdlib_formatfloat.nim.c.o nimcache/release/wakunode1/stdlib_formatfloat.nim.c */
#define NIM_INTBITS 64

#include "nimbase.h"
#include <stdio.h>
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
N_LIB_PRIVATE N_NIMCALL(void, writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg)(NIM_CHAR* buf, NCSTRING value);

#line 13 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
N_LIB_PRIVATE N_NIMCALL(void, writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg)(NIM_CHAR* buf, NCSTRING value) {	NI i;
#line 14 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
	i = ((NI) 0);	{
#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		while (1) {
#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 15 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			if (!!(((NU8)(value[i]) == (NU8)(0)))) goto LA2;

#line 16 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			buf[(i)- 0] = value[i];
#line 17 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			i += ((NI) 1);		} LA2: ;
	}
}

#line 19 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
N_LIB_PRIVATE N_NIMCALL(NI, writeFloatToBuffer__UrA9aquvUwHFUFx78eUQk3A)(NIM_CHAR* buf, NF value) {	NI result;	NI n;	int T1_;	NIM_BOOL hasDot;	result = (NI)0;
#line 32 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 32 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 32 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
	T1_ = (int)0;	T1_ = sprintf(((NCSTRING) (buf)), "%.16g", value);	n = ((NI) (T1_));
#line 33 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
	hasDot = NIM_FALSE;	{		NI i;		NI colontmp_;		NI res;		i = (NI)0;		colontmp_ = (NI)0;
#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		colontmp_ = (NI)(n - ((NI) 1));
#line 77 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
		res = ((NI) 0);		{
#line 78 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
			while (1) {
#line 78 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				if (!(res <= colontmp_)) goto LA4;

#line 34 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
				i = res;
#line 35 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
				{
#line 35 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
					if (!((NU8)(buf[(i)- 0]) == (NU8)(44))) goto LA7_;

#line 36 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
					buf[(i)- 0] = 46;
#line 37 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
					hasDot = NIM_TRUE;				}
				goto LA5_;
				LA7_: ;
				{
#line 38 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
					if (!(((NU8)(buf[(i)- 0])) >= ((NU8)(97)) && ((NU8)(buf[(i)- 0])) <= ((NU8)(122)) || ((NU8)(buf[(i)- 0])) >= ((NU8)(65)) && ((NU8)(buf[(i)- 0])) <= ((NU8)(90)) || ((NU8)(buf[(i)- 0])) == ((NU8)(46)))) goto LA10_;

#line 39 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
					hasDot = NIM_TRUE;				}
				goto LA5_;
				LA10_: ;
				LA5_: ;

#line 80 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/iterators_1.nim"
				res += ((NI) 1);			} LA4: ;
		}
	}

#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
	{
#line 40 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		if (!!(hasDot)) goto LA14_;

#line 41 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		buf[(n)- 0] = 46;
#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 42 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		buf[((NI)(n + ((NI) 1)))- 0] = 48;
#line 43 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 43 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		buf[((NI)(n + ((NI) 2)))- 0] = 0;
#line 44 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 44 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		result = (NI)(n + ((NI) 2));	}
	goto LA12_;
	LA14_: ;
	{
#line 46 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		result = n;	}
	LA12_: ;

#line 50 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
	{
#line 50 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 50 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		if (!(((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(110)) || ((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(78)) || ((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(68)) || ((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(100)) || ((NU8)(buf[((NI)(n - ((NI) 1)))- 0])) == ((NU8)(41)))) goto LA19_;

#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 51 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg(buf, "nan");

#line 52 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		result = ((NI) 3);	}
	goto LA17_;
	LA19_: ;
	{
#line 53 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 53 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		if (!((NU8)(buf[((NI)(n - ((NI) 1)))- 0]) == (NU8)(70))) goto LA22_;

#line 54 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
		{
#line 54 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			if (!((NU8)(buf[(((NI) 0))- 0]) == (NU8)(45))) goto LA26_;

#line 55 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 55 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg(buf, "-inf");

#line 56 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			result = ((NI) 4);		}
		goto LA24_;
		LA26_: ;
		{
#line 58 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"

#line 58 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			writeToBuffer__Nntp3gW9b170LCR9cOWNy1tg(buf, "inf");

#line 59 "/home/runner/work/nim-waku/nim-waku/vendor/nimbus-build-system/vendor/Nim/lib/system/formatfloat.nim"
			result = ((NI) 3);		}
		LA24_: ;
	}
	goto LA17_;
	LA22_: ;
	LA17_: ;
	return result;}