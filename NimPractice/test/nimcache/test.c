/* Generated by Nim Compiler v0.18.0 */
/*   (c) 2018 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: MacOSX, amd64, clang */
/* Command for C compiler:
   clang -c  -w  -I/usr/local/Cellar/nim/0.18.0_1/nim/lib -o /Users/zrma/Documents/Code/PolyGlot/NimPractice/test/nimcache/test.o /Users/zrma/Documents/Code/PolyGlot/NimPractice/test/nimcache/test.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
typedef struct NimStringDesc NimStringDesc;
typedef struct TGenericSeq TGenericSeq;
struct TGenericSeq {
NI len;
NI reserved;
};
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
typedef NimStringDesc* tyArray_Re75IspeoxXy2oCZHwcRrA[2];
static N_INLINE(NI, modInt)(NI a, NI b);
N_NOINLINE(void, raiseDivByZero)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
N_LIB_PRIVATE N_NIMCALL(void, pr_D0eGMmnl0FAOEa9bImCvUJQ)(void);
N_NIMCALL(void, echoBinSafe)(NimStringDesc** args, NI argsLen_0);
static N_INLINE(void, nimFrame)(TFrame* s);
N_LIB_PRIVATE N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_NIMCALL(NimStringDesc*, nimIntToStr)(NI x);
static N_INLINE(void, initStackBottomWith)(void* locals);
N_NOINLINE(void, setStackBottom)(void* theStackBottom);
NIM_EXTERNC N_NOINLINE(void, systemInit000)(void);
NIM_EXTERNC N_NOINLINE(void, systemDatInit000)(void);
NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void);
NIM_EXTERNC N_NOINLINE(void, testDatInit000)(void);
NI total_hAeixsLE1YT2SUKmzLjUaQ;
NI i_vyCYEvJNp9c9b1bD8JVdQqrQ;
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
STRING_LITERAL(TM_ipcYmBC9bj9a1BW35ABoB1Kw_6, "aaa", 3);
NIM_CONST tyArray_nHXaesL0DJZHyVS07ARPRA TM_ipcYmBC9bj9a1BW35ABoB1Kw_5 = {((NimStringDesc*) &TM_ipcYmBC9bj9a1BW35ABoB1Kw_6)}
;
STRING_LITERAL(TM_ipcYmBC9bj9a1BW35ABoB1Kw_7, "total : ", 8);

static N_INLINE(NI, modInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		if (!(b == ((NI) 0))) goto LA3_;
		raiseDivByZero();
	}
	LA3_: ;
	result = (NI)(a % b);
	goto BeforeRet_;
	}BeforeRet_: ;
	return result;
}

static N_INLINE(NI, addInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) + (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ b));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
	}BeforeRet_: ;
	return result;
}

static N_INLINE(void, nimFrame)(TFrame* s) {
	NI T1_;
	T1_ = (NI)0;
	{
		if (!(framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw == NIM_NIL)) goto LA4_;
		T1_ = ((NI) 0);
	}
	goto LA2_;
	LA4_: ;
	{
		T1_ = ((NI) ((NI16)((*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).calldepth + ((NI16) 1))));
	}
	LA2_: ;
	(*s).calldepth = ((NI16) (T1_));
	(*s).prev = framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = s;
	{
		if (!((*s).calldepth == ((NI16) 2000))) goto LA9_;
		stackOverflow_II46IjNZztN9bmbxUD8dt8g();
	}
	LA9_: ;
}

static N_INLINE(void, popFrame)(void) {
	framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw = (*framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw).prev;
}

N_LIB_PRIVATE N_NIMCALL(void, pr_D0eGMmnl0FAOEa9bImCvUJQ)(void) {
	nimfr_("pr", "test.nim");
	nimln_(8, "test.nim");
	echoBinSafe(TM_ipcYmBC9bj9a1BW35ABoB1Kw_5, 1);
	popFrame();
}

static N_INLINE(void, initStackBottomWith)(void* locals) {
	setStackBottom(locals);
}
void PreMainInner(void) {
	systemInit000();
	testDatInit000();
}

void PreMain(void) {
	void (*volatile inner)(void);
	systemDatInit000();
	inner = PreMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int cmdCount;
char** cmdLine;
char** gEnv;
N_CDECL(void, NimMainInner)(void) {
	NimMainModule();
}

N_CDECL(void, NimMain)(void) {
	void (*volatile inner)(void);
	PreMain();
	inner = NimMainInner;
	initStackBottomWith((void *)&inner);
	(*inner)();
}

int main(int argc, char** args, char** env) {
	cmdLine = args;
	cmdCount = argc;
	gEnv = env;
	NimMain();
	return nim_program_result;
}

NIM_EXTERNC N_NOINLINE(void, NimMainModule)(void) {
	tyArray_Re75IspeoxXy2oCZHwcRrA T8_;
	nimfr_("test", "test.nim");
	nimln_(1, "test.nim");
	total_hAeixsLE1YT2SUKmzLjUaQ = ((NI) 0);
	{
		NI res;
		nimln_(2045, "system.nim");
		res = ((NI) 0);
		{
			nimln_(2046, "system.nim");
			while (1) {
				NI TM_ipcYmBC9bj9a1BW35ABoB1Kw_4;
				if (!(res <= ((NI) 9999999))) goto LA3;
				nimln_(2047, "system.nim");
				i_vyCYEvJNp9c9b1bD8JVdQqrQ = res;
				nimln_(4, "test.nim");
				{
					NI TM_ipcYmBC9bj9a1BW35ABoB1Kw_2;
					NI TM_ipcYmBC9bj9a1BW35ABoB1Kw_3;
					TM_ipcYmBC9bj9a1BW35ABoB1Kw_2 = modInt(i_vyCYEvJNp9c9b1bD8JVdQqrQ, ((NI) 2));
					if (!((NI)(TM_ipcYmBC9bj9a1BW35ABoB1Kw_2) == ((NI) 0))) goto LA6_;
					nimln_(5, "test.nim");
					TM_ipcYmBC9bj9a1BW35ABoB1Kw_3 = addInt(total_hAeixsLE1YT2SUKmzLjUaQ, ((NI) 1));
					total_hAeixsLE1YT2SUKmzLjUaQ = (NI)(TM_ipcYmBC9bj9a1BW35ABoB1Kw_3);
				}
				LA6_: ;
				nimln_(2048, "system.nim");
				TM_ipcYmBC9bj9a1BW35ABoB1Kw_4 = addInt(res, ((NI) 1));
				res = (NI)(TM_ipcYmBC9bj9a1BW35ABoB1Kw_4);
			} LA3: ;
		}
	}
	nimln_(10, "test.nim");
	memset((void*)T8_, 0, sizeof(T8_));
	T8_[0] = copyString(((NimStringDesc*) &TM_ipcYmBC9bj9a1BW35ABoB1Kw_7));
	T8_[1] = nimIntToStr(total_hAeixsLE1YT2SUKmzLjUaQ);
	echoBinSafe(T8_, 2);
	nimln_(11, "test.nim");
	pr_D0eGMmnl0FAOEa9bImCvUJQ();
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, testDatInit000)(void) {
}

