/*
	Filename: adjustHouse.sqf 
	Author: sync0s
	Description: 
		Adjusts the house position, rotation, and Z axis based on player adjustments 
*/
_this params [
	["_action",""],
	["_data",""]
];

_fnc_renormalize = {
	life_house_placeable setVectorUP (surfaceNormal [(getPosATL life_house_placeable) select 0,(getPosATL life_house_placeable) select 1, (getPosATL life_house_placeable) select 2]);
	life_house_placeable setPosATL [(getPosATL life_house_placeable select 0),(getPosATL life_house_placeable select 1), (getPosATL life_house_placeable select 2)];
};

switch (_action) do {
	case "ROTATE": {
		_dir = direction life_house_placeable;
		if (_data isEqualTo "left") then {
			life_house_placeable setDir (_dir + 90);
		} else {
			life_house_placeable setDir (_dir - 90);
		};
		[] call _fnc_renormalize;
	};

	case "MOVE": {
		_posATL = getPosATL life_house_placeable;
		switch (_data) do {
			case "forward": {life_house_placeable setPosATL [(_posATL select 0), ((_posATL select 1) + 1), (_posATL select 2)]};
			case "backward": { life_house_placeable setPosATL [(_posATL select 0), ((_posATL select 1) - 1), (_posATL select 2)]};
			case "left": {life_house_placeable setPosATL [((_posATL select 0) + 1), (_posATL select 1), (_posATL select 2)]};
			case "right": {life_house_placeable setPosATL [((_posATL select 0) - 1), (_posATL select 1), (_posATL select 2)]};
		};
		[] call _fnc_renormalize;
	};

	case "ZAxis": {
		_posATL = getPosATL life_house_placeable;
		if (_data isEqualTo "raise") then {
			life_house_placeable setPosATL [(_posATL select 0),(_posATL select 1),((_posATL select 2) + 0.05)];
		} else {
			life_house_placeable setPosATL [(_posATL select 0),(_posATL select 1),((_posATL select 2) - 0.05)];
		};
		[] call _fnc_renormalize;
	};
};