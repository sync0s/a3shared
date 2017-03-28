/*
	Filename: pushbackHouse.sqf 
	Author: sync0s 
	Description:
		pushes house into player life_vehicles array 
*/
_this params [
	["_uid",""],
	["_house",objNull]
];

diag_log format["pushbackHouse %1 %2",_uid,_house];

if !((getPlayerUID player) isEqualTo _uid) exitWith {};

diag_log "pushbackHouse true";

if ((typeName _house) == "OBJECT") then {life_vehicles pushback _house};
if ((typeName _house) == "ARRAY") then {
	{
		life_vehicles pushback _x;
	} foreach _house;
};