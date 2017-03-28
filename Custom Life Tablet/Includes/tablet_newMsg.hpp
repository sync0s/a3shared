class textnotification {
	idd = 110;
	duration = 10;
	movingEnabled = 0;
	fadein = 0;
	fadeout = 0;
	objects[] = {};

	controls[] = {
		dispImage
	};

	class dispImage: Maui_RscPicture {
		idc = -1;
		text = "media\ui\tablet\msg-new.paa";
		x = 0.866094 * safezoneW + safezoneX;
		y = 0.852 * safezoneH + safezoneY;
		w = 0.144375 * safezoneW;
		h = 0.231 * safezoneH;
	};
};