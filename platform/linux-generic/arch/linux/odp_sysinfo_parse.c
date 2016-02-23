/* Copyright (c) 2016, Linaro Limited
 * All rights reserved.
 *
 * SPDX-License-Identifier:     BSD-3-Clause
 */

#include <odp_internal.h>
#include <odp_debug_internal.h>
#include <string.h>

int odp_cpuinfo_parser(FILE *file ODP_UNUSED, odp_system_info_t *sysinfo)
{
	int i;

	ODP_DBG("Warning: use dummy values for freq and model string\n");
	ODP_DBG("Refer to https://bugs.linaro.org/show_bug.cgi?id=1870\n");
	for (i = 0; i < MAX_CPU_NUMBER; i++) {
		sysinfo->cpu_hz_max[i] = 1400000000;
		strcpy(sysinfo->model_str[i], "UNKNOWN");
	}

	return 0;
}

uint64_t odp_cpu_hz_current(int id ODP_UNUSED)
{
	return 0;
}
