class maui_tablet_contact {
	idd = 11300;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] call dg_fnc_contactsInit;";

	class controlsBackground {
		class bgImage : Maui_RscPicture {
			idc = 11301;
			text = "media\ui\tablet\messages-contacts.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.737 * safezoneH;
		};
	};

	class controls {
		class addContactBtn: Maui_RscButtonSilent {
			idc = 11302;
			onButtonClick = "[false] spawn dg_fnc_contactList;";
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class delContactButton: Maui_RscButtonSilent {
			idc = 11303;
			onButtonClick = "[true] spawn dg_fnc_contactList;";
			x = 0.592812 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class contactNameEdit: Maui_RscEdit {
			idc = 11304;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			colorSelection[] = {1,1,1,0.25};
			font = "TahomaB";
			sizeEx = 0.03;
			autocomplete = "";
			text = "";
			shadow = 0;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class contactNumberEdit: Maui_RscEdit {
			idc = 11305;
			colorBackground[] = {0,0,0,0};
			colorText[] = {1,1,1,1};
			colorSelection[] = {1,1,1,0.25};
			font = "TahomaB";
			sizeEx = 0.03;
			autocomplete = "";
			text = "";
			shadow = 0;
			x = 0.453594 * safezoneW + safezoneX;
			y = 0.489 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class currentContactsLb: Maui_RscListbox {
			idc = 11306;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.456 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.121 * safezoneH;
		};
		class backButton: Maui_RscButtonSilent {
			idc = 11307;
			colorBackground[] = {0,0,0,0};
			onButtonClick = "closeDialog 0; createDialog ""maui_tablet_msg"";";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};