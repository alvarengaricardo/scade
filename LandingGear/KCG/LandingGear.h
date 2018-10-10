/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** Command: kcg66.exe -config D:/gd/ITA/CE-235/zzz/kz/LandingGear/KCG/config.txt
** Generation date: 2018-10-08T22:10:52
*************************************************************$ */
#ifndef _LandingGear_H_
#define _LandingGear_H_

#include "kcg_types.h"

/* ========================  input structure  ====================== */
typedef struct {
  kcg_bool /* @1/Input1/, @1/_L1/, LG_UpBtn/, _L6/ */ LG_UpBtn;
  kcg_bool /* @2/Input1/, @2/_L1/, LG_Fail_Btn/, _L13/ */ LG_Fail_Btn;
} inC_LandingGear;

/* =====================  no output structure  ====================== */

/* ========================  context type  ========================= */
typedef struct {
  /* ---------------------------  outputs  --------------------------- */
  T_String /* LG_UpBtnTextString/, _L5/ */ LG_UpBtnTextString;
  T_String /* LG_FailBtnTextString/, _L1/ */ LG_FailBtnTextString;
  kcg_bool /* Layer1Active/ */ Layer1Active;
  kcg_bool /* Layer1Visible/, _L7/ */ Layer1Visible;
  kcg_uint8 /* NoseSquareBorderColor/ */ NoseSquareBorderColor;
  kcg_uint8 /* LeftSquareBorderColor/ */ LeftSquareBorderColor;
  kcg_uint8 /* RightSquareBorderColor/ */ RightSquareBorderColor;
  kcg_uint8 /* NoseSquareFillColor/ */ NoseSquareFillColor;
  kcg_uint8 /* LeftSquareFillColor/ */ LeftSquareFillColor;
  kcg_uint8 /* RightSquareFillColor/ */ RightSquareFillColor;
  kcg_uint8 /* NoseTextColorIndex/ */ NoseTextColorIndex;
  kcg_uint8 /* LeftTextColorIndex/ */ LeftTextColorIndex;
  kcg_uint8 /* RightTextColorIndex/ */ RightTextColorIndex;
  T_String /* NoseTextString/ */ NoseTextString;
  T_String /* LeftTextString/ */ LeftTextString;
  T_String /* RightTextString/ */ RightTextString;
  kcg_uint16 /* StringSize/ */ StringSize;
  kcg_bool /* Emit2CDS/, _L11/ */ Emit2CDS;
  /* -----------------------  no local probes  ----------------------- */
  /* ----------------------- local memories  ------------------------- */
  kcg_bool init;
  kcg_bool /* @1/_L3/ */ _L3_Switch_1;
  kcg_bool /* @2/_L3/ */ _L3_Switch_2;
  kcg_int32 /* SM1:TRANSITION:_L2/ */ _L2_TRANSITION_SM1;
  SSM_ST_SM1 /* SM1: */ SM1_state_nxt;
  kcg_bool /* _L12/ */ _L12;
  /* -------------------- no sub nodes' contexts  -------------------- */
  /* ----------------- no clocks of observable data ------------------ */
} outC_LandingGear;

/* ===========  node initialization and cycle functions  =========== */
/* LandingGear/ */
extern void LandingGear(inC_LandingGear *inC, outC_LandingGear *outC);

#ifndef KCG_NO_EXTERN_CALL_TO_RESET
extern void LandingGear_reset(outC_LandingGear *outC);
#endif /* KCG_NO_EXTERN_CALL_TO_RESET */

#ifndef KCG_USER_DEFINED_INIT
extern void LandingGear_init(outC_LandingGear *outC);
#endif /* KCG_USER_DEFINED_INIT */

/*
  Expanded instances for: LandingGear/
  @1: (Switch#1)
  @2: (Switch#2)
*/

#endif /* _LandingGear_H_ */
/* $********** SCADE Suite KCG 32-bit 6.6 (build i19) ***********
** LandingGear.h
** Generation date: 2018-10-08T22:10:52
*************************************************************$ */

