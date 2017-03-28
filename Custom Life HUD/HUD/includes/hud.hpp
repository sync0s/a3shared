#define INFINITE 1e+1000

class missionHUD {
	idd = 100;
	name = "missionHUD";
	duration = INFINITE;
	movingEnabled = 0;
	fadein = 0;
	fadeout = 0;
	onLoad = "uiNamespace setVariable ['missionHUD', _this select 0]";
	objects[] = {};

	controls[] = {
		food,
		water,
		icons,
		repair,
		health
	};

	class food: Life_RscPicture
	{
		idc = 101;
		text = "modules\HUD\images\food\100.paa";
		x = -0.0208335 * safezoneW + safezoneX;
		y = 0.699741 * safezoneH + safezoneY;
		w = 0.194896 * safezoneW;
		h = 0.33 * safezoneH;
	};

	class water: Life_RscPicture
	{
		idc = 102;
		text = "modules\HUD\images\water\100.paa";
		x = -0.0203123 * safezoneW + safezoneX;
		y = 0.7 * safezoneH + safezoneY;
		w = 0.194896 * safezoneW;
		h = 0.33 * safezoneH;
	};

	class icons: Life_RscPicture
	{
		idc = 103;
		text = "modules\HUD\images\icons.paa";
		x = -0.0249998 * safezoneW + safezoneX;
		y = 0.703704 * safezoneH + safezoneY;
		w = 0.194896 * safezoneW;
		h = 0.33 * safezoneH;
	};

	class repair: Life_RscPicture
	{
		idc = 104;
		text = "modules\HUD\images\repair\100.paa";
		x = -0.024479 * safezoneW + safezoneX;
		y = 0.719445 * safezoneH + safezoneY;
		w = 0.194896 * safezoneW;
		h = 0.33 * safezoneH;
	};

	class health: Life_RscPicture
	{
		idc = 105;
		text = "modules\HUD\images\health\100.paa";
		x = -0.0270831 * safezoneW + safezoneX;
		y = 0.721297 * safezoneH + safezoneY;
		w = 0.194896 * safezoneW;
		h = 0.33 * safezoneH;
	};

};