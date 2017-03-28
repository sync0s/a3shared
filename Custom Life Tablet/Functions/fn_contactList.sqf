/*
	Filename: contactList.sqf 
	Description:
		Handles adding / removing contacts from the contact list
*/
private["_delContact"];
_delContact = [_this,0,false,[false]] call bis_fnc_param;
disableSerialization;

_ctrlContactNameEdit = (findDisplay 11300) displayCtrl 11304;
_ctrlContactNumEdit = (findDisplay 11300) displayCtrl 11305;
_ctrlContactsLb = (findDisplay 11300) displayCtrl 11306;

if (_delContact) then {
	// delete contact
	_contactIndex = lbCurSel _ctrlContactsLb;
	
	phone_contacts_list deleteAt _contactIndex;
	hint "Contact has been deleted.";
	
	closeDialog 0;
	createDialog "maui_tablet_contact";
} else {
	// add contact

	_pNumber = ctrlText _ctrlContactNumEdit;
	_displayName = ctrlText _ctrlContactNameEdit;

	// Break into array
	_cache = toArray(_pNumber);
	_stored = _cache;

	// Loop through and remove any -'s and non numerical cheracters
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

	if (((count _cache) > 10) OR (count _cach < 10)) exitWith {hint "Invalid phone number entered. Please use the correct format!"};
	_cache = parseNumber (toString _cache);

	phone_contacts_list pushback [_displayName,_cache];
	hint format["%1 has been added to your contact list!",_displayName];

	closeDialog 0;
	createDialog "maui_tablet_contact";
};