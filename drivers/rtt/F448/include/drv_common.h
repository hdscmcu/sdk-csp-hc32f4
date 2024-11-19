/*
 * Copyright (C) 2022-2024, Xiaohua Semiconductor Co., Ltd.
 *
 * SPDX-License-Identifier: Apache-2.0
 *
 * Change Logs:
 * Date           Author       Notes
 * 2023-03-21     CDT          first version
 */

#ifndef __DRV_COMMON_H__
#define __DRV_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

void _Error_Handler(char *s, int num);

#ifndef Error_Handler
#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#endif

#define HC32_FLASH_SIZE_GRANULARITY     (8 * 1024)
#define HC32_FLASH_SIZE                 (256 * 1024)
#define HC32_FLASH_START_ADDRESS        (0)
#define HC32_FLASH_END_ADDRESS          (HC32_FLASH_START_ADDRESS + HC32_FLASH_SIZE)

#define HC32_SRAM_SIZE                  (64)
#define HC32_SRAM_END                   (0x1FFF8000 + HC32_SRAM_SIZE * 1024)

#ifdef __ARMCC_VERSION
extern int Image$$RW_IRAM2$$ZI$$Limit;
#define HEAP_BEGIN                      (&Image$$RW_IRAM2$$ZI$$Limit)
#elif __ICCARM__
#pragma section="HEAP"
#define HEAP_BEGIN                      (__segment_end("HEAP"))
#else
extern int __bss_end;
#define HEAP_BEGIN                      (&__bss_end)
#endif

#define HEAP_END                        HC32_SRAM_END

#ifdef __cplusplus
}
#endif

#endif /* __DRV_COMMON_H__ */
