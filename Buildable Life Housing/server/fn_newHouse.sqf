/*
	Filename: newHouse.sqf 
	Author: sync0s 
	Description: 
		Handles new houses 
*/
_this params [
	["_playerID", ""],
	["_class", ""],
	["_posATL", []],
	["_dir", 0]
];

if ((_playerID isEqualTo "") OR (_class isEqualTo "") OR (count _posATL < 3)) exitWith {diag_log "New House: Invalid Data"};
_materials = [];

_query = format["INSERT INTO housing (playerid, class, pos, dir, state, inventory, materials) VALUES ('%1', '%2', '%3', '%4', '%5', '[]' , '%6')", _playerID, _class, _posATL, _dir, 1, _materials];
[_query,1] call DB_fnc_asyncCall;

[1, [_playerID, _class, _posATL, _dir, 1, _materials]] spawn server_fnc_spawnHouse;