/*
	Filename: ownedHouses.sqf 
	Author: sync0s
	Description: 
		Returns player owned houses to be pushed into life_vehicles array (for connecting players)
*/

_this params [
	["_unit",objNull]
];

if (isNull _unit) exitWith {};
_uid = getPlayerUID _unit;

_return = [];
{
	_compare = _x getVariable ["house_owner",[]];
	if ((_compare select 0) == _uid) then {_return pushback _x};
} foreach life_fnc_housingArray;

if !((count _return) > 0) exitWith {};

[_uid,_return] remoteExec ["life_fnc_pushbackHouse",-2];