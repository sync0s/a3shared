/*
	Filename: atm_BtnPress.sqf
	Description:
		Handles pressed buttons in ATM amount dialog
*/
private["_btn","_edit"];
_btn = _this select 0;
_edit = ctrlText 4121;

if !(_btn in [0,1,2,3,4,5,6,7,8,9,"clear"]) exitWith {};
	
if (typename _btn == "STRING") then {
	ctrlSetText[4121,""];
} else {
	_btn = [_btn] call core_fnc_numberText;
	ctrlSetText[4121,format["%1%2",_edit,_btn]];
};