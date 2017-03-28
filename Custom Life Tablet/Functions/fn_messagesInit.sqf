/*
	Filename: messagesInit.sqf 
	Description: 
		Handles the display of cell phone contacts in the tablet 
*/
private["_ctrlContactsLb"];
disableSerialization;

if (!dialog) exitWith {};

_ctrlContactsLb = (findDisplay 11100) displayCtrl 11105;
lbClear _ctrlContactsLb;

if (phone_player_number == 0) then {
	// Handle phone account not setup here!
	hint "Account not setup!";

	closeDialog 0;
	createDialog "maui_tablet_msg_setup";
} else {
	{
		private["_dispName","_phoneNumber"];
		_dispName = _x select 0;
		_phoneNumber = _x select 1;

		_ctrlContactsLb lbAdd format["%1",_dispName];
		_ctrlContactsLb lbSetData [(lbSize _ctrlContactsLb)-1,format["%1",_phoneNumber]];
		_ctrlContactsLb lbSetPicture [(lbSize _ctrlContactsLb)-1,"media\ui\tablet\contact-blank.paa"];
	} foreach phone_contacts_list;
};