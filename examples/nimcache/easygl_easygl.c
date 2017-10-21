/* Generated by Nim Compiler v0.17.2 */
/*   (c) 2017 Andreas Rumpf */
/* The generated code is subject to the original license. */
/* Compiled for: Windows, amd64, gcc */
/* Command for C compiler:
   gcc.exe -c  -w -mno-ms-bitfields  -IC:\nim\lib -o C:\projects\easygl\examples\nimcache\easygl_easygl.o C:\projects\easygl\examples\nimcache\easygl_easygl.c */
#define NIM_NEW_MANGLING_RULES
#define NIM_INTBITS 64

#include "nimbase.h"
#include <string.h>
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
#undef powerpc
#undef unix
typedef struct tySequence_9bAGqSvkAaFL9bWjsEPslrFA tySequence_9bAGqSvkAaFL9bWjsEPslrFA;
typedef struct TGenericSeq TGenericSeq;
typedef struct NimStringDesc NimStringDesc;
typedef struct TNimType TNimType;
typedef struct TNimNode TNimNode;
typedef struct tyObject_Vector2d_KzVBdX0o9c9aJpcyeuR3YopA tyObject_Vector2d_KzVBdX0o9c9aJpcyeuR3YopA;
typedef struct tyObject_Vector3d_g37nfQ1ly89csUUIZ6p7TqQ tyObject_Vector3d_g37nfQ1ly89csUUIZ6p7TqQ;
struct TGenericSeq {
NI len;
NI reserved;
};
typedef NU16 tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw;
typedef NU16 tyEnum_TextureTarget_r9bZqCEso5C37CtGBgWEDpA;
typedef NU16 tyEnum_TextureUnit_Pe1qRsFIu9a5dqer2eHdpAg;
typedef NU16 tyEnum_TextureParameter_6qCMWukmxhQYvsra7e5aOw;
typedef NU16 tyEnum_MipmapTarget_SUlrCIDio0dfKLufGk9a2tg;
typedef NU16 tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg;
struct NimStringDesc {
  TGenericSeq Sup;
NIM_CHAR data[SEQ_DECL_SIZE];
};
typedef NimStringDesc* tyArray_nHXaesL0DJZHyVS07ARPRA[1];
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
struct tyObject_Vector2d_KzVBdX0o9c9aJpcyeuR3YopA {
NF x;
NF y;
};
struct tyObject_Vector3d_g37nfQ1ly89csUUIZ6p7TqQ {
NF x;
NF y;
NF z;
};
typedef NU16 tyEnum_VertexAttribType_bs3Im7IMiwnCiTE9bMx9cjOw;
typedef NU8 tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ;
typedef NU16 tyEnum_IndexType_KuLW3epA7GK4gjJFmNlYtw;
typedef NU16 tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ;
typedef NU16 tyEnum_TexImageTarget_4wNONQCfx9aiSc9avZaS5o1w;
typedef NU16 tyEnum_TextureInternalFormat_JO6OJgblQDuq8JEmilKxEw;
typedef NU16 tyEnum_PixelDataFormat_jqJeBox56diuzpllVzXL8Q;
typedef NU16 tyEnum_PixelDataType_cEc9b7cEgtR9b0K320YQVELw;
typedef NU8 tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ;
struct TNimNode {
tyEnum_TNimNodeKind_unfNsxrcATrufDZmpBq4HQ kind;
NI offset;
TNimType* typ;
NCSTRING name;
NI len;
TNimNode** sons;
};
struct tySequence_9bAGqSvkAaFL9bWjsEPslrFA {
  TGenericSeq Sup;
  NU32 data[SEQ_DECL_SIZE];
};
static N_INLINE(NU32, GenBuffer_xxU7oJIkwZkPfbkUj9aKWpgeasygl)(void);
N_STDCALL(void, glGenBuffers_B9ax9aWnWORHtXpch5OZqE6g)(NI32 n, NU32* buffers);
static N_INLINE(void, nimFrame)(TFrame* s);
N_NOINLINE(void, stackOverflow_II46IjNZztN9bmbxUD8dt8g)(void);
static N_INLINE(void, popFrame)(void);
N_NIMCALL(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, newSeq_l7uPoKOYfJVeoG0YycLuDQ)(NI len);
N_NIMCALL(NU32*, rawSeq_hxGG9bRbbmv0ZBR9ar0TVvNg)(tySequence_9bAGqSvkAaFL9bWjsEPslrFA* s);
N_NIMCALL(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, GenBuffers_SF89a4RuMQZS3xvJEfaKOdQ)(NI32 count);
static N_INLINE(NI, chckRange)(NI i, NI a, NI b);
N_NOINLINE(void, raiseRangeError)(NI64 val);
static N_INLINE(void, BindBuffer_W9bN003jC8Uhvy4z5xdUL9bAeasygl)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NU32 buffer);
N_STDCALL(void, glBindBuffer_3rtrqe5eYHMVBLzlqTY63w)(NU32 target, NU32 buffer);
N_NIMCALL(void, DeleteBuffer_PXtHP5umfE4uietYmnGuRw)(NU32 buffer);
N_STDCALL(void, glDeleteBuffers_B9ax9aWnWORHtXpch5OZqE6g_2)(NI32 n, NU32* buffers);
N_NIMCALL(void, DeleteBuffers_mL8MyFOsTodk8QYLquJxVQ)(NU32* buffers, NI buffersLen_0);
static N_INLINE(NU32, GenVertexArray_y9aWBmx772xkm1fCOo2NcFAeasygl)(void);
N_STDCALL(void, glGenVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg)(NI32 n, NU32* arrays);
N_NIMCALL(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, newSeq_1Z88QgEByaOLzVQO9bDswIw)(NI len);
N_NIMCALL(NU32*, rawSeq_wKUokhVnuJSFStwDB4HKnQ)(tySequence_9bAGqSvkAaFL9bWjsEPslrFA* s);
static N_INLINE(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, GenVertexArrays_DCrfFPOcLyOVy12DMiwWigeasygl)(NI32 count);
static N_INLINE(void, BindVertexArray_1olxbPfcB1SGdKsshWP3wgeasygl)(NU32 vertexArray);
N_STDCALL(void, glBindVertexArray_DTfQaj6wT6HQ9c375GwSXmg)(NU32 array);
N_NIMCALL(void, DeleteVertexArray_6Mddmv88ZGGy9atNA0qt9cSg)(NU32 vertexArray);
N_STDCALL(void, glDeleteVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg_2)(NI32 n, NU32* arrays);
N_NIMCALL(void, DeleteVertexArrays_i5iVFhtOuFxqqeNzM255IQ)(NU32* vertexArrays, NI vertexArraysLen_0);
N_NIMCALL(NU32, GenTexture_KDNM0klSr3qVvz89a9b0xoCw)(void);
N_STDCALL(void, glGenTextures_WoDI9cP6rS3Osykz9bfiBK6w)(NI32 n, NU32* textures);
N_NIMCALL(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, newSeq_FJRAJOK1m75jur9aI7D1FwA)(NI len);
N_NIMCALL(NU32*, rawSeq_Dic14T6n6KsAPH0S9aBca9bA)(tySequence_9bAGqSvkAaFL9bWjsEPslrFA* s);
N_NIMCALL(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, GenTextures_ZYDUt537bbAYEUg9cWg3BLg)(NI32 count);
N_NIMCALL(void, BindTexture_psAXddCo1UfaZMOxWAy80Q)(tyEnum_TextureTarget_r9bZqCEso5C37CtGBgWEDpA target, NU32 texture);
N_STDCALL(void, glBindTexture_shJfrHWoymy1BbmsKpC7Xg)(NU32 target, NU32 texture);
N_NIMCALL(void, ActiveTexture_X1xra1GiiRlEPfa1pegmSA)(tyEnum_TextureUnit_Pe1qRsFIu9a5dqer2eHdpAg texture);
N_STDCALL(void, glActiveTexture_RDvtxKECOM9aYlw6XzAUstg)(NU32 texture);
N_NIMCALL(void, TexParameteri_k1oDC9bpuJWK3oPmF9cIROxw)(tyEnum_TextureTarget_r9bZqCEso5C37CtGBgWEDpA target, tyEnum_TextureParameter_6qCMWukmxhQYvsra7e5aOw pname, NI32 param);
N_STDCALL(void, glTexParameteri_MG1n9caM41cv9bizyIOehN3g)(NU32 target, NU32 pname, NI32 param);
N_NIMCALL(void, GenerateMipmap_iJouCAx7H7vAFe9cgWStrew)(tyEnum_MipmapTarget_SUlrCIDio0dfKLufGk9a2tg target);
N_STDCALL(void, glGenerateMipmap_vsbSjQU85hQuxcKnJrHing)(NU32 target);
static N_INLINE(NU32, CreateShader_exa7WZ67cBjaWV77Z7jPegeasygl)(tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg shaderType);
N_STDCALL(NU32, glCreateShader_9aq2f5W9ciZ4xHTEIXreS9aDQ)(NU32 type_0);
N_NIMCALL(void, ShaderSource_FE1tCszWESK9c2z8FINQYjA)(NU32 shader, NimStringDesc* src);
N_NIMCALL(NCSTRING*, allocCStringArray_TEzwlF389aOWujK0ZU6Ck9bA)(NimStringDesc** a, NI aLen_0);
N_NIMCALL(NimStringDesc*, copyString)(NimStringDesc* src);
N_STDCALL(void, glShaderSource_ucehHh8g6pBlrLrZtUH9akw)(NU32 shader, NI32 count, NCSTRING* string, NI32* length);
N_NIMCALL(void, deallocCStringArray_C6iuca1Cowwvc7xYXRiSig)(NCSTRING* a);
static N_INLINE(void, CompileShader_1JblbgFE9aCKSyaMdXjPvcgeasygl)(NU32 shader);
N_STDCALL(void, glCompileShader_fdBHJ8ytQFLIIjstacvOaA)(NU32 shader);
static N_INLINE(NIM_BOOL, GetShaderCompileStatus_PkBZKb9cGgpDV9beTun4MsbQeasygl)(NU32 shader);
N_STDCALL(void, glGetShaderiv_19a4e9byfNWwyylU9b0x0xEfA)(NU32 shader, NU32 pname, NI32* params);
N_NIMCALL(NimStringDesc*, GetShaderInfoLog_9cjjidog0azjf449acCjAhrg)(NU32 shader);
N_NOCONV(void*, alloc_sVm4rDImKK2ZDdylByayiA)(NI size);
N_STDCALL(void, glGetShaderInfoLog_EU6IkXYJzNlAe9ccwJjIPaQ)(NU32 shader, NI32 bufSize, NI32* length, NCSTRING infoLog);
N_NIMCALL(NimStringDesc*, cstrToNimstr)(NCSTRING str);
static N_INLINE(void, DeleteShader_1JblbgFE9aCKSyaMdXjPvcg_2easygl)(NU32 shader);
N_STDCALL(void, glDeleteShader_fdBHJ8ytQFLIIjstacvOaA_2)(NU32 shader);
static N_INLINE(NU32, CreateProgram_eiGXsy3hR9a9apeHsStOQZjQeasygl)(void);
N_STDCALL(NU32, glCreateProgram_CuMrTzE9cxE5PqEhbYT8FwA)(void);
static N_INLINE(void, AttachShader_F39caMnPoES9ckX2gDgr3dngeasygl)(NU32 program, NU32 shader);
N_STDCALL(void, glAttachShader_6mrqhfMeT2OBe1X8Rfgbug)(NU32 program, NU32 shader);
static N_INLINE(void, LinkProgram_zLuRnlSabmGQB1f159beDeAeasygl)(NU32 program);
N_STDCALL(void, glLinkProgram_bYudX2ps2dTBClLz2NbyzA)(NU32 program);
N_NIMCALL(NU32, CompileAndAttachShader_0AxaqiCaPRA1HLeSFEJOMA)(tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg shaderType, NimStringDesc* shaderPath, NU32 programId);
N_NIMCALL(NimStringDesc*, reprEnum)(NI e, TNimType* typ);
N_NIMCALL(NimStringDesc*, readFile_T9cm5LIRX2tKEH9aREBZ8A0w)(NimStringDesc* filename);
static N_INLINE(NIM_BOOL, GetProgramLinkStatus_vNbVFvFxo6w8wM53OFsw0weasygl)(NU32 program);
N_STDCALL(void, glGetProgramiv_Xk3dGZO8OzQ2Ub0o6uNcFg)(NU32 program, NU32 pname, NI32* params);
N_NIMCALL(NimStringDesc*, GetProgramInfoLog_1G29aE7XCgdsf6sl49cmo3PQ)(NU32 program);
N_STDCALL(void, glGetProgramInfoLog_UpWKPEJr4uqizE9auA5QQfg)(NU32 program, NI32 bufSize, NI32* length, NCSTRING infoLog);
N_NIMCALL(NU32, CreateAndLinkProgram_vn5ROZF0pfhPx6U9bF9ccGXw)(NimStringDesc* vertexPath, NimStringDesc* fragmentPath, NimStringDesc* geometryPath);
static N_INLINE(void, UseProgram_zLuRnlSabmGQB1f159beDeA_2easygl)(NU32 program);
N_STDCALL(void, glUseProgram_bYudX2ps2dTBClLz2NbyzA_2)(NU32 program);
N_NIMCALL(NI32, GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA)(NU32 program, NimStringDesc* name);
N_STDCALL(NI32, glGetUniformLocation_oSrxPmF9cyUrVZRg4cZ4LjQ)(NU32 program, NCSTRING name);
N_NIMCALL(void, SetBool_bMqfPAe47Ka7yubkmPoTpQ)(NU32 program, NimStringDesc* name, NIM_BOOL value);
N_STDCALL(void, glUniform1i_JXFx8pP9cft9ayhvOovLEZsg)(NI32 location, NI32 v0);
N_NIMCALL(void, SetInt_TVl5u9c9caFJMWzPp8lSDH1A)(NU32 program, NimStringDesc* name, NI32 value);
N_NIMCALL(void, SetFloat_YvWnDu4fO9aJCDM49a6s2rSQ)(NU32 program, NimStringDesc* name, NF32 value);
N_STDCALL(void, glUniform1f_jM4Lf1nA9bAhZugPfLs9cD1w)(NI32 location, NF32 v0);
N_NIMCALL(void, SetVec2_zdyJKUAKn9bJrmp2N88iSGw)(NU32 program, NimStringDesc* name, tyObject_Vector2d_KzVBdX0o9c9aJpcyeuR3YopA value);
N_STDCALL(void, glUniform2f_Ny0UNyxEtFA0WZ7ec2lbEw)(NI32 location, NF32 v0, NF32 v1);
N_NIMCALL(void, SetVec2_tjyKesKRY7z46a9aBwJlRQQ)(NU32 program, NimStringDesc* name, NF32 x, NF32 y);
N_NIMCALL(void, SetVec3_8TPkGT8SgQOmDpI9a3URiVw)(NU32 program, NimStringDesc* name, tyObject_Vector3d_g37nfQ1ly89csUUIZ6p7TqQ* value);
N_STDCALL(void, glUniform3f_9c9bHmaHzqYT12Bu0vEdPHew)(NI32 location, NF32 v0, NF32 v1, NF32 v2);
N_NIMCALL(void, SetVec3_jLe5IAk1RkfLXzcveC9cNug)(NU32 program, NimStringDesc* name, NF32 x, NF32 y, NF32 z);
N_NIMCALL(void, SetVec4_LI1r9aJFzcGmylsz9bpyz9cig)(NU32 program, NimStringDesc* name, NF32 x, NF32 y, NF32 z, NF32 w);
N_STDCALL(void, glUniform4f_fv4HQIYPB0bo9cmTbRxNYsQ)(NI32 location, NF32 v0, NF32 v1, NF32 v2, NF32 v3);
static N_INLINE(void, VertexAttribPointer_rpmL9b1Xbhw9au2jacf9chz2geasygl)(NU32 index, NI size, tyEnum_VertexAttribType_bs3Im7IMiwnCiTE9bMx9cjOw attribType, NIM_BOOL normalized, NI32 stride, NI32 pointer);
N_STDCALL(void, glVertexAttribPointer_ARjPQ9cnPkJQtADdR9bd9a8Ww)(NU32 index, NI32 size, NU32 type_0, NIM_BOOL normalized, NI32 stride, void* pointer);
static N_INLINE(void, EnableVertexAttribArray_xe9ai9b74zILHV5CMYQeQAVgeasygl)(NU32 indeX);
N_STDCALL(void, glEnableVertexAttribArray_PNXJR7G6JIj9ajx7Tvz9a1RA)(NU32 index);
static N_INLINE(void, DrawArrays_mtLt6it7C9aWjwdUxksWRugeasygl)(tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ mode, NI32 first, NI32 count);
N_STDCALL(void, glDrawArrays_Bw7cKcZtx9bAbZdj5Iw9af9ag)(NU32 mode, NI32 first, NI32 count);
N_NIMCALL(void, DrawElements_t1y9ax9cvJfzgyrfV2IPW85w)(tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ mode, NI count, tyEnum_IndexType_KuLW3epA7GK4gjJFmNlYtw indexType, NI offset);
N_STDCALL(void, glDrawElements_0mot9aB6Enxrf8NmMi9cVvag)(NU32 mode, NI32 count, NU32 type_0, void* indices);
static N_INLINE(void, Clear_oYYKmodfLpSojEpZtDQHrgeasygl)(tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ* buffersToClear, NI buffersToClearLen_0);
N_NOINLINE(void, raiseIndexError)(void);
static N_INLINE(NI, subInt)(NI a, NI b);
N_NOINLINE(void, raiseOverflow)(void);
static N_INLINE(NI, addInt)(NI a, NI b);
N_STDCALL(void, glClear_ecjp09clx9c7t3uIhyfuACGQ)(NU32 mask);
N_NIMCALL(void, ClearColor_dPsnFT23vDc9bue9bSM7F6dw)(NF32 r, NF32 g, NF32 b, NF32 a);
N_STDCALL(void, glClearColor_f9bT9as4U8bxdkTUxJK60qlA)(NF32 red, NF32 green, NF32 blue, NF32 alpha);
N_STDCALL(void, glTexImage2D_G7UzQ8ZECowVV7IoQf5rhg)(NU32 target, NI32 level, NI32 internalformat, NI32 width, NI32 height, NI32 border, NU32 format, NU32 type_0, void* pixels);
extern TFrame* framePtr_HRfVMH3jYeBJz6Q6X9b6Ptw;
TNimType NTI_5Sv6lvu3NsQiL39aHOYrdxg_;
STRING_LITERAL(TM_9avTWStOpUsrqb7XERTy4NA_2, "Compiling and attaching shader", 30);
STRING_LITERAL(TM_9avTWStOpUsrqb7XERTy4NA_6, "Shader Compile Error:", 21);
STRING_LITERAL(TM_9avTWStOpUsrqb7XERTy4NA_7, "linked", 6);
STRING_LITERAL(TM_9avTWStOpUsrqb7XERTy4NA_8, "Link Error:", 11);

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

