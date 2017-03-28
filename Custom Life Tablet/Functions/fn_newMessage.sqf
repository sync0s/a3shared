/*
	Filename: newMessage.sqf 
	Description:
		Handles sending/receiving new messages 
*/
private["_act","_message"];
_act = _this select 0;
_message = [_this,1,[],[[]]] call bis_fnc_param;

disableSerialization;

if (typename _act != "BOOL") exitwith {};

if (_act) then {
	// new message received
	if ((_message select 0) != phone_player_number) exitWith {}; // Prevent from receiving other people's texts

	6 cutRsc ["textnotification","PLAIN"];
	[player,"NewText",true] spawn core_fnc_playSound;

	phone_messages_list pushBack [_message select 0, _message select 1, true];
} else {
	// send message
	_ctrlContactsLb = (findDisplay 11100) displayCtrl 11105;
	_ctrlMessageEdit = (findDisplay 11100) displayCtrl 11107;
	_sel = lbCurSel _ctrlContactsLb;
	diag_log format["Selected %1",_sel];

	_destNum = phone_contacts_list select _sel select 1;
	_message = [_destNum, (ctrlText _ctrlMessageEdit)];

	phone_messages_list pushBack [_message select 0, _message select 1, false];

	[_ctrlContactsLb,_sel] call dg_fnc_contactSql;
	[[true,_message],"dg_fnc_newMessage",true,false] call BIS_fnc_MP;
	hint "Message sent"
};