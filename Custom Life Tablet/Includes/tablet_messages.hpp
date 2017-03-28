class maui_tablet_msg {
	idd = 11100;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn dg_fnc_messagesInit;";

	class controlsBackground {
		class bgImage : Maui_RscPicture {
			idc = 11101;
			text = "media\ui\tablet\messages.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.737 * safezoneH;
		};
	};

	class controls {
		class addContactBtn: Maui_RscButtonSilent {
			idc = 11102;
			onButtonClick = "closeDialog 0; createDialog ""maui_tablet_contact"";"
			colorBackground[] = {0,0,0,0};
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.0257812 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class delMessageBtn: Maui_RscButtonSilent {
			idc = 11103;
			colorBackground[] = {0,0,0,0};
			x = 0.644375 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class txtOptionsBtn: Maui_RscButtonSilent {
			idc = 11104;
			colorBackground[] = {0,0,0,0};
			x = 0.665 * safezoneW + safezoneX;
			y = 0.335 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class contactsLb: Maui_RscListbox {
			idc = 11105;
			onLBSelChanged = "_this call dg_fnc_contactSel;";
			sizeEx = 0.03;
			font = "TahomaB";
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			colorDisabled[] = {0,0,0,0.5};
			colorSelect[] = {1,1,1,1};
			colorSelect2[] = {1,1,1,1};
			colorShadow[] = {0,0,0,0.5};
			colorSelectBackground[] = {0,0,0,0.5};
			colorSelectBackground2[] = {0,0,0,0};
			x = 0.319531 * safezoneW + safezoneX;
			y = 0.395 * safezoneH + safezoneY; // 0.39
			w = 0.0979687 * safezoneW;
			h = 0.297 * safezoneH;
		};
		class messagesLb: Maui_RscListbox {
			idc = 11106;
			sizeEx = 0.02;
			font = "TahomaB";
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			colorDisabled[] = {0,0,0,0.5};
			colorSelect[] = {0,0,0,1};
			colorSelect2[] = {0,0,0,1};
			colorShadow[] = {0,0,0,0.5};
			colorSelectBackground[] = {0,0,0,0};
			colorSelectBackground2[] = {0,0,0,0};
			x = 0.427812 * safezoneW + safezoneX;
			y = 0.401 * safezoneH + safezoneY;
			w = 0.252656 * safezoneW;
			h = 0.253 * safezoneH;
		};
		class inputBoxEdit: Maui_RscEdit {
			idc = 11107;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			colorSelection[] = {1,1,1,0.25};
			font = "TahomaB";
			sizeEx = 0.03;
			autocomplete = "";
			text = "";
			shadow = 0;
			x = 0.422656 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.2475 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class textSubmitBtn: Maui_RscButtonSilent {
			idc = 11108;
			colorBackground[] = {0,0,0,0};
			onButtonClick = "[false] spawn dg_fnc_newMessage;";
			x = 0.670156 * safezoneW + safezoneX;
			y = 0.665 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.022 * safezoneH;
			tooltip = "Press to Send Message"; //--- ToDo: Localize;
		};
		class backButton: Maui_RscButtonSilent {
			idc = 11109;
			colorBackground[] = {0,0,0,0};
			onButtonClick = "closeDialog 0; createDialog ""maui_tablet"";";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};