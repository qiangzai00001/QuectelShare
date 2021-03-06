/*!
  @file
  qbi_svc_stk.h

  @brief
  STK device service implmentation
*/

/*=============================================================================

  Copyright (c) 2012 Qualcomm Technologies, Inc. All Rights Reserved.
  Qualcomm Technologies Proprietary and Confidential.

=============================================================================*/

/*=============================================================================

                        EDIT HISTORY FOR MODULE

This section contains comments describing changes made to the module.
Notice that changes are listed in reverse chronological order.

$Header$

when      who  what, where, why
--------  ---  ---------------------------------------------------------------
01/13/12  hz   Initial release based on MBIM v1.0
=============================================================================*/

#ifndef QBI_SVC_STK_H
#define QBI_SVC_STK_H

/*=============================================================================

  Include Files

=============================================================================*/
#include "qbi_common.h"

/*=============================================================================

  Constants and Macros

=============================================================================*/

/*=============================================================================

  Typedefs

=============================================================================*/

/*=============================================================================

  Function Prototypes

=============================================================================*/

/*=============================================================================
  FUNCTION: qbi_svc_stk_init
=============================================================================*/
/*!
    @brief One-time initialization of the STK device service

    @details
*/
/*===========================================================================*/
void qbi_svc_stk_init
(
  void
);

#endif /* QBI_SVC_STK_H */

