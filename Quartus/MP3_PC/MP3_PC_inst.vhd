	component MP3_PC is
		port (
			buttons_export_export : in  std_logic_vector(3 downto 0)  := (others => 'X'); -- export
			clk_clk               : in  std_logic                     := 'X';             -- clk
			pll_vga_locked_export : out std_logic;                                        -- export
			reset_reset_n         : in  std_logic                     := 'X';             -- reset_n
			seven_seg_export      : out std_logic_vector(27 downto 0);                    -- export
			switchs_export        : in  std_logic_vector(2 downto 0)  := (others => 'X'); -- export
			vga_controller_CLK    : out std_logic;                                        -- CLK
			vga_controller_HS     : out std_logic;                                        -- HS
			vga_controller_VS     : out std_logic;                                        -- VS
			vga_controller_BLANK  : out std_logic;                                        -- BLANK
			vga_controller_SYNC   : out std_logic;                                        -- SYNC
			vga_controller_R      : out std_logic_vector(7 downto 0);                     -- R
			vga_controller_G      : out std_logic_vector(7 downto 0);                     -- G
			vga_controller_B      : out std_logic_vector(7 downto 0)                      -- B
		);
	end component MP3_PC;

	u0 : component MP3_PC
		port map (
			buttons_export_export => CONNECTED_TO_buttons_export_export, -- buttons_export.export
			clk_clk               => CONNECTED_TO_clk_clk,               --            clk.clk
			pll_vga_locked_export => CONNECTED_TO_pll_vga_locked_export, -- pll_vga_locked.export
			reset_reset_n         => CONNECTED_TO_reset_reset_n,         --          reset.reset_n
			seven_seg_export      => CONNECTED_TO_seven_seg_export,      --      seven_seg.export
			switchs_export        => CONNECTED_TO_switchs_export,        --        switchs.export
			vga_controller_CLK    => CONNECTED_TO_vga_controller_CLK,    -- vga_controller.CLK
			vga_controller_HS     => CONNECTED_TO_vga_controller_HS,     --               .HS
			vga_controller_VS     => CONNECTED_TO_vga_controller_VS,     --               .VS
			vga_controller_BLANK  => CONNECTED_TO_vga_controller_BLANK,  --               .BLANK
			vga_controller_SYNC   => CONNECTED_TO_vga_controller_SYNC,   --               .SYNC
			vga_controller_R      => CONNECTED_TO_vga_controller_R,      --               .R
			vga_controller_G      => CONNECTED_TO_vga_controller_G,      --               .G
			vga_controller_B      => CONNECTED_TO_vga_controller_B       --               .B
		);

