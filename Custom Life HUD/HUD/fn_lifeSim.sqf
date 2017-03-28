/*
	Filename: lifeSim.sqf 
	Author: sync0s [ind3pth studios]
	Description:
		Handles thirst and hunger degradation
*/
while {true} do {
	_dgtime = diag_ticktime;

	waitUntil {round(diag_ticktime - _dgtime) > 30};

	if (player_thirst < 6) then {
		if ((damage player) == 0) then {player setDamage 0.5} else {player setDamage ((damage player) + ((damage player) * 0.5))};
		hint "You're losing health, you need water!";
	} else {
		player_thirst = player_thirst - 1;
	};

	if (player_hunger < 6) then {
		if ((damage player) == 0) then {player setDamage 0.5} else {player setDamage ((damage player) + ((damage player) * 0.5))};
		hint "You're losing health, you need food!";
	} else {
		player_hunger = player_hunger - 1;
	};

	[] call life_fnc_updateHUD;
};