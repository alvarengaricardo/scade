/*********************************************************
 **
 ** File  LandingGear_UA_1_LAY_1.c
 **
 ** Automatically generated by SCADE Suite UA Adaptor
 ** Version 19.2 (build 20180628)
 ** 
 ** Date of generation: 2018-10-09T11:58:19
 ** Command line: C:/Program Files/ANSYS Inc/v192/SCADE/SCADE/bin/uaadaptor.exe -sdy D:\gd\ITA\CE-235\scade\landing_gear\LandingGear\LandingGear.sdy -n C:\Program Files\ANSYS Inc\v192\SCADE\SCADE Display\config\a661_description\a661.xml -outdir D:/gd/ITA/CE-235/scade/landing_gear/LandingGear/Simulation -k D:/gd/ITA/CE-235/scade/landing_gear/LandingGear/Simulation/kcg_trace.xml -o LandingGear_UA_1 -i LandingGear_interface.h -encoding ASCII D:\gd\ITA\CE-235\scade\landing_gear\landing_gear\LG.sgfx
 *********************************************************/
#include "kcg_sensors.h"
#include "LandingGear_UA_1.h"
#include "LandingGear_UA_1_constants.h"
#include "LandingGear_UA_1_private.h"

/* Perform UA Request for layer 1 */
A661_INTERNAL uaa_size a661_com_A661_CMD_UA_REQUEST_layer_1(buffer_el msg[], 
  outC_LandingGear* scade_ctx,  extern_out_ctx_t * extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->Layer1Visible ||
  scade_ctx->Layer1Active){
    
    if (scade_ctx->Layer1Visible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_VISIBLE, 0);
    }
    if (scade_ctx->Layer1Active){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_8(msg + offset,
        A661_REQ_LAYER_ACTIVE, 0);
    }
  }
  return offset ;
}

/* Pack messages for layer 1 */
 uaa_size a661_com_layer_1(buffer_el msg[], 
  outC_LandingGear* scade_ctx,  extern_out_ctx_t* extern_ctx){
  uaa_size offset = 0;
  if (scade_ctx->Emit2CDS ||
  scade_ctx->Layer1Active ||
  scade_ctx->Layer1Visible){
    LAYER("a661_layer#1");
    offset = 8;
    a661_msg_cmd_header(msg, 1, LandingGear_UA_1_DEFAULT_CONTEXT_NUMBER);
    if (scade_ctx->Emit2CDS){
      WIDGET("Nose_GpRectangle#1");
      offset = offset + a661_com_csp_widget_GpRectangle(msg + offset, 1,
        scade_ctx->Emit2CDS, scade_ctx->NoseSquareBorderColor,
        scade_ctx->Emit2CDS, scade_ctx->NoseSquareFillColor);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Left_GpRectangle#2");
      offset = offset + a661_com_csp_widget_GpRectangle(msg + offset, 2,
        scade_ctx->Emit2CDS, scade_ctx->LeftSquareBorderColor,
        scade_ctx->Emit2CDS, scade_ctx->LeftSquareFillColor);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Right_GpRectangle#3");
      offset = offset + a661_com_csp_widget_GpRectangle(msg + offset, 3,
        scade_ctx->Emit2CDS, scade_ctx->RightSquareBorderColor,
        scade_ctx->Emit2CDS, scade_ctx->RightSquareFillColor);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("LG_Up_PushButton#4");
      offset = offset + a661_com_csp_widget_PushButton(msg + offset, 4,
        scade_ctx->Emit2CDS, 5, scade_ctx->LG_UpBtnTextString,
        scade_ctx->StringSize);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("LG_Fail_PushButton#5");
      offset = offset + a661_com_csp_widget_PushButton(msg + offset, 5,
        scade_ctx->Emit2CDS, 5, scade_ctx->LG_FailBtnTextString,
        scade_ctx->StringSize);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Nose_Label#6");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 6,
        scade_ctx->Emit2CDS, scade_ctx->NoseTextColorIndex, scade_ctx->Emit2CDS,
        5, scade_ctx->NoseTextString, scade_ctx->StringSize);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Left_Label#7");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 7,
        scade_ctx->Emit2CDS, scade_ctx->LeftTextColorIndex, scade_ctx->Emit2CDS,
        5, scade_ctx->LeftTextString, scade_ctx->StringSize);
    }
    if (scade_ctx->Emit2CDS){
      WIDGET("Right_Label#8");
      offset = offset + a661_com_csp_widget_Label(msg + offset, 8,
        scade_ctx->Emit2CDS, scade_ctx->RightTextColorIndex,
        scade_ctx->Emit2CDS, 5, scade_ctx->RightTextString,
        scade_ctx->StringSize);
    }
    if (scade_ctx->Layer1Active ||
    scade_ctx->Layer1Visible){
      offset = offset + a661_com_A661_CMD_UA_REQUEST_layer_1(msg + offset,
        scade_ctx, extern_ctx);
    }
    WRITE_ULONG(msg + offset, A661_END_BLOCK);
    offset = offset + 4;
    WRITE_ULONG(msg + 4, offset);
  }
  return offset ;
}

/*********************************************************
 ** End of file
 ** End of generation: 2018-10-09T11:58:19
 *********************************************************/

