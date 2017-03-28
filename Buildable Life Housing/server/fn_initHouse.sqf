/*
	Filename: initHouse.sqf 
	Author: sync0s 
	Description:
		Creates all of the houses in the mp map 
*/
life_fnc_housingReady = false;
publicVariable "life_fnc_housingReady";

_handle = [0] spawn server_fnc_spawnHouse;
waitUntil { scriptDone _handle; };



life_fnc_housingReady = true;
publicVariable "life_fnc_housingReady";