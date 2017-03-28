class maui_vehicleGarage {
	idd = 12000;
	movingEnabled = true;
	enableSimulation = true;
	
	class controlsBackground {
		class BackgroundImage : Maui_RscPicture {
			idc = 12001;
			text = "media\ui\tablet\tablet-garageVeh.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.737 * safezoneH;
		};
	};
	
	class controls {
		class retrieveButton: Maui_RscButtonSilent {
			idc = 12002;
			onButtonClick = "[""retrieve""] spawn dg_fnc_garageAct;";
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.555 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class sellButton: Maui_RscButtonSilent {
			idc = 12003;
			onButtonClick = "[""sell""] spawn dg_fnc_garageAct;";
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.588 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class vehInventoryLB: Maui_RscListbox {
			idc = 12004;
			text = "";
			sizeEx = 0.03;
			colorBackground[] = {0,0,0,0};
			colorText[] = {0,0,0,1};
			colorDisabled[] = {0,0,0,0.5}; 
			colorSelect[] = {0,0,0,1};
			colorSelect2[] = {0,0,0,1};
			colorShadow[] = {0,0,0,0.5};
			colorSelectBackground[] = {0.8,0.8,0.8,1};
			colorSelectBackground2[] = {0.8,0.8,0.8,1};
			onLBSelChanged = "_this call dg_fnc_garageChanged";
			x = 0.37625 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.187 * safezoneH;
		};
		class infoText: Maui_RscStructuredText {
			idc = 12005;
			x = 0.561875 * safezoneW + safezoneX;
			y = 0.501 * safezoneH + safezoneY; //0.511
			w = 0.113437 * safezoneW;
			h = 0.044 * safezoneH;
		};
		class backButton: Maui_RscButtonSilent {
			idc = 12006;
			colorBackground[] = {0,0,0,0};
			onButtonClick = "closeDialog 0;";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};