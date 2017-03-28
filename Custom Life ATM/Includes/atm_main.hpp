class Maui_ATM {
	idd = 4000;
	name = "maui_atm_menu";
	movingEnable = true;
	enableSimulation = true;
	
	class controlsBackground {
		class MenuDisplay : Maui_RscPicture {
			idc = 4001;
			text = "media\ui\atm_main.paa";
			x = 0.314375 * safezoneW + safezoneX;
			y = 0.258 * safezoneH + safezoneY;
			w = 0.366094 * safezoneW;
			h = 0.495 * safezoneH;
		};
	};
	
	class controls {
		class Softkey_L1: Maui_RscButtonSilent {
			idc = 4002;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0; createDialog ""Maui_ATM_Amount""; player_atm_menu = 1;";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L2: Maui_RscButtonSilent {
			idc = 4003;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0; createDialog ""Maui_ATM_Amount""; player_atm_menu = 0;";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_L3: Maui_RscButtonSilent {
			idc = 4004;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0; createDialog ""Maui_ATM_Loan""; player_atm_menu = 3;";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R1: Maui_RscButtonSilent {
			idc = 4005;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0; createDialog ""Maui_ATM_Amount""; player_atm_menu = 2;";
			x = 0.628906 * safezoneW + safezoneX;
			y = 0.39 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R2: Maui_RscButtonSilent {
			idc = 4006;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.423 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class Softkey_R3: Maui_RscButtonSilent {
			idc = 4007;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "hint ""Sorry, this service is currently unavailable."";";
			x = 0.62375 * safezoneW + safezoneX;
			y = 0.445 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class cancelButton: Maui_RscButtonSilent {
			idc = 4008;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "closeDialog 0;";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.522 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class clearButton: Maui_RscButtonSilent {
			idc = 4009;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class okButton: Maui_RscButtonSilent {
			idc = 4010;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.438125 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button1: Maui_RscButtonSilent {
			idc = 4011;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button2: Maui_RscButtonSilent {
			idc = 4012;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button3: Maui_RscButtonSilent {
			idc = 4013;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.511 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button4: Maui_RscButtonSilent {
			idc = 4014;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button5: Maui_RscButtonSilent {
			idc = 4015;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button6: Maui_RscButtonSilent {
			idc = 4016;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class button7: Maui_RscButtonSilent {
			idc = 4017;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.335 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button8: Maui_RscButtonSilent {
			idc = 4018;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button9: Maui_RscButtonSilent {
			idc = 4019;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.402031 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class button0: Maui_RscButtonSilent {
			idc = 4020;
			colorBackground[] = {0, 0, 0, 0};
			onButtonClick = "";
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0309375 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};