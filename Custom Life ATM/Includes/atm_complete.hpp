class Maui_ATM_Complete {
	idd = 4300;
	name = "maui_atm_complete";
	movingEnable = true;
	enableSimulation = true;
	
	class controlsBackground {
		class MenuDisplay : Maui_RscPicture {
			idc = 4301;
			text = "media\ui\atm_complete.paa";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.366094 * safezoneW;
			h = 0.495 * safezoneH;
		};
	};
	
	class controls {
		class Softkey_L1: Maui_RscButtonSilent {
			idc = 4302;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L2: Maui_RscButtonSilent {
			idc = 4303;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L3: Maui_RscButtonSilent {
			idc = 4304;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R1: Maui_RscButtonSilent {
			idc = 4305;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R2: Maui_RscButtonSilent {
			idc = 4306;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R3: Maui_RscButtonSilent {
			idc = 4307;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class cancelButton: Maui_RscButtonSilent {
			idc = 4308;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0;";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class clearButton: Maui_RscButtonSilent {
			idc = 4309;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class okButton: Maui_RscButtonSilent {
			idc = 4310;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button1: Maui_RscButtonSilent {
			idc = 4311;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button2: Maui_RscButtonSilent {
			idc = 4312;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button3: Maui_RscButtonSilent {
			idc = 4313;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button4: Maui_RscButtonSilent {
			idc = 4314;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button5: Maui_RscButtonSilent {
			idc = 4315;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button6: Maui_RscButtonSilent {
			idc = 4316;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button7: Maui_RscButtonSilent {
			idc = 4317;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button8: Maui_RscButtonSilent {
			idc = 4318;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button9: Maui_RscButtonSilent {
			idc = 4319;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button0: Maui_RscButtonSilent {
			idc = 4320;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};