/*
	Filename: atmMenu.sqf
	Description:
		Launches ATM dialog
*/
if (!dialog) then {
	if (!(createDialog "Maui_ATM")) exitWith {};
};

disableSerialization;
/*
_idd = findDisplay 4000;
_bankATM = _idd displayCtrl 4002;
_cashATM = _idd displayCtrl 4003;
_playerList = _idd displayCtrl 4007;

lbClear _playerList;

_bankATM ctrlSetText format["%1",[player_atm_bank] call core_fnc_numberText];
_cashATM ctrlSetText format["%1",[player_atm_cash] call core_fnc_numberText];


{
	if (alive _x) then {
		switch (side _x) do {
			case west: {_type = "Cop"};
			case civilian: {_type = "Civ"};
			case independent: {_type = "EMS"};
		};
		_units lbAdd format["%1 (%2)",_x getVariable["realname",name _x],_type];
		_units lbSetData [(lbSize _units)-1,str(_x)];
	};
} forEach playableUnits;

lbSetCurSel [4007,0];
*/