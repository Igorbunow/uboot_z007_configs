/* SPDX-License-Identifier: GPL-2.0 */
/*
 * (C) Copyright 2018 Michal Simek <monstr@monstr.eu>
 */

#ifndef __CONFIG_BITMAIN_ANTMINER_S9_H
#define __CONFIG_BITMAIN_ANTMINER_S9_H

#define CFG_SYS_SDRAM_BASE	0x00000000
#define CFG_SYS_SDRAM_SIZE	0x10000000

#define CFG_EXTRA_ENV_SETTINGS \
	"pxefile_addr_r=0x2000000\0" \
	"scriptaddr=0x3000000\0" \
	"kernel_addr_r=0x2000000\0" \
	"fdt_high=0xefff000\0" \
	"initrd_high=0xefff000\0" \
	"devnum=0\0" \
	"wdstop=mw f8005000 ABC000\0" \
	BOOTENV

#include <configs/zynq-common.h>

#endif /* __CONFIG_BITMAIN_ANTMINER_S9_H */
