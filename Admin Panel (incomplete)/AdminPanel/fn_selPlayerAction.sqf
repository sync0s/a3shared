/*
	File: selPlayerAction.sqf 
	Author: sync0s 
	Description:
		Handles confirmed selected player
*/
private["_act","_ctrl","_zwheel","_do"];
_act = _this select 0;

disableSerialization;

switch (_act) do {
	case "launch": {
		if ((missionNamespace getVariable ['selPlayerTarget','empty']) isEqualTo 'empty') exitWith {systemChat 'Error: You need to set a target'; closeDialog 0;};

		_ctrl = (findDisplay 15100) displayCtrl 15003;

		{
			_ctrl lbAdd (_x getvariable ["realname", name _x]);
			_ctrl lbSetData [(lbSize _ctrl)-1,str(_x)];
		} foreach allPlayers; // CHANGE TO playableUnits!!!!!
	};
	case "scrollLB": {
		_ctrl = _this select 1;
		_zwheel = _this select 2;
		_curIndex = lbCurSel _ctrl;

		if (_zwheel < 0) Then {
			lbSetCurSel [_ctrl,(_curIndex + 1)];
		} else {
			lbSetCurSel [_ctrl,(_curIndex - 1)];
		};

	};
	case "confirm": {
		_do = missionNamespace getVariable "selPlayerTarget";
		_ctrl = (findDisplay 15100) displayCtrl 15003;

		switch (_do) do {
			case "teleporthere": {
				_target = lbData[_ctrl, lbCurSel _ctrl];
				_target = call compile format["%1", _target];
				if (isNil "_target" || isNull _target) exitWith {hint localize "STR_ANOTF_Error";};
				if (!(vehicle _target isEqualTo _target)) exitWith {hint localize "STR_Admin_CannotTpHere"};
				_target setPos (getPos player);
				hint format["You have teleported %1 to your location",_target getVariable["realname",name _target]];
			};

			case "teleportto": {
				_target = lbData[_ctrl, lbCurSel _ctrl];
				_target = call compile format["%1", _target];
				if (isNil "_target" || isNull _target) exitWith {hint localize "STR_ANOTF_Error";};
				if (!(vehicle _target isEqualTo _target)) exitWith {hint localize "STR_Admin_CannotTpHere"};
				player setPos (getPos _target);
				hint format["You have teleported %1 to your location",_target getVariable["realname",name _target]];
			};

			case "spectate": {
				_target = lbData[_ctrl, lbCurSel _ctrl];
				_target = call compile format["%1", _target];
				if (isNil "_target" || isNull _target) exitWith {hint localize "STR_ANOTF_Error";};

				[] spawn {
					while {dialog} do {
						closeDialog 0;
						sleep 0.01;
					};
				};

				_unit switchCamera "INTERNAL";
				hint format["You are now spectating %1 \n\n Press F10 to stop Spectating.",_unit getVariable["realname",name _unit]];
				AM_Exit = (findDisplay 46) displayAddEventHandler ["KeyDown","if ((_this select 1) == 68) then {(findDisplay 46) displayRemoveEventHandler ['KeyDown',AM_Exit];player switchCamera 'INTERNAL';hint 'You have stopped spectating';};false"];

			};

			case "freeze": {
				_target = lbData[_ctrl, lbCurSel _ctrl];
				_target = call compile format["%1", _target];
				if (isNil "_target" || isNull _target) exitWith {hint localize "STR_ANOTF_Error";};
				if (_target == player) exitWith {hint localize "STR_ANOTF_Error";};

				[player] remoteExec ["life_fnc_freezePlayer",_target];
			};

			case "query":{

			};

		};
		closeDialog 0;
	};
}