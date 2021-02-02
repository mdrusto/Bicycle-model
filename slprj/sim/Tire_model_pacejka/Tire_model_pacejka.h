#ifndef RTW_HEADER_Tire_model_pacejka_h_
#define RTW_HEADER_Tire_model_pacejka_h_
#include <string.h>
#include <stddef.h>
#include "rtw_modelmap.h"
#ifndef Tire_model_pacejka_COMMON_INCLUDES_
#define Tire_model_pacejka_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "slsv_diagnostic_codegen_c_api.h"
#include "sl_AsyncioQueue/AsyncioQueueCAPI.h"
#include "simstruc.h"
#include "fixedpoint.h"
#endif
#include "Tire_model_pacejka_types.h"
#include "multiword_types.h"
#include "rt_nonfinite.h"
struct ejldaq20t0v_ { real_T P_0 [ 301 ] ; real_T P_1 [ 61 ] ; real_T P_2 [
301 ] ; real_T P_3 [ 61 ] ; real_T P_4 ; uint32_T P_5 [ 2 ] ; uint32_T P_6 [
2 ] ; } ; struct ikswaaase3 { struct SimStruct_tag * _mdlRefSfcnS ; struct {
rtwCAPI_ModelMappingInfo mmi ; rtwCAPI_ModelMapLoggingInstanceInfo
mmiLogInstanceInfo ; sysRanDType * systemRan [ 2 ] ; int_T systemTid [ 2 ] ;
} DataMapInfo ; struct { int_T mdlref_GlobalTID [ 2 ] ; } Timing ; } ;
typedef struct { ogsbmmq34c rtm ; } egsoduotjyq ; extern void g2lhfec0dv (
SimStruct * _mdlRefSfcnS , int_T mdlref_TID0 , int_T mdlref_TID1 , ogsbmmq34c
* const bgw0buioch , void * sysRanPtr , int contextTid ,
rtwCAPI_ModelMappingInfo * rt_ParentMMI , const char_T * rt_ChildPath , int_T
rt_ChildMMIIdx , int_T rt_CSTATEIdx ) ; extern void
mr_Tire_model_pacejka_MdlInfoRegFcn ( SimStruct * mdlRefSfcnS , char_T *
modelName , int_T * retVal ) ; extern mxArray *
mr_Tire_model_pacejka_GetDWork ( const egsoduotjyq * mdlrefDW ) ; extern void
mr_Tire_model_pacejka_SetDWork ( egsoduotjyq * mdlrefDW , const mxArray *
ssDW ) ; extern void mr_Tire_model_pacejka_RegisterSimStateChecksum (
SimStruct * S ) ; extern mxArray *
mr_Tire_model_pacejka_GetSimStateDisallowedBlocks ( ) ; extern const
rtwCAPI_ModelMappingStaticInfo * Tire_model_pacejka_GetCAPIStaticMap ( void )
; extern void nydnh5v1v0 ( real_T * amonh5yeft ) ; extern void llrahcky2i (
real_T * amonh5yeft ) ; extern void Tire_model_pacejka ( const real_T *
nopozamn2v , const real_T * hdjvjc1xhi , real_T * lv0raqoggy , real_T *
bztktwqjat , const real_T rtp_aligning_torque [ 18361 ] , const real_T
rtp_lateral_coeff [ 18361 ] ) ; extern void Tire_model_pacejkaTID1 ( real_T *
amonh5yeft ) ; extern void dkubr21sck ( ogsbmmq34c * const bgw0buioch ) ;
#endif
