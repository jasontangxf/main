/*
 * Copyright (c) 2015-2016, Intel Corporation. All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 * this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 * this list of conditions and the following disclaimer in the documentation
 * and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its contributors
 * may be used to endorse or promote products derived from this software without
 * specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 */

#ifndef BLE_BAS_H_
#define BLE_BAS_H_

#include <stdint.h>

/**
 * @defgroup ble_bas BAS BLE service
 *
 * <table>
 * <tr><th><b>Include file</b><td><tt> \#include "lib/ble/bas/ble_bas.h"</tt>
 * <tr><th><b>Source path</b> <td><tt>framework/src/lib/ble/bas</tt>
 * <tr><th><b>Config flag</b> <td><tt>BLE_BAS_LIB</tt>
 * </table>
 *
 * @ingroup ble_services
 * @{
 */

/* Forward declarations */
struct bt_gatt_attr;

/**
 * Initialize the BAS library and register BAS service.
 *
 * @return 0 in case of success or negative value in case of error.
 */
int ble_bas_init(void);

/**
 * Function to update the battery level.
 *
 * This updates the battery level value. This triggers a notification if remote
 * has enable notifications. Otherwise only value is updated.
 *
 * @param level New battery level (0-100%)
 *
 * @return 0 in case of success or negative value in case of error.
 */
int ble_bas_update(uint8_t level);

/**
 * Retrieve the reference of the BAS level characteristic value attribute.
 *
 * @note This function is for test purposes only.
 *
 * @return The reference of the BAS level characteristic value attribute.
 */
const struct bt_gatt_attr *ble_bas_attr(void);

/**
 * @}
 */
#endif /* BLE_BAS_H_ */
