/*
 * Copyright (c) 2017-2019, NVIDIA CORPORATION.  All rights reserved.
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
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT.  IN NO EVENT SHALL
 * THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING
 * FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
 * DEALINGS IN THE SOFTWARE.
 */

#ifdef CONFIG_NVGPU_IOCTL_NON_FUSA
#include <nvgpu/ptimer.h>
#include <nvgpu/timers.h>
#include <nvgpu/gk20a.h>
#include <nvgpu/nvgpu_init.h>
#include <nvgpu/power_features/cg.h>

int nvgpu_ptimer_init(struct gk20a *g)
{
#if defined(CONFIG_NVGPU_NEXT)
	nvgpu_cg_slcg_timer_load_enable(g);
#endif

	return 0;
}

int nvgpu_get_timestamps_zipper(struct gk20a *g,
		u32 source_id, u32 count,
		struct nvgpu_cpu_time_correlation_sample *samples)
{
	int err = 0;
	unsigned int i = 0;

	if (gk20a_busy(g) != 0) {
		nvgpu_err(g, "GPU not powered on\n");
		err = -EINVAL;
		goto end;
	}

	for (i = 0; i < count; i++) {
		err = g->ops.ptimer.read_ptimer(g, &samples[i].gpu_timestamp);
		if (err != 0) {
			return err;
		}

		samples[i].cpu_timestamp = nvgpu_hr_timestamp();
	}

end:
	gk20a_idle(g);
	return err;
}
#endif
