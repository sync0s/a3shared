/*
	Filename: fn_startMission.sqf
	Author: Feel Good
	
	Description:
		Randomly select a side mission and start it
*/
private["_towns","_weapon","_missionTypes","_missionTown","_missionType","_handle"];
_towns = _this select 0;
_weapons = _this select 1;
_missionTypes = _this select 2;

_missionType = _missionTypes call BIS_fnc_selectRandom;

if (_missionType == "No Mission") exitWith {}; //No side mission this time.

/*
// Commenting out until more mission types are added
// Creates more variation in mission types selected
while {_missionType == life_mission_last} do {
	_missionType = _missionTypes call BIS_fnc_selectRandom;
};
*/

switch (_missionType) do {
	case "Town Invasion": {
		_missionTown = _towns call BIS_fnc_selectRandom;
		
		// Prevent two consecutive missions from being in the same town
		while {_missionTown == life_mission_lastTown} do {
			_missionTown = _towns call BIS_fnc_selectRandom;
		};
		
		life_mission_active = true;
		life_mission_current = _missionType;
		life_mission_lastTown = _missionTown;
		
		_handle = [_missionTown,_weapons] spawn life_fnc_townInvasion;
		waitUntil {scriptDone _handle};
		
		life_mission_active = false;
	};
};