#include "lateral_dyn_constrained_capi.h"
#include "lateral_dyn_constrained.h"
#include "lateral_dyn_constrained_private.h"
static RegMdlInfo rtMdlInfo_lateral_dyn_constrained [ 39 ] = { {
"kupbxuab32i" , MDL_INFO_NAME_MDLREF_DWORK , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "eraes2jigm" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "bgbinkkarl" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "jh35g2wuim" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "mzqxpbumtd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "myzul0d55j" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "ppyzoruns5" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "fa31nvjcyt" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "aovhgxtvkb" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "ohdm44pv41" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "cqtn2bdmxu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "fsed0ospe2" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "gzrzhbjhf0" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "ftt3lzinud" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "ksfrxctgwd" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "nn2wvzakqe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "kkffchpwhe" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "avqvktmoaj" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "iegb4msjuu" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "padl0qpvfi" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "ihbnov3hld" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "lateral_dyn_constrained" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , 0 , ( NULL ) } , { "mdmtdljvpq" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "hyh3qmso5r" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , { "ef3gn3oi45" ,
MDL_INFO_ID_GLOBAL_RTW_CONSTRUCT , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } , {
"mr_lateral_dyn_constrained_GetSimStateDisallowedBlocks" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_extractBitFieldFromCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_cacheBitFieldToCellArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_restoreDataFromMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_cacheDataToMxArrayWithOffset" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_extractBitFieldFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_cacheBitFieldToMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_restoreDataFromMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_cacheDataAsMxArray" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_RegisterSimStateChecksum" ,
MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1 , ( void * ) "lateral_dyn_constrained" }
, { "mr_lateral_dyn_constrained_SetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 ,
- 1 , ( void * ) "lateral_dyn_constrained" } , {
"mr_lateral_dyn_constrained_GetDWork" , MDL_INFO_ID_MODEL_FCN_NAME , 0 , - 1
, ( void * ) "lateral_dyn_constrained" } , { "lateral_dyn_constrained.h" ,
MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( NULL ) } , {
"lateral_dyn_constrained.c" , MDL_INFO_MODEL_FILENAME , 0 , - 1 , ( void * )
"lateral_dyn_constrained" } } ; void lateral_dyn_constrained ( const real_T *
h4vjdjlddf , const real_T * oqv51x2iip , const real_T * jjubycze4b , real_T *
k0n5iwfgwy ) { real_T bgbk2gfie0 ; bgbk2gfie0 = * h4vjdjlddf + * oqv51x2iip ;
* k0n5iwfgwy = bgbk2gfie0 / * jjubycze4b ; } void nn2wvzakqe ( ef3gn3oi45 *
const hk4fk1d14o ) { if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( hk4fk1d14o -> _mdlRefSfcnS , "lateral_dyn_constrained" ,
"SIMSTATUS_TERMINATING_MODELREF_ACCEL_EVENT" ) ; } } void iegb4msjuu (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , ef3gn3oi45 * const hk4fk1d14o
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) {
rt_InitInfAndNaN ( sizeof ( real_T ) ) ; ( void ) memset ( ( void * )
hk4fk1d14o , 0 , sizeof ( ef3gn3oi45 ) ) ; hk4fk1d14o -> Timing .
mdlref_GlobalTID [ 0 ] = mdlref_TID0 ; hk4fk1d14o -> _mdlRefSfcnS = (
_mdlRefSfcnS ) ; if ( ! slIsRapidAcceleratorSimulating ( ) ) {
slmrRunPluginEvent ( hk4fk1d14o -> _mdlRefSfcnS , "lateral_dyn_constrained" ,
"START_OF_SIM_MODEL_MODELREF_ACCEL_EVENT" ) ; }
lateral_dyn_constrained_InitializeDataMapInfo ( hk4fk1d14o , sysRanPtr ,
contextTid ) ; if ( ( rt_ParentMMI != ( NULL ) ) && ( rt_ChildPath != ( NULL
) ) ) { rtwCAPI_SetChildMMI ( * rt_ParentMMI , rt_ChildMMIIdx , & (
hk4fk1d14o -> DataMapInfo . mmi ) ) ; rtwCAPI_SetPath ( hk4fk1d14o ->
DataMapInfo . mmi , rt_ChildPath ) ; rtwCAPI_MMISetContStateStartIndex (
hk4fk1d14o -> DataMapInfo . mmi , rt_CSTATEIdx ) ; } } void
mr_lateral_dyn_constrained_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) { * retVal = 0 ; { boolean_T regSubmodelsMdlinfo
= false ; ssGetRegSubmodelsMdlinfo ( mdlRefSfcnS , & regSubmodelsMdlinfo ) ;
if ( regSubmodelsMdlinfo ) { } } * retVal = 0 ; ssRegModelRefMdlInfo (
mdlRefSfcnS , modelName , rtMdlInfo_lateral_dyn_constrained , 39 ) ; * retVal
= 1 ; } static void mr_lateral_dyn_constrained_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) ;
static void mr_lateral_dyn_constrained_cacheDataAsMxArray ( mxArray *
destArray , mwIndex i , int j , const void * srcData , size_t numBytes ) {
mxArray * newArray = mxCreateUninitNumericMatrix ( ( size_t ) 1 , numBytes ,
mxUINT8_CLASS , mxREAL ) ; memcpy ( ( uint8_T * ) mxGetData ( newArray ) , (
const uint8_T * ) srcData , numBytes ) ; mxSetFieldByNumber ( destArray , i ,
j , newArray ) ; } static void
mr_lateral_dyn_constrained_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) ; static void
mr_lateral_dyn_constrained_restoreDataFromMxArray ( void * destData , const
mxArray * srcArray , mwIndex i , int j , size_t numBytes ) { memcpy ( (
uint8_T * ) destData , ( const uint8_T * ) mxGetData ( mxGetFieldByNumber (
srcArray , i , j ) ) , numBytes ) ; } static void
mr_lateral_dyn_constrained_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) ; static void
mr_lateral_dyn_constrained_cacheBitFieldToMxArray ( mxArray * destArray ,
mwIndex i , int j , uint_T bitVal ) { mxSetFieldByNumber ( destArray , i , j
, mxCreateDoubleScalar ( ( double ) bitVal ) ) ; } static uint_T
mr_lateral_dyn_constrained_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) ; static uint_T
mr_lateral_dyn_constrained_extractBitFieldFromMxArray ( const mxArray *
srcArray , mwIndex i , int j , uint_T numBits ) { const uint_T varVal = (
uint_T ) mxGetScalar ( mxGetFieldByNumber ( srcArray , i , j ) ) ; return
varVal & ( ( 1u << numBits ) - 1u ) ; } static void
mr_lateral_dyn_constrained_cacheDataToMxArrayWithOffset ( mxArray * destArray
, mwIndex i , int j , mwIndex offset , const void * srcData , size_t numBytes
) ; static void mr_lateral_dyn_constrained_cacheDataToMxArrayWithOffset (
mxArray * destArray , mwIndex i , int j , mwIndex offset , const void *
srcData , size_t numBytes ) { uint8_T * varData = ( uint8_T * ) mxGetData (
mxGetFieldByNumber ( destArray , i , j ) ) ; memcpy ( ( uint8_T * ) & varData
[ offset * numBytes ] , ( const uint8_T * ) srcData , numBytes ) ; } static
void mr_lateral_dyn_constrained_restoreDataFromMxArrayWithOffset ( void *
destData , const mxArray * srcArray , mwIndex i , int j , mwIndex offset ,
size_t numBytes ) ; static void
mr_lateral_dyn_constrained_restoreDataFromMxArrayWithOffset ( void * destData
, const mxArray * srcArray , mwIndex i , int j , mwIndex offset , size_t
numBytes ) { const uint8_T * varData = ( const uint8_T * ) mxGetData (
mxGetFieldByNumber ( srcArray , i , j ) ) ; memcpy ( ( uint8_T * ) destData ,
( const uint8_T * ) & varData [ offset * numBytes ] , numBytes ) ; } static
void mr_lateral_dyn_constrained_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) ; static
void mr_lateral_dyn_constrained_cacheBitFieldToCellArrayWithOffset ( mxArray
* destArray , mwIndex i , int j , mwIndex offset , uint_T fieldVal ) {
mxSetCell ( mxGetFieldByNumber ( destArray , i , j ) , offset ,
mxCreateDoubleScalar ( ( double ) fieldVal ) ) ; } static uint_T
mr_lateral_dyn_constrained_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) ;
static uint_T
mr_lateral_dyn_constrained_extractBitFieldFromCellArrayWithOffset ( const
mxArray * srcArray , mwIndex i , int j , mwIndex offset , uint_T numBits ) {
const uint_T fieldVal = ( uint_T ) mxGetScalar ( mxGetCell (
mxGetFieldByNumber ( srcArray , i , j ) , offset ) ) ; return fieldVal & ( (
1u << numBits ) - 1u ) ; } mxArray * mr_lateral_dyn_constrained_GetDWork (
const kupbxuab32i * mdlrefDW ) { ( void ) mdlrefDW ; return NULL ; } void
mr_lateral_dyn_constrained_SetDWork ( kupbxuab32i * mdlrefDW , const mxArray
* ssDW ) { ( void ) ssDW ; ( void ) mdlrefDW ; } void
mr_lateral_dyn_constrained_RegisterSimStateChecksum ( SimStruct * S ) { const
uint32_T chksum [ 4 ] = { 1118031024U , 4104279769U , 2500891742U ,
3516518532U , } ; slmrModelRefRegisterSimStateChecksum ( S ,
"lateral_dyn_constrained" , & chksum [ 0 ] ) ; } mxArray *
mr_lateral_dyn_constrained_GetSimStateDisallowedBlocks ( ) { return NULL ; }
