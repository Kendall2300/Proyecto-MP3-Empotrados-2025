
module MP3_PC (
	buttons_export_export,
	clk_clk,
	reset_reset_n,
	seven_seg_export,
	switchs_export,
	pll_vga_locked_export,
	vga_controller_CLK,
	vga_controller_HS,
	vga_controller_VS,
	vga_controller_BLANK,
	vga_controller_SYNC,
	vga_controller_R,
	vga_controller_G,
	vga_controller_B);	

	input	[2:0]	buttons_export_export;
	input		clk_clk;
	input		reset_reset_n;
	output	[27:0]	seven_seg_export;
	input	[2:0]	switchs_export;
	output		pll_vga_locked_export;
	output		vga_controller_CLK;
	output		vga_controller_HS;
	output		vga_controller_VS;
	output		vga_controller_BLANK;
	output		vga_controller_SYNC;
	output	[7:0]	vga_controller_R;
	output	[7:0]	vga_controller_G;
	output	[7:0]	vga_controller_B;
endmodule
