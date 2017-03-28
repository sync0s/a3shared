class select_player {
	idd = 15100;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "['launch'] execVM 'fn_selPlayerAction.sqf';";

	class controlsBackground {
		class BackgroundImage : Life_RscPicture {
			idc = 15101;
			text = "select_player.paa";
			x = 0.298906 * safezoneW + safezoneX;
			y = 0.191884 * safezoneH + safezoneY;
			w = 0.397031 * safezoneW;
			h = 0.605227 * safezoneH;
		};
	};

	class controls {
		class btnConfirm: Life_RscButtonSilent {
			idc = 15102;
			onButtonClick = "['confirm'] execVM 'fn_selPlayerAction.sqf'";
			x = 0.448438 * safezoneW + safezoneX;
			y = 0.544016 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.0440165 * safezoneH;
		};
		class lbPlayerList: Life_RscListbox {
			idc = 15003;
			text = "";
			colorBackground[] = {0.2,0.2,0.2,1}; // Fill color
			colorSelectBackground[] = {1,0.5,0,1}; // Selected item fill color
			colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
			shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
			colorText[] = {1,1,1,1}; // Text and frame color
			colorDisabled[] = {1,1,1,0.5}; // Disabled text color
			colorSelect[] = {1,1,1,1}; // Text selection color
			colorSelect2[] = {1,1,1,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
			onMouseZChanged = "['mouse',_this] execVM 'fn_selPlayerAction.sqf'";
			sizeEx = GUI_GRID_CENTER_H; // Text size
			x = 0.350469 * safezoneW + safezoneX;
			y = 0.433975 * safezoneH + safezoneY;
			w = 0.293906 * safezoneW;
			h = 0.0990371 * safezoneH;
			border = "scrolltest.paa";
		};
	};
};