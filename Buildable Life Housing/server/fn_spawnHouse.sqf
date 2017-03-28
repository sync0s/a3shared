/*
	Filename: spawnHouse.sqf 
	Author: sync0s 
	Description: 
		Handles the spawning of houses in MP

	Usage:
		MODE - [Number]
			0 = Read from database all houses and spawn them (only run on server launch)
			1 = Spawn a specific house 
		DATA - [Array] (OPTIONAL)
			Only required if MODE = 1
			Contains an array of all the data that would normally be found in the database
*/
_this params [
	["_mode", 1],
	["_data", []]
];

_fnc_getClass = {
	private["_return","_state"];
	_this params [
		["_state", 4],
		["_baseClass", ""]
	];

	_return = switch (_state) do {
		case 1: {"Land_Studstage1"};
		case 2: {"Land_Studstage2"};
		case 3: {"Land_Studstage3"};
		default {_baseClass};
	};

	_return;
};

_fnc_crateNeeded = {
	private["_return","_state"];
	_this params [
		["_state", 4]
	];

	_return = if (_state < 4) then {true} else {false};
	_return;
};

_fnc_createHouse = {
	private["_class","_posATL","_dir","_house","_playerID","_state"];
	_this params [
		["_class",""],
		["_posATL", []],
		["_dir", 0],
		["_playerID", ""],
		["_state", 4]
	];

	_house = createVehicle [_class, _posATL, [], 5, "NONE"];
	_house setdir _dir;
	_house setVectorUP (surfaceNormal [(getPosATL _house) select 0,(getPosATL _house) select 1, (getPosATL _house) select 2]);
	_house setPosATL [(getPosATL _house select 0),(getPosATL _house select 1), (getPosATL _house select 2)];
	_house allowDamage false;
	_hPos = getPos _house;

	if (_state call _fnc_crateNeeded) then {
		_crate = "Land_WoodenCrate_01_F" createVehicle _hPos;
		_crate attachTo [_house, [-7, -10, 0.25]];
		_crate setVariable["house_owner",[_playerID],true];
	} else {
		_house setVariable["house_owner",[_playerID],true];
        _house setVariable["locked",true,true]; //Lock up all the stuff.
        _house setVariable ["containers",[],true];
    	_house setVariable ["uid",floor(random 99999),true];

		_numDoors = getNumber(configFile >> "CfgVehicles" >> (typeOf _house) >> "numberOfDoors");
		for "_i" from 1 to _numDoors do {
			_house setVariable[format["bis_disabled_Door_%1",_i],1,true];
		};
	};

	if (_state > 3) then {
		_numOfDoors = getNumber(configFile >> "CfgVehicles" >> _class >> "numberOfDoors");
		for "_i" from 1 to _numOfDoors do {
            _house setVariable[format["bis_disabled_Door_%1",_i],1,true];
        };
	};

	_house;
};

switch (_mode) do {
	case 0: {
		_count = (["SELECT COUNT(*) FROM housing WHERE admin_remove='0'",2] call DB_fnc_asyncCall) select 0;

		for [{_x=0},{_x<=_count},{_x=_x+10}] do {
			_query = format["SELECT playerid, class, pos, dir, state, inventory, materials, uid FROM housing WHERE admin_remove='0' LIMIT %1,10",_x];
			_queryResult = [_query,2,true] call DB_fnc_asyncCall;
			if (count _queryResult isEqualTo 0) exitWith {};
		    {
		    	_class = [_x select 4, _x select 1] call _fnc_getClass;
		    	diag_log format["HOUSING CLASS: %1 - %2",_class,_x select 1];
		    	_house = [_class, _x select 2, _x select 3, _x select 0, _x select 4] call _fnc_createHouse;
				_house setVariable["house_id",(_x select 7),true];
		    	life_fnc_housingArray pushback _house;
			} forEach _queryResult;
		};
	};
	case 1: {
		if ((count _data) < 5) exitWith {};

		_class = [_data select 4, _data select 1] call _fnc_getClass;
		_house = [_class, _data select 2, _data select 3, _data select 0, _data select 4] call _fnc_createHouse;
		_query = format["SELECT uid FROM housing WHERE pos='%1' AND playerid='%2'",_posATL,_playerID];
		_queryResult = [_query,2] call DB_fnc_asyncCall;
		_house setVariable["house_id",(_queryResult select 0),true];
		life_fnc_housingArray pushback _house;
	};
};