class maui_tablet_msg_setup {
	idd = 11200;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "";

	class controlsBackground {
		class bgImage : Maui_RscPicture {
			idc = 11201;
			text = "media\ui\tablet\messages-setup.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.737 * safezoneH;
		};
	};

	class controls {
		class RscPicture_1200: Maui_RscPicture {
			idc = 11202;
			text = "media\ui\tablet\messages-setup.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.737 * safezoneH;
		};
		class phoneNumberEdit: Maui_RscEdit {
			idc = 11203;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			colorSelection[] = {1,1,1,0.25};
			font = "TahomaB";
			sizeEx = 0.03;
			autocomplete = "";
			text = "";
			shadow = 0;
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.350625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class submitBtn: Maui_RscButtonSilent {
			idc = 11205;
			onButtonclick = "[] spawn dg_fnc_accountSetup;";
			tooltip = "Click here to submit!";
			x = 0.670156 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class backButton: Maui_RscButtonSilent {
			idc = 11206;
			colorBackground[] = {0,0,0,0};
			onButtonClick = "closeDialog 0; createDialog ""maui_tablet_msg"";";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};