/*
	Filename: atmTransaction.sqf
	Description:
		Handle transactions at the ATM of all types
	
	Usage:
		0 - NUMBER
			0 - Deposit
			1 - Withdraw
			2 - Transfer
			3 - Loan
			4 - None
*/
private["_trans","_val","_validNumbers","_toNumArray","_numArray"];
if (dialog) then { closeDialog 0 };
_trans = [_this,0,3,[3]] call BIS_fnc_param;
_val = parseNumber(ctrlText 4121);
diag_log format["ATM MENU: %1 %2",_trans, _val];

if ((_trans < 0) OR (_trans > 2)) exitWith {};

// Ensure entered value is a number
_validNumbers = true;
_toNumArray = toArray(str(_val));
_numArray = [];
for "_i" from 0 to (count _toNumArray)-1 do {
	_numArray = _numArray + [toString([_toNumArray select _i])];
};
{
	if (!(_x in ["0","1","2","3","4","5","6","7","8","9"])) exitWith {
		_validNumbers = false;
	};
} forEach _numArray;
if (!_validNumbers) exitWith {};

if ((_val > 999999) OR (_val < 0)) exitWith {
	if (_val > 999999) then { hint "ATM Cannot handle amounts greater than $999,999!" };
};

switch (_trans) do {
	// Deposit
	case 0: {
		if (_val > player_atm_cash) exitWith {hint "Sorry, you don't have enough cash to deposit!"};
		player_atm_bank = player_atm_bank + _val;
		player_atm_cash = player_atm_cash - _val;
		hint format["Deposited $%1 into your bank account",[_val] call core_fnc_numberText];
	};
	
	// Withdraw
	case 1: {
		if (_val > player_atm_bank) exitWith {hint "Insufficient Funds!"};
		player_atm_bank = player_atm_bank - _val;
		player_atm_cash = player_atm_cash + _val;
		hint format["Withdrew $%1 from your bank account",[_val] call core_fnc_numberText];
	};
	
	// Transfer
	case 2: {
		if (_val > player_atm_bank) exitWith {hint "Insufficient Funds!"};
		hint "TODO: Transfer";
	};
	
	case 3: {
		hint "TODO: Loan";
	};
	
	default {
		hint "ATM is currently out of service!";
	};
};

// TODO UPDATE DATABASE!!!