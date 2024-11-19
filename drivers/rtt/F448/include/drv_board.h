/*
 * Copyright (c) 2006-2022, RT-Thread Development Team
 * Copyright (c) 2022-2024, Xiaohua Semiconductor Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2024-02-20     CDT          first version
 */

#ifndef __BOARD_H__
#define __BOARD_H__

#include <rtthread.h>
#include "hc32_ll.h"
#include "drv_gpio.h"

#ifdef __cplusplus
extern "C" {
#endif

void PeripheralRegister_Unlock(void);
void PeripheralClock_Config(void);
void SystemBase_Config(void);
void SystemClock_Config(void);

#ifdef __cplusplus
}
#endif

#endif
