#include "yaw_capi.h"
#include "yaw.h"
#include "yaw_private.h"
static RegMdlInfo rtMdlInfo_yaw [ 40 ] = { { "bk2zl4zdb0z" ,
MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * ) "yaw" } , { "jiqd5gq3gt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw" } , {
"iej55fdtrs" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw"
} , { "ab1qzfjlr0" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"yaw" } , { "cjd0xpxi22" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "yaw" } , { "oo51dn1ezg" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "yaw" } , { "fg5pawgd5e" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "yaw" } , { "bqbllngiea" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw" } , {
"g0kii4hgzh" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw"
} , { "pnlorrhhat" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"yaw" } , { "pdqkpmkunl" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "yaw" } , { "bzw44hzaol" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "yaw" } , { "b3aoffdcdt" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "yaw" } , { "afzwgb2qm2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw" } , {
"gycua35cn4" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw"
} , { "ihycarmcck" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"yaw" } , { "cxrbrvf1rw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "yaw" } , { "oyxodqpx0u" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , -
1 , ( void * ) "yaw" } , { "dg1mnash1i" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT ,
0 , - 1 , ( void * ) "yaw" } , { "gm0x0bzi0m" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw" } , {
"orvl4y02co" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw"
} , { "bavlztxwmz" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"yaw" } , { "yaw" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , {
"arogxvxh2m" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * ) "yaw"
} , { "a1otp4aeox" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"yaw" } , { "ffsxehpkdb" , MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , (
void * ) "yaw" } , { "mr_yaw_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "yaw" } , {
"mr_yaw_extractBitFieldFromCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "yaw" } , {
"mr_yaw_cacheBitFieldToCellArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0
, - 1 , ( void * ) "yaw" } , { "mr_yaw_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "yaw" } , {
"mr_yaw_cacheDataToMxArrayWithOffset" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "yaw" } , { "mr_yaw_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "yaw" } , {
"mr_yaw_cacheBitFieldToMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , (
void * ) "yaw" } , { "mr_yaw_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "yaw" } , {
"mr_yaw_cacheDataAsMxArray" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void *
) "yaw" } , { "mr_yaw_RegisterSimStateChecksum" , MDL_INFO_ID_MODEL_FCN_NAME
, 0 , - 1 , ( void * ) "yaw" } , { "mr_yaw_SetDWork" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "yaw" } , {
"mr_yaw_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "yaw" }
, { "yaw.h" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , { "yaw.c" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * ) "yaw" } } ; void yaw ( const
real_T * fwbiqzv32v , const real_T * iukho5mkso , const real_T * ojby4kkic0 ,
const real_T * np4qxo5ga2 , const real_T * emfyd2c0h2 , const real_T *
hnrxijgb40 , const real_T * nuk5cse1ds , real_T * gwn5lqlgva ) { real_T
llkqrlqekq ; real_T a5nkgf1jpg ; real_T p2ysj0o3dh ; p2ysj0o3dh =
muDoubleScalarCos ( * nuk5cse1ds ) ; llkqrlqekq = * ojby4kkic0 * * fwbiqzv32v
* p2ysj0o3dh ; a5nkgf1jpg = p2ysj0o3dh * * np4qxo5ga2 * * iukho5mkso ; *
gwn5lqlgva = ( ( llkqrlqekq - a5nkgf1jpg ) + * emfyd2c0h2 ) + * hnrxijgb40 ;
} void ihycarmcck ( ffsxehpkdb * const eirlaaxk45 ) { if ( !
slIsRapidAcceleratorSimulating ( ) ) { slmrRunPluginEvent ( eirlaaxk45 ->
_mdlRefSfcnS , "yaw" , "SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } }
void gm0x0bzi0m ( SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , ffsxehpkdb *
const eirlaaxk45 , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) { rt_InitInfAndNaN ( sizeof ( real_T )
) ; ( void ) memset ( ( void * ) eirlaaxk45 , 0 , sizeof ( ffsxehpkdb ) ) ;
eirlaaxk45 -> Timing . mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; eirlaaxk45 ->
_mdlRefSfcnS = ( _mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) )
{ slmrRunPluginEvent ( eirlaaxk45 -> _mdlRefSfcnS , "yaw" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; } yaw_InitializeDataMapInfo (
eirlaaxk45 , sysRanPtr , contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) &&
( rt_ChildPath != ( NULL ) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI ,
rt_ChildMMIIdx , & ( eirlaaxk45 -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath (
eirlaaxk45 -> DataMapInfo . mmi , rt_ChildPath ) ;
rtwCAPI_MMISetContStateStartIndex ( eirlaaxk45 -> DataMapInfo . mmi ,
rt_CSTATEIdx ) ; } } void mr_yaw_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS ,
char_T * modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T
regSubmodelsMdlinfo = false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , &
regSubmodelsMdlinfo ) ; if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ;
ssRegModelRefMdlInfo ( mdlRefSfcnS , modelName , rtMdlInfo_yaw , 40 ) ; *
retVal = 1 ; } static void mr_yaw_cacheDataAsMxArray ( mxArray * destArray ,
mwIndex i , int j , const void * srcData , size_t numBytes ) ; static void
mr_yaw_cacheDataAsMxArray ( mxArray * destArray , mwIndex i , int j , const
void * srcData , size_t numBytes ) { mxArray * newArray =
mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes , mxUINT8_CLASS ,
mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , ( const uint8_T *
) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i , j , newArray )
; } static void mr_yaw_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_yaw_restoreDataFromMxArray ( void * destData , const mxArray * srcArray ,
mwIndex i , int j , size_t numBytes ) { memcpy ( ( uint8_T * ) destData , (
const uint8_T * ) mxGetData ( mxGetFieldByNumber ( srcArray , i , j ) ) ,
numBytes ) ; } static void mr_yaw_cacheBitFieldToMxArray ( mxArray *
destArray , mwIndex i , int j , uint_T bitVal ) ; static void
mr_yaw_cacheBitFieldToMxArray ( mxArray * destArray , mwIndex i , int j ,
uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j ,
mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_yaw_extractBitFieldFromMxArray ( const mxArray * srcArray , mwIndex i ,
int j , uint_T numBits ) ; static uint_T mr_yaw_extractBitFieldFromMxArray (
const mxArray * srcArray , mwIndex i , int j , uint_T numBits ) { const
uint_T varVal = ( uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i ,
j ) ) ; return varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_yaw_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) ; static void
mr_yaw_cacheDataToMxArrayWithOffset ( mxArray * destArray , mwIndex i , int j
, mwIndex offset , const void * srcData , size_t numBytes ) { uint8_T *
varData = ( uint8_T * ) mxGetData ( mxGetFieldByNumber ( destArray , i , j )
) ; memcpy ( ( uint8_T * ) & varData [ offset * numBytes ] , ( const uint8_T
* ) srcData , numBytes ) ; } static void
mr_yaw_restoreDataFromMxArrayWithOffset ( void * destData , const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) ; static
void mr_yaw_restoreDataFromMxArrayWithOffset ( void * destData , const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t numBytes ) {
const uint8_T * varData = ( const uint8_T * ) mxGetData ( mxGetFieldByNumber
( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData , ( const uint8_T *
) & varData [ offset * numBytes ] , numBytes ) ; } static void
mr_yaw_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) ; static void
mr_yaw_cacheBitFieldToCellArrayWithOffset ( mxArray * destArray , mwIndex i ,
int j , mwIndex offset , uint_T fieldVal ) { mxSetCell ( mxGetFieldByNumber (
destArray , i , j ) , offset , mxCreateDoubleScalar ( ( double ) fieldVal ) )
; } static uint_T mr_yaw_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T mr_yaw_extractBitFieldFromCellArrayWithOffset ( const mxArray *
srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) { const
uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell ( mxGetFieldByNumber (
srcArray , i , j ) , offset ) ) ; return fieldVal & ( ( 1u << numBits ) - 1u
) ; } mxArray * mr_yaw_GetDWork ( const bk2zl4zdb0z * mdlrefDW ) { ( void )
mdlrefDW ; return NULL ; } void mr_yaw_SetDWork ( bk2zl4zdb0z * mdlrefDW ,
const mxArray * ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_yaw_RegisterSimStateChecksum ( SimStruct * S ) { const uint32_T chksum [ 4
] = { 1595006263U , 4114724731U , 4015869003U , 1821789077U , } ;
slmrModelRefRegisterSimStateChecksum ( S , "yaw" , & chksum [ 0 ] ) ; }
mxArray * mr_yaw_GetSimStateDisallowedBlocks ( ) { return NULL ; }
