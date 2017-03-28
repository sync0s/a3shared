/*
	Filename: fn_unitKilled.sqf
	Author: Feel Good
	
	Description:
		Event Handle when AI in mission gets killed
*/
private["_unit","_killer","_squad","_message","_pos","_obj"];
_unit = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;
_killer = [_this,1,ObjNull,[ObjNull]] call BIS_fnc_param;
_message = format["A bandit was killed by %1",_killer getVariable["realname",name _killer]];

_squad = missionNamespace getVariable["sideMission",[]];
diag_log _squad;

if ((count _squad) < 1) exitWith {diag_log "error, less than 1 squad"}; // What the hell?

[[0,_message],"life_fnc_broadcast",true,false] spawn life_fnc_MP;

_squad = _squad - [_unit];
missionNamespace setVariable["sideMission",_squad];

_pos = _unit modelToWorld[0,3,0];
_pos = [_pos select 0, _pos select 1, 0];
_obj = "Land_Money_F" createVehicle _pos;
_obj setVariable["item",["money",2500],true];
_obj setPos _pos;

[_unit] spawn {
	sleep 5 * 60;
	deleteVehicle (_this select 1);
};