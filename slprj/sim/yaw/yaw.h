#ifndef RTW_HEADER_yaw_h_
#define RTW_HEADER_yaw_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef yaw_COMMON_INCLUDES_
#define yaw_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "yaw_types.h"
#include "multiword_types.h"
#include "mwmathutil.h"
#include "rt_nonfinite.h"
struct a1otp4aeox { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { ffsxehpkdb rtm ; } bk2zl4zdb0z ; extern void gm0x0bzi0m (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , ffsxehpkdb * const eirlaaxk45
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_yaw_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray * mr_yaw_GetDWork ( const
bk2zl4zdb0z * mdlrefDW ) ; extern void mr_yaw_SetDWork ( bk2zl4zdb0z *
mdlrefDW , const mxArray * ssDW ) ; extern void
mr_yaw_RegisterSimStateChecksum ( SimStruct * S ) ; extern mxArray *
mr_yaw_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * yaw_GetCAPIStaticMap ( void ) ; extern void
yaw ( const real_T * fwbiqzv32v , const real_T * iukho5mkso , const real_T *
ojby4kkic0 , const real_T * np4qxo5ga2 , const real_T * emfyd2c0h2 , const
real_T * hnrxijgb40 , const real_T * nuk5cse1ds , real_T * gwn5lqlgva ) ;
extern void ihycarmcck ( ffsxehpkdb * const eirlaaxk45 ) ;
#endif
