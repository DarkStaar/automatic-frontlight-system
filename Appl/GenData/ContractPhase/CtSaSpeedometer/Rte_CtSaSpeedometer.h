/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *                This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                All other rights remain with Vector Informatik GmbH.
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *          File:  Rte_CtSaSpeedometer.h
 *        Config:  C:/nit-au-03/PSZR_gojkovic/AUTOSAR_Exercises/AFS/MyECU.dpa
 *     SW-C Type:  CtSaSpeedometer
 *  Generated at:  Sun Mar 12 23:39:13 2023
 *
 *     Generator:  MICROSAR RTE Generator Version 4.9.0
 *                 RTE Core Version 1.9.0
 *       License:  Unlimited license CBD0000000 for N/A
 *
 *   Description:  Application header file for SW-C <CtSaSpeedometer> (Contract Phase)
 *********************************************************************************************************************/

/* double include prevention */
#ifndef _RTE_CTSASPEEDOMETER_H
# define _RTE_CTSASPEEDOMETER_H

# ifdef RTE_APPLICATION_HEADER_FILE
#  error Multiple application header files included.
# endif
# define RTE_APPLICATION_HEADER_FILE
# ifndef RTE_PTR2ARRAYBASETYPE_PASSING
#  define RTE_PTR2ARRAYBASETYPE_PASSING
# endif

# ifdef __cplusplus
extern "C"
{
# endif /* __cplusplus */

/* include files */

# include "Rte_CtSaSpeedometer_Type.h"
# include "Rte_DataHandleType.h"


/**********************************************************************************************************************
 * Component Data Structures and Port Data Structures
 *********************************************************************************************************************/

struct Rte_CDS_CtSaSpeedometer
{
  /* dummy entry */
  uint8 _dummy;
};

# define RTE_START_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

extern CONSTP2CONST(struct Rte_CDS_CtSaSpeedometer, RTE_CONST, RTE_CONST) Rte_Inst_CtSaSpeedometer; /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CONST_UNSPECIFIED
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

typedef P2CONST(struct Rte_CDS_CtSaSpeedometer, TYPEDEF, RTE_CONST) Rte_Instance;


/**********************************************************************************************************************
 * Init Values for unqueued S/R communication (primitive types only)
 *********************************************************************************************************************/

# define Rte_InitValue_PpSpeedometerIn_DeSpeedometer (0U)
# define Rte_InitValue_PpSpeedometerOut_DeSpeedometer (0U)


# define RTE_START_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

/**********************************************************************************************************************
 * API prototypes
 *********************************************************************************************************************/
FUNC(Std_ReturnType, RTE_CODE) Rte_Read_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer(P2VAR(IdtDioValueType, AUTOMATIC, RTE_CTSASPEEDOMETER_APPL_VAR) data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(Std_ReturnType, RTE_CODE) Rte_Write_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer(IdtDioValueType data); /* PRQA S 0850 */ /* MD_MSR_19.8 */
FUNC(uint8, RTE_CODE) Rte_Mode_CtSaSpeedometer_PpBatteryMode_BatteryMode(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define RTE_STOP_SEC_CODE
# include "MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
 * Rte_Read_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Read_PpSpeedometerIn_DeSpeedometer Rte_Read_CtSaSpeedometer_PpSpeedometerIn_DeSpeedometer


/**********************************************************************************************************************
 * Rte_Write_<p>_<d> (explicit S/R communication with isQueued = false)
 *********************************************************************************************************************/
# define Rte_Write_PpSpeedometerOut_DeSpeedometer Rte_Write_CtSaSpeedometer_PpSpeedometerOut_DeSpeedometer


/**********************************************************************************************************************
 * Rte_Mode_<p>_<m>
 *********************************************************************************************************************/
# define Rte_Mode_PpBatteryMode_BatteryMode Rte_Mode_CtSaSpeedometer_PpBatteryMode_BatteryMode




# define CtSaSpeedometer_START_SEC_CODE
# include "CtSaSpeedometer_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */


/**********************************************************************************************************************
 *
 * Runnable Entity Name: RctSaSpeedometerRead
 *
 *---------------------------------------------------------------------------------------------------------------------
 *
 * Executed if at least one of the following trigger conditions occurred:
 *   - triggered on TimingEvent every 100ms
 *
 **********************************************************************************************************************
 *
 * Input Interfaces:
 * =================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Read_PpSpeedometerIn_DeSpeedometer(IdtDioValueType *data)
 *
 * Output Interfaces:
 * ==================
 *   Explicit S/R API:
 *   -----------------
 *   Std_ReturnType Rte_Write_PpSpeedometerOut_DeSpeedometer(IdtDioValueType data)
 *
 * Mode Interfaces:
 * ================
 *   uint8 Rte_Mode_PpBatteryMode_BatteryMode(void)
 *   Modes of Rte_ModeType_BatteryMode:
 *   - RTE_MODE_BatteryMode_BATTERY_HIGH
 *   - RTE_MODE_BatteryMode_BATTERY_LOW
 *   - RTE_MODE_BatteryMode_BATTERY_MEDIUM
 *   - RTE_TRANSITION_BatteryMode
 *
 *********************************************************************************************************************/

# define RTE_RUNNABLE_RctSaSpeedometerRead RctSaSpeedometerRead
FUNC(void, CtSaSpeedometer_CODE) RctSaSpeedometerRead(void); /* PRQA S 0850 */ /* MD_MSR_19.8 */

# define CtSaSpeedometer_STOP_SEC_CODE
# include "CtSaSpeedometer_MemMap.h" /* PRQA S 5087 */ /* MD_MSR_19.1 */

# ifdef __cplusplus
} /* extern "C" */
# endif /* __cplusplus */

#endif /* _RTE_CTSASPEEDOMETER_H */
