/*
	Filename: adminRemove.sqf 
	Author: sync0s 
	Description:
		Gives admins the ability to remove houses that are placed in bad positions/places 

		0 - remove house
		1 - remove crate
*/
_this params [
	["_object",objNull,[objNull]],
	["_mode",0,[0]],
	["_name","ERROR",[""]]
];

_posATL = getPosATL _object;
switch (_mode) do {
	case 0: {
		_id = _object getVariable["house_id",-1];
		_query = format["UPDATE housing SET admin_remove='1', admin_data='%1' WHERE unique='%2'",_name,_id];
	};
	case 1: {
		_id = _object getVariable["container_id",-1];
		_query = format["UPDATE containers SET admin_remove='1', admin_data='%1' WHERE id='%2'",_name,_id];
	};
};

[_query,1] call DB_fnc_asyncCall;
deleteVehicle _object;