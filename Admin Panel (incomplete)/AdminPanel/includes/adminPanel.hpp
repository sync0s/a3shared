class admin_panel {
	idd = 15000;
	movingEnabled = true;
	enableSimulation = true;
	onLoad = "[] spawn life_fnc_adminLoad;";

	class controlsBackground {
		class BackgroundImage : Life_RscPicture {
			idc = 15001;
			text = "images/admin_dashboard.paa";
			x = 0.190625 * safezoneW + safezoneX;
			y = 0.0708391 * safezoneH + safezoneY;
			w = 0.5775 * safezoneW;
			h = 0.858322 * safezoneH;
		};
	};

	class controls {
		class btnDashboard: Life_RscButtonSilent {
			idc = 15002;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "['dashboard'] spawn life_fnc_adminTab;";
			x = 0.195781 * safezoneW + safezoneX;
			y = 0.279917 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.0440165 * safezoneH;
		};

		class btnSupport: Life_RscButtonSilent {
			idc = 15003;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "['support'] spawn life_fnc_adminTab;";
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.334938 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.0440165 * safezoneH;
		};

		class btnTools: Life_RscButtonSilent {
			idc = 15004;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "['tools'] spawn life_fnc_adminTab;";
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.378955 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.0440165 * safezoneH;
		};

		class btnAdminLogs: Life_RscButtonSilent {
			idc = 15005;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "['adminlogs'] spawn life_fnc_adminTab;";
			x = 0.200937 * safezoneW + safezoneX;
			y = 0.422971 * safezoneH + safezoneY;
			w = 0.139219 * safezoneW;
			h = 0.0440165 * safezoneH;
		};

		class btnPlayerLogs: Life_RscButtonSilent {
			idc = 15006;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "['playerlogs'] spawn life_fnc_adminTab;";
			x = 0.195781 * safezoneW + safezoneX;
			y = 0.466988 * safezoneH + safezoneY;
			w = 0.144375 * safezoneW;
			h = 0.0550206 * safezoneH;
		}; 



		/*
			////////////////
			   Admin Tools
			\\\\\\\\\\\\\\\\
		*/


		class btnTeleport: Life_RscButtonSilent {
			idc = 15007;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.290922 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.0660248 * safezoneH;
		};
		class btnTeleportHere: Life_RscButtonSilent {
			idc = 15008;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "missionNamespace setVariable ['selPlayerTarget','teleporthere',true]; closeDialog 0; createDialog 'select_player';";
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.290922 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.0660248 * safezoneH;
		};
		class btnTeleportTo: Life_RscButtonSilent {
			idc = 15009;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "missionNamespace setVariable ['selPlayerTarget','teleportto',true]; closeDialog 0; createDialog 'select_player';";
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.290922 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.0660248 * safezoneH;
		};
		class btnInvisible: Life_RscButtonSilent {
			idc = 15010;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			x = 0.355625 * safezoneW + safezoneX;
			y = 0.378955 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.0550206 * safezoneH;
		};
		class btnSpectate: Life_RscButtonSilent {
			idc = 15011;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "missionNamespace setVariable ['selPlayerTarget','spectate',true]; closeDialog 0; createDialog 'select_player';";
			x = 0.494844 * safezoneW + safezoneX;
			y = 0.378955 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.0550206 * safezoneH;
		};
		class btnFreeze: Life_RscButtonSilent {
			idc = 15012;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "missionNamespace setVariable ['selPlayerTarget','freeze',true]; closeDialog 0; createDialog 'select_player';";
			x = 0.639219 * safezoneW + safezoneX;
			y = 0.378955 * safezoneH + safezoneY;
			w = 0.113437 * safezoneW;
			h = 0.0550206 * safezoneH;
		};
		class btnCompSend: Life_RscButtonSilent {
			idc = 15013;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			x = 0.536094 * safezoneW + safezoneX;
			y = 0.522008 * safezoneH + safezoneY;
			w = 0.0360937 * safezoneW;
			h = 0.0330124 * safezoneH;
		};
		class btnSelectPlayer: Life_RscButtonSilent {
			idc = 15014;
			colorBackground[] = {"(profilenamespace getvariable ['GUI_BCG_RGB_R',0.3843])", "(profilenamespace getvariable ['GUI_BCG_RGB_G',0.7019])", "(profilenamespace getvariable ['GUI_BCG_RGB_B',0.8862])", 0};
			onButtonClick = "missionNamespace setVariable ['selPlayerTarget','query',true]; closeDialog 0; createDialog 'select_player';";
			x = 0.510312 * safezoneW + safezoneX;
			y = 0.610041 * safezoneH + safezoneY;
			w = 0.0928125 * safezoneW;
			h = 0.0440165 * safezoneH;
		};
		class comboRcv: Life_RscCombo {
			idc = 15015;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.0220083 * safezoneH;
		};
		class comboForce: Life_RscCombo {
			idc = 15016;
			x = 0.567031 * safezoneW + safezoneX;
			y = 0.5 * safezoneH + safezoneY;
			w = 0.175313 * safezoneW;
			h = 0.0220083 * safezoneH;
		};
		class editAmount: Life_RscEdit {
			idc = 15017;
			x = 0.365937 * safezoneW + safezoneX;
			y = 0.555021 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.0220083 * safezoneH;
		};
		class editReason: Life_RscEdit {
			idc = 15018;
			x = 0.572187 * safezoneW + safezoneX;
			y = 0.555021 * safezoneH + safezoneY;
			w = 0.170156 * safezoneW;
			h = 0.0220083 * safezoneH;
		};
		class txtInfo: Life_RscStructuredText {
			idc = 15019;
			text = "";
			x = 0.391719 * safezoneW + safezoneX;
			y = 0.665062 * safezoneH + safezoneY;
			w = 0.293906 * safezoneW;
			h = 0.121045 * safezoneH;
		};
	};
};