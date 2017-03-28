/*
	Filename: placeHouse.sqf 
	Author: sync0s 
	Description:
		Places house on the map and allows player to adjust the position

		MODE:
			0 - Create house
			1 - Confirm house placement
			2 - Cancel house placement
		ITEM - Optional
*/
_this params [
	["_mode",0],
	["_item",""]
];

closeDialog 0;

switch (_mode) do {
	case 0: {
		if (_item isEqualTo "") exitWith {}; // Item required for mode 0
		if(!([false, _item, 1] call life_fnc_handleInv)) exitWith {hint "You don't have any house blueprints to use!"};
		_model = getText (missionConfigFile >> "VirtualItems" >> _item >> "model");

		systemchat format["Housedebug: model %1",_item];

		_nearRoads = position player nearRoads 10; 
		if (count _nearRoads > 0) then {
			_road = _nearRoads select 0; 
			_roadConnectedTo = roadsConnectedTo _road; 
			_connectedRoad = _roadConnectedTo select 0; 
			_direction = [_road, _connectedRoad] call BIS_fnc_DirTo; 

			life_house_placeable = createVehicle [_model, _road modelToWorld [0, 20, 0.2], [], 5, "NONE"]; 

			life_house_placeable setdir (_direction + 90);
			life_house_placeable setVectorUP (surfaceNormal [(getPosATL life_house_placeable) select 0,(getPosATL life_house_placeable) select 1, 5]);
			life_house_placeable setPosATL [(getPosATL life_house_placeable select 0),(getPosATL life_house_placeable select 1),0.25];
			life_house_placeable addaction["Modify House Placement",{createDialog "house_menu";}];
			life_house_placeable setVariable ["item",_item,TRUE];
			player setdir ([player, life_house_placeable] call BIS_fnc_DirTo);
			createDialog "house_menu";
		} else {
			hint "You have to be nearer to a raod!";
			_diff = [_item,1,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
			[true,_item,_diff] call life_fnc_handleInv;
		};
	};

	case 1: {
		_nearRoads = position player nearRoads 50; 
		if (count _nearRoads <= 0) exitWith {hint "Error: the house is too far from a road!"};
		_failed = false;
		{
			if ((life_house_placeable distance _x) < 20) exitWith {_failed = true};
				systemchat format["Housedebug: distance %1",(life_house_placeable distance (_nearRoads select 0))];
		} foreach _nearRoads;
		if (_failed) exitWith {hint "Error: the house is too close to a road!"};
		

		removeAllActions life_house_placeable;
		_posATL = getPosATL life_house_placeable;
		_dir = direction life_house_placeable;
		_class = typeof life_house_placeable;

		[GetPlayerUID player, _class, _posATL, _dir] remoteExec ["server_fnc_newHouse", 2];
		deleteVehicle life_house_placeable;
		hint "You're house is now being built!";
	};

	case 2: {
		deleteVehicle life_house_placeable;
		_item = life_house_placeable getVariable ["item",""];
		_diff = [_item,1,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
		[true,_item,_diff] call life_fnc_handleInv;
		hint "Your placement has been canceled, and blueprints have been returned to you!";
	};
};