/*
	filename: tabletItem.sqf 
	description:
		for the use and drop item buttons in the tablet 
*/
private["_action"];
_action = [_this,0,"",[""]] call bis_fnc_param;

disableSerialization;

_ItemsList = (findDisplay 6000) displayCtrl 6016;

switch (_action) do {
	case "use": {
		_index = lbCurSel _ItemsList;
		_data = _ItemsList lbData _index;

		if (_data in ["water","coffee","juice_box","soda"]) then {
			hint "Thirst quenched.";
			player removeItem _data;
			player_thirst = 100;
		};

		if (_data in ["canned_food","chips","donut","pbj","cooked_meat","candy_bar","twinkies"]) then {
			hint "Feeling full.";
			player removeItem _data;
			player_hunger = 100;
		};

		if (_data == "marijuana_ounce") then {
			[] spawn maui_fnc_smokeWeed;
		};
	};
};

closeDialog 0;