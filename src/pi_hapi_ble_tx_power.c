/**
 * @brief Platform Interface HAPI-level API
 *
 * Copyright (c) 2023 Laird Connectivity
 *
 * SPDX-License-Identifier: LicenseRef-LairdConnectivity-Clause
 */

/**************************************************************************************************/
/* Includes                                                                                       */
/**************************************************************************************************/
#include <stdbool.h>
#include <stdint.h>
#include <pi_hapi_error.h>
#include <pi_shared_ble_tx_power.h>
#include <pi_hapi_ble_tx_power.h>

/**************************************************************************************************/
/* Local Constants, Macros and Type Definitions                                                   */
/**************************************************************************************************/

/**************************************************************************************************/
/* Local Data Definitions                                                                         */
/**************************************************************************************************/

/**************************************************************************************************/
/* Global Data Definitions                                                                        */
/**************************************************************************************************/

/**************************************************************************************************/
/* Local Function Prototypes                                                                      */
/**************************************************************************************************/

/**************************************************************************************************/
/* Global Function Definitions                                                                    */
/**************************************************************************************************/

/**************************************************************************************************/
/* Local Function Definitions                                                                     */
/**************************************************************************************************/
PI_HAPI_ERROR_T pi_hapi_ble_tx_power_init(void)
{
	return pi_dapi_ble_tx_power_init();
}
PI_HAPI_ERROR_T pi_hapi_ble_tx_power_set_region(int region)
{
	return pi_dapi_ble_tx_power_set_region(region);
}
PI_HAPI_ERROR_T pi_hapi_ble_tx_power_get_region(int *value)
{
	return pi_dapi_ble_tx_power_get_region(value);
}
PI_HAPI_ERROR_T pi_hapi_ble_tx_power_set_power(int tx_power)
{
	return pi_dapi_ble_tx_power_set_power(tx_power);
}
PI_HAPI_ERROR_T pi_hapi_ble_tx_power_get_power(int *value)
{
	return pi_dapi_ble_tx_power_get_power(value);
}
PI_HAPI_ERROR_T pi_hapi_ble_tx_power_get_actual_power(int *val)
{
	return pi_dapi_ble_tx_power_get_actual_power(val);
}