static N_INLINE(NU32, GenBuffer_xxU7oJIkwZkPfbkUj9aKWpgeasygl)(void) {
	NU32 result;
	nimfr_("GenBuffer", "easygl.nim");
	result = (NU32)0;
	nimln_(257, "easygl.nim");
	glGenBuffers_B9ax9aWnWORHtXpch5OZqE6g(((NI32) 1), ((NU32*) ((&result))));
	popFrame();
	return result;
}

N_NIMCALL(NU32*, rawSeq_hxGG9bRbbmv0ZBR9ar0TVvNg)(tySequence_9bAGqSvkAaFL9bWjsEPslrFA* s) {
	NU32* result;
	nimfr_("rawSeq", "easygl.nim");
	result = (NU32*)0;
	nimln_(254, "easygl.nim");
	result = s->data;
	popFrame();
	return result;
}

static N_INLINE(NI, chckRange)(NI i, NI a, NI b) {
	NI result;
{	result = (NI)0;
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (a <= i);
		if (!(T3_)) goto LA4_;
		T3_ = (i <= b);
		LA4_: ;
		if (!T3_) goto LA5_;
		result = i;
		goto BeforeRet_;
	}
	goto LA1_;
	LA5_: ;
	{
		raiseRangeError(((NI64) (i)));
	}
	LA1_: ;
	}BeforeRet_: ;
	return result;
}

N_NIMCALL(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, GenBuffers_SF89a4RuMQZS3xvJEfaKOdQ)(NI32 count) {
	tySequence_9bAGqSvkAaFL9bWjsEPslrFA* result;
	NU32* T1_;
	nimfr_("GenBuffers", "easygl.nim");
	result = (tySequence_9bAGqSvkAaFL9bWjsEPslrFA*)0;
	nimln_(260, "easygl.nim");
	result = newSeq_l7uPoKOYfJVeoG0YycLuDQ(((NI)chckRange(count, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln_(261, "easygl.nim");
	T1_ = (NU32*)0;
	T1_ = rawSeq_hxGG9bRbbmv0ZBR9ar0TVvNg(result);
	glGenBuffers_B9ax9aWnWORHtXpch5OZqE6g(count, ((NU32*) (T1_)));
	popFrame();
	return result;
}

static N_INLINE(void, BindBuffer_W9bN003jC8Uhvy4z5xdUL9bAeasygl)(tyEnum_BufferTarget_ErfFU3mi5ovMsHV4URfCgw target, NU32 buffer) {
	nimfr_("BindBuffer", "easygl.nim");
	nimln_(264, "easygl.nim");
	glBindBuffer_3rtrqe5eYHMVBLzlqTY63w(((NU32) (target)), buffer);
	popFrame();
}

N_NIMCALL(void, DeleteBuffer_PXtHP5umfE4uietYmnGuRw)(NU32 buffer) {
	NU32 b;
	nimfr_("DeleteBuffer", "easygl.nim");
	nimln_(270, "easygl.nim");
	b = buffer;
	nimln_(271, "easygl.nim");
	glDeleteBuffers_B9ax9aWnWORHtXpch5OZqE6g_2(((NI32) 1), (&b));
	popFrame();
}

N_NIMCALL(void, DeleteBuffers_mL8MyFOsTodk8QYLquJxVQ)(NU32* buffers, NI buffersLen_0) {
	nimfr_("DeleteBuffers", "easygl.nim");
	nimln_(274, "easygl.nim");
	glDeleteBuffers_B9ax9aWnWORHtXpch5OZqE6g_2(((NI32)chckRange(buffersLen_0, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))), ((NU32*) (buffers)));
	popFrame();
}

static N_INLINE(NU32, GenVertexArray_y9aWBmx772xkm1fCOo2NcFAeasygl)(void) {
	NU32 result;
	nimfr_("GenVertexArray", "easygl.nim");
	result = (NU32)0;
	nimln_(277, "easygl.nim");
	glGenVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg(((NI32) 1), ((NU32*) ((&result))));
	popFrame();
	return result;
}

N_NIMCALL(NU32*, rawSeq_wKUokhVnuJSFStwDB4HKnQ)(tySequence_9bAGqSvkAaFL9bWjsEPslrFA* s) {
	NU32* result;
	nimfr_("rawSeq", "easygl.nim");
	result = (NU32*)0;
	nimln_(254, "easygl.nim");
	result = s->data;
	popFrame();
	return result;
}

static N_INLINE(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, GenVertexArrays_DCrfFPOcLyOVy12DMiwWigeasygl)(NI32 count) {
	tySequence_9bAGqSvkAaFL9bWjsEPslrFA* result;
	NU32* T1_;
	nimfr_("GenVertexArrays", "easygl.nim");
	result = (tySequence_9bAGqSvkAaFL9bWjsEPslrFA*)0;
	nimln_(280, "easygl.nim");
	result = newSeq_1Z88QgEByaOLzVQO9bDswIw(((NI)chckRange(count, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln_(281, "easygl.nim");
	T1_ = (NU32*)0;
	T1_ = rawSeq_wKUokhVnuJSFStwDB4HKnQ(result);
	glGenVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg(count, ((NU32*) (T1_)));
	popFrame();
	return result;
}

static N_INLINE(void, BindVertexArray_1olxbPfcB1SGdKsshWP3wgeasygl)(NU32 vertexArray) {
	nimfr_("BindVertexArray", "easygl.nim");
	nimln_(284, "easygl.nim");
	glBindVertexArray_DTfQaj6wT6HQ9c375GwSXmg(vertexArray);
	popFrame();
}

N_NIMCALL(void, DeleteVertexArray_6Mddmv88ZGGy9atNA0qt9cSg)(NU32 vertexArray) {
	NU32 v;
	nimfr_("DeleteVertexArray", "easygl.nim");
	nimln_(287, "easygl.nim");
	v = vertexArray;
	nimln_(288, "easygl.nim");
	glDeleteVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg_2(((NI32) 1), (&v));
	popFrame();
}

N_NIMCALL(void, DeleteVertexArrays_i5iVFhtOuFxqqeNzM255IQ)(NU32* vertexArrays, NI vertexArraysLen_0) {
	nimfr_("DeleteVertexArrays", "easygl.nim");
	nimln_(291, "easygl.nim");
	glDeleteVertexArrays_zvqeRPLD9c2eggqLYZ1r3Zg_2(((NI32)chckRange(vertexArraysLen_0, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))), ((NU32*) (vertexArrays)));
	popFrame();
}

N_NIMCALL(NU32, GenTexture_KDNM0klSr3qVvz89a9b0xoCw)(void) {
	NU32 result;
	nimfr_("GenTexture", "easygl.nim");
	result = (NU32)0;
	nimln_(294, "easygl.nim");
	glGenTextures_WoDI9cP6rS3Osykz9bfiBK6w(((NI32) 1), ((NU32*) ((&result))));
	popFrame();
	return result;
}

N_NIMCALL(NU32*, rawSeq_Dic14T6n6KsAPH0S9aBca9bA)(tySequence_9bAGqSvkAaFL9bWjsEPslrFA* s) {
	NU32* result;
	nimfr_("rawSeq", "easygl.nim");
	result = (NU32*)0;
	nimln_(254, "easygl.nim");
	result = s->data;
	popFrame();
	return result;
}

N_NIMCALL(tySequence_9bAGqSvkAaFL9bWjsEPslrFA*, GenTextures_ZYDUt537bbAYEUg9cWg3BLg)(NI32 count) {
	tySequence_9bAGqSvkAaFL9bWjsEPslrFA* result;
	NU32* T1_;
	nimfr_("GenTextures", "easygl.nim");
	result = (tySequence_9bAGqSvkAaFL9bWjsEPslrFA*)0;
	nimln_(297, "easygl.nim");
	result = newSeq_FJRAJOK1m75jur9aI7D1FwA(((NI)chckRange(count, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	nimln_(298, "easygl.nim");
	T1_ = (NU32*)0;
	T1_ = rawSeq_Dic14T6n6KsAPH0S9aBca9bA(result);
	glGenTextures_WoDI9cP6rS3Osykz9bfiBK6w(count, ((NU32*) (T1_)));
	popFrame();
	return result;
}

N_NIMCALL(void, BindTexture_psAXddCo1UfaZMOxWAy80Q)(tyEnum_TextureTarget_r9bZqCEso5C37CtGBgWEDpA target, NU32 texture) {
	nimfr_("BindTexture", "easygl.nim");
	nimln_(301, "easygl.nim");
	glBindTexture_shJfrHWoymy1BbmsKpC7Xg(((NU32) (target)), texture);
	popFrame();
}

N_NIMCALL(void, ActiveTexture_X1xra1GiiRlEPfa1pegmSA)(tyEnum_TextureUnit_Pe1qRsFIu9a5dqer2eHdpAg texture) {
	nimfr_("ActiveTexture", "easygl.nim");
	nimln_(305, "easygl.nim");
	glActiveTexture_RDvtxKECOM9aYlw6XzAUstg(((NU32) (texture)));
	popFrame();
}

N_NIMCALL(void, TexParameteri_k1oDC9bpuJWK3oPmF9cIROxw)(tyEnum_TextureTarget_r9bZqCEso5C37CtGBgWEDpA target, tyEnum_TextureParameter_6qCMWukmxhQYvsra7e5aOw pname, NI32 param) {
	nimfr_("TexParameteri", "easygl.nim");
	nimln_(308, "easygl.nim");
	glTexParameteri_MG1n9caM41cv9bizyIOehN3g(((NU32) (target)), ((NU32) (pname)), param);
	popFrame();
}

N_NIMCALL(void, GenerateMipmap_iJouCAx7H7vAFe9cgWStrew)(tyEnum_MipmapTarget_SUlrCIDio0dfKLufGk9a2tg target) {
	nimfr_("GenerateMipmap", "easygl.nim");
	nimln_(314, "easygl.nim");
	glGenerateMipmap_vsbSjQU85hQuxcKnJrHing(((NU32) (target)));
	popFrame();
}

static N_INLINE(NU32, CreateShader_exa7WZ67cBjaWV77Z7jPegeasygl)(tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg shaderType) {
	NU32 result;
	nimfr_("CreateShader", "easygl.nim");
	result = (NU32)0;
	nimln_(321, "easygl.nim");
	result = glCreateShader_9aq2f5W9ciZ4xHTEIXreS9aDQ(((NU32) (shaderType)));
	popFrame();
	return result;
}

N_NIMCALL(void, ShaderSource_FE1tCszWESK9c2z8FINQYjA)(NU32 shader, NimStringDesc* src) {
	NCSTRING* cstr;
	tyArray_nHXaesL0DJZHyVS07ARPRA T1_;
	nimfr_("ShaderSource", "easygl.nim");
	nimln_(324, "easygl.nim");
	memset((void*)T1_, 0, sizeof(T1_));
	T1_[0] = copyString(src);
	cstr = allocCStringArray_TEzwlF389aOWujK0ZU6Ck9bA(T1_, 1);
	nimln_(325, "easygl.nim");
	glShaderSource_ucehHh8g6pBlrLrZtUH9akw(shader, ((NI32) 1), cstr, NIM_NIL);
	nimln_(326, "easygl.nim");
	deallocCStringArray_C6iuca1Cowwvc7xYXRiSig(cstr);
	popFrame();
}

static N_INLINE(void, CompileShader_1JblbgFE9aCKSyaMdXjPvcgeasygl)(NU32 shader) {
	nimfr_("CompileShader", "easygl.nim");
	nimln_(329, "easygl.nim");
	glCompileShader_fdBHJ8ytQFLIIjstacvOaA(shader);
	popFrame();
}

static N_INLINE(NIM_BOOL, GetShaderCompileStatus_PkBZKb9cGgpDV9beTun4MsbQeasygl)(NU32 shader) {
	NIM_BOOL result;
	NI32 r;
	nimfr_("GetShaderCompileStatus", "easygl.nim");
	result = (NIM_BOOL)0;
	nimln_(332, "easygl.nim");
	r = (NI32)0;
	nimln_(333, "easygl.nim");
	glGetShaderiv_19a4e9byfNWwyylU9b0x0xEfA(shader, ((NU32) 35713), (&r));
	result = ((NIM_BOOL)chckRange(r, NIM_FALSE, NIM_TRUE));
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, GetShaderInfoLog_9cjjidog0azjf449acCjAhrg)(NU32 shader) {
	NimStringDesc* result;
	NI32 logLen;
	NIM_CHAR* logStr;
	void* T1_;
	nimfr_("GetShaderInfoLog", "easygl.nim");
	result = (NimStringDesc*)0;
	nimln_(337, "easygl.nim");
	logLen = (NI32)0;
	nimln_(338, "easygl.nim");
	glGetShaderiv_19a4e9byfNWwyylU9b0x0xEfA(shader, ((NU32) 35716), (&logLen));
	nimln_(339, "easygl.nim");
	T1_ = (void*)0;
	T1_ = alloc_sVm4rDImKK2ZDdylByayiA(((NI)chckRange(logLen, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	logStr = ((NIM_CHAR*) (T1_));
	nimln_(340, "easygl.nim");
	glGetShaderInfoLog_EU6IkXYJzNlAe9ccwJjIPaQ(shader, logLen, (&logLen), ((NCSTRING) (logStr)));
	nimln_(341, "easygl.nim");
	result = cstrToNimstr(((NCSTRING) (logStr)));
	popFrame();
	return result;
}

static N_INLINE(void, DeleteShader_1JblbgFE9aCKSyaMdXjPvcg_2easygl)(NU32 shader) {
	nimfr_("DeleteShader", "easygl.nim");
	nimln_(344, "easygl.nim");
	glDeleteShader_fdBHJ8ytQFLIIjstacvOaA_2(shader);
	popFrame();
}

static N_INLINE(NU32, CreateProgram_eiGXsy3hR9a9apeHsStOQZjQeasygl)(void) {
	NU32 result;
	nimfr_("CreateProgram", "easygl.nim");
	result = (NU32)0;
	nimln_(347, "easygl.nim");
	result = glCreateProgram_CuMrTzE9cxE5PqEhbYT8FwA();
	popFrame();
	return result;
}

static N_INLINE(void, AttachShader_F39caMnPoES9ckX2gDgr3dngeasygl)(NU32 program, NU32 shader) {
	nimfr_("AttachShader", "easygl.nim");
	nimln_(350, "easygl.nim");
	glAttachShader_6mrqhfMeT2OBe1X8Rfgbug(program, shader);
	popFrame();
}

static N_INLINE(void, LinkProgram_zLuRnlSabmGQB1f159beDeAeasygl)(NU32 program) {
	nimfr_("LinkProgram", "easygl.nim");
	nimln_(353, "easygl.nim");
	glLinkProgram_bYudX2ps2dTBClLz2NbyzA(program);
	popFrame();
}

N_NIMCALL(NU32, CompileAndAttachShader_0AxaqiCaPRA1HLeSFEJOMA)(tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg shaderType, NimStringDesc* shaderPath, NU32 programId) {
	NU32 result;
	NU32 shaderId;
	NimStringDesc* T1_;
	nimfr_("CompileAndAttachShader", "easygl.nim");
	result = (NU32)0;
	nimln_(356, "easygl.nim");
	printf("%s\015\012", ((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_2)? (((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_2))->data:"nil");
	fflush(stdout);
	nimln_(357, "easygl.nim");
	printf("%s\015\012", reprEnum((NI)shaderType, (&NTI_5Sv6lvu3NsQiL39aHOYrdxg_))? (reprEnum((NI)shaderType, (&NTI_5Sv6lvu3NsQiL39aHOYrdxg_)))->data:"nil");
	fflush(stdout);
	nimln_(358, "easygl.nim");
	shaderId = CreateShader_exa7WZ67cBjaWV77Z7jPegeasygl(shaderType);
	nimln_(359, "easygl.nim");
	T1_ = (NimStringDesc*)0;
	T1_ = readFile_T9cm5LIRX2tKEH9aREBZ8A0w(shaderPath);
	ShaderSource_FE1tCszWESK9c2z8FINQYjA(shaderId, T1_);
	nimln_(360, "easygl.nim");
	CompileShader_1JblbgFE9aCKSyaMdXjPvcgeasygl(shaderId);
	nimln_(361, "easygl.nim");
	{
		NIM_BOOL T4_;
		NimStringDesc* T7_;
		T4_ = (NIM_BOOL)0;
		T4_ = GetShaderCompileStatus_PkBZKb9cGgpDV9beTun4MsbQeasygl(shaderId);
		if (!!(T4_)) goto LA5_;
		nimln_(362, "easygl.nim");
		printf("%s\015\012", ((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_6)? (((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_6))->data:"nil");
		fflush(stdout);
		nimln_(363, "easygl.nim");
		T7_ = (NimStringDesc*)0;
		T7_ = GetShaderInfoLog_9cjjidog0azjf449acCjAhrg(shaderId);
		printf("%s\015\012", T7_? (T7_)->data:"nil");
		fflush(stdout);
	}
	goto LA2_;
	LA5_: ;
	{
		nimln_(365, "easygl.nim");
		AttachShader_F39caMnPoES9ckX2gDgr3dngeasygl(programId, shaderId);
	}
	LA2_: ;
	result = shaderId;
	popFrame();
	return result;
}

static N_INLINE(NIM_BOOL, GetProgramLinkStatus_vNbVFvFxo6w8wM53OFsw0weasygl)(NU32 program) {
	NIM_BOOL result;
	NI32 r;
	nimfr_("GetProgramLinkStatus", "easygl.nim");
	result = (NIM_BOOL)0;
	nimln_(369, "easygl.nim");
	r = (NI32)0;
	nimln_(370, "easygl.nim");
	glGetProgramiv_Xk3dGZO8OzQ2Ub0o6uNcFg(program, ((NU32) 35714), (&r));
	result = ((NIM_BOOL)chckRange(r, NIM_FALSE, NIM_TRUE));
	popFrame();
	return result;
}

N_NIMCALL(NimStringDesc*, GetProgramInfoLog_1G29aE7XCgdsf6sl49cmo3PQ)(NU32 program) {
	NimStringDesc* result;
	NI32 logLen;
	NIM_CHAR* logStr;
	void* T1_;
	nimfr_("GetProgramInfoLog", "easygl.nim");
	result = (NimStringDesc*)0;
	nimln_(374, "easygl.nim");
	logLen = (NI32)0;
	nimln_(375, "easygl.nim");
	glGetProgramiv_Xk3dGZO8OzQ2Ub0o6uNcFg(program, ((NU32) 35716), (&logLen));
	nimln_(376, "easygl.nim");
	T1_ = (void*)0;
	T1_ = alloc_sVm4rDImKK2ZDdylByayiA(((NI)chckRange(logLen, ((NI) 0), ((NI) IL64(9223372036854775807)))));
	logStr = ((NIM_CHAR*) (T1_));
	nimln_(377, "easygl.nim");
	glGetProgramInfoLog_UpWKPEJr4uqizE9auA5QQfg(program, logLen, (&logLen), ((NCSTRING) (logStr)));
	nimln_(378, "easygl.nim");
	result = cstrToNimstr(((NCSTRING) (logStr)));
	popFrame();
	return result;
}

N_NIMCALL(NU32, CreateAndLinkProgram_vn5ROZF0pfhPx6U9bF9ccGXw)(NimStringDesc* vertexPath, NimStringDesc* fragmentPath, NimStringDesc* geometryPath) {
	NU32 result;
	NU32 programId;
	NU32 vert;
	NU32 frag;
	NU32 geo;
	nimfr_("CreateAndLinkProgram", "easygl.nim");
	result = (NU32)0;
	nimln_(382, "easygl.nim");
	programId = CreateProgram_eiGXsy3hR9a9apeHsStOQZjQeasygl();
	nimln_(383, "easygl.nim");
	vert = CompileAndAttachShader_0AxaqiCaPRA1HLeSFEJOMA(((tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg) 35633), vertexPath, programId);
	nimln_(384, "easygl.nim");
	frag = CompileAndAttachShader_0AxaqiCaPRA1HLeSFEJOMA(((tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg) 35632), fragmentPath, programId);
	nimln_(385, "easygl.nim");
	nimln_(386, "easygl.nim");
	{
		nimln_(378, "system.nim");
		nimln_(386, "easygl.nim");
		if (!!((geometryPath == NIM_NIL))) goto LA3_;
		nimln_(387, "easygl.nim");
		geo = CompileAndAttachShader_0AxaqiCaPRA1HLeSFEJOMA(((tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg) 36313), geometryPath, programId);
	}
	goto LA1_;
	LA3_: ;
	{
		geo = ((NU32) 0);
	}
	LA1_: ;
	nimln_(391, "easygl.nim");
	LinkProgram_zLuRnlSabmGQB1f159beDeAeasygl(programId);
	nimln_(392, "easygl.nim");
	printf("%s\015\012", ((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_7)? (((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_7))->data:"nil");
	fflush(stdout);
	nimln_(393, "easygl.nim");
	{
		NIM_BOOL T8_;
		NimStringDesc* T11_;
		T8_ = (NIM_BOOL)0;
		T8_ = GetProgramLinkStatus_vNbVFvFxo6w8wM53OFsw0weasygl(programId);
		if (!!(T8_)) goto LA9_;
		nimln_(394, "easygl.nim");
		printf("%s\015\012", ((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_8)? (((NimStringDesc*) &TM_9avTWStOpUsrqb7XERTy4NA_8))->data:"nil");
		fflush(stdout);
		nimln_(395, "easygl.nim");
		T11_ = (NimStringDesc*)0;
		T11_ = GetProgramInfoLog_1G29aE7XCgdsf6sl49cmo3PQ(programId);
		printf("%s\015\012", T11_? (T11_)->data:"nil");
		fflush(stdout);
	}
	LA9_: ;
	nimln_(397, "easygl.nim");
	DeleteShader_1JblbgFE9aCKSyaMdXjPvcg_2easygl(vert);
	nimln_(398, "easygl.nim");
	DeleteShader_1JblbgFE9aCKSyaMdXjPvcg_2easygl(frag);
	nimln_(399, "easygl.nim");
	{
		nimln_(378, "system.nim");
		nimln_(399, "easygl.nim");
		if (!!((geometryPath == NIM_NIL))) goto LA14_;
		DeleteShader_1JblbgFE9aCKSyaMdXjPvcg_2easygl(geo);
	}
	LA14_: ;
	result = programId;
	popFrame();
	return result;
}

static N_INLINE(void, UseProgram_zLuRnlSabmGQB1f159beDeA_2easygl)(NU32 program) {
	nimfr_("UseProgram", "easygl.nim");
	nimln_(403, "easygl.nim");
	glUseProgram_bYudX2ps2dTBClLz2NbyzA_2(program);
	popFrame();
}

N_NIMCALL(NI32, GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA)(NU32 program, NimStringDesc* name) {
	NI32 result;
	nimfr_("GetUniformLocation", "easygl.nim");
	result = (NI32)0;
	nimln_(406, "easygl.nim");
	result = glGetUniformLocation_oSrxPmF9cyUrVZRg4cZ4LjQ(program, name->data);
	popFrame();
	return result;
}

N_NIMCALL(void, SetBool_bMqfPAe47Ka7yubkmPoTpQ)(NU32 program, NimStringDesc* name, NIM_BOOL value) {
	NI32 T1_;
	nimfr_("SetBool", "easygl.nim");
	nimln_(409, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform1i_JXFx8pP9cft9ayhvOovLEZsg(T1_, ((NI32) (value)));
	popFrame();
}

N_NIMCALL(void, SetInt_TVl5u9c9caFJMWzPp8lSDH1A)(NU32 program, NimStringDesc* name, NI32 value) {
	NI32 T1_;
	nimfr_("SetInt", "easygl.nim");
	nimln_(413, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform1i_JXFx8pP9cft9ayhvOovLEZsg(T1_, value);
	popFrame();
}

N_NIMCALL(void, SetFloat_YvWnDu4fO9aJCDM49a6s2rSQ)(NU32 program, NimStringDesc* name, NF32 value) {
	NI32 T1_;
	nimfr_("SetFloat", "easygl.nim");
	nimln_(416, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform1f_jM4Lf1nA9bAhZugPfLs9cD1w(T1_, value);
	popFrame();
}

N_NIMCALL(void, SetVec2_zdyJKUAKn9bJrmp2N88iSGw)(NU32 program, NimStringDesc* name, tyObject_Vector2d_KzVBdX0o9c9aJpcyeuR3YopA value) {
	NI32 T1_;
	nimfr_("SetVec2", "easygl.nim");
	nimln_(419, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform2f_Ny0UNyxEtFA0WZ7ec2lbEw(T1_, ((NF32) (value.x)), ((NF32) (value.y)));
	popFrame();
}

N_NIMCALL(void, SetVec2_tjyKesKRY7z46a9aBwJlRQQ)(NU32 program, NimStringDesc* name, NF32 x, NF32 y) {
	NI32 T1_;
	nimfr_("SetVec2", "easygl.nim");
	nimln_(422, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform2f_Ny0UNyxEtFA0WZ7ec2lbEw(T1_, x, y);
	popFrame();
}

N_NIMCALL(void, SetVec3_8TPkGT8SgQOmDpI9a3URiVw)(NU32 program, NimStringDesc* name, tyObject_Vector3d_g37nfQ1ly89csUUIZ6p7TqQ* value) {
	NI32 T1_;
	nimfr_("SetVec3", "easygl.nim");
	nimln_(425, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform3f_9c9bHmaHzqYT12Bu0vEdPHew(T1_, ((NF32) ((*value).x)), ((NF32) ((*value).y)), ((NF32) ((*value).z)));
	popFrame();
}

N_NIMCALL(void, SetVec3_jLe5IAk1RkfLXzcveC9cNug)(NU32 program, NimStringDesc* name, NF32 x, NF32 y, NF32 z) {
	NI32 T1_;
	nimfr_("SetVec3", "easygl.nim");
	nimln_(428, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform3f_9c9bHmaHzqYT12Bu0vEdPHew(T1_, x, y, z);
	popFrame();
}

N_NIMCALL(void, SetVec4_LI1r9aJFzcGmylsz9bpyz9cig)(NU32 program, NimStringDesc* name, NF32 x, NF32 y, NF32 z, NF32 w) {
	NI32 T1_;
	nimfr_("SetVec4", "easygl.nim");
	nimln_(431, "easygl.nim");
	T1_ = (NI32)0;
	T1_ = GetUniformLocation_33FdDemk9bkyQ8chKS9c7oyA(program, name);
	glUniform4f_fv4HQIYPB0bo9cmTbRxNYsQ(T1_, x, y, z, w);
	popFrame();
}

static N_INLINE(void, VertexAttribPointer_rpmL9b1Xbhw9au2jacf9chz2geasygl)(NU32 index, NI size, tyEnum_VertexAttribType_bs3Im7IMiwnCiTE9bMx9cjOw attribType, NIM_BOOL normalized, NI32 stride, NI32 pointer) {
	nimfr_("VertexAttribPointer", "easygl.nim");
	nimln_(436, "easygl.nim");
	glVertexAttribPointer_ARjPQ9cnPkJQtADdR9bd9a8Ww(index, ((NI32) (size)), ((NU32) (attribType)), normalized, stride, ((void*) (pointer)));
	popFrame();
}

static N_INLINE(void, EnableVertexAttribArray_xe9ai9b74zILHV5CMYQeQAVgeasygl)(NU32 indeX) {
	nimfr_("EnableVertexAttribArray", "easygl.nim");
	nimln_(439, "easygl.nim");
	glEnableVertexAttribArray_PNXJR7G6JIj9ajx7Tvz9a1RA(indeX);
	popFrame();
}

static N_INLINE(void, DrawArrays_mtLt6it7C9aWjwdUxksWRugeasygl)(tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ mode, NI32 first, NI32 count) {
	nimfr_("DrawArrays", "easygl.nim");
	nimln_(442, "easygl.nim");
	glDrawArrays_Bw7cKcZtx9bAbZdj5Iw9af9ag(((NU32) (mode)), first, count);
	popFrame();
}

N_NIMCALL(void, DrawElements_t1y9ax9cvJfzgyrfV2IPW85w)(tyEnum_DrawMode_AmhJunCRQ8PFJ9aloC9ag9bYQ mode, NI count, tyEnum_IndexType_KuLW3epA7GK4gjJFmNlYtw indexType, NI offset) {
	nimfr_("DrawElements", "easygl.nim");
	nimln_(448, "easygl.nim");
	glDrawElements_0mot9aB6Enxrf8NmMi9cVvag(((NU32) (mode)), ((NI32)chckRange(count, ((NI32) (-2147483647 -1)), ((NI32) 2147483647))), ((NU32) (indexType)), ((void*) (offset)));
	popFrame();
}

static N_INLINE(NI, subInt)(NI a, NI b) {
	NI result;
{	result = (NI)0;
	result = (NI)((NU64)(a) - (NU64)(b));
	{
		NIM_BOOL T3_;
		T3_ = (NIM_BOOL)0;
		T3_ = (((NI) 0) <= (NI)(result ^ a));
		if (T3_) goto LA4_;
		T3_ = (((NI) 0) <= (NI)(result ^ (NI)((NU64) ~(b))));
		LA4_: ;
		if (!T3_) goto LA5_;
		goto BeforeRet_;
	}
	LA5_: ;
	raiseOverflow();
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

static N_INLINE(void, Clear_oYYKmodfLpSojEpZtDQHrgeasygl)(tyEnum_ClearBufferMask_lO6Dt9aokgt9cH8rSDGYbX9aQ* buffersToClear, NI buffersToClearLen_0) {
	NU32 mask;
	nimfr_("Clear", "easygl.nim");
	nimln_(451, "easygl.nim");
	if ((NU)(((NI) 0)) >= (NU)(buffersToClearLen_0)) raiseIndexError();
	mask = ((NU32) (buffersToClear[((NI) 0)]));
	{
		NI i;
		NI colontmp_;
		NI res;
		i = (NI)0;
		colontmp_ = (NI)0;
		nimln_(452, "easygl.nim");
		colontmp_ = subInt(buffersToClearLen_0, 1);
		nimln_(1973, "system.nim");
		res = ((NI) 1);
		{
			nimln_(1974, "system.nim");
			while (1) {
				NI TM_9avTWStOpUsrqb7XERTy4NA_9;
				if (!(res <= colontmp_)) goto LA3;
				nimln_(1975, "system.nim");
				i = res;
				nimln_(453, "easygl.nim");
				if ((NU)(i) >= (NU)(buffersToClearLen_0)) raiseIndexError();
				mask = (unsigned int)(mask | ((NU32) (buffersToClear[i])));
				nimln_(1976, "system.nim");
				TM_9avTWStOpUsrqb7XERTy4NA_9 = addInt(res, ((NI) 1));
				res = (NI)(TM_9avTWStOpUsrqb7XERTy4NA_9);
			} LA3: ;
		}
	}
	nimln_(454, "easygl.nim");
	glClear_ecjp09clx9c7t3uIhyfuACGQ(mask);
	popFrame();
}

N_NIMCALL(void, ClearColor_dPsnFT23vDc9bue9bSM7F6dw)(NF32 r, NF32 g, NF32 b, NF32 a) {
	nimfr_("ClearColor", "easygl.nim");
	nimln_(457, "easygl.nim");
	glClearColor_f9bT9as4U8bxdkTUxJK60qlA(r, g, b, a);
	popFrame();
}

N_NIMCALL(void, TexImage2D_7Lu1IWnN36sTJObNwvi7yQ)(tyEnum_TexImageTarget_4wNONQCfx9aiSc9avZaS5o1w target, NI32 level, tyEnum_TextureInternalFormat_JO6OJgblQDuq8JEmilKxEw internalFormat, NI32 width, NI32 height, tyEnum_PixelDataFormat_jqJeBox56diuzpllVzXL8Q format, tyEnum_PixelDataType_cEc9b7cEgtR9b0K320YQVELw type_0, NU8* data, NI dataLen_0) {
	nimfr_("TexImage2D", "easygl.nim");
	nimln_(311, "easygl.nim");
	glTexImage2D_G7UzQ8ZECowVV7IoQf5rhg(((NU32) (target)), level, ((NI32) (internalFormat)), width, height, ((NI32) 0), ((NU32) (format)), ((NU32) (type_0)), ((void*) (data)));
	popFrame();
}
NIM_EXTERNC N_NOINLINE(void, easygl_easyglInit000)(void) {
	nimfr_("easygl", "easygl.nim");
	popFrame();
}

NIM_EXTERNC N_NOINLINE(void, easygl_easyglDatInit000)(void) {
static TNimNode* TM_9avTWStOpUsrqb7XERTy4NA_3[6];
NI TM_9avTWStOpUsrqb7XERTy4NA_5;
static char* NIM_CONST TM_9avTWStOpUsrqb7XERTy4NA_4[6] = {
"FRAGMENT_SHADER", 
"VERTEX_SHADER", 
"GEOMETRY_SHADER", 
"TESS_EVALUATION_SHADER", 
"TESS_CONTROL_SHADER", 
"COMPUTE_SHADER"};
static TNimNode TM_9avTWStOpUsrqb7XERTy4NA_0[7];
NTI_5Sv6lvu3NsQiL39aHOYrdxg_.size = sizeof(tyEnum_ShaderType_5Sv6lvu3NsQiL39aHOYrdxg);
NTI_5Sv6lvu3NsQiL39aHOYrdxg_.kind = 14;
NTI_5Sv6lvu3NsQiL39aHOYrdxg_.base = 0;
NTI_5Sv6lvu3NsQiL39aHOYrdxg_.flags = 3;
for (TM_9avTWStOpUsrqb7XERTy4NA_5 = 0; TM_9avTWStOpUsrqb7XERTy4NA_5 < 6; TM_9avTWStOpUsrqb7XERTy4NA_5++) {
TM_9avTWStOpUsrqb7XERTy4NA_0[TM_9avTWStOpUsrqb7XERTy4NA_5+0].kind = 1;
TM_9avTWStOpUsrqb7XERTy4NA_0[TM_9avTWStOpUsrqb7XERTy4NA_5+0].offset = TM_9avTWStOpUsrqb7XERTy4NA_5;
TM_9avTWStOpUsrqb7XERTy4NA_0[TM_9avTWStOpUsrqb7XERTy4NA_5+0].name = TM_9avTWStOpUsrqb7XERTy4NA_4[TM_9avTWStOpUsrqb7XERTy4NA_5];
TM_9avTWStOpUsrqb7XERTy4NA_3[TM_9avTWStOpUsrqb7XERTy4NA_5] = &TM_9avTWStOpUsrqb7XERTy4NA_0[TM_9avTWStOpUsrqb7XERTy4NA_5+0];
}
TM_9avTWStOpUsrqb7XERTy4NA_0[0].offset = 35632;
TM_9avTWStOpUsrqb7XERTy4NA_0[1].offset = 35633;
TM_9avTWStOpUsrqb7XERTy4NA_0[2].offset = 36313;
TM_9avTWStOpUsrqb7XERTy4NA_0[3].offset = 36487;
TM_9avTWStOpUsrqb7XERTy4NA_0[4].offset = 36488;
TM_9avTWStOpUsrqb7XERTy4NA_0[5].offset = 37305;
TM_9avTWStOpUsrqb7XERTy4NA_0[6].len = 6; TM_9avTWStOpUsrqb7XERTy4NA_0[6].kind = 2; TM_9avTWStOpUsrqb7XERTy4NA_0[6].sons = &TM_9avTWStOpUsrqb7XERTy4NA_3[0];
NTI_5Sv6lvu3NsQiL39aHOYrdxg_.node = &TM_9avTWStOpUsrqb7XERTy4NA_0[6];
NTI_5Sv6lvu3NsQiL39aHOYrdxg_.flags = 1<<2;
}

