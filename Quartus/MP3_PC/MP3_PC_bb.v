
module MP3_PC (
	audio_config_SDAT,
	audio_config_SCLK,
	audio_external_BCLK,
	audio_external_DACDAT,
	audio_external_DACLRCK,
	buttons_export_export,
	clk_clk,
	hps_h2f_mpu_events_eventi,
	hps_h2f_mpu_events_evento,
	hps_h2f_mpu_events_standbywfe,
	hps_h2f_mpu_events_standbywfi,
	hps_io_hps_io_sdio_inst_CMD,
	hps_io_hps_io_sdio_inst_D0,
	hps_io_hps_io_sdio_inst_D1,
	hps_io_hps_io_sdio_inst_CLK,
	hps_io_hps_io_sdio_inst_D2,
	hps_io_hps_io_sdio_inst_D3,
	memory_mem_a,
	memory_mem_ba,
	memory_mem_ck,
	memory_mem_ck_n,
	memory_mem_cke,
	memory_mem_cs_n,
	memory_mem_ras_n,
	memory_mem_cas_n,
	memory_mem_we_n,
	memory_mem_reset_n,
	memory_mem_dq,
	memory_mem_dqs,
	memory_mem_dqs_n,
	memory_mem_odt,
	memory_mem_dm,
	memory_oct_rzqin,
	pll_vga_locked_export,
	reset_reset_n,
	seven_seg_export,
	switchs_export,
	vga_controller_CLK,
	vga_controller_HS,
	vga_controller_VS,
	vga_controller_BLANK,
	vga_controller_SYNC,
	vga_controller_R,
	vga_controller_G,
	vga_controller_B);	

	inout		audio_config_SDAT;
	output		audio_config_SCLK;
	input		audio_external_BCLK;
	output		audio_external_DACDAT;
	input		audio_external_DACLRCK;
	input	[3:0]	buttons_export_export;
	input		clk_clk;
	input		hps_h2f_mpu_events_eventi;
	output		hps_h2f_mpu_events_evento;
	output	[1:0]	hps_h2f_mpu_events_standbywfe;
	output	[1:0]	hps_h2f_mpu_events_standbywfi;
	inout		hps_io_hps_io_sdio_inst_CMD;
	inout		hps_io_hps_io_sdio_inst_D0;
	inout		hps_io_hps_io_sdio_inst_D1;
	output		hps_io_hps_io_sdio_inst_CLK;
	inout		hps_io_hps_io_sdio_inst_D2;
	inout		hps_io_hps_io_sdio_inst_D3;
	output	[12:0]	memory_mem_a;
	output	[2:0]	memory_mem_ba;
	output		memory_mem_ck;
	output		memory_mem_ck_n;
	output		memory_mem_cke;
	output		memory_mem_cs_n;
	output		memory_mem_ras_n;
	output		memory_mem_cas_n;
	output		memory_mem_we_n;
	output		memory_mem_reset_n;
	inout	[7:0]	memory_mem_dq;
	inout		memory_mem_dqs;
	inout		memory_mem_dqs_n;
	output		memory_mem_odt;
	output		memory_mem_dm;
	input		memory_oct_rzqin;
	output		pll_vga_locked_export;
	input		reset_reset_n;
	output	[27:0]	seven_seg_export;
	input	[2:0]	switchs_export;
	output		vga_controller_CLK;
	output		vga_controller_HS;
	output		vga_controller_VS;
	output		vga_controller_BLANK;
	output		vga_controller_SYNC;
	output	[7:0]	vga_controller_R;
	output	[7:0]	vga_controller_G;
	output	[7:0]	vga_controller_B;
endmodule
