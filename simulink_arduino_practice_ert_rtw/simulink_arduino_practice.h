/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * File: simulink_arduino_practice.h
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

#ifndef RTW_HEADER_simulink_arduino_practice_h_
#define RTW_HEADER_simulink_arduino_practice_h_
#include <math.h>
#include <stddef.h>
#ifndef simulink_arduino_practice_COMMON_INCLUDES_
# define simulink_arduino_practice_COMMON_INCLUDES_
#include "rtwtypes.h"
#include "rtw_continuous.h"
#include "rtw_solver.h"
#include "MW_arduino_digitalio.h"
#include "MW_AnalogIn.h"
#endif                          /* simulink_arduino_practice_COMMON_INCLUDES_ */

#include "simulink_arduino_practice_types.h"
#include "MW_target_hardware_resources.h"

/* Macros for accessing real-time model data structure */
#ifndef rtmGetErrorStatus
# define rtmGetErrorStatus(rtm)        ((rtm)->errorStatus)
#endif

#ifndef rtmSetErrorStatus
# define rtmSetErrorStatus(rtm, val)   ((rtm)->errorStatus = (val))
#endif

/* Block states (default storage) for system '<Root>' */
typedef struct {
  codertarget_arduinobase_inter_T obj; /* '<Root>/Analog Input' */
  codertarget_arduinobase_block_T obj_n;/* '<Root>/Digital Output' */
} DW_simulink_arduino_practice_T;

/* Parameters (default storage) */
struct P_simulink_arduino_practice_T_ {
  real_T AnalogInput_SampleTime;       /* Expression: 0.01
                                        * Referenced by: '<Root>/Analog Input'
                                        */
  real_T Constant_Value;               /* Expression: 2.5
                                        * Referenced by: '<Root>/Constant'
                                        */
};

/* Real-time Model Data Structure */
struct tag_RTM_simulink_arduino_prac_T {
  const char_T *errorStatus;
};

/* Block parameters (default storage) */
extern P_simulink_arduino_practice_T simulink_arduino_practice_P;

/* Block states (default storage) */
extern DW_simulink_arduino_practice_T simulink_arduino_practice_DW;

/* Model entry point functions */
extern void simulink_arduino_practice_initialize(void);
extern void simulink_arduino_practice_step(void);
extern void simulink_arduino_practice_terminate(void);

/* Real-time Model object */
extern RT_MODEL_simulink_arduino_pra_T *const simulink_arduino_practice_M;

/*-
 * These blocks were eliminated from the model due to optimizations:
 *
 * Block '<Root>/Scope' : Unused code path elimination
 */

/*-
 * The generated code includes comments that allow you to trace directly
 * back to the appropriate location in the model.  The basic format
 * is <system>/block_name, where system is the system number (uniquely
 * assigned by Simulink) and block_name is the name of the block.
 *
 * Use the MATLAB hilite_system command to trace the generated code back
 * to the model.  For example,
 *
 * hilite_system('<S3>')    - opens system 3
 * hilite_system('<S3>/Kp') - opens and selects block Kp which resides in S3
 *
 * Here is the system hierarchy for this model
 *
 * '<Root>' : 'simulink_arduino_practice'
 * '<S1>'   : 'simulink_arduino_practice/MATLAB Function'
 */
#endif                             /* RTW_HEADER_simulink_arduino_practice_h_ */

/*
 * File trailer for generated code.
 *
 * [EOF]
 */
