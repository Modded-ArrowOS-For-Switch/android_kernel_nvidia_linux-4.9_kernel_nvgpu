/*
 * Copyright (c) 2015-2018, NVIDIA Corporation. All rights reserved.
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

#ifndef GP106_GATING_REGLIST_H
#define GP106_GATING_REGLIST_H

struct gk20a;

void gp106_slcg_bus_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_ce2_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_chiplet_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_ctxsw_firmware_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_fb_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_fifo_load_gating_prod(struct gk20a *g,
	bool prod);

void gr_gp106_slcg_gr_load_gating_prod(struct gk20a *g,
	bool prod);

void ltc_gp106_slcg_ltc_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_perf_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_priring_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_pmu_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_therm_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_slcg_xbar_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_bus_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_ce_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_ctxsw_firmware_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_fb_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_fifo_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_gr_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_ltc_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_pmu_load_gating_prod(struct gk20a *g,
	bool prod);

void gp106_blcg_xbar_load_gating_prod(struct gk20a *g,
	bool prod);

void gr_gp106_pg_gr_load_gating_prod(struct gk20a *g,
	bool prod);
#endif /* GP106_GATING_REGLIST_H */