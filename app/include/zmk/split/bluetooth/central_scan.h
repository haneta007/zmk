/* SPDX-License-Identifier: MIT */
#pragma once

#include <stdbool.h>
struct bt_conn;

/* A secondary BLE client must yield the scanner before split reconnection. */
int zmk_split_ble_register_external_scan_stop(int (*stop)(void));
bool zmk_split_ble_peripherals_ready(void);
bool zmk_split_ble_is_peripheral_connection(struct bt_conn *conn);
