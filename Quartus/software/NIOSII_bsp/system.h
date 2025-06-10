/*
 * system.h - SOPC Builder system and BSP software package information
 *
 * Machine generated for CPU 'NIOSII' in SOPC Builder design 'MP3_PC'
 * SOPC Builder design path: ../../MP3_PC.sopcinfo
 *
 * Generated: Tue Jun 10 11:23:40 CST 2025
 */

/*
 * DO NOT MODIFY THIS FILE
 *
 * Changing this file will have subtle consequences
 * which will almost certainly lead to a nonfunctioning
 * system. If you do modify this file, be aware that your
 * changes will be overwritten and lost when this file
 * is generated again.
 *
 * DO NOT MODIFY THIS FILE
 */

/*
 * License Agreement
 *
 * Copyright (c) 2008
 * Altera Corporation, San Jose, California, USA.
 * All rights reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a
 * copy of this software and associated documentation files (the "Software"),
 * to deal in the Software without restriction, including without limitation
 * the rights to use, copy, modify, merge, publish, distribute, sublicense,
 * and/or sell copies of the Software, and to permit persons to whom the
 * Software is furnished to do so, subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 *
 * This agreement shall be governed in all respects by the laws of the State
 * of California and by the laws of the United States of America.
 */

#ifndef __SYSTEM_H_
#define __SYSTEM_H_

/* Include definitions from linker script generator */
#include "linker.h"


/*
 * Audio configuration
 *
 */

#define ALT_MODULE_CLASS_Audio altera_up_avalon_audio
#define AUDIO_BASE 0x4860
#define AUDIO_IRQ 4
#define AUDIO_IRQ_INTERRUPT_CONTROLLER_ID 0
#define AUDIO_NAME "/dev/Audio"
#define AUDIO_SPAN 16
#define AUDIO_TYPE "altera_up_avalon_audio"


/*
 * AudioConfig configuration
 *
 */

#define ALT_MODULE_CLASS_AudioConfig altera_up_avalon_audio_and_video_config
#define AUDIOCONFIG_BASE 0x4820
#define AUDIOCONFIG_IRQ -1
#define AUDIOCONFIG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define AUDIOCONFIG_NAME "/dev/AudioConfig"
#define AUDIOCONFIG_SPAN 16
#define AUDIOCONFIG_TYPE "altera_up_avalon_audio_and_video_config"


/*
 * AudioRAM configuration
 *
 */

#define ALT_MODULE_CLASS_AudioRAM altera_avalon_onchip_memory2
#define AUDIORAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define AUDIORAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define AUDIORAM_BASE 0x8000
#define AUDIORAM_CONTENTS_INFO ""
#define AUDIORAM_DUAL_PORT 1
#define AUDIORAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define AUDIORAM_INIT_CONTENTS_FILE "MP3_PC_AudioRAM"
#define AUDIORAM_INIT_MEM_CONTENT 0
#define AUDIORAM_INSTANCE_ID "NONE"
#define AUDIORAM_IRQ -1
#define AUDIORAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define AUDIORAM_NAME "/dev/AudioRAM"
#define AUDIORAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define AUDIORAM_RAM_BLOCK_TYPE "AUTO"
#define AUDIORAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define AUDIORAM_SINGLE_CLOCK_OP 1
#define AUDIORAM_SIZE_MULTIPLE 1
#define AUDIORAM_SIZE_VALUE 32768
#define AUDIORAM_SPAN 32768
#define AUDIORAM_TYPE "altera_avalon_onchip_memory2"
#define AUDIORAM_WRITABLE 1


/*
 * CPU configuration
 *
 */

#define ALT_CPU_ARCHITECTURE "altera_nios2_gen2"
#define ALT_CPU_BIG_ENDIAN 0
#define ALT_CPU_BREAK_ADDR 0x00004020
#define ALT_CPU_CPU_ARCH_NIOS2_R1
#define ALT_CPU_CPU_FREQ 50000000u
#define ALT_CPU_CPU_ID_SIZE 1
#define ALT_CPU_CPU_ID_VALUE 0x00000000
#define ALT_CPU_CPU_IMPLEMENTATION "tiny"
#define ALT_CPU_DATA_ADDR_WIDTH 0x10
#define ALT_CPU_DCACHE_LINE_SIZE 0
#define ALT_CPU_DCACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_DCACHE_SIZE 0
#define ALT_CPU_EXCEPTION_ADDR 0x00000020
#define ALT_CPU_FLASH_ACCELERATOR_LINES 0
#define ALT_CPU_FLASH_ACCELERATOR_LINE_SIZE 0
#define ALT_CPU_FLUSHDA_SUPPORTED
#define ALT_CPU_FREQ 50000000
#define ALT_CPU_HARDWARE_DIVIDE_PRESENT 0
#define ALT_CPU_HARDWARE_MULTIPLY_PRESENT 0
#define ALT_CPU_HARDWARE_MULX_PRESENT 0
#define ALT_CPU_HAS_DEBUG_CORE 1
#define ALT_CPU_HAS_DEBUG_STUB
#define ALT_CPU_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define ALT_CPU_HAS_JMPI_INSTRUCTION
#define ALT_CPU_ICACHE_LINE_SIZE 0
#define ALT_CPU_ICACHE_LINE_SIZE_LOG2 0
#define ALT_CPU_ICACHE_SIZE 0
#define ALT_CPU_INST_ADDR_WIDTH 0xf
#define ALT_CPU_NAME "NIOSII"
#define ALT_CPU_OCI_VERSION 1
#define ALT_CPU_RESET_ADDR 0x00000000


/*
 * CPU configuration (with legacy prefix - don't use these anymore)
 *
 */

#define NIOS2_BIG_ENDIAN 0
#define NIOS2_BREAK_ADDR 0x00004020
#define NIOS2_CPU_ARCH_NIOS2_R1
#define NIOS2_CPU_FREQ 50000000u
#define NIOS2_CPU_ID_SIZE 1
#define NIOS2_CPU_ID_VALUE 0x00000000
#define NIOS2_CPU_IMPLEMENTATION "tiny"
#define NIOS2_DATA_ADDR_WIDTH 0x10
#define NIOS2_DCACHE_LINE_SIZE 0
#define NIOS2_DCACHE_LINE_SIZE_LOG2 0
#define NIOS2_DCACHE_SIZE 0
#define NIOS2_EXCEPTION_ADDR 0x00000020
#define NIOS2_FLASH_ACCELERATOR_LINES 0
#define NIOS2_FLASH_ACCELERATOR_LINE_SIZE 0
#define NIOS2_FLUSHDA_SUPPORTED
#define NIOS2_HARDWARE_DIVIDE_PRESENT 0
#define NIOS2_HARDWARE_MULTIPLY_PRESENT 0
#define NIOS2_HARDWARE_MULX_PRESENT 0
#define NIOS2_HAS_DEBUG_CORE 1
#define NIOS2_HAS_DEBUG_STUB
#define NIOS2_HAS_ILLEGAL_INSTRUCTION_EXCEPTION
#define NIOS2_HAS_JMPI_INSTRUCTION
#define NIOS2_ICACHE_LINE_SIZE 0
#define NIOS2_ICACHE_LINE_SIZE_LOG2 0
#define NIOS2_ICACHE_SIZE 0
#define NIOS2_INST_ADDR_WIDTH 0xf
#define NIOS2_OCI_VERSION 1
#define NIOS2_RESET_ADDR 0x00000000


/*
 * Define for each module class mastered by the CPU
 *
 */

#define __ALTERA_AVALON_JTAG_UART
#define __ALTERA_AVALON_ONCHIP_MEMORY2
#define __ALTERA_AVALON_PIO
#define __ALTERA_AVALON_TIMER
#define __ALTERA_NIOS2_GEN2
#define __ALTERA_UP_AVALON_AUDIO
#define __ALTERA_UP_AVALON_AUDIO_AND_VIDEO_CONFIG
#define __ALTERA_UP_AVALON_VIDEO_CHARACTER_BUFFER_WITH_DMA


/*
 * RAM configuration
 *
 */

#define ALT_MODULE_CLASS_RAM altera_avalon_onchip_memory2
#define RAM_ALLOW_IN_SYSTEM_MEMORY_CONTENT_EDITOR 0
#define RAM_ALLOW_MRAM_SIM_CONTENTS_ONLY_FILE 0
#define RAM_BASE 0x0
#define RAM_CONTENTS_INFO ""
#define RAM_DUAL_PORT 0
#define RAM_GUI_RAM_BLOCK_TYPE "AUTO"
#define RAM_INIT_CONTENTS_FILE "MP3_PC_RAM"
#define RAM_INIT_MEM_CONTENT 1
#define RAM_INSTANCE_ID "NONE"
#define RAM_IRQ -1
#define RAM_IRQ_INTERRUPT_CONTROLLER_ID -1
#define RAM_NAME "/dev/RAM"
#define RAM_NON_DEFAULT_INIT_FILE_ENABLED 0
#define RAM_RAM_BLOCK_TYPE "AUTO"
#define RAM_READ_DURING_WRITE_MODE "DONT_CARE"
#define RAM_SINGLE_CLOCK_OP 1
#define RAM_SIZE_MULTIPLE 1
#define RAM_SIZE_VALUE 16384
#define RAM_SPAN 16384
#define RAM_TYPE "altera_avalon_onchip_memory2"
#define RAM_WRITABLE 1


/*
 * REG_7SEG configuration
 *
 */

#define ALT_MODULE_CLASS_REG_7SEG altera_avalon_pio
#define REG_7SEG_BASE 0x4850
#define REG_7SEG_BIT_CLEARING_EDGE_REGISTER 0
#define REG_7SEG_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_7SEG_CAPTURE 0
#define REG_7SEG_DATA_WIDTH 28
#define REG_7SEG_DO_TEST_BENCH_WIRING 0
#define REG_7SEG_DRIVEN_SIM_VALUE 0
#define REG_7SEG_EDGE_TYPE "NONE"
#define REG_7SEG_FREQ 50000000
#define REG_7SEG_HAS_IN 0
#define REG_7SEG_HAS_OUT 1
#define REG_7SEG_HAS_TRI 0
#define REG_7SEG_IRQ -1
#define REG_7SEG_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_7SEG_IRQ_TYPE "NONE"
#define REG_7SEG_NAME "/dev/REG_7SEG"
#define REG_7SEG_RESET_VALUE 0
#define REG_7SEG_SPAN 16
#define REG_7SEG_TYPE "altera_avalon_pio"


/*
 * REG_BUTTON configuration
 *
 */

#define ALT_MODULE_CLASS_REG_BUTTON altera_avalon_pio
#define REG_BUTTON_BASE 0x4830
#define REG_BUTTON_BIT_CLEARING_EDGE_REGISTER 1
#define REG_BUTTON_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_BUTTON_CAPTURE 1
#define REG_BUTTON_DATA_WIDTH 4
#define REG_BUTTON_DO_TEST_BENCH_WIRING 0
#define REG_BUTTON_DRIVEN_SIM_VALUE 0
#define REG_BUTTON_EDGE_TYPE "FALLING"
#define REG_BUTTON_FREQ 50000000
#define REG_BUTTON_HAS_IN 1
#define REG_BUTTON_HAS_OUT 0
#define REG_BUTTON_HAS_TRI 0
#define REG_BUTTON_IRQ 2
#define REG_BUTTON_IRQ_INTERRUPT_CONTROLLER_ID 0
#define REG_BUTTON_IRQ_TYPE "EDGE"
#define REG_BUTTON_NAME "/dev/REG_BUTTON"
#define REG_BUTTON_RESET_VALUE 0
#define REG_BUTTON_SPAN 16
#define REG_BUTTON_TYPE "altera_avalon_pio"


/*
 * REG_SWITCH configuration
 *
 */

#define ALT_MODULE_CLASS_REG_SWITCH altera_avalon_pio
#define REG_SWITCH_BASE 0x4840
#define REG_SWITCH_BIT_CLEARING_EDGE_REGISTER 0
#define REG_SWITCH_BIT_MODIFYING_OUTPUT_REGISTER 0
#define REG_SWITCH_CAPTURE 0
#define REG_SWITCH_DATA_WIDTH 3
#define REG_SWITCH_DO_TEST_BENCH_WIRING 0
#define REG_SWITCH_DRIVEN_SIM_VALUE 0
#define REG_SWITCH_EDGE_TYPE "NONE"
#define REG_SWITCH_FREQ 50000000
#define REG_SWITCH_HAS_IN 1
#define REG_SWITCH_HAS_OUT 0
#define REG_SWITCH_HAS_TRI 0
#define REG_SWITCH_IRQ -1
#define REG_SWITCH_IRQ_INTERRUPT_CONTROLLER_ID -1
#define REG_SWITCH_IRQ_TYPE "NONE"
#define REG_SWITCH_NAME "/dev/REG_SWITCH"
#define REG_SWITCH_RESET_VALUE 0
#define REG_SWITCH_SPAN 16
#define REG_SWITCH_TYPE "altera_avalon_pio"


/*
 * System configuration
 *
 */

#define ALT_DEVICE_FAMILY "Cyclone V"
#define ALT_IRQ_BASE NULL
#define ALT_LEGACY_INTERRUPT_API_PRESENT
#define ALT_LOG_PORT "/dev/null"
#define ALT_LOG_PORT_BASE 0x0
#define ALT_LOG_PORT_DEV null
#define ALT_LOG_PORT_TYPE ""
#define ALT_NUM_EXTERNAL_INTERRUPT_CONTROLLERS 0
#define ALT_NUM_INTERNAL_INTERRUPT_CONTROLLERS 1
#define ALT_NUM_INTERRUPT_CONTROLLERS 1
#define ALT_STDERR "/dev/UART"
#define ALT_STDERR_BASE 0x4870
#define ALT_STDERR_DEV UART
#define ALT_STDERR_IS_JTAG_UART
#define ALT_STDERR_PRESENT
#define ALT_STDERR_TYPE "altera_avalon_jtag_uart"
#define ALT_STDIN "/dev/UART"
#define ALT_STDIN_BASE 0x4870
#define ALT_STDIN_DEV UART
#define ALT_STDIN_IS_JTAG_UART
#define ALT_STDIN_PRESENT
#define ALT_STDIN_TYPE "altera_avalon_jtag_uart"
#define ALT_STDOUT "/dev/UART"
#define ALT_STDOUT_BASE 0x4870
#define ALT_STDOUT_DEV UART
#define ALT_STDOUT_IS_JTAG_UART
#define ALT_STDOUT_PRESENT
#define ALT_STDOUT_TYPE "altera_avalon_jtag_uart"
#define ALT_SYSTEM_NAME "MP3_PC"


/*
 * TIMER_1s configuration
 *
 */

#define ALT_MODULE_CLASS_TIMER_1s altera_avalon_timer
#define TIMER_1S_ALWAYS_RUN 0
#define TIMER_1S_BASE 0x4800
#define TIMER_1S_COUNTER_SIZE 32
#define TIMER_1S_FIXED_PERIOD 1
#define TIMER_1S_FREQ 50000000
#define TIMER_1S_IRQ 1
#define TIMER_1S_IRQ_INTERRUPT_CONTROLLER_ID 0
#define TIMER_1S_LOAD_VALUE 49999
#define TIMER_1S_MULT 0.001
#define TIMER_1S_NAME "/dev/TIMER_1s"
#define TIMER_1S_PERIOD 1
#define TIMER_1S_PERIOD_UNITS "ms"
#define TIMER_1S_RESET_OUTPUT 0
#define TIMER_1S_SNAPSHOT 1
#define TIMER_1S_SPAN 32
#define TIMER_1S_TICKS_PER_SEC 1000
#define TIMER_1S_TIMEOUT_PULSE_OUTPUT 0
#define TIMER_1S_TYPE "altera_avalon_timer"


/*
 * UART configuration
 *
 */

#define ALT_MODULE_CLASS_UART altera_avalon_jtag_uart
#define UART_BASE 0x4870
#define UART_IRQ 0
#define UART_IRQ_INTERRUPT_CONTROLLER_ID 0
#define UART_NAME "/dev/UART"
#define UART_READ_DEPTH 64
#define UART_READ_THRESHOLD 8
#define UART_SPAN 8
#define UART_TYPE "altera_avalon_jtag_uart"
#define UART_WRITE_DEPTH 64
#define UART_WRITE_THRESHOLD 8


/*
 * VGA_BUFFER_avalon_char_buffer_slave configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_BUFFER_avalon_char_buffer_slave altera_up_avalon_video_character_buffer_with_dma
#define VGA_BUFFER_AVALON_CHAR_BUFFER_SLAVE_BASE 0x6000
#define VGA_BUFFER_AVALON_CHAR_BUFFER_SLAVE_IRQ -1
#define VGA_BUFFER_AVALON_CHAR_BUFFER_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_BUFFER_AVALON_CHAR_BUFFER_SLAVE_NAME "/dev/VGA_BUFFER_avalon_char_buffer_slave"
#define VGA_BUFFER_AVALON_CHAR_BUFFER_SLAVE_SPAN 8192
#define VGA_BUFFER_AVALON_CHAR_BUFFER_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * VGA_BUFFER_avalon_char_control_slave configuration
 *
 */

#define ALT_MODULE_CLASS_VGA_BUFFER_avalon_char_control_slave altera_up_avalon_video_character_buffer_with_dma
#define VGA_BUFFER_AVALON_CHAR_CONTROL_SLAVE_BASE 0x4878
#define VGA_BUFFER_AVALON_CHAR_CONTROL_SLAVE_IRQ -1
#define VGA_BUFFER_AVALON_CHAR_CONTROL_SLAVE_IRQ_INTERRUPT_CONTROLLER_ID -1
#define VGA_BUFFER_AVALON_CHAR_CONTROL_SLAVE_NAME "/dev/VGA_BUFFER_avalon_char_control_slave"
#define VGA_BUFFER_AVALON_CHAR_CONTROL_SLAVE_SPAN 8
#define VGA_BUFFER_AVALON_CHAR_CONTROL_SLAVE_TYPE "altera_up_avalon_video_character_buffer_with_dma"


/*
 * hal configuration
 *
 */

#define ALT_INCLUDE_INSTRUCTION_RELATED_EXCEPTION_API
#define ALT_MAX_FD 4
#define ALT_SYS_CLK none
#define ALT_TIMESTAMP_CLK none

#endif /* __SYSTEM_H_ */
