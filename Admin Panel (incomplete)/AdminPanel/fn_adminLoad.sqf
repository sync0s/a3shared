/*
	File: adminLoad.sqf 
	Author: sync0s
	Description:
		Hides displays on dialog load
*/
disableSerialization;

_btnTeleport = (findDisplay 15000) displayCtrl 15007;
_btnTeleportHere = (findDisplay 15000) displayCtrl 15008;
_btnTeleportTo = (findDisplay 15000) displayCtrl 15009;
_btnInvisible = (findDisplay 15000) displayCtrl 15010;
_btnSpectate = (findDisplay 15000) displayCtrl 15011;
_btnFreeze = (findDisplay 15000) displayCtrl 15012;
_btnCompSend = (findDisplay 15000) displayCtrl 15013;
_btnSelectPlayer = (findDisplay 15000) displayCtrl 15014;
_comboRcv = (findDisplay 15000) displayCtrl 15015;
_comboForce = (findDisplay 15000) displayCtrl 15016;
_editAmount = (findDisplay 15000) displayCtrl 15017;
_editReason = (findDisplay 15000) displayCtrl 15018;
_txtInfo = (findDisplay 15000) displayCtrl 15019;


_controlsArray = [
	_btnTeleport, _btnTeleportTo, _btnTeleportHere,
	_btnInvisible, _btnSpectate, _btnFreeze,
	_btnCompSend, _btnSelectPlayer, _comboRcv,
	_editAmount, _editReason, _txtInfo,
	_comboForce
];

{
	_x ctrlShow false;
} foreach _controlsArray;