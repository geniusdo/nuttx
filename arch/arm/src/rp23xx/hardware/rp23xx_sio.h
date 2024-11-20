/****************************************************************************
 * arch/arm/src/rp23xx/hardware/rp23xx_sio.h
 *
 * Licensed to the Apache Software Foundation (ASF) under one or more
 * contributor license agreements.  See the NOTICE file distributed with
 * this work for additional information regarding copyright ownership.  The
 * ASF licenses this file to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance with the
 * License.  You may obtain a copy of the License at
 *
 *   http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS, WITHOUT
 * WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.  See the
 * License for the specific language governing permissions and limitations
 * under the License.
 *
 ****************************************************************************/

#ifndef __ARCH_ARM_SRC_RP23XX_HARDWARE_RP23XX_SIO_H
#define __ARCH_ARM_SRC_RP23XX_HARDWARE_RP23XX_SIO_H

/****************************************************************************
 * Included Files
 ****************************************************************************/

#include "hardware/rp23xx_memorymap.h"

/****************************************************************************
 * Pre-processor Definitions
 ****************************************************************************/

/* Register offsets *********************************************************/

#define RP23XX_SIO_CPUID_OFFSET                 0x00000000
#define RP23XX_SIO_GPIO_IN_OFFSET               0x00000004
#define RP23XX_SIO_GPIO_HI_IN_OFFSET            0x00000008
#define RP23XX_SIO_GPIO_OUT_OFFSET              0x00000010
#define RP23XX_SIO_GPIO_HI_OUT_OFFSET           0x00000014
#define RP23XX_SIO_GPIO_OUT_SET_OFFSET          0x00000018
#define RP23XX_SIO_GPIO_HI_OUT_SET_OFFSET       0x0000001c
#define RP23XX_SIO_GPIO_OUT_CLR_OFFSET          0x00000020
#define RP23XX_SIO_GPIO_HI_OUT_CLR_OFFSET       0x00000024
#define RP23XX_SIO_GPIO_OUT_XOR_OFFSET          0x00000028
#define RP23XX_SIO_GPIO_HI_OUT_XOR_OFFSET       0x0000002c
#define RP23XX_SIO_GPIO_OE_OFFSET               0x00000030
#define RP23XX_SIO_GPIO_HI_OE_OFFSET            0x00000034
#define RP23XX_SIO_GPIO_OE_SET_OFFSET           0x00000038
#define RP23XX_SIO_GPIO_HI_OE_SET_OFFSET        0x0000003c
#define RP23XX_SIO_GPIO_OE_CLR_OFFSET           0x00000040
#define RP23XX_SIO_GPIO_HI_OE_CLR_OFFSET        0x00000044
#define RP23XX_SIO_GPIO_OE_XOR_OFFSET           0x00000048
#define RP23XX_SIO_GPIO_HI_OE_XOR_OFFSET        0x0000004c
#define RP23XX_SIO_FIFO_ST_OFFSET               0x00000050
#define RP23XX_SIO_FIFO_WR_OFFSET               0x00000054
#define RP23XX_SIO_FIFO_RD_OFFSET               0x00000058
#define RP23XX_SIO_SPINLOCK_ST_OFFSET           0x0000005c
#define RP23XX_SIO_INTERP0_ACCUM0_OFFSET        0x00000080
#define RP23XX_SIO_INTERP0_ACCUM1_OFFSET        0x00000084
#define RP23XX_SIO_INTERP0_BASE0_OFFSET         0x00000088
#define RP23XX_SIO_INTERP0_BASE1_OFFSET         0x0000008c
#define RP23XX_SIO_INTERP0_BASE2_OFFSET         0x00000090
#define RP23XX_SIO_INTERP0_POP_LANE0_OFFSET     0x00000094
#define RP23XX_SIO_INTERP0_POP_LANE1_OFFSET     0x00000098
#define RP23XX_SIO_INTERP0_POP_FULL_OFFSET      0x0000009c
#define RP23XX_SIO_INTERP0_PEEK_LANE0_OFFSET    0x000000a0
#define RP23XX_SIO_INTERP0_PEEK_LANE1_OFFSET    0x000000a4
#define RP23XX_SIO_INTERP0_PEEK_FULL_OFFSET     0x000000a8
#define RP23XX_SIO_INTERP0_CTRL_LANE0_OFFSET    0x000000ac
#define RP23XX_SIO_INTERP0_CTRL_LANE1_OFFSET    0x000000b0
#define RP23XX_SIO_INTERP0_ACCUM0_ADD_OFFSET    0x000000b4
#define RP23XX_SIO_INTERP0_ACCUM1_ADD_OFFSET    0x000000b8
#define RP23XX_SIO_INTERP0_BASE_1AND0_OFFSET    0x000000bc
#define RP23XX_SIO_INTERP1_ACCUM0_OFFSET        0x000000c0
#define RP23XX_SIO_INTERP1_ACCUM1_OFFSET        0x000000c4
#define RP23XX_SIO_INTERP1_BASE0_OFFSET         0x000000c8
#define RP23XX_SIO_INTERP1_BASE1_OFFSET         0x000000cc
#define RP23XX_SIO_INTERP1_BASE2_OFFSET         0x000000d0
#define RP23XX_SIO_INTERP1_POP_LANE0_OFFSET     0x000000d4
#define RP23XX_SIO_INTERP1_POP_LANE1_OFFSET     0x000000d8
#define RP23XX_SIO_INTERP1_POP_FULL_OFFSET      0x000000dc
#define RP23XX_SIO_INTERP1_PEEK_LANE0_OFFSET    0x000000e0
#define RP23XX_SIO_INTERP1_PEEK_LANE1_OFFSET    0x000000e4
#define RP23XX_SIO_INTERP1_PEEK_FULL_OFFSET     0x000000e8
#define RP23XX_SIO_INTERP1_CTRL_LANE0_OFFSET    0x000000ec
#define RP23XX_SIO_INTERP1_CTRL_LANE1_OFFSET    0x000000f0
#define RP23XX_SIO_INTERP1_ACCUM0_ADD_OFFSET    0x000000f4
#define RP23XX_SIO_INTERP1_ACCUM1_ADD_OFFSET    0x000000f8
#define RP23XX_SIO_INTERP1_BASE_1AND0_OFFSET    0x000000fc
#define RP23XX_SIO_SPINLOCK_OFFSET(n)           ((n) * 4 + 0x000100)
#define RP23XX_SIO_DOORBELL_OUT_SET_OFFSET      0x00000180
#define RP23XX_SIO_DOORBELL_OUT_CLR_OFFSET      0x00000184
#define RP23XX_SIO_DOORBELL_IN_SET_OFFSET       0x00000188
#define RP23XX_SIO_DOORBELL_IN_CLR_OFFSET       0x0000018c
#define RP23XX_SIO_PERI_NONSEC_OFFSET           0x00000190
#define RP23XX_SIO_RISCV_SOFTIRQ_OFFSET         0x000001a0
#define RP23XX_SIO_MTIME_CTRL_OFFSET            0x000001a4
#define RP23XX_SIO_MTIME_OFFSET                 0x000001b0
#define RP23XX_SIO_MTIMEH_OFFSET                0x000001b4
#define RP23XX_SIO_MTIMECMP_OFFSET              0x000001b8
#define RP23XX_SIO_MTIMECMPH_OFFSET             0x000001bc
#define RP23XX_SIO_TMDS_CTRL_OFFSET             0x000001c0
#define RP23XX_SIO_TMDS_WDATA_OFFSET            0x000001c4
#define RP23XX_SIO_TMDS_PEEK_SINGLE_OFFSET      0x000001c8
#define RP23XX_SIO_TMDS_POP_SINGLE_OFFSET       0x000001cc
#define RP23XX_SIO_TMDS_PEEK_DOUBLE_L0_OFFSET   0x000001d0
#define RP23XX_SIO_TMDS_POP_DOUBLE_L0_OFFSET    0x000001d4
#define RP23XX_SIO_TMDS_PEEK_DOUBLE_L1_OFFSET   0x000001d8
#define RP23XX_SIO_TMDS_POP_DOUBLE_L1_OFFSET    0x000001dc
#define RP23XX_SIO_TMDS_PEEK_DOUBLE_L2_OFFSET   0x000001e0
#define RP23XX_SIO_TMDS_POP_DOUBLE_L2_OFFSET    0x000001e4

