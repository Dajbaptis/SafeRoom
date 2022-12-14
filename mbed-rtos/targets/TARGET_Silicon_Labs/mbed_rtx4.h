/* mbed Microcontroller Library
 * Copyright (c) 2016 ARM Limited
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
 
#ifndef MBED_MBED_RTX_H
#define MBED_MBED_RTX_H
 
#include <stdint.h>
#include "clocking.h"
 
#ifndef OS_CLOCK
#define OS_CLOCK                  REFERENCE_FREQUENCY
#endif
 
#if defined(TARGET_EFM32GG_STK3700)
 
#ifndef INITIAL_SP
#define INITIAL_SP              (0x20020000UL)
#endif
 
// RTX 4 only config below, for backward-compability
 
#ifndef OS_TASKCNT
#define OS_TASKCNT              14
#endif
#ifndef OS_MAINSTKSIZE
#define OS_MAINSTKSIZE          256
#endif
 
#elif defined(TARGET_EFM32HG_STK3400)
 
#ifndef INITIAL_SP
#define INITIAL_SP              (0x20002000UL)
#endif
 
// RTX 4 only config below, for backward-compability
 
#ifndef OS_TASKCNT
#define OS_TASKCNT              6
#endif
#ifndef OS_MAINSTKSIZE
#define OS_MAINSTKSIZE          112
#endif
 
#elif defined(TARGET_EFM32LG_STK3600)
 
#ifndef INITIAL_SP
#define INITIAL_SP              (0x20008000UL)
#endif
 
// RTX 4 only config below, for backward-compability
 
#ifndef OS_TASKCNT
#define OS_TASKCNT              14
#endif
#ifndef OS_MAINSTKSIZE
#define OS_MAINSTKSIZE          128
#endif
 
#elif defined(TARGET_EFM32PG_STK3401)
 
#ifndef INITIAL_SP
#define INITIAL_SP              (0x20008000UL)
#endif
 
// RTX 4 only config below, for backward-compability
 
#ifndef OS_TASKCNT
#define OS_TASKCNT              14
#endif
#ifndef OS_MAINSTKSIZE
#define OS_MAINSTKSIZE          128
#endif
 
#elif defined(TARGET_EFM32WG_STK3800)
 
#ifndef INITIAL_SP
#define INITIAL_SP              (0x20008000UL)
#endif
 
// RTX 4 only config below, for backward-compability
 
#ifndef OS_TASKCNT
#define OS_TASKCNT              14
#endif
#ifndef OS_MAINSTKSIZE
#define OS_MAINSTKSIZE          128
#endif
 
#elif defined(TARGET_EFR32MG1)
 
#ifndef INITIAL_SP
#define INITIAL_SP              (0x20007C00UL)
#endif
 
// RTX 4 only config below, for backward-compability
 
#ifndef OS_TASKCNT
#define OS_TASKCNT              5
#endif
#ifndef OS_MAINSTKSIZE
#define OS_MAINSTKSIZE          256
#endif
 
#elif defined(TARGET_EFR32MG12) || defined(TARGET_EFM32PG12)
 
#ifndef INITIAL_SP
#define INITIAL_SP              (0x20040000UL)
#endif
 
// RTX 4 only config below, for backward-compability
 
#ifndef OS_TASKCNT
#define OS_TASKCNT              14
#endif
#ifndef OS_MAINSTKSIZE
#define OS_MAINSTKSIZE          256
#endif
 
#endif
 
#endif  // MBED_MBED_RTX_H
 
            
