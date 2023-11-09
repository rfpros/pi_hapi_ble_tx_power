/**
 * @brief Platform Interface HAPI-level API
 *
 * Copyright (c) 2023 Laird Connectivity
 *
 * SPDX-License-Identifier: LicenseRef-LairdConnectivity-Clause
 */
#ifndef MODULES_HAPI_PI_HAPI_BLE_TX_POWER_INCLUDE_PI_SHARED_BLE_TX_POWER_H_
#define MODULES_HAPI_PI_HAPI_BLE_TX_POWER_INCLUDE_PI_SHARED_BLE_TX_POWER_H_

#ifdef __cplusplus
extern "C" {
#endif

/**************************************************************************************************/
/* Includes                                                                                       */
/**************************************************************************************************/
#include <stdbool.h>
#include <pi_hapi_error.h>
#include <pi_hapi_ble_tx_power.h>

/**************************************************************************************************/
/* Global Constants, Macros and Type Definitions                                                  */
/**************************************************************************************************/

/**************************************************************************************************/
/* Global Data Definitions                                                                        */
/**************************************************************************************************/

/**************************************************************************************************/
/* Global Function Definitions                                                                    */
/**************************************************************************************************/
/*!
 * @brief	Any initialisation of the TX power system
 *
 * @return	Error code.
 */
PI_HAPI_ERROR_T pi_dapi_ble_tx_power_init(void);

/*!
 * @brief 	Set the BLE Regulatory region for the BLE system
 * 		The region defaults to REGION_GLOBAL which limits TX power to be correct in
 * 		all regions. If the region is changed it is the users responsibility to
 * 		ensure it does not contravene local legislation.
 * 		The region will default back to Global on device reset.
 *
 * @param region Region regulations to conform to.
 * @return	Error code.
 */
PI_HAPI_ERROR_T pi_dapi_ble_tx_power_set_region(int region);

/*!
 * @brief	Get the last set region value.
 * 		This does not return the physical location of the device.
 *
 * @param value Pointer to value storage
 * @return	Error code.
 */
PI_HAPI_ERROR_T pi_dapi_ble_tx_power_get_region(int *value);

/*!
 * @brief	Set the desired TX power the device should use.
 * 		This may not be the actual power level ultimately used by the device. The
 * 		region setting can lower this if the entered value would contravene local
 * 		legislation.
 *
 * @param tx_power Desired TX power
 * @return	Error code.
 */
PI_HAPI_ERROR_T pi_dapi_ble_tx_power_set_power(int tx_power);

/*!
 * @brief	Gets the last set desired TX power
 *
 * @param value Pointer to value storage
 * @return	Error code.
 */
PI_HAPI_ERROR_T pi_dapi_ble_tx_power_get_power(int *value);

/*!
 * @brief	Returns the actual TX power after processing by the region module.
 *
 * @param value Pointer to value storage
 * @return	Error code.
 */
PI_HAPI_ERROR_T pi_dapi_ble_tx_power_get_actual_power(int *value);

#ifdef __cplusplus
}
#endif

#endif /* MODULES_HAPI_PI_HAPI_BLE_TX_POWER_INCLUDE_PI_SHARED_BLE_TX_POWER_H_ */
