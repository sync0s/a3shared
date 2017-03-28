class maui_tablet {
	idd = 6000;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn dg_fnc_tabletMain;";
	
	class controlsBackground {
		class BackgroundImage : Maui_RscPicture {
			idc = 6001;
			text = "media\ui\tablet.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.737 * safezoneH;
		};
	};
	
	class controls {
		class socialButton: Maui_RscButtonSilent {
			idc = 6002;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""social"";";
			x = 0.345312 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class walletButton: Maui_RscButtonSilent {
			idc = 6003;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""wallet"";";
			x = 0.386562 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class musicButton: Maui_RscButtonSilent {
			idc = 6004;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""music"";";
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class messagesButton: Maui_RscButtonSilent {
			idc = 6005;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "closeDialog 0; createdialog ""maui_tablet_msg"";";
			x = 0.469062 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class phoneButton: Maui_RscButtonSilent {
			idc = 6006;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""phone"";";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class mapsButton: Maui_RscButtonSilent {
			idc = 6007;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""maps"";";
			x = 0.551562 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class helpButton: Maui_RscButtonSilent {
			idc = 6008;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""help"";";
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class settingsButton: Maui_RscButtonSilent {
			idc = 6009;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""settings"";";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.643 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class enterButton: Maui_RscButtonSilent {
			idc = 6010;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "hint ""enter"";";
			x = 0.488656 * safezoneW + safezoneX;
			y = 0.7178 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class backButton: Maui_RscButtonSilent {
			idc = 6011;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "closeDialog 0;";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class ATMCash: Maui_RscStructuredText {
			idc = 6012;
			text = "test";
			x = 0.395875 * safezoneW + safezoneX; 
			y = 0.449 * safezoneH + safezoneY; // 0.446
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ATMBank: Maui_RscStructuredText {
			idc = 6013;
			text = "test";
			x = 0.395875 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class OATMCash: Maui_RscStructuredText {
			idc = 6014;
			text = "test";
			x = 0.395875 * safezoneW + safezoneX;
			y = 0.533 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class OATMBank: Maui_RscStructuredText {
			idc = 6015;
			text = "test";
			x = 0.395875 * safezoneW + safezoneX;
			y = 0.56 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class ItemsList: Maui_RscListbox {
			idc = 6016;
			sizeEx = 0.03;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1}; // Text and frame color
			colorDisabled[] = {0,0,0,0.5}; // Disabled text color
			colorSelect[] = {0,0,0,1}; // Text selection color
			colorSelect2[] = {0,0,0,1}; // Text selection color (oscillates between this and colorSelect)
			colorShadow[] = {0,0,0,0.5}; // Text shadow color (used only when shadow is 1)
			colorSelectBackground[] = {0.8,0.8,0.8,1}; // Selected item fill color
			colorSelectBackground2[] = {0.8,0.8,0.8,1};
			x = 0.5825 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class useItem: Maui_RscButtonSilent {
			idc = 6017;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "['use'] call dg_fnc_tabletItem;";
			x = 0.577344 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class dropItem: Maui_RscButtonSilent {
			idc = 6018;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "['drop'] call dg_fnc_tabletItem;";
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.577 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.011 * safezoneH;
		};
	};
};