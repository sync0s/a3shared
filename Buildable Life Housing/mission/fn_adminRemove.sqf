/*
	Filename: adminRemove.sqf 
	Author: sync0s 
	Description:
		Gives admins the ability to remove houses that are placed in bad positions/places 

		0 - remove house
		1 - remove crate
*/
_this params [
	["_curTarget",objNull,[objNull]],
	["_mode",0,[0]]
];

if (isNull _curTarget) exitWith {};
[_curTarget, _mode, profileName] remoteExec ["server_fnc_adminRemove",2];