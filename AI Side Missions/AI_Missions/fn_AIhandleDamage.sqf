/*
	Filename: AIhandleDamage.sqf
*/
private["_unit","_damage","_source","_projectile","_part","_curWep"];
private["_distance","_isVehicle","_isQuad","_isKart","_vehicle","_oldDamage"];

_unit = _this select 0;
_part = _this select 1;
_damage = _this select 2;
_source = _this select 3;
_projectile = _this select 4;
_oldDamage = damage player;

// Eliminate damage when VDM from player.
if (vehicle _unit == _unit) then
{
	if ( _source isKindOf "Air" OR _source isKindOf "Car" OR _source isKindOf "Boat" ) then
	{
		if (_oldDamage > 0.90) then { _oldDamage = 0.90; };
		_damage = _oldDamage + 0;
		[_unit,_source] spawn life_fnc_vdmed; //_Source is Vehicle, Not a player driving a vehicle
	}
	else
	{	
		_vehicle = vehicle _source;
		if (driver _vehicle == _source) then {
			if (_vehicle isKindOf "Air" OR _vehicle isKindOf "Car" OR _vehicle isKindOf "Boat") then 
			{
				if (_oldDamage > 0.90) then { _oldDamage = 0.90; };
				_damage = _oldDamage + 0;
			};
		};
	};
};

_unit doTarget _source;
_unit doFire _source;

_damage;