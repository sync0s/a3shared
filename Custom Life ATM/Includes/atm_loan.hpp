class Maui_ATM_Loan {
	idd = 4200;
	name = "maui_atm_loan";
	movingEnable = true;
	enableSimulation = true;
	
	class controlsBackground {
		class MenuDisplay : Maui_RscPicture {
			idc = 4201;
			text = "media\ui\atm_loan.paa";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.366094 * safezoneW;
			h = 0.495 * safezoneH;
		};
	};
	
	class controls {
		class Softkey_L1: Maui_RscButtonSilent {
			idc = 4202;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L2: Maui_RscButtonSilent {
			idc = 4203;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L3: Maui_RscButtonSilent {
			idc = 4204;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R1: Maui_RscButtonSilent {
			idc = 4205;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R2: Maui_RscButtonSilent {
			idc = 4206;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R3: Maui_RscButtonSilent {
			idc = 4207;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class cancelButton: Maui_RscButtonSilent {
			idc = 4208;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0;";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class clearButton: Maui_RscButtonSilent {
			idc = 4209;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class okButton: Maui_RscButtonSilent {
			idc = 4210;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button1: Maui_RscButtonSilent {
			idc = 4211;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button2: Maui_RscButtonSilent {
			idc = 4212;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button3: Maui_RscButtonSilent {
			idc = 4213;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button4: Maui_RscButtonSilent {
			idc = 4214;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button5: Maui_RscButtonSilent {
			idc = 4215;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button6: Maui_RscButtonSilent {
			idc = 4216;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button7: Maui_RscButtonSilent {
			idc = 4217;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button8: Maui_RscButtonSilent {
			idc = 4218;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button9: Maui_RscButtonSilent {
			idc = 4219;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button0: Maui_RscButtonSilent {
			idc = 4220;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""clicked"";";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};