class Maui_ATM_Amount {
	idd = 4100;
	name = "maui_atm_amount";
	movingEnable = true;
	enableSimulation = true;
	onLoad = "[] call dg_fnc_atmAmountLoad;";
	
	class controlsBackground {
		class MenuDisplay : Maui_RscPicture {
			idc = 4101;
			text = "media\ui\atm_amount.paa";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.366094 * safezoneW;
			h = 0.495 * safezoneH;
		};
	};
	
	class controls {
		class Softkey_L1: Maui_RscButtonSilent {
			idc = 4102;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L2: Maui_RscButtonSilent {
			idc = 4103;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L3: Maui_RscButtonSilent {
			idc = 4104;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R1: Maui_RscButtonSilent {
			idc = 4105;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R2: Maui_RscButtonSilent {
			idc = 4106;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R3: Maui_RscButtonSilent {
			idc = 4107;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class cancelButton: Maui_RscButtonSilent {
			idc = 4108;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0;";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class clearButton: Maui_RscButtonSilent {
			idc = 4109;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[""clear""] call dg_fnc_atmBtnPress;";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class okButton: Maui_RscButtonSilent {
			idc = 4110;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[player_atm_menu] call dg_fnc_atmTransaction";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button1: Maui_RscButtonSilent {
			idc = 4111;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[1] call dg_fnc_atmBtnPress;";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button2: Maui_RscButtonSilent {
			idc = 4112;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[2] call dg_fnc_atmBtnPress;";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button3: Maui_RscButtonSilent {
			idc = 4113;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[3] call dg_fnc_atmBtnPress;";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button4: Maui_RscButtonSilent {
			idc = 4114;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[4] call dg_fnc_atmBtnPress;";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button5: Maui_RscButtonSilent {
			idc = 4115;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[5] call dg_fnc_atmBtnPress;";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button6: Maui_RscButtonSilent {
			idc = 4116;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[6] call dg_fnc_atmBtnPress;";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button7: Maui_RscButtonSilent {
			idc = 4117;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[7] call dg_fnc_atmBtnPress;";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button8: Maui_RscButtonSilent {
			idc = 4118;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[8] call dg_fnc_atmBtnPress;";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button9: Maui_RscButtonSilent {
			idc = 4119;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[9] call dg_fnc_atmBtnPress;";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button0: Maui_RscButtonSilent {
			idc = 4120;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "[0] call dg_fnc_atmBtnPress;";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class MoneyEdit : Maui_RscEdit {
			idc = 4121;
			text = "1";
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			x = 0.435594 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.12375 * safezoneW;
			h = 0.015 * safezoneH;
		};
		
		class PlayerList : Maui_RscCombo {
			idc = 4122;
			colorBackground[] = {0, 0, 0, 1};
			x = 0.435594 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.128906 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};