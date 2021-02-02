#ifndef RTW_HEADER_lateral_dyn_constrained_h_
#define RTW_HEADER_lateral_dyn_constrained_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef lateral_dyn_constrained_COMMON_INCLUDES_
#define lateral_dyn_constrained_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "lateral_dyn_constrained_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct hyh3qmso5r { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 1 ] ; } Timing ; } ;
typedef struct { ef3gn3oi45 rtm ; } kupbxuab32i ; extern void iegb4msjuu (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , ef3gn3oi45 * const hk4fk1d14o
, void * sysRanPtr , int contextTid , rtwCAPI_ModelMappingInfo * rt_ParentMMI
, const char_T * rt_ChildPath , int_T rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ;
extern void mr_lateral_dyn_constrained_MdlInfoRegFcn ( SimStruct *
mdlRefSfcnS , char_T * modelName , int_T * retVal ) ; extern mxArray *
mr_lateral_dyn_constrained_GetDWork ( const kupbxuab32i * mdlrefDW ) ; extern
void mr_lateral_dyn_constrained_SetDWork ( kupbxuab32i * mdlrefDW , const
mxArray * ssDW ) ; extern void
mr_lateral_dyn_constrained_RegisterSimStateChecksum ( SimStruct * S ) ;
extern mxArray * mr_lateral_dyn_constrained_GetSimStateDisallowedBlocks ( ) ;
extern const rtwCAPI_ModelMappingStaticInfo *
lateral_dyn_constrained_GetCAPIStaticMap ( void ) ; extern void
lateral_dyn_constrained ( const real_T * h4vjdjlddf , const real_T *
oqv51x2iip , const real_T * jjubycze4b , real_T * k0n5iwfgwy ) ; extern void
nn2wvzakqe ( ef3gn3oi45 * const hk4fk1d14o ) ;
#endif