/* Register definitions *****************************************************/

#define RP23XX_SIO_CPUID               (RP23XX_SIO_BASE + RP23XX_SIO_CPUID_OFFSET)
#define RP23XX_SIO_GPIO_IN             (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_IN_OFFSET)
#define RP23XX_SIO_GPIO_HI_IN          (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_IN_OFFSET)
#define RP23XX_SIO_GPIO_OUT            (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OUT_OFFSET)
#define RP23XX_SIO_GPIO_OUT_SET        (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OUT_SET_OFFSET)
#define RP23XX_SIO_GPIO_OUT_CLR        (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OUT_CLR_OFFSET)
#define RP23XX_SIO_GPIO_OUT_XOR        (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OUT_XOR_OFFSET)
#define RP23XX_SIO_GPIO_OE             (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OE_OFFSET)
#define RP23XX_SIO_GPIO_OE_SET         (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OE_SET_OFFSET)
#define RP23XX_SIO_GPIO_OE_CLR         (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OE_CLR_OFFSET)
#define RP23XX_SIO_GPIO_OE_XOR         (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_OE_XOR_OFFSET)
#define RP23XX_SIO_GPIO_HI_OUT         (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OUT_OFFSET)
#define RP23XX_SIO_GPIO_HI_OUT_SET     (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OUT_SET_OFFSET)
#define RP23XX_SIO_GPIO_HI_OUT_CLR     (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OUT_CLR_OFFSET)
#define RP23XX_SIO_GPIO_HI_OUT_XOR     (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OUT_XOR_OFFSET)
#define RP23XX_SIO_GPIO_HI_OE          (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OE_OFFSET)
#define RP23XX_SIO_GPIO_HI_OE_SET      (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OE_SET_OFFSET)
#define RP23XX_SIO_GPIO_HI_OE_CLR      (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OE_CLR_OFFSET)
#define RP23XX_SIO_GPIO_HI_OE_XOR      (RP23XX_SIO_BASE + RP23XX_SIO_GPIO_HI_OE_XOR_OFFSET)
#define RP23XX_SIO_FIFO_ST             (RP23XX_SIO_BASE + RP23XX_SIO_FIFO_ST_OFFSET)
#define RP23XX_SIO_FIFO_WR             (RP23XX_SIO_BASE + RP23XX_SIO_FIFO_WR_OFFSET)
#define RP23XX_SIO_FIFO_RD             (RP23XX_SIO_BASE + RP23XX_SIO_FIFO_RD_OFFSET)
#define RP23XX_SIO_SPINLOCK_ST         (RP23XX_SIO_BASE + RP23XX_SIO_SPINLOCK_ST_OFFSET)
#define RP23XX_SIO_DIV_UDIVIDEND       (RP23XX_SIO_BASE + RP23XX_SIO_DIV_UDIVIDEND_OFFSET)
#define RP23XX_SIO_DIV_UDIVISOR        (RP23XX_SIO_BASE + RP23XX_SIO_DIV_UDIVISOR_OFFSET)
#define RP23XX_SIO_DIV_SDIVIDEND       (RP23XX_SIO_BASE + RP23XX_SIO_DIV_SDIVIDEND_OFFSET)
#define RP23XX_SIO_DIV_SDIVISOR        (RP23XX_SIO_BASE + RP23XX_SIO_DIV_SDIVISOR_OFFSET)
#define RP23XX_SIO_DIV_QUOTIENT        (RP23XX_SIO_BASE + RP23XX_SIO_DIV_QUOTIENT_OFFSET)
#define RP23XX_SIO_DIV_REMAINDER       (RP23XX_SIO_BASE + RP23XX_SIO_DIV_REMAINDER_OFFSET)
#define RP23XX_SIO_DIV_CSR             (RP23XX_SIO_BASE + RP23XX_SIO_DIV_CSR_OFFSET)
#define RP23XX_SIO_INTERP0_ACCUM0      (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_ACCUM0_OFFSET)
#define RP23XX_SIO_INTERP0_ACCUM1      (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_ACCUM1_OFFSET)
#define RP23XX_SIO_INTERP0_BASE0       (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_BASE0_OFFSET)
#define RP23XX_SIO_INTERP0_BASE1       (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_BASE1_OFFSET)
#define RP23XX_SIO_INTERP0_BASE2       (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_BASE2_OFFSET)
#define RP23XX_SIO_INTERP0_POP_LANE0   (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_POP_LANE0_OFFSET)
#define RP23XX_SIO_INTERP0_POP_LANE1   (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_POP_LANE1_OFFSET)
#define RP23XX_SIO_INTERP0_POP_FULL    (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_POP_FULL_OFFSET)
#define RP23XX_SIO_INTERP0_PEEK_LANE0  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_PEEK_LANE0_OFFSET)
#define RP23XX_SIO_INTERP0_PEEK_LANE1  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_PEEK_LANE1_OFFSET)
#define RP23XX_SIO_INTERP0_PEEK_FULL   (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_PEEK_FULL_OFFSET)
#define RP23XX_SIO_INTERP0_CTRL_LANE0  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_CTRL_LANE0_OFFSET)
#define RP23XX_SIO_INTERP0_CTRL_LANE1  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_CTRL_LANE1_OFFSET)
#define RP23XX_SIO_INTERP0_ACCUM0_ADD  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_ACCUM0_ADD_OFFSET)
#define RP23XX_SIO_INTERP0_ACCUM1_ADD  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_ACCUM1_ADD_OFFSET)
#define RP23XX_SIO_INTERP0_BASE_1AND0  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP0_BASE_1AND0_OFFSET)
#define RP23XX_SIO_INTERP1_ACCUM0      (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_ACCUM0_OFFSET)
#define RP23XX_SIO_INTERP1_ACCUM1      (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_ACCUM1_OFFSET)
#define RP23XX_SIO_INTERP1_BASE0       (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_BASE0_OFFSET)
#define RP23XX_SIO_INTERP1_BASE1       (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_BASE1_OFFSET)
#define RP23XX_SIO_INTERP1_BASE2       (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_BASE2_OFFSET)
#define RP23XX_SIO_INTERP1_POP_LANE0   (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_POP_LANE0_OFFSET)
#define RP23XX_SIO_INTERP1_POP_LANE1   (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_POP_LANE1_OFFSET)
#define RP23XX_SIO_INTERP1_POP_FULL    (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_POP_FULL_OFFSET)
#define RP23XX_SIO_INTERP1_PEEK_LANE0  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_PEEK_LANE0_OFFSET)
#define RP23XX_SIO_INTERP1_PEEK_LANE1  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_PEEK_LANE1_OFFSET)
#define RP23XX_SIO_INTERP1_PEEK_FULL   (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_PEEK_FULL_OFFSET)
#define RP23XX_SIO_INTERP1_CTRL_LANE0  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_CTRL_LANE0_OFFSET)
#define RP23XX_SIO_INTERP1_CTRL_LANE1  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_CTRL_LANE1_OFFSET)
#define RP23XX_SIO_INTERP1_ACCUM0_ADD  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_ACCUM0_ADD_OFFSET)
#define RP23XX_SIO_INTERP1_ACCUM1_ADD  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_ACCUM1_ADD_OFFSET)
#define RP23XX_SIO_INTERP1_BASE_1AND0  (RP23XX_SIO_BASE + RP23XX_SIO_INTERP1_BASE_1AND0_OFFSET)
#define RP23XX_SIO_SPINLOCK(n)         (RP23XX_SIO_BASE + RP23XX_SIO_SPINLOCK_OFFSET(n))

/* Register bit definitions *************************************************/

#define RP23XX_SIO_GPIO_IN_MASK                         (0xffffffff)
#define RP23XX_SIO_GPIO_HI_IN_MASK                      (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_IN_QSPI_SD_MASK              (0xf0000000)
#define RP23XX_SIO_GPIO_HI_IN_QSPI_CSN                  (1 << 27)
#define RP23XX_SIO_GPIO_HI_IN_QSPI_SCK                  (1 << 26)
#define RP23XX_SIO_GPIO_HI_IN_USB_DM                    (1 << 25)
#define RP23XX_SIO_GPIO_HI_IN_USB_DP                    (1 << 24)
#define RP23XX_SIO_GPIO_HI_IN_GPIO_MASK                 (0x0000ffff)
#define RP23XX_SIO_GPIO_OUT_MASK                        (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OUT_MASK                     (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OUT_QSPI_SD_MASK             (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OUT_QSPI_CSN                 (1 << 27)
#define RP23XX_SIO_GPIO_HI_OUT_QSPI_SCK                 (1 << 26)
#define RP23XX_SIO_GPIO_HI_OUT_USB_DM                   (1 << 25)
#define RP23XX_SIO_GPIO_HI_OUT_USB_DP                   (1 << 24)
#define RP23XX_SIO_GPIO_HI_OUT_GPIO_MASK                (0x0000ffff)
#define RP23XX_SIO_GPIO_OUT_SET_MASK                    (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OUT_SET_MASK                 (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OUT_SET_QSPI_SD_MASK         (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OUT_SET_QSPI_CSN             (1 << 27)
#define RP23XX_SIO_GPIO_HI_OUT_SET_QSPI_SCK             (1 << 26)
#define RP23XX_SIO_GPIO_HI_OUT_SET_USB_DM               (1 << 25)
#define RP23XX_SIO_GPIO_HI_OUT_SET_USB_DP               (1 << 24)
#define RP23XX_SIO_GPIO_HI_OUT_SET_GPIO_MASK            (0x0000ffff)
#define RP23XX_SIO_GPIO_OUT_CLR_MASK                    (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OUT_CLR_MASK                 (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OUT_CLR_QSPI_SD_MASK         (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OUT_CLR_QSPI_CSN             (1 << 27)
#define RP23XX_SIO_GPIO_HI_OUT_CLR_QSPI_SCK             (1 << 26)
#define RP23XX_SIO_GPIO_HI_OUT_CLR_USB_DM               (1 << 25)
#define RP23XX_SIO_GPIO_HI_OUT_CLR_USB_DP               (1 << 24)
#define RP23XX_SIO_GPIO_HI_OUT_CLR_GPIO_MASK            (0x0000ffff)
#define RP23XX_SIO_GPIO_OUT_XOR_MASK                    (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OUT_XOR_MASK                 (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OUT_XOR_QSPI_SD_MASK         (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OUT_XOR_QSPI_CSN             (1 << 27)
#define RP23XX_SIO_GPIO_HI_OUT_XOR_QSPI_SCK             (1 << 26)
#define RP23XX_SIO_GPIO_HI_OUT_XOR_USB_DM               (1 << 25)
#define RP23XX_SIO_GPIO_HI_OUT_XOR_USB_DP               (1 << 24)
#define RP23XX_SIO_GPIO_HI_OUT_XOR_GPIO_MASK            (0x0000ffff)
#define RP23XX_SIO_GPIO_OE_MASK                         (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OE_MASK                      (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OE_QSPI_SD_MASK              (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OE_QSPI_CSN                  (1 << 27)
#define RP23XX_SIO_GPIO_HI_OE_QSPI_SCK                  (1 << 26)
#define RP23XX_SIO_GPIO_HI_OE_USB_DM                    (1 << 25)
#define RP23XX_SIO_GPIO_HI_OE_USB_DP                    (1 << 24)
#define RP23XX_SIO_GPIO_HI_OE_GPIO_MASK                 (0x0000ffff)
#define RP23XX_SIO_GPIO_OE_SET_MASK                     (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OE_SET_MASK                  (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OE_SET_QSPI_SD_MASK          (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OE_SET_QSPI_CSN              (1 << 27)
#define RP23XX_SIO_GPIO_HI_OE_SET_QSPI_SCK              (1 << 26)
#define RP23XX_SIO_GPIO_HI_OE_SET_USB_DM                (1 << 25)
#define RP23XX_SIO_GPIO_HI_OE_SET_USB_DP                (1 << 24)
#define RP23XX_SIO_GPIO_HI_OE_SET_GPIO_MASK             (0x0000ffff)
#define RP23XX_SIO_GPIO_OE_CLR_MASK                     (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OE_CLR_MASK                  (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OE_CLR_QSPI_SD_MASK          (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OE_CLR_QSPI_CSN              (1 << 27)
#define RP23XX_SIO_GPIO_HI_OE_CLR_QSPI_SCK              (1 << 26)
#define RP23XX_SIO_GPIO_HI_OE_CLR_USB_DM                (1 << 25)
#define RP23XX_SIO_GPIO_HI_OE_CLR_USB_DP                (1 << 24)
#define RP23XX_SIO_GPIO_HI_OE_CLR_GPIO_MASK             (0x0000ffff)
#define RP23XX_SIO_GPIO_OE_XOR_MASK                     (0xffffffff)
#define RP23XX_SIO_GPIO_HI_OE_XOR_MASK                  (0xff00ffff)
#define RP23XX_SIO_GPIO_HI_OE_XOR_QSPI_SD_MASK          (0xf0000000)
#define RP23XX_SIO_GPIO_HI_OE_XOR_QSPI_CSN              (1 << 27)
#define RP23XX_SIO_GPIO_HI_OE_XOR_QSPI_SCK              (1 << 26)
#define RP23XX_SIO_GPIO_HI_OE_XOR_USB_DM                (1 << 25)
#define RP23XX_SIO_GPIO_HI_OE_XOR_USB_DP                (1 << 24)
#define RP23XX_SIO_GPIO_HI_OE_XOR_GPIO_MASK             (0x0000ffff)
#define RP23XX_SIO_FIFO_ST_MASK                         (0x0000000f)
#define RP23XX_SIO_FIFO_ST_ROE                          (1 << 3)
#define RP23XX_SIO_FIFO_ST_WOF                          (1 << 2)
#define RP23XX_SIO_FIFO_ST_RDY                          (1 << 1)
#define RP23XX_SIO_FIFO_ST_VLD                          (1 << 0)
#define RP23XX_SIO_FIFO_WR_MASK                         (0xffffffff)
#define RP23XX_SIO_FIFO_RD_MASK                         (0xffffffff)
#define RP23XX_SIO_SPINLOCK_ST_MASK                     (0xffffffff)
#define RP23XX_SIO_INTERP0_ACCUM0_MASK                  (0xffffffff)
#define RP23XX_SIO_INTERP0_ACCUM1_MASK                  (0xffffffff)
#define RP23XX_SIO_INTERP0_BASE0_MASK                   (0xffffffff)
#define RP23XX_SIO_INTERP0_BASE1_MASK                   (0xffffffff)
#define RP23XX_SIO_INTERP0_BASE2_MASK                   (0xffffffff)
#define RP23XX_SIO_INTERP0_POP_LANE0_MASK               (0xffffffff)
#define RP23XX_SIO_INTERP0_POP_LANE1_MASK               (0xffffffff)
#define RP23XX_SIO_INTERP0_POP_FULL_MASK                (0xffffffff)
#define RP23XX_SIO_INTERP0_PEEK_LANE0_MASK              (0xffffffff)
#define RP23XX_SIO_INTERP0_PEEK_LANE1_MASK              (0xffffffff)
#define RP23XX_SIO_INTERP0_PEEK_FULL_MASK               (0xffffffff)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_MASK              (0x03bfffff)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_OVERF             (1 << 25)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_OVERF1            (1 << 24)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_OVERF0            (1 << 23)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_BLEND             (1 << 21)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_FORCE_MSB_MASK    (0x00180000)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_ADD_RAW           (1 << 18)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_CROSS_RESULT      (1 << 17)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_CROSS_INPUT       (1 << 16)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_SIGNED            (1 << 15)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_MASK_MSB_MASK     (0x00007c00)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_MASK_LSB_MASK     (0x000003e0)
#define RP23XX_SIO_INTERP0_CTRL_LANE0_SHIFT_MASK        (0x0000001f)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_MASK              (0x001fffff)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_FORCE_MSB_MASK    (0x00180000)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_ADD_RAW           (1 << 18)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_CROSS_RESULT      (1 << 17)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_CROSS_INPUT       (1 << 16)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_SIGNED            (1 << 15)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_MASK_MSB_MASK     (0x00007c00)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_MASK_LSB_MASK     (0x000003e0)
#define RP23XX_SIO_INTERP0_CTRL_LANE1_SHIFT_MASK        (0x0000001f)
#define RP23XX_SIO_INTERP0_ACCUM0_ADD_MASK              (0x00ffffff)
#define RP23XX_SIO_INTERP0_ACCUM1_ADD_MASK              (0x00ffffff)
#define RP23XX_SIO_INTERP0_BASE_1AND0_MASK              (0xffffffff)
#define RP23XX_SIO_INTERP1_ACCUM0_MASK                  (0xffffffff)
#define RP23XX_SIO_INTERP1_ACCUM1_MASK                  (0xffffffff)
#define RP23XX_SIO_INTERP1_BASE0_MASK                   (0xffffffff)
#define RP23XX_SIO_INTERP1_BASE1_MASK                   (0xffffffff)
#define RP23XX_SIO_INTERP1_BASE2_MASK                   (0xffffffff)
#define RP23XX_SIO_INTERP1_POP_LANE0_MASK               (0xffffffff)
#define RP23XX_SIO_INTERP1_POP_LANE1_MASK               (0xffffffff)
#define RP23XX_SIO_INTERP1_POP_FULL_MASK                (0xffffffff)
#define RP23XX_SIO_INTERP1_PEEK_LANE0_MASK              (0xffffffff)
#define RP23XX_SIO_INTERP1_PEEK_LANE1_MASK              (0xffffffff)
#define RP23XX_SIO_INTERP1_PEEK_FULL_MASK               (0xffffffff)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_MASK              (0x03dfffff)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_OVERF             (1 << 25)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_OVERF1            (1 << 24)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_OVERF0            (1 << 23)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_CLAMP             (1 << 22)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_FORCE_MSB_MASK    (0x00180000)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_ADD_RAW           (1 << 18)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_CROSS_RESULT      (1 << 17)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_CROSS_INPUT       (1 << 16)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_SIGNED            (1 << 15)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_MASK_MSB_MASK     (0x00007c00)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_MASK_LSB_MASK     (0x000003e0)
#define RP23XX_SIO_INTERP1_CTRL_LANE0_SHIFT_MASK        (0x0000001f)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_MASK              (0x001fffff)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_FORCE_MSB_MASK    (0x00180000)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_ADD_RAW           (1 << 18)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_CROSS_RESULT      (1 << 17)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_CROSS_INPUT       (1 << 16)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_SIGNED            (1 << 15)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_MASK_MSB_MASK     (0x00007c00)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_MASK_LSB_MASK     (0x000003e0)
#define RP23XX_SIO_INTERP1_CTRL_LANE1_SHIFT_MASK        (0x0000001f)
#define RP23XX_SIO_INTERP1_ACCUM0_ADD_MASK              (0x00ffffff)
#define RP23XX_SIO_INTERP1_ACCUM1_ADD_MASK              (0x00ffffff)
#define RP23XX_SIO_INTERP1_BASE_1AND0_MASK              (0xffffffff)
#define RP23XX_SIO_DOORBELL_OUT_SET_MASK                (0x000000ff)
#define RP23XX_SIO_DOORBELL_OUT_CLR_MASK                (0x000000ff)
#define RP23XX_SIO_DOORBELL_IN_SET_MASK                 (0x000000ff)
#define RP23XX_SIO_DOORBELL_IN_CLR_MASK                 (0x000000ff)
#define RP23XX_SIO_PERI_NONSEC_MASK                     (0x00000023)
#define RP23XX_SIO_PERI_NONSEC_TMDS_MASK                (0x00000020)
#define RP23XX_SIO_PERI_NONSEC_INTERP1                  (1 << 1)
#define RP23XX_SIO_PERI_NONSEC_INTERP0                  (1 << 0)
#define RP23XX_SIO_RISCV_SOFTIRQ_MASK                   (0x00000303)
#define RP23XX_SIO_RISCV_SOFTIRQ_CORE1_CLR              (1 << 9)
#define RP23XX_SIO_RISCV_SOFTIRQ_CORE0_CLR              (1 << 8)
#define RP23XX_SIO_RISCV_SOFTIRQ_CORE1_SET              (1 << 1)
#define RP23XX_SIO_RISCV_SOFTIRQ_CORE0_SET              (1 << 0)
#define RP23XX_SIO_MTIME_CTRL_MASK                      (0x0000000f)
#define RP23XX_SIO_MTIME_CTRL_DBGPAUSE_CORE1            (1 << 3)
#define RP23XX_SIO_MTIME_CTRL_DBGPAUSE_CORE0            (1 << 2)
#define RP23XX_SIO_MTIME_CTRL_FULLSPEED                 (1 << 1)
#define RP23XX_SIO_MTIME_CTRL_EN                        (1 << 0)
#define RP23XX_SIO_MTIME_MASK                           (0xffffffff)
#define RP23XX_SIO_MTIMEH_MASK                          (0xffffffff)
#define RP23XX_SIO_MTIMECMP_MASK                        (0xffffffff)
#define RP23XX_SIO_MTIMECMPH_MASK                       (0xffffffff)
#define RP23XX_SIO_TMDS_CTRL_MASK                       (0x1f9fffff)
#define RP23XX_SIO_TMDS_CTRL_CLEAR_BALANCE              (1 << 28)
#define RP23XX_SIO_TMDS_CTRL_PIX2_NOSHIFT               (1 << 27)
#define RP23XX_SIO_TMDS_CTRL_PIX_SHIFT_MASK             (0x07000000)
#define RP23XX_SIO_TMDS_CTRL_INTERLEAVE                 (1 << 23)
#define RP23XX_SIO_TMDS_CTRL_L2_NMASK_MASK              (0x001c0000)
#define RP23XX_SIO_TMDS_CTRL_L1_NMASK_MASK              (0x00038000)
#define RP23XX_SIO_TMDS_CTRL_L0_NMASK_MASK              (0x00007000)
#define RP23XX_SIO_TMDS_CTRL_L2_ROT_MASK                (0x00000f00)
#define RP23XX_SIO_TMDS_CTRL_L1_ROT_MASK                (0x000000f0)
#define RP23XX_SIO_TMDS_CTRL_L0_ROT_MASK                (0x0000000f)
#define RP23XX_SIO_TMDS_WDATA_MASK                      (0xffffffff)
#define RP23XX_SIO_TMDS_PEEK_SINGLE_MASK                (0xffffffff)
#define RP23XX_SIO_TMDS_POP_SINGLE_MASK                 (0xffffffff)
#define RP23XX_SIO_TMDS_PEEK_DOUBLE_L0_MASK             (0xffffffff)
#define RP23XX_SIO_TMDS_POP_DOUBLE_L0_MASK              (0xffffffff)
#define RP23XX_SIO_TMDS_PEEK_DOUBLE_L1_MASK             (0xffffffff)
#define RP23XX_SIO_TMDS_POP_DOUBLE_L1_MASK              (0xffffffff)
#define RP23XX_SIO_TMDS_PEEK_DOUBLE_L2_MASK             (0xffffffff)
#define RP23XX_SIO_TMDS_POP_DOUBLE_L2_MASK              (0xffffffff)

#endif /* __ARCH_ARM_SRC_RP23XX_HARDWARE_RP23XX_SIO_H */