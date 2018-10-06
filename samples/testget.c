/*
 * Harbour 3.2.0dev (r1704061005)
 * LLVM/Clang C 8.1 (clang-802.0.41) (64-bit)
 * Generated C source from "testget.prg"
 */

#include "hbvmpub.h"
#include "hbinit.h"


HB_FUNC( MAIN );
HB_FUNC_EXTERN( DATE );
HB_FUNC_EXTERN( SET );
HB_FUNC_EXTERN( __SETCENTURY );
HB_FUNC_EXTERN( TDIALOG );
HB_FUNC_EXTERN( TSAY );
HB_FUNC_EXTERN( TGET );
HB_FUNC_EXTERN( PCOUNT );
HB_FUNC_EXTERN( TBUTTON );
HB_FUNC_EXTERN( MSGINFO );
HB_FUNC_EXTERN( VALTYPE );
HB_FUNC_EXTERN( HB_GT_NUL_DEFAULT );
HB_FUNC_EXTERN( ERRORLINK );
HB_FUNC_EXTERN( MSGBEEP );


HB_INIT_SYMBOLS_BEGIN( hb_vm_SymbolInit_TESTGET )
{ "MAIN", {HB_FS_PUBLIC | HB_FS_FIRST | HB_FS_LOCAL}, {HB_FUNCNAME( MAIN )}, NULL },
{ "DATE", {HB_FS_PUBLIC}, {HB_FUNCNAME( DATE )}, NULL },
{ "SET", {HB_FS_PUBLIC}, {HB_FUNCNAME( SET )}, NULL },
{ "__SETCENTURY", {HB_FS_PUBLIC}, {HB_FUNCNAME( __SETCENTURY )}, NULL },
{ "NEW", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "TDIALOG", {HB_FS_PUBLIC}, {HB_FUNCNAME( TDIALOG )}, NULL },
{ "TSAY", {HB_FS_PUBLIC}, {HB_FUNCNAME( TSAY )}, NULL },
{ "TGET", {HB_FS_PUBLIC}, {HB_FUNCNAME( TGET )}, NULL },
{ "PCOUNT", {HB_FS_PUBLIC}, {HB_FUNCNAME( PCOUNT )}, NULL },
{ "TBUTTON", {HB_FS_PUBLIC}, {HB_FUNCNAME( TBUTTON )}, NULL },
{ "MSGINFO", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGINFO )}, NULL },
{ "VALTYPE", {HB_FS_PUBLIC}, {HB_FUNCNAME( VALTYPE )}, NULL },
{ "SETFOCUS", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "ACTIVATE", {HB_FS_PUBLIC | HB_FS_MESSAGE}, {NULL}, NULL },
{ "HB_GT_NUL_DEFAULT", {HB_FS_PUBLIC}, {HB_FUNCNAME( HB_GT_NUL_DEFAULT )}, NULL },
{ "ERRORLINK", {HB_FS_PUBLIC}, {HB_FUNCNAME( ERRORLINK )}, NULL },
{ "MSGBEEP", {HB_FS_PUBLIC}, {HB_FUNCNAME( MSGBEEP )}, NULL }
HB_INIT_SYMBOLS_EX_END( hb_vm_SymbolInit_TESTGET, "testget.prg", 0x0, 0x0003 )

#if defined( HB_PRAGMA_STARTUP )
   #pragma startup hb_vm_SymbolInit_TESTGET
#elif defined( HB_DATASEG_STARTUP )
   #define HB_DATASEG_BODY    HB_DATASEG_FUNC( hb_vm_SymbolInit_TESTGET )
   #include "hbiniseg.h"
#endif

HB_FUNC( MAIN )
{
	static const HB_BYTE pcode[] =
	{
		13,6,0,36,8,0,101,86,14,45,178,157,28,200,
		64,10,3,80,4,36,9,0,106,12,72,101,108,108,
		111,32,119,111,114,108,100,0,80,5,176,1,0,12,
		0,80,6,36,11,0,176,2,0,92,4,176,3,0,
		12,0,28,17,106,11,100,100,47,109,109,47,121,121,
		121,121,0,25,13,106,9,100,100,47,109,109,47,121,
		121,0,20,2,36,13,0,48,4,0,176,5,0,12,
		0,100,100,100,100,106,8,84,101,115,116,71,101,116,
		0,100,100,93,144,1,93,200,0,120,112,10,80,1,
		36,15,0,48,4,0,176,6,0,12,0,92,15,92,
		30,100,100,95,1,106,8,78,117,109,98,101,114,58,
		0,9,100,100,100,100,112,11,73,36,18,0,48,4,
		0,176,7,0,12,0,92,15,92,90,100,100,95,1,
		89,28,0,1,0,1,0,4,0,176,8,0,12,0,
		121,8,28,6,95,255,25,7,95,1,165,80,255,6,
		100,9,9,9,100,9,106,9,97,32,110,117,109,98,
		101,114,0,100,106,6,111,103,101,116,50,0,106,11,
		57,57,57,57,57,57,57,46,57,57,0,100,9,112,
		18,80,2,36,35,0,48,4,0,176,6,0,12,0,
		92,45,92,30,100,100,95,1,106,8,83,116,114,105,
		110,103,58,0,9,100,100,100,100,112,11,73,36,37,
		0,48,4,0,176,7,0,12,0,92,45,92,90,100,
		100,95,1,89,28,0,1,0,1,0,5,0,176,8,
		0,12,0,121,8,28,6,95,255,25,7,95,1,165,
		80,255,6,100,9,9,9,100,9,106,9,97,32,115,
		116,114,105,110,103,0,100,100,106,3,64,33,0,100,
		9,112,18,73,36,39,0,48,4,0,176,6,0,12,
		0,92,75,92,30,100,100,95,1,106,6,68,97,116,
		101,58,0,9,100,100,100,100,112,11,73,36,41,0,
		48,4,0,176,7,0,12,0,92,75,92,90,100,100,
		95,1,89,28,0,1,0,1,0,6,0,176,8,0,
		12,0,121,8,28,6,95,255,25,7,95,1,165,80,
		255,6,100,9,9,9,100,9,106,7,97,32,100,97,
		116,101,0,100,100,106,3,64,68,0,100,9,112,18,
		73,36,43,0,48,4,0,176,9,0,12,0,93,140,
		0,93,150,0,100,100,106,3,79,107,0,95,1,89,
		56,0,1,0,4,0,4,0,5,0,6,0,3,0,
		176,10,0,176,11,0,95,255,12,1,20,1,176,10,
		0,95,255,20,1,176,10,0,95,254,20,1,176,10,
		0,95,253,20,1,48,12,0,95,252,112,0,6,100,
		100,100,100,100,106,7,111,66,116,110,79,107,0,112,
		13,80,3,36,45,0,48,12,0,95,2,112,0,73,
		36,48,0,48,13,0,95,1,100,100,100,120,100,100,
		100,112,7,73,36,50,0,100,110,7
	};

	hb_vmExecute( pcode, symbols );
}
