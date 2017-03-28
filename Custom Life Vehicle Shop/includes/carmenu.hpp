class carMenu {
	idd = 92000;
	movingEnabled = false;
	enableSimulation = true;
	onUnload = "['exit'] spawn life_fnc_carShopAction;";

	class controlsBackground {

		class BackgroundImage: Life_RscPicture
		{
			idc = 92001;
			text = "modules\CarShop\images\GUI\carmenu_a.paa";
			x = 0.21125 * safezoneW + safezoneX;
			y = 0.478 * safezoneH + safezoneY;
			//y = 0.484 * safezoneH + safezoneY;
			w = 0.582656 * safezoneW;
			h = 0.858 * safezoneH;
		};
	};

	class controls {

		class carSelect: Life_RscButtonSilent
		{
			idc = 92002;
			onButtonClick = "['select'] spawn life_fnc_carShopSwitch;"; 
			x = 0.245781 * safezoneW + safezoneX;
			y = 0.875185 * safezoneH + safezoneY;
			w = 0.00776044 * safezoneW;
			h = 0.0137778 * safezoneH;
		};
		class paintMenu: Life_RscButtonSilent
		{
			idc = 92003;
			onButtonClick = "['paint'] spawn life_fnc_carShopSwitch;";
			x = 0.259322 * safezoneW + safezoneX;
			y = 0.876111 * safezoneH + safezoneY;
			w = 0.00776044 * safezoneW;
			h = 0.0137778 * safezoneH;
		};
		class carTuneShop: Life_RscButtonSilent
		{
			idc = 92004;
			onButtonClick = "['tune'] spawn life_fnc_carShopSwitch;";
			x = 0.274427 * safezoneW + safezoneX;
			y = 0.875185 * safezoneH + safezoneY;
			w = 0.00776044 * safezoneW;
			h = 0.0137778 * safezoneH;
		};
		class closeCarShop: Life_RscButtonSilent
		{
			idc = 92005;
			onButtonClick = "['exit'] spawn life_fnc_carShopSwitch;";
			x = 0.289531 * safezoneW + safezoneX;
			y = 0.875185 * safezoneH + safezoneY;
			w = 0.00776044 * safezoneW;
			h = 0.0137778 * safezoneH;
		};
		class arrowLeft: Life_RscButtonSilent
		{
			idc = 92006;
			onButtonClick = "['back'] spawn life_fnc_carScroll;";
			x = 0.217916 * safezoneW + safezoneX;
			y = 0.896333 * safezoneH + safezoneY;
			w = 0.0230208 * safezoneW;
			h = 0.080926 * safezoneH;
		};
		class arrowRight: Life_RscButtonSilent
		{
			idc = 92007;
			onButtonClick = "['next'] spawn life_fnc_carScroll;";
			x = 0.765833 * safezoneW + safezoneX;
			y = 0.896333 * safezoneH + safezoneY;
			w = 0.0230208 * safezoneW;
			h = 0.080926 * safezoneH;
		};
		class purchaseCar: Life_RscButtonSilent
		{
			idc = 92008;
			onButtonClick = "[] spawn life_fnc_carShopBuy;";
			x = 0.4125 * safezoneW + safezoneX;
			y = 0.815741 * safezoneH + safezoneY;
			w = 0.181875 * safezoneW;
			h = 0.0540741 * safezoneH;
		};
		class carOne: Life_RscButtonSilent
		{
			idc = 92009;
			onButtonClick = "['selected',0] spawn life_fnc_carShopAction;";
			x = 0.242187 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.101146 * safezoneW;
			h = 0.08 * safezoneH;
		};
		class carTwo: Life_RscButtonSilent
		{
			idc = 92010;
			onButtonClick = "['selected',1] spawn life_fnc_carShopAction;";
			x = 0.347395 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.101146 * safezoneW;
			h = 0.08 * safezoneH;
		};
		class carThree: Life_RscButtonSilent
		{
			idc = 92011;
			onButtonClick = "['selected',2] spawn life_fnc_carShopAction;";
			x = 0.452604 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.101146 * safezoneW;
			h = 0.08 * safezoneH;
		};
		class carFour: Life_RscButtonSilent
		{
			idc = 92012;
			onButtonClick = "['selected',3] spawn life_fnc_carShopAction;";
			x = 0.557291 * safezoneW + safezoneX;
			y = 0.896926 * safezoneH + safezoneY;
			w = 0.101146 * safezoneW;
			h = 0.08 * safezoneH;
		};
		class carFive: Life_RscButtonSilent
		{
			idc = 92013;
			onButtonClick = "['selected',4] spawn life_fnc_carShopAction;";
			x = 0.663541 * safezoneW + safezoneX;
			y = 0.896 * safezoneH + safezoneY;
			w = 0.101146 * safezoneW;
			h = 0.08 * safezoneH;
		};
		class carOneP: Life_RscPicture
		{
			idc = 92014;
			text = "";
			x = 0.261979 * safezoneW + safezoneX;
			y = 0.902778 * safezoneH + safezoneY;
			w = 0.0589584 * safezoneW;
			h = 0.0670371 * safezoneH;
		};
		class carTwoP: Life_RscPicture
		{
			idc = 92015;
			text = "";
			x = 0.368229 * safezoneW + safezoneX;
			y = 0.902778 * safezoneH + safezoneY;
			w = 0.0589584 * safezoneW;
			h = 0.0670371 * safezoneH;
		};
		class carThreeP: Life_RscPicture
		{
			idc = 92016;
			text = "";
			x = 0.472917 * safezoneW + safezoneX;
			y = 0.901852 * safezoneH + safezoneY;
			w = 0.0589584 * safezoneW;
			h = 0.0670371 * safezoneH;
		};
		class carFourP: Life_RscPicture
		{
			idc = 92017;
			text = "";
			x = 0.579167 * safezoneW + safezoneX;
			y = 0.901852 * safezoneH + safezoneY;
			w = 0.0589584 * safezoneW;
			h = 0.0670371 * safezoneH;
		};
		class carFiveP: Life_RscPicture
		{
			idc = 92018;
			text = "";
			x = 0.685937 * safezoneW + safezoneX;
			y = 0.901852 * safezoneH + safezoneY;
			w = 0.0589584 * safezoneW;
			h = 0.0670371 * safezoneH;
		};
		class DisplayName: Life_RscStructuredText
		{
			idc = 92019;
			//x = 0.823437 * safezoneW + safezoneX;
			x = 0.033437 * safezoneW + safezoneX;
			//y = 0.0314814 * safezoneH + safezoneY;
			y = 0.0514814 * safezoneH + safezoneY;
			//w = 0.154792 * safezoneW;
			w = 0.354792 * safezoneW;
			h = 0.297593 * safezoneH;
		};
		class VehInfo: Life_RscStructuredText
		{
			idc = 92020;
			x = 0.383437 * safezoneW + safezoneX;
			//y = 0.0314814 * safezoneH + safezoneY;
			y = 0.0834814 * safezoneH + safezoneY;
			//w = 0.154792 * safezoneW;
			w = 0.954792 * safezoneW;
			h = 0.297593 * safezoneH;
		};
		class redSlider: life_RscXSliderH
		{
			idc = 92021;
			text = "";
            onSliderPosChanged = "['red',_this select 1] spawn life_fnc_sliderPosChange;";
            tooltip = "Adjust Red Hue";
			x = 0.858359 * safezoneW + safezoneX;
			y = 0.576989 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class greenSlider: life_RscXSliderH
		{
			idc = 92022;
			text = "";
            onSliderPosChanged = "['green',_this select 1] spawn life_fnc_sliderPosChange;";
            tooltip = "Adjust Green Hue";
			x = 0.858359 * safezoneW + safezoneX;
			y = 0.631981 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class blueSlider: life_RscXSliderH
		{
			idc = 92023;
			text = "";
            onSliderPosChanged = "['blue',_this select 1] spawn life_fnc_sliderPosChange;";
            tooltip = "Adjust Blue Hue";
			x = 0.858359 * safezoneW + safezoneX;
			y = 0.686974 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.011 * safezoneH;
		};
		class RscStructuredText_1100: Life_RscStructuredText
		{
			idc = 92024;
			text = "Adjust Red Color";
			color[] = {0,0.2,0.8,1};
			colorActive[] = {0,0.2,0.8,1};
			colorDisabled[] = {0,0.2,0.8,1};
			x = 0.876406 * safezoneW + safezoneX;
			y = 0.543994 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.0219969 * safezoneH;
		};
		class RscStructuredText_1101: Life_RscStructuredText
		{
			idc = 92025;
			text = "Adjust Green Color";
			x = 0.876406 * safezoneW + safezoneX;
			y = 0.598986 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.0219969 * safezoneH;
		};
		class RscStructuredText_1102: Life_RscStructuredText
		{
			idc = 92026;
			text = "Adjust Blue Color";
			x = 0.876406 * safezoneW + safezoneX;
			y = 0.653978 * safezoneH + safezoneY;
			w = 0.0721875 * safezoneW;
			h = 0.0219969 * safezoneH;
		};
		class btnApply: Life_RscButtonMenu
		{
			idc = 92027;
			text = "Apply Changes"; //--- ToDo: Localize;
			onButtonClick = "['apply',0] spawn life_fnc_sliderPosChange;";
			x = 0.881562 * safezoneW + safezoneX;
			y = 0.708971 * safezoneH + safezoneY;
			w = 0.0825 * safezoneW;
			h = 0.0219969 * safezoneH;
		};
	};
};
