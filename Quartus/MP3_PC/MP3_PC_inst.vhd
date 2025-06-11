	component MP3_PC is
		port (
			audio_config_SDAT             : inout std_logic                     := 'X';             -- SDAT
			audio_config_SCLK             : out   std_logic;                                        -- SCLK
			audio_external_BCLK           : in    std_logic                     := 'X';             -- BCLK
			audio_external_DACDAT         : out   std_logic;                                        -- DACDAT
			audio_external_DACLRCK        : in    std_logic                     := 'X';             -- DACLRCK
			buttons_export_export         : in    std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			clk_clk                       : in    std_logic                     := 'X';             -- clk
			hps_h2f_mpu_events_eventi     : in    std_logic                     := 'X';             -- eventi
			hps_h2f_mpu_events_evento     : out   std_logic;                                        -- evento
			hps_h2f_mpu_events_standbywfe : out   std_logic_vector(1 downto 0);                     -- standbywfe
			hps_h2f_mpu_events_standbywfi : out   std_logic_vector(1 downto 0);                     -- standbywfi
			hps_io_hps_io_sdio_inst_CMD   : inout std_logic                     := 'X';             -- hps_io_sdio_inst_CMD
			hps_io_hps_io_sdio_inst_D0    : inout std_logic                     := 'X';             -- hps_io_sdio_inst_D0
			hps_io_hps_io_sdio_inst_D1    : inout std_logic                     := 'X';             -- hps_io_sdio_inst_D1
			hps_io_hps_io_sdio_inst_CLK   : out   std_logic;                                        -- hps_io_sdio_inst_CLK
			hps_io_hps_io_sdio_inst_D2    : inout std_logic                     := 'X';             -- hps_io_sdio_inst_D2
			hps_io_hps_io_sdio_inst_D3    : inout std_logic                     := 'X';             -- hps_io_sdio_inst_D3
			memory_mem_a                  : out   std_logic_vector(12 downto 0);                    -- mem_a
			memory_mem_ba                 : out   std_logic_vector(2 downto 0);                     -- mem_ba
			memory_mem_ck                 : out   std_logic;                                        -- mem_ck
			memory_mem_ck_n               : out   std_logic;                                        -- mem_ck_n
			memory_mem_cke                : out   std_logic;                                        -- mem_cke
			memory_mem_cs_n               : out   std_logic;                                        -- mem_cs_n
			memory_mem_ras_n              : out   std_logic;                                        -- mem_ras_n
			memory_mem_cas_n              : out   std_logic;                                        -- mem_cas_n
			memory_mem_we_n               : out   std_logic;                                        -- mem_we_n
			memory_mem_reset_n            : out   std_logic;                                        -- mem_reset_n
			memory_mem_dq                 : inout std_logic_vector(7 downto 0)  := (others => 'X'); -- mem_dq
			memory_mem_dqs                : inout std_logic                     := 'X';             -- mem_dqs
			memory_mem_dqs_n              : inout std_logic                     := 'X';             -- mem_dqs_n
			memory_mem_odt                : out   std_logic;                                        -- mem_odt
			memory_mem_dm                 : out   std_logic;                                        -- mem_dm
			memory_oct_rzqin              : in    std_logic                     := 'X';             -- oct_rzqin
			pll_vga_locked_export         : out   std_logic;                                        -- export
			reset_reset_n                 : in    std_logic                     := 'X';             -- reset_n
			seven_seg_export              : out   std_logic_vector(27 downto 0);                    -- export
			switchs_export                : in    std_logic_vector(2 downto 0)  := (others => 'X'); -- export
			vga_controller_CLK            : out   std_logic;                                        -- CLK
			vga_controller_HS             : out   std_logic;                                        -- HS
			vga_controller_VS             : out   std_logic;                                        -- VS
			vga_controller_BLANK          : out   std_logic;                                        -- BLANK
			vga_controller_SYNC           : out   std_logic;                                        -- SYNC
			vga_controller_R              : out   std_logic_vector(7 downto 0);                     -- R
			vga_controller_G              : out   std_logic_vector(7 downto 0);                     -- G
			vga_controller_B              : out   std_logic_vector(7 downto 0)                      -- B
		);
	end component MP3_PC;

	u0 : component MP3_PC
		port map (
			audio_config_SDAT             => CONNECTED_TO_audio_config_SDAT,             --       audio_config.SDAT
			audio_config_SCLK             => CONNECTED_TO_audio_config_SCLK,             --                   .SCLK
			audio_external_BCLK           => CONNECTED_TO_audio_external_BCLK,           --     audio_external.BCLK
			audio_external_DACDAT         => CONNECTED_TO_audio_external_DACDAT,         --                   .DACDAT
			audio_external_DACLRCK        => CONNECTED_TO_audio_external_DACLRCK,        --                   .DACLRCK
			buttons_export_export         => CONNECTED_TO_buttons_export_export,         --     buttons_export.export
			clk_clk                       => CONNECTED_TO_clk_clk,                       --                clk.clk
			hps_h2f_mpu_events_eventi     => CONNECTED_TO_hps_h2f_mpu_events_eventi,     -- hps_h2f_mpu_events.eventi
			hps_h2f_mpu_events_evento     => CONNECTED_TO_hps_h2f_mpu_events_evento,     --                   .evento
			hps_h2f_mpu_events_standbywfe => CONNECTED_TO_hps_h2f_mpu_events_standbywfe, --                   .standbywfe
			hps_h2f_mpu_events_standbywfi => CONNECTED_TO_hps_h2f_mpu_events_standbywfi, --                   .standbywfi
			hps_io_hps_io_sdio_inst_CMD   => CONNECTED_TO_hps_io_hps_io_sdio_inst_CMD,   --             hps_io.hps_io_sdio_inst_CMD
			hps_io_hps_io_sdio_inst_D0    => CONNECTED_TO_hps_io_hps_io_sdio_inst_D0,    --                   .hps_io_sdio_inst_D0
			hps_io_hps_io_sdio_inst_D1    => CONNECTED_TO_hps_io_hps_io_sdio_inst_D1,    --                   .hps_io_sdio_inst_D1
			hps_io_hps_io_sdio_inst_CLK   => CONNECTED_TO_hps_io_hps_io_sdio_inst_CLK,   --                   .hps_io_sdio_inst_CLK
			hps_io_hps_io_sdio_inst_D2    => CONNECTED_TO_hps_io_hps_io_sdio_inst_D2,    --                   .hps_io_sdio_inst_D2
			hps_io_hps_io_sdio_inst_D3    => CONNECTED_TO_hps_io_hps_io_sdio_inst_D3,    --                   .hps_io_sdio_inst_D3
			memory_mem_a                  => CONNECTED_TO_memory_mem_a,                  --             memory.mem_a
			memory_mem_ba                 => CONNECTED_TO_memory_mem_ba,                 --                   .mem_ba
			memory_mem_ck                 => CONNECTED_TO_memory_mem_ck,                 --                   .mem_ck
			memory_mem_ck_n               => CONNECTED_TO_memory_mem_ck_n,               --                   .mem_ck_n
			memory_mem_cke                => CONNECTED_TO_memory_mem_cke,                --                   .mem_cke
			memory_mem_cs_n               => CONNECTED_TO_memory_mem_cs_n,               --                   .mem_cs_n
			memory_mem_ras_n              => CONNECTED_TO_memory_mem_ras_n,              --                   .mem_ras_n
			memory_mem_cas_n              => CONNECTED_TO_memory_mem_cas_n,              --                   .mem_cas_n
			memory_mem_we_n               => CONNECTED_TO_memory_mem_we_n,               --                   .mem_we_n
			memory_mem_reset_n            => CONNECTED_TO_memory_mem_reset_n,            --                   .mem_reset_n
			memory_mem_dq                 => CONNECTED_TO_memory_mem_dq,                 --                   .mem_dq
			memory_mem_dqs                => CONNECTED_TO_memory_mem_dqs,                --                   .mem_dqs
			memory_mem_dqs_n              => CONNECTED_TO_memory_mem_dqs_n,              --                   .mem_dqs_n
			memory_mem_odt                => CONNECTED_TO_memory_mem_odt,                --                   .mem_odt
			memory_mem_dm                 => CONNECTED_TO_memory_mem_dm,                 --                   .mem_dm
			memory_oct_rzqin              => CONNECTED_TO_memory_oct_rzqin,              --                   .oct_rzqin
			pll_vga_locked_export         => CONNECTED_TO_pll_vga_locked_export,         --     pll_vga_locked.export
			reset_reset_n                 => CONNECTED_TO_reset_reset_n,                 --              reset.reset_n
			seven_seg_export              => CONNECTED_TO_seven_seg_export,              --          seven_seg.export
			switchs_export                => CONNECTED_TO_switchs_export,                --            switchs.export
			vga_controller_CLK            => CONNECTED_TO_vga_controller_CLK,            --     vga_controller.CLK
			vga_controller_HS             => CONNECTED_TO_vga_controller_HS,             --                   .HS
			vga_controller_VS             => CONNECTED_TO_vga_controller_VS,             --                   .VS
			vga_controller_BLANK          => CONNECTED_TO_vga_controller_BLANK,          --                   .BLANK
			vga_controller_SYNC           => CONNECTED_TO_vga_controller_SYNC,           --                   .SYNC
			vga_controller_R              => CONNECTED_TO_vga_controller_R,              --                   .R
			vga_controller_G              => CONNECTED_TO_vga_controller_G,              --                   .G
			vga_controller_B              => CONNECTED_TO_vga_controller_B               --                   .B
		);

