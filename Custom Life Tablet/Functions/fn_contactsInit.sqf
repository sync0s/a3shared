/*
	Filename: contactsInit.sqf 
	Description: 
		Initialized on dialog display for editing Contact Lists 
*/
private["_ctrlContactNameEdit","_ctrlContactNumEdit","_ctrlContactsLb","_cache"];
disableSerialization;

_ctrlContactNameEdit = (findDisplay 11300) displayCtrl 11304;
_ctrlContactNumEdit = (findDisplay 11300) displayCtrl 11305;
_ctrlContactsLb = (findDisplay 11300) displayCtrl 11306;

if (phone_player_number == 0) then {
	// Handle phone account not setup here!
	hint "Account not setup!";
	
	closeDialog 0;
	createDialog "maui_tablet_msg_setup";
} else {
	// Display user's Contact Information in the new contact field by default
	_ctrlContactNameEdit ctrlSetText format["%1",profileName];
	_cache = toArray(format["%1",phone_player_number]);
	_ctrlContactNumEdit ctrlSetText format["(%1) %2-%3",
		toString [(_cache select 0),(_cache select 1),(_cache select 2)],
		toString [(_cache select 3),(_Cache select 4),(_cache select 5)],
		toString [(_cache select 6),(_cache select 7),(_cache select 8),(_cache select 9)]
	];
};

{
	private["_displayName","_pNumber","_numString"];
	_displayName = (_x select 0);
	_pNumber = (_x select 1);

	// Format number in a clean way
	_cache = toArray(_pNumber);
	if ((count _cache) < 10) then {
		// bad number in the contacts list
		phone_contacts_list deleteAt _forEachIndex;
	} else {
		_numString = format["(%1) %2-%3",
			toString [(_cache select 0),(_cache select 1),(_cache select 2)],
			toString [(_cache select 3),(_Cache select 4),(_cache select 5)],
			toString [(_cache select 6),(_cache select 7),(_cache select 8),(_cache select 9)]
		];

		_ctrlContactsLb lbAdd format["%1 (%2)",_displayName,_numString];
	};
} foreach phone_contacts_list;