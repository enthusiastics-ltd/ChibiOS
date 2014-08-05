/*
    ChibiOS/HAL - Copyright (C) 2006,2007,2008,2009,2010,
                  2011,2012,2013,2014 Giovanni Di Sirio.

    This file is part of ChibiOS/HAL

    ChibiOS/HAL is free software; you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation; either version 3 of the License, or
    (at your option) any later version.

    ChibiOS/RT is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <http://www.gnu.org/licenses/>.
*/
/*
   Concepts and parts of this file have been contributed by Uladzimir Pylinsky
   aka barthess.
 */

/**
 * @file    emc.h
 * @brief   EMC Driver macros and structures.
 *
 * @addtogroup EMC
 * @{
 */

#ifndef _EMC_H_
#define _EMC_H_

#if HAL_USE_EMC || defined(__DOXYGEN__)

/*===========================================================================*/
/* Driver constants.                                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Driver pre-compile time settings.                                         */
/*===========================================================================*/

/*===========================================================================*/
/* Derived constants and error checks.                                       */
/*===========================================================================*/

/*===========================================================================*/
/* Driver data structures and types.                                         */
/*===========================================================================*/

/**
 * @brief   Driver state machine possible states.
 */
typedef enum {
  EMC_UNINIT = 0,                   /**< Not initialized.                   */
  EMC_STOP = 1,                     /**< Stopped.                           */
  EMC_READY = 2,                    /**< Ready.                             */
} emcstate_t;

/**
 * @brief   Type of a structure representing a EMC driver.
 */
typedef struct EMCDriver EMCDriver;

#include "emc_lld.h"

/*===========================================================================*/
/* Driver macros.                                                            */
/*===========================================================================*/

/*===========================================================================*/
/* External declarations.                                                    */
/*===========================================================================*/

#ifdef __cplusplus
extern "C" {
#endif
  void emcInit(void);
  void emcObjectInit(EMCDriver *emcp);
  void emcStart(EMCDriver *emcp, const EMCConfig *config);
  void emcStop(EMCDriver *emcp);
#ifdef __cplusplus
}
#endif

#endif /* HAL_USE_EMC */

#endif /* _EMC_H_ */

/** @} */
