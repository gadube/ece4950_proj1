/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: simulink_arduino_practice.c
 *
 * Code generated for Simulink model 'simulink_arduino_practice'.
 *
 * Model version                  : 1.9
 * Simulink Coder version         : 9.3 (R2020a) 18-Nov-2019
 * C/C++ source code generated on : Thu Sep 24 13:40:03 2020
 *
 * Target selection: ert.tlc
 * Embedded hardware selection: Atmel->AVR
 * Code generation objectives: Unspecified
 * Validation result: Not run
 */

#include "simulink_arduino_practice.h"
#include "simulink_arduino_practice_private.h"

/* Block states (default storage) */
DW_simulink_arduino_practice_T simulink_arduino_practice_DW;

/* Real-time model */
RT_MODEL_simulink_arduino_pra_T simulink_arduino_practice_M_;
RT_MODEL_simulink_arduino_pra_T *const simulink_arduino_practice_M =
  &simulink_arduino_practice_M_;

/* Forward declaration for local functions */
static void simulink_ard_SystemCore_release(codertarget_arduinobase_inter_T *obj);
static void simulink_ar_SystemCore_delete_i(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCod_i(codertarget_arduinobase_inter_T *obj);
static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj);
real_T rt_roundd_snf(real_T u)
{
  real_T y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

static void simulink_ard_SystemCore_release(codertarget_arduinobase_inter_T *obj)
{
  if ((obj->isInitialized == 1L) && obj->isSetupComplete) {
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(54UL);
    MW_AnalogIn_Close(obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE);
  }
}

static void simulink_ar_SystemCore_delete_i(codertarget_arduinobase_inter_T *obj)
{
  simulink_ard_SystemCore_release(obj);
}

static void matlabCodegenHandle_matlabCod_i(codertarget_arduinobase_inter_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
    simulink_ar_SystemCore_delete_i(obj);
  }
}

static void matlabCodegenHandle_matlabCodeg(codertarget_arduinobase_block_T *obj)
{
  if (!obj->matlabCodegenIsDeleted) {
    obj->matlabCodegenIsDeleted = true;
  }
}

/* Model step function */
void simulink_arduino_practice_step(void)
{
  uint16_T rtb_AnalogInput_0;
  codertarget_arduinobase_inter_T *obj;

  /* MATLABSystem: '<Root>/Analog Input' */
  if (simulink_arduino_practice_DW.obj.SampleTime !=
      simulink_arduino_practice_P.AnalogInput_SampleTime) {
    simulink_arduino_practice_DW.obj.SampleTime =
      simulink_arduino_practice_P.AnalogInput_SampleTime;
  }

  obj = &simulink_arduino_practice_DW.obj;
  obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogIn_GetHandle(54UL);
  MW_AnalogInSingle_ReadResult
    (simulink_arduino_practice_DW.obj.AnalogInDriverObj.MW_ANALOGIN_HANDLE,
     &rtb_AnalogInput_0, 3);

  /* MATLABSystem: '<Root>/Digital Output' incorporates:
   *  Constant: '<Root>/Constant'
   *  MATLAB Function: '<Root>/MATLAB Function'
   *  MATLABSystem: '<Root>/Analog Input'
   */
  writeDigitalPin(2, (uint8_T)!(rt_roundd_snf(0.0048875855327468231 * (real_T)
    rtb_AnalogInput_0) < simulink_arduino_practice_P.Constant_Value));
}

/* Model initialize function */
void simulink_arduino_practice_initialize(void)
{
  {
    codertarget_arduinobase_inter_T *obj;

    /* Start for MATLABSystem: '<Root>/Analog Input' */
    simulink_arduino_practice_DW.obj.matlabCodegenIsDeleted = true;
    simulink_arduino_practice_DW.obj.isInitialized = 0L;
    simulink_arduino_practice_DW.obj.SampleTime = -1.0;
    simulink_arduino_practice_DW.obj.matlabCodegenIsDeleted = false;
    simulink_arduino_practice_DW.obj.SampleTime =
      simulink_arduino_practice_P.AnalogInput_SampleTime;
    obj = &simulink_arduino_practice_DW.obj;
    simulink_arduino_practice_DW.obj.isSetupComplete = false;
    simulink_arduino_practice_DW.obj.isInitialized = 1L;
    obj->AnalogInDriverObj.MW_ANALOGIN_HANDLE = MW_AnalogInSingle_Open(54UL);
    simulink_arduino_practice_DW.obj.isSetupComplete = true;

    /* Start for MATLABSystem: '<Root>/Digital Output' */
    simulink_arduino_practice_DW.obj_n.matlabCodegenIsDeleted = false;
    simulink_arduino_practice_DW.obj_n.isInitialized = 1L;
    digitalIOSetup(2, 1);
    simulink_arduino_practice_DW.obj_n.isSetupComplete = true;
  }
}

/* Model terminate function */
void simulink_arduino_practice_terminate(void)
{
  /* Terminate for MATLABSystem: '<Root>/Analog Input' */
  matlabCodegenHandle_matlabCod_i(&simulink_arduino_practice_DW.obj);

  /* Terminate for MATLABSystem: '<Root>/Digital Output' */
  matlabCodegenHandle_matlabCodeg(&simulink_arduino_practice_DW.obj_n);
}

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
