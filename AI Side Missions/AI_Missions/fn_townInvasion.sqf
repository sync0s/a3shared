/*
	Filename: fn_townInvasion.sqf
	Author: Feel Good
	
	Description:
		Creates civilian AI players in a town that will fight anyone in the town except for medics.
*/
private["_town","_towns","_weapons","_group","_unitCount","_units","_unit","_kit","_weapon","_ammo","_squad","_marker","_messageBegin","_messageEnd","_trig"];
_town = _this select 0;
_weapons = [
	["arifle_Mk20_MRCO_F","30Rnd_556x45_Stanag"],
	["arifle_Mk20C_ACO_pointer_F","30Rnd_556x45_Stanag"],
	["arifle_Katiba_C_F","30Rnd_65x39_caseless_green"],
	["arifle_Katiba_C_ACO_F","30Rnd_65x39_caseless_green"],
	["arifle_MXC_Holo_F","30Rnd_65x39_caseless_mag"],
	["arifle_MXC_F","30Rnd_65x39_caseless_mag"],
	["arifle_SDAR_F","20Rnd_556x45_UW_mag"],
	["arifle_MX_Hamr_pointer_F","30Rnd_65x39_caseless_mag_Tracer"],
	["arifle_MX_Black_F","30Rnd_65x39_caseless_mag_Tracer"]
];
_units = [8,9,10,11,12] call BIS_fnc_selectRandom;

switch (_town) do {
	case "mission_Chalkeia": {_towns = "Chalkeia"};
	case "mission_Abdera": {_towns = "Abdera"};
	case "mission_Molos": {_towns = "Molos"};
	case "mission_Panochori": {_towns = "Panochori"};
};

mission_object setVariable["ctown",_towns,true];

_messageBegin = format["<t size='3'><t color='#00FF00'>Town Invasion</t></t> <br/><t size='1.5'>%1 has been taken over by a gang of bandits. Kill them and take their loot!</t>",_towns];
_messageEnd = format["<t size='3'><t color='#00FF00'>Success!</t></t> <br/><t size='1.5'>The bandits have been run out of %1. Good job!</t>",_towns];

_group = createGroup east;
_squad = [];

for "_i" from 1 to _units do {
	_unit = _group createUnit ["O_G_Soldier_F", getMarkerPos _town, [], 50, "NONE"];
	
	removeAllWeapons _unit;
	removeAllAssignedItems _unit;
	removeVest _unit;
	removeBackpack _unit;
	removeHeadgear _unit;
	removeGoggles _unit;
	
	_unit addVest "V_PlateCarrier1_blk";
	_unit addItem "FirstAidKit";	
	_unit addBackpack "B_Carryall_oli";
	
	_unit setUnitAbility 1;
	_unit setCombatMode "RED";
	[_unit] join _group;
	
	{_unit reveal [_x, 1.5]} forEach allUnits;
	
	_kit = _weapons call BIS_fnc_selectRandom;
	_weapon = _kit select 0;
	_ammo = _kit select 1;
	
	_unit addWeapon _weapon;
	for "_x" from 1 to 5 do {
		_unit addMagazine _ammo;
	};
	
	if (_i == 1) then {
		_unit addItem "ItemGps";
		_unit assignItem "ItemGps";
		_unit addItem "ItemCompass";
		_unit assignItem "ItemCompass";
		_unit setRank "SERGEANT";
	};
	_unit addEventHandler ["Killed", life_fnc_unitKilled];
	_unit addEventHandler["handleDamage",{_this call life_fnc_AIhandleDamage;}];
	_squad pushBack _unit;
};

_marker = createMarker ["sideMission", getMarkerPos _town];
_marker setMarkercolor "ColorOrange";
_marker setMarkerText "Town Invasion";
_marker setMarkerType "hd_objective";

_trig = createTrigger ["EmptyDetector", getMarkerPos _town];
_trig setTriggerArea [200, 200, 0, false];
_trig setTriggerActivation ["ANY", "PRESENT", true];
_trig setTriggerStatements ["this && (local player) && (vehicle player in thisList)","hint ""yes""; if (playerSide != independent) then { [player,false] call life_fnc_resetRating };", "[player,true] call life_fnc_resetRating"];

[[3,_messageBegin],"life_fnc_broadcast",true,false] spawn life_fnc_MP;

missionnamespace setVariable["sideUnits",_squad];
missionNamespace setVariable["sideMission",_squad];

_squad = missionNamespace getVariable["sideMission",[]];

waitUntil {(count (missionNamespace getVariable["sideMission",[]])) < 1};

mission_object setVariable["ctown","",true];

life_mission_last = life_mission_current;
life_mission_current = "";

deleteMarker "sideMission";
deleteGroup _group;

[[3,_messageEnd],"life_fnc_broadcast",true,false] spawn life_fnc_MP;

{
	[_x,true] call life_fnc_resetRating;
} forEach playableUnits