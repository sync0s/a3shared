/*
	File: setupHUD.sqf
	Author: Slovy
	Description: HUD display
*/

disableSerialization;

2 cutRsc ["missionHUD", "PLAIN"];
[] call life_fnc_updateHUD;

while {true} do {
	_health = damage player;
	_water = player_thirst;
	_food = player_hunger;

	waitUntil {
		_health != (damage player) OR
		_water != (player_thirst) OR
		_food != (player_hunger) OR
		isNull (uiNamespace getVariable ["missionHUD", displayNull])
	};
	if (isNull (uiNamespace getVariable ["missionHUD", displayNull])) then {
		2 cutRsc ["missionHUD", "PLAIN"];
	};
	[] call life_fnc_updateHUD;
};