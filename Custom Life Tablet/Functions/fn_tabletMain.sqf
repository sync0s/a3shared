/*
	Filename: tabletMain.sqf 
	Description:
		Initial tablet loading
*/
private["_ATMCash","_ATMBank","_OATMCash","_OATMBank","_ItemsList","_uniform","_vest","_backpack","_cache","_countItem","_count"];

disableSerialization;

_ATMCash = (findDisplay 6000) displayCtrl 6012;
_ATMBank = (findDisplay 6000) displayCtrl 6013;
_OATMCash = (findDisplay 6000) displayCtrl 6014;
_OATMBank = (findDisplay 6000) displayCtrl 6015;
_ItemsList = (findDisplay 6000) displayCtrl 6016;
lbClear _ItemsList;

_uniform = uniformItems player;
_vest = vestItems player;
_backpack = backpackItems player;

_cache = [];

{
	if !(_x in _cache) then {
		_cache pushback _x;
		_countItem = _x;
		_count = 0;
		{
			if (_x == _countItem) then {_count = _count + 1};
		} foreach _uniform + _vest + _backpack;

		if ((getText(configfile >> "CfgWeapons" >> _countItem >> "displayName")) != "") then {
			_ItemsList lbAdd format["%1 (x%2)",getText(configfile >> "CfgWeapons" >> _countItem >> "displayName"),_count];
			_ItemsList lbSetData [(lbSize _ItemsList)-1,_countItem];
		};
	};
} foreach _uniform + _vest + _backpack;

// Properly format money amounts in a clean tight format
_cash = "";
_bank = "";
_ocash = "";
_obank = "";
{
	_tmp = "";
	switch (true) do {
		case (_x > 1000000): {
			_tmp = (_x / 1000000);
			_tmp = round (_tmp * (10 ^ 2)) / (10 ^ 2);
			_tmp = format["   $%1m",[_tmp] call core_fnc_numberText];
		};
		case (_x > 1000): {
			_tmp = (_x / 1000);
			_tmp = round (_tmp * (10 ^ 2)) / (10 ^ 2);
			_tmp = format["   $%1k",[_tmp] call core_fnc_numberText];
		};
		default {
			_tmp = format["   $%1",[_x] call core_fnc_numberText];
		};
	};

	switch (_forEachIndex) do {
		case 0: {_cash = _tmp};
		case 1: {_bank = _tmp};
		case 2: {_ocash = _tmp};
		case 3: {_obank = _tmp};
	};
} foreach [player_atm_cash,player_atm_bank,player_oatm_cash,player_oatm_bank];

_ATMCash ctrlSetStructuredText parseText format["<t size='0.6' color='#009933'>%1</t>",_cash];
_ATMBank ctrlSetStructuredText parseText format["<t size='0.6' color='#009933'>%1</t>",_bank];
_OATMCash ctrlSetStructuredText parseText format["<t size='0.6' color='#009933'>%1</t>",_ocash];
_OATMBank ctrlSetStructuredText parseText format["<t size='0.6' color='#009933'>%1</t>",_obank];