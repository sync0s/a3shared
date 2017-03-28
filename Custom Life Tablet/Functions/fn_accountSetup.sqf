/*
	filename: accountSetup.sqf 
	description: 
		handles account setup 
*/
disableSerialization;

_ctrlPhoneNumber = (findDisplay 11200) displayCtrl 11205;
_enteredNumber = ctrlText _ctrlPhoneNumber;

_cache = toArray(_enteredNumber);
_stored = _cache;

{
	if (_x == 45) then {
		_stored deleteAt _forEachIndex;
	} else {
		if !(_x in (toArray("0123456789"))) then {
			_stored deleteAt _forEachIndex;
		};
	};
} forEach _cache;
_cache = _stored;

if (((count _cache) < 10) OR ((count _cache) > 10) exitwith {
	hint "[ERROR] Improper phone number format entered! Please try again.";
};

_cache = parseNumber (toString _cache);

phone_player_number = _cache;

_cache = toArray(format["%1",phone_player_number]);
_numText = format["(%1) %2-%3",
	toString [(_cache select 0),(_cache select 1),(_cache select 2)],
	toString [(_cache select 3),(_Cache select 4),(_cache select 5)],
	toString [(_cache select 6),(_cache select 7),(_cache select 8),(_cache select 9)]
];

hint format["Congratulations! Your account is setup with phone number: %1",_numText];

closeDialog 0;
createDialog "maui_tablet_contact";