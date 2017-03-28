#include "..\..\script_macros.hpp"
/*
	Name: fn_carShopLoad.sqf
	Author: Ind3pth Studios - Slovy
	Description: Handles Purchased Cars
*/
private["_class","_rgb","_vehicleList","_shopSide"];
_class = (typeOf life_car_shop);
_rgb = [life_carshop_red, life_carshop_green, life_carshop_blue];
_vehicleList = M_CONFIG(getArray,"CarShops",(life_veh_shop select 0),"vehicles");
_shopSide = M_CONFIG(getText,"CarShops",(life_veh_shop select 0),"side");
_buyMultiplier = 0;

// Function to cleanup the camera/scene/dialog compnents of the shop
_fnc_cleanUpDisplay = {["exit"] spawn life_fnc_carShopAction};

_licenses = switch (playerSide) do {
    case civilian: {(M_CONFIG(getArray,"LifeCfgVehicles",_class,"licenses") select 0)};
    case west: {(M_CONFIG(getArray,"LifeCfgVehicles",_class,"licenses") select 1)};
    case independent: {(M_CONFIG(getArray,"LifeCfgVehicles",_class,"licenses") select 2)};
    case east: {(M_CONFIG(getArray,"LifeCfgVehicles",_class,"licenses") select 3)};
};

_initalPrice = M_CONFIG(getNumber,"LifeCfgVehicles",_class,"price");

switch (playerSide) do {
    case civilian: {
        _buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_CIVILIAN");
    };
    case west: {
        _buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_COP");
    };
    case independent: {
        _buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_MEDIC");
    };
    case east: {
        _buyMultiplier = LIFE_SETTINGS(getNumber,"vehicle_purchase_multiplier_OPFOR");
    };
};

_purchasePrice = round(_initalPrice * _buyMultiplier);

_exit = false;
_licensesName = "";
{
    if (!(_x isEqualTo "") && {!(LICENSE_VALUE(_x,_shopSide))}) then {
        _licensesName = _licensesName + localize M_CONFIG(getText,"Licenses",_x,"displayName") + "<br/>";
        _exit = true;
    };
} forEach _licenses;

if (_exit) exitWith {
	hint parseText format[(localize "STR_Shop_Veh_NoLicense")+ "<br/><br/>%1",_licensesName];
	[] call _fnc_cleanUpDisplay;
};

if (CASH < _purchasePrice) exitWith {
	hint format[localize "STR_Shop_Veh_NotEnough",[_purchasePrice - CASH] call life_fnc_numberText];
	[] call _fnc_cleanUpDisplay;
};

_spawnPoints = life_veh_shop select 1;
_spawnPoint = "";

if (((life_veh_shop select 0) == "med_air_hs")) then {
    if ((nearestObjects[(getMarkerPos _spawnPoints),["Air"],35]) isEqualTo []) exitWith {_spawnPoint = _spawnPoints};
} else {
    //Check if there is multiple spawn points and find a suitable spawnpoint.
    if (_spawnPoints isEqualType []) then {
        //Find an available spawn point.
        {if ((nearestObjects[(getMarkerPos _x),["Car","Ship","Air"],5]) isEqualTo []) exitWith {_spawnPoint = _x};} forEach _spawnPoints;
    } else {
        if ((nearestObjects[(getMarkerPos _spawnPoints),["Car","Ship","Air"],5]) isEqualTo []) exitWith {_spawnPoint = _spawnPoints};
    };
};

if (_spawnPoint isEqualTo "") exitWith {
	hint localize "STR_Shop_Veh_Block";
	[] call _fnc_cleanUpDisplay;
};

CASH = CASH - _purchasePrice;
hint format[localize "STR_Shop_Veh_Bought",getText(configFile >> "CfgVehicles" >> _class >> "displayName"),[_purchasePrice] call life_fnc_numberText];
_vehicle = objnull;

if ((life_veh_shop select 0) == "med_air_hs") then {
    _vehicle = createVehicle [_class,[0,0,999],[], 0, "NONE"];
    waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
    _vehicle allowDamage false;
    _hs = nearestObjects[getMarkerPos _spawnPoint,["Land_Hospital_side2_F"],50] select 0;
    _vehicle setPosATL (_hs modelToWorld [-0.4,-4,12.65]);
    sleep 0.6;
} else {
    _vehicle = createVehicle [_class, (getMarkerPos _spawnPoint), [], 0, "NONE"];
    waitUntil {!isNil "_vehicle" && {!isNull _vehicle}}; //Wait?
    _vehicle allowDamage false; //Temp disable damage handling..
    _vehicle setPos (getMarkerPos _spawnPoint);
    _vehicle setVectorUp (surfaceNormal (getMarkerPos _spawnPoint));
    _vehicle setDir (markerDir _spawnPoint);
};

_vehicle setVariable ["Red", (_rgb select 0), TRUE];
_vehicle setVariable ["Green", (_rgb select 1), TRUE];
_vehicle setVariable ["Blue", (_rgb select 2), TRUE];

// Generate Jonzie Vehicle  License Plate
_jplate = [] call life_fnc_generatePlate;
if ((count _jplate) > 0) then {
	{
		_vehicle setVariable [format["plate%1",_forEachIndex], _x, TRUE];
	} foreach _jplate;
};

systemchat format["Color: %1 - Plate: %2", _rgb, _jplate];

_vehicle lock 2;
//[_vehicle,_colorIndex] call life_fnc_colorVehicle;
[_vehicle] call life_fnc_clearVehicleAmmo;
[_vehicle,"trunk_in_use",false,true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
[_vehicle,"vehicle_info_owners",[[getPlayerUID player,profileName]],true] remoteExecCall ["TON_fnc_setObjVar",RSERV];
_vehicle disableTIEquipment true; //No Thermals.. They're cheap but addictive.

//Side Specific actions.
switch (playerSide) do {
    case west: {
        [_vehicle,"cop_offroad",true] spawn life_fnc_vehicleAnimate;
    };
    case civilian: {
        if ((life_veh_shop select 2) isEqualTo "civ" && {_class == "B_Heli_Light_01_F"}) then {
            [_vehicle,"civ_littlebird",true] spawn life_fnc_vehicleAnimate;
        };
    };
    case independent: {
        [_vehicle,"med_offroad",true] spawn life_fnc_vehicleAnimate;
    };
};

_vehicle allowDamage true;

life_vehicles pushBack _vehicle;

//Always handle key management by the server
[getPlayerUID player,playerSide,_vehicle,1] remoteExecCall ["TON_fnc_keyManagement",RSERV];
[(getPlayerUID player),playerSide,_vehicle,1, _jplate, _rgb] remoteExecCall ["TON_fnc_vehicleCreate",RSERV];

if (LIFE_SETTINGS(getNumber,"player_advancedLog") isEqualTo 1) then {
    if (LIFE_SETTINGS(getNumber,"battlEye_friendlyLogging") isEqualTo 1) then {
        advanced_log = format ["bought vehicle %1 for $%2. On Hand Cash: $%3  Bank Balance: $%4",_class,[_purchasePrice] call life_fnc_numberText,[CASH] call life_fnc_numberText,[BANK] call life_fnc_numberText];
    } else {
        advanced_log = format ["%1 - %2 bought vehicle %3 for $%4. On Hand Cash: $%5  Bank Balance $%6",profileName,(getPlayerUID player),_class,[_purchasePrice] call life_fnc_numberText,[CASH] call life_fnc_numberText,[BANK] call life_fnc_numberText];
    };
    publicVariableServer "advanced_log";
};

[0] call SOCK_fnc_updatePartial;
[] call _fnc_cleanUpDisplay;
true;