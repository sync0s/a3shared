/*
	Filename: contactSel.sqf 
	Description: 
		Handles contact selection altering display of messages
*/
private["_ctrl","_sel"];
_ctrl = _this select 0;
_sel = _this select 1;
disableSerialization;

_ctrlMessagesLb = (findDisplay 11100) displayCtrl 11106;
lbClear _ctrlMessagesLb;

_pNum = phone_contacts_list select _sel select 1;

{
	if ((_x select 0) == _pNum) then {
		diag_log format["MESSAGE %1",_x select 1];
		_ctrlMessagesLb lbAdd format["%1",_x select 1];
		_ctrlMessagesLb lbSetData [(lbSize _ctrlMessagesLb)-1,format["%1",_pNum]];
		if (_x select 2) then {
			_ctrlMessagesLb lbSetPicture [(lbSize _ctrlMessagesLb)-1,"media\ui\tablet\msg-recv.paa"];
		} else {
			_ctrlMessagesLb lbSetPicture [(lbSize _ctrlMessagesLb)-1,"media\ui\tablet\msg-sent.paa"];
		};
	};
} foreach phone_messages_list;