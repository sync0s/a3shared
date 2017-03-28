class maui_marketMenu {
	idd = 11000;
	movingEnabled = true;
	enableSimulation = true;
	
	class controlsBackground {
		class BackgroundImage : Maui_RscPicture {
			idc = 11010;
			text = "media\ui\tablet\general_market.paa";
			x = 0.29375 * safezoneW + safezoneX;
			y = 0.28 * safezoneH + safezoneY;
			w = 0.417656 * safezoneW;
			h = 0.737 * safezoneH;
		};
	};
	
	class controls {
		class groceryButton: Maui_RscButtonSilent {
			idc = 11001;
			x = 0.432969 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class personalButton: Maui_RscButtonSilent {
			idc = 11001;
			x = 0.520625 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.061875 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class otherButton: Maui_RscButtonSilent {
			idc = 11002;
			x = 0.618594 * safezoneW + safezoneX;
			y = 0.412 * safezoneH + safezoneY;
			w = 0.0464063 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class StoreInventoryLB: Maui_RscListbox {
			idc = 11003;
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
			x = 0.381406 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class YourInventoryLB: Maui_RscListbox {
			idc = 11004;
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
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			w = 0.134062 * safezoneW;
			h = 0.143 * safezoneH;
		};
		class buyButton: Maui_RscButtonSilent {
			idc = 11005;
			x = 0.4175 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class sellButton: Maui_RscButtonSilent {
			idc = 11006;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.654 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.033 * safezoneH;
		};
		class BuyQuantity: Maui_RscEdit {
			idc = 11007;
			text = "1";
			x = 0.443281 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class SellQuantity: Maui_RscEdit {
			idc = 11008;
			text = "1";
			x = 0.597969 * safezoneW + safezoneX;
			y = 0.632 * safezoneH + safezoneY;
			w = 0.0670312 * safezoneW;
			h = 0.022 * safezoneH;
		};
		class backButton: Maui_RscButtonSilent {
			idc = 11009;
			colorBackground[] = {0,0,0,0};
			onButtonClick = "closeDialog 0;";
			x = 0.54125 * safezoneW + safezoneX;
			y = 0.72 * safezoneH + safezoneY;
			w = 0.020625 * safezoneW;
			h = 0.022 * safezoneH;
		};
	};
};