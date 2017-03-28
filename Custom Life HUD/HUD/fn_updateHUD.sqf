/*
	File: updateHUD.sqf
	Author: Slovy
	Description: Updates the HUD realtime
*/
private["_health","_thirst","_hunger","_ctrlHealth","_ctrlThirst","_ctrlHunger","_uid","_fpHealth","_fpThirst","_fpHunger"];
disableSerialization;

_uid = uiNamespace getVariable ["missionHUD", displayNull];

_fpHealth = "\modules\HUD\images\health\";
_fpThirst = "\modules\HUD\images\water\";
_fpHunger = "\modules\HUD\images\food\";

_ctrlHealth = _uid displayCtrl 105;
_ctrlHunger = _uid displayCtrl 101;
_ctrlThirst = _uid displayCtrl 102;

_health = damage player;
_health = _health * 100;
_hunger = player_hunger;
_thirst = player_thirst;

diag_log format["debugHUD %1", _health];

// health
switch (true) do { 
	case ((_health > 95) && (_health <= 100)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"100.paa"]};
	case ((_health > 90) && (_health < 95)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"95.paa"]};
	case ((_health > 85) && (_health < 90)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"90.paa"]};
	case ((_health > 80) && (_health < 85)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"85.paa"]};
	case ((_health > 75) && (_health < 80)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"80.paa"]};
	case ((_health > 70) && (_health < 75)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"75.paa"]};
	case ((_health > 65) && (_health < 70)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"70.paa"]};
	case ((_health > 60) && (_health < 65)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"65.paa"]};
	case ((_health > 55) && (_health < 60)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"60.paa"]};
	case ((_health > 50) && (_health < 55)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"55.paa"]};
	case ((_health > 45) && (_health < 50)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"50.paa"]};
	case ((_health > 40) && (_health < 45)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"45.paa"]};
	case ((_health > 35) && (_health < 40)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"40.paa"]};
	case ((_health > 30) && (_health < 35)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"35.paa"]};
	case ((_health > 25) && (_health < 30)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"30.paa"]};
	case ((_health > 20) && (_health < 25)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"25.paa"]};
	case ((_health > 15) && (_health < 20)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"20.paa"]};
	case ((_health > 10) && (_health < 15)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"15.paa"]};
	case ((_health > 5) && (_health < 10)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"10.paa"]};
	case ((_health >= 0) && (_health < 5)): {_ctrlHealth ctrlSetText format["%1%2", _fpHealth,"5.paa"]};
};

// hunger
switch (true) do { 
	case ((_hunger > 95) && (_hunger <= 100)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"100.paa"]};
	case ((_hunger > 90) && (_hunger < 95)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"90.paa"]};
	case ((_hunger > 80) && (_hunger < 90)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"80.paa"]};
	case ((_hunger > 70) && (_hunger < 80)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"70.paa"]};
	case ((_hunger > 60) && (_hunger < 70)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"60.paa"]};
	case ((_hunger > 50) && (_hunger < 60)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"50.paa"]};
	case ((_hunger > 40) && (_hunger < 50)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"40.paa"]};
	case ((_hunger > 30) && (_hunger < 40)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"30.paa"]};
	case ((_hunger > 20) && (_hunger < 30)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"20.paa"]};
	case ((_hunger > 10) && (_hunger < 20)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"10.paa"]};
	case ((_hunger > 0) && (_hunger < 10)): {_ctrlHunger ctrlSetText format["%1%2", _fpHunger,"0.paa"]};
};

// thirst
switch (true) do { 
	case ((_thirst > 95) && (_thirst <= 100)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"100.paa"]};
	case ((_thirst > 90) && (_thirst < 95)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"90.paa"]};
	case ((_thirst > 80) && (_thirst < 90)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"80.paa"]};
	case ((_thirst > 70) && (_thirst < 80)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"70.paa"]};
	case ((_thirst > 60) && (_thirst < 70)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"60.paa"]};
	case ((_thirst > 50) && (_thirst < 60)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"50.paa"]};
	case ((_thirst > 40) && (_thirst < 50)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"40.paa"]};
	case ((_thirst > 30) && (_thirst < 40)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"30.paa"]};
	case ((_thirst > 20) && (_thirst < 30)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"20.paa"]};
	case ((_thirst > 10) && (_thirst < 20)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"10.paa"]};
	case ((_thirst > 0) && (_thirst < 10)): {_ctrlThirst ctrlSetText format["%1%2", _fpThirst,"0.paa"]};
};