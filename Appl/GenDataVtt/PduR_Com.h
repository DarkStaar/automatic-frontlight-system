/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *  \verbatim
 *
 *                 This software is copyright protected and proprietary to Vector Informatik GmbH.
 *                 Vector Informatik GmbH grants to you only those rights as set out in the license conditions.
 *                 All other rights remain with Vector Informatik GmbH.
 *  \endverbatim
 *  -------------------------------------------------------------------------------------------------------------------
 *  LICENSE
 *  -------------------------------------------------------------------------------------------------------------------
 *            Module: PduR
 *           Program: 
 *          Customer: N/A
 *       Expiry Date: Not restricted
 *  Ordered Derivat.: 
 *    License Scope : The usage is restricted to CBD0000000_D30
 *
 *  -------------------------------------------------------------------------------------------------------------------
 *  FILE DESCRIPTION
 *  -------------------------------------------------------------------------------------------------------------------
 *              File: PduR_Com.h
 *   Generation Time: 2023-03-12 21:19:21
 *           Project: MyECU - Version 1.0
 *          Delivery: CBD0000000_D30
 *      Tool Version: DaVinci Configurator  5.11.16 SP1
 *
 *
 *********************************************************************************************************************/

#if !defined (PDUR_COM_H)
# define PDUR_COM_H

/* PRQA S 3451 EOF */ /* MD_PduR_3451 */

/**********************************************************************************************************************
  INCLUDES
**********************************************************************************************************************/
#include "PduR_Cfg.h"

/**********************************************************************************************************************
  GLOBAL CONSTANT MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION MACROS
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA TYPES AND STRUCTURES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL DATA PROTOTYPES
**********************************************************************************************************************/

/**********************************************************************************************************************
  GLOBAL FUNCTION PROTOTYPES
**********************************************************************************************************************/
/* \trace SPEC-629 */

#define PDUR_START_SEC_CODE
# include "MemMap.h"    /* PRQA S 5087 */ /* MD_MSR_19.1 */



/**********************************************************************************************************************
PduR_ComTransmit
**********************************************************************************************************************/
/*!
\brief    The function serves to request the transmission of an upper layer I-PDU.\n
          The PDU Router evaluates the Com I-PDU handle and identifies the destination(s) of the PDU.\n
          The call is routed to a lower IF module using the appropriate I-PDU handle of the destination layer.
\param    id                ID of the Com I-PDU to be transmitted
\param    info              Payload information of the I-PDU (pointer to data and data length)
\return   Std_ReturnType\n
          E_OK              The request was accepted by the PDU Router and by the destination layer.\n
          E_NOT_OK          The PDU Router is in the PDUR_UNINIT state\n
                            or the ComTxPduId is not valid\n
                            or the ComTxPduId is not forwarded in this identity\n
                            or the PduInfoPtr is not valid\n
                            or the request was not accepted by the destination layer.\n
\pre      PduR_Init() is executed successfully.
\context  This function can be called on interrupt and task level and has not to be interrupted by other\n
          PduR_ComTransmit calls for the same ComTxPduId.
\trace    CREQ-1253, CREQ-1254
\trace    SPEC-666, SPEC-679, SPEC-686, SPEC-1827, SPEC-1096, SPEC-2020085, SPEC-38411
\note     The function is called by Com.
**********************************************************************************************************************/
FUNC(Std_ReturnType, PDUR_CODE) PduR_ComTransmit(PduIdType id, P2CONST(PduInfoType, AUTOMATIC, PDUR_APPL_DATA) info);






#define PDUR_STOP_SEC_CODE
# include "MemMap.h"    /* PRQA S 5087 */ /* MD_MSR_19.1 */

#endif  /* PDUR_COM_H */


/**********************************************************************************************************************
* GLOBAL MISRA / PCLINT JUSTIFICATION
*********************************************************************************************************************/
/*  module specific MISRA deviations:
    MD_PduR_3451:   MISRA rule: 8.8
    Reason:         The global identifier has been declared in more than one file. the function declaration has to be in
                    the PduR_<Module>.h. Affected APIs are CancelReceive, CancelTransmit and ChangeParameter.
    Risk:           no risk.
    Prevention:     To avoid a duplicate declaration uns the BSW-Module "use-Tag" flag.
*/

/**********************************************************************************************************************
  END OF FILE: PduR_Com.h
**********************************************************************************************************************/

