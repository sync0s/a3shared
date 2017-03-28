class house_menu {
	idd = 17000;
	movingEnable = 1;
	enableSimulation = 1;

	class controls {
		class RscBackground: Life_RscText
		{
			colorBackground[] = {0, 0, 0, 0.7};
            idc = -1;
			x = 0.866094 * safezoneW + safezoneX;
			y = 0.686938 * safezoneH + safezoneY;
			w = 0.118594 * safezoneW;
			h = 0.285907 * safezoneH;
		};
		class btnConfirm: Life_RscButtonMenu
		{
			onButtonClick = "[1] spawn life_fnc_placeHouse;";
			idc = 17001;
			text = "Confirm Placement"; //--- ToDo: Localize;
			x = 0.881562 * safezoneW + safezoneX;
			y = 0.906867 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0219928 * safezoneH;
		};
		class btnCancel: Life_RscButtonMenu
		{
			onButtonClick = "[2] spawn life_fnc_placeHouse;";
			idc = 17002;
			text = "Cancel Placement"; //--- ToDo: Localize;
			x = 0.881562 * safezoneW + safezoneX;
			y = 0.939856 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0219928 * safezoneH;
		};
		class rotatePlus10: Life_RscButtonMenu
		{
			onButtonClick = "['ROTATE','right'] spawn life_fnc_adjustHouse;";
			idc = 17003;
			text = "Rotate Right"; //--- ToDo: Localize;
			x = 0.938281 * safezoneW + safezoneX;
			y = 0.818896 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.0439856 * safezoneH;
		};
		class btnRotateLeft10: Life_RscButtonMenu
		{
			onButtonClick = "['ROTATE','left'] spawn life_fnc_adjustHouse;";
			idc = 17004;
			text = "Rotate Left"; //--- ToDo: Localize;
			x = 0.876406 * safezoneW + safezoneX;
			y = 0.818896 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.0439856 * safezoneH;
		};
		class btnRaise: Life_RscButtonMenu
		{
			onButtonClick = "['ZAxis','raise'] spawn life_fnc_adjustHouse;";
			idc = 17005;
			text = "Raise House"; //--- ToDo: Localize;
			x = 0.876406 * safezoneW + safezoneX;
			y = 0.730925 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.0439856 * safezoneH;
		};
		class btnLower: Life_RscButtonMenu
		{
			onButtonClick = "['ZAxis','lower'] spawn life_fnc_adjustHouse;";
			idc = 17006;
			text = "Lower House"; //--- ToDo: Localize;
			x = 0.938281 * safezoneW + safezoneX;
			y = 0.730925 * safezoneH + safezoneY;
			w = 0.04125 * safezoneW;
			h = 0.0439856 * safezoneH;
		};
		class btnInspect: Life_RscButtonMenu
		{
			onButtonClick = "closeDialog 0;";
			idc = 17007;
			text = "Inspect Placement"; //--- ToDo: Localize;
			x = 0.876406 * safezoneW + safezoneX;
			y = 0.697935 * safezoneH + safezoneY;
			w = 0.0979687 * safezoneW;
			h = 0.0219928 * safezoneH;
		};
		class btnForward: Life_RscButtonMenu
		{
			onButtonClick = "['MOVE','forward'] spawn life_fnc_adjustHouse;";
			idc = 17008;
			text = "Forward"; //--- ToDo: Localize;
			x = 0.902187 * safezoneW + safezoneX;
			y = 0.785907 * safezoneH + safezoneY;
			w = 0.0515625 * safezoneW;
			h = 0.0219928 * safezoneH;
		};
		class btnBackward: Life_RscButtonMenu
		{
			onButtonClick = "['MOVE','backward'] spawn life_fnc_adjustHouse;";
			idc = 17009;
			text = "Backward"; //--- ToDo: Localize;
			x = 0.902187 * safezoneW + safezoneX;
			y = 0.873878 * safezoneH + safezoneY;
			w = 0.0567187 * safezoneW;
			h = 0.0219928 * safezoneH;
		};
		class btnLeft: Life_RscButtonMenu
		{
			onButtonClick = "['MOVE','left'] spawn life_fnc_adjustHouse;";
			idc = 17010;
			text = "L"; //--- ToDo: Localize;
			x = 0.876406 * safezoneW + safezoneX;
			y = 0.785907 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.0219928 * safezoneH;
		};
		class btnRight: Life_RscButtonMenu
		{
			onButtonClick = "['MOVE','right'] spawn life_fnc_adjustHouse;";
			idc = 17011;
			text = "R"; //--- ToDo: Localize;
			x = 0.964063 * safezoneW + safezoneX;
			y = 0.785907 * safezoneH + safezoneY;
			w = 0.0154688 * safezoneW;
			h = 0.0219928 * safezoneH;
		};
	};
};