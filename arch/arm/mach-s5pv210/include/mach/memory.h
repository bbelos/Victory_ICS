/* linux/arch/arm/mach-s5pv210/include/mach/memory.h
 *
 * Copyright (c) 2010 Samsung Electronics Co., Ltd.
 *		http://www.samsung.com/
 *
 * S5PV210 - Memory definitions
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
*/

#ifndef __ASM_ARCH_MEMORY_H
#define __ASM_ARCH_MEMORY_H

#if defined(CONFIG_MACH_SMDKV210)
#define PLAT_PHYS_OFFSET		UL(0x20000000)
#else
#define PLAT_PHYS_OFFSET		UL(0x30000000)
#ifdef CONFIG_DDR_RAM_3G
#define END_MEM			UL(0x58000000)
#endif
#endif

#define CONSISTENT_DMA_SIZE	(SZ_8M + SZ_4M + SZ_2M)

/*
 * Sparsemem support
 * Physical memory can be located from 0x20000000 to 0x7fffffff,
 * so MAX_PHYSMEM_BITS is 31.
 */

#define MAX_PHYSMEM_BITS	31
#define SECTION_SIZE_BITS	28
#define NODE_MEM_SIZE_BITS   28

#endif /* __ASM_ARCH_MEMORY_H */
