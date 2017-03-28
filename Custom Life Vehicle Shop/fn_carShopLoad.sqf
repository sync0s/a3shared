#include "..\..\script_macros.hpp"
/*
	Name: fn_carShopLoad.sqf
	Author: Ind3pth Studios - Slovy
	Description: Loads car menu.
*/
private["_shop","_sideCheck","_spawnPoints","_shopFlag","_shopTitle","_disableBuy"];
(_this select 3) params [
    ["_shop","",[""]],
    ["_sideCheck",sideUnknown,[civilian]],
    ["_spawnPoints","",["",[]]],
    ["_shopFlag","",[""]],
    ["_shopTitle","",[""]],
    ["_disableBuy",false,[true]]
];

disableSerialization;
if (_shop isEqualTo "") exitWith {};
if (_sideCheck != sideUnknown && {playerSide != _sideCheck}) exitWith {hint localize "STR_Shop_Veh_NotAllowed"};

/*
Legacy Code, saving til confirmed
//////////////////////////////////

life_carshop_vehicleArray = [
	"Jonzie_Escalade", "Jonzie_Viper", "Jonzie_Raptor", "Jonzie_XB", "Jonzie_VE",
	"Jonzie_Ute"
];
*/
life_carshop_vehicleArray = [];
life_veh_shop = [_shop,_spawnpoints,_shopFlag,_disableBuy]; //Store it so so other parts of the system can access it.
life_carshop_picIndex = 0;
life_carshop_pos = [13590,12214.6,0.00141621];

//Fetch the shop config.
_vehicles = M_CONFIG(getArray,"CarShops",_shop,"vehicles");
{
	life_carshop_vehicleArray pushBack (_x select 0);
} foreach _vehicles;


// Setup 3D Scene
_testLogic = "Logic" createVehicleLocal life_carshop_pos;
_testLogic setPosATL life_carshop_pos;
_ut1 = "UserTexture10m_F" createVehicleLocal (_testLogic modelToWorld [0,5,10]);
_ut1 attachTo [_testLogic,[0,5,5]];
_ut1 setDir 0;
_ut2 = "UserTexture10m_F" createVehicleLocal (_testLogic modelToWorld [5,0,10]);
_ut2 attachTo [_testLogic,[5,0,5]];
_ut2 setDir (getDir _testLogic) + 90;
_ut3 = "UserTexture10m_F" createVehicleLocal (_testLogic modelToWorld [-5,0,10]);
_ut3 attachTo [_testLogic,[-5,0,5]];
_ut3 setDir (getDir _testLogic) - 90;
_ut4 = "UserTexture10m_F" createVehicleLocal (_testLogic modelToWorld [0,-5,10]);
_ut4 attachTo [_testLogic,[0,-5,5]];
_ut4 setDir 180;
_ut5 = "UserTexture10m_F" createVehicleLocal (_testLogic modelToWorld [0,0,10]);
_ut5 attachTo [_testLogic,[0,0,0]];
_ut5 setObjectTexture [0,"a3\map_data\gdt_concrete_co.paa"];
detach _ut5;
_ut5 setVectorDirAndUp [[0,0,-.33],[0,.33,0]];

life_carshop_case = "Land_Suitcase_F" createVehicleLocal life_carshop_pos;
life_carshop_case attachTo [_testLogic,[0,0,0]];
life_carshop_case setDir 53;

life_car_shop = (life_carshop_vehicleArray select 0) createVehicleLocal life_carshop_pos;
life_car_shop setPos (getPos life_carshop_case);
life_car_shop setDir 108;

{_x setObjectTexture [0,"#(argb,8,8,3)color(0,0,0,1)"];} forEach [_ut1,_ut2,_ut3,_ut4];

_light = "#lightpoint" createVehicleLocal life_carshop_pos;
_light setLightBrightness 0.4;
_light setLightColor [1,1,1];
_light setLightAmbient [1,1,1];
_light lightAttachObject [_testLogic, [0,0,0]];


// Store some data for later use
_mNamespaceVar = [life_car_shop, life_car_shop, _testLogic, _ut1, _ut2, _ut3, _ut4];
missionNamespace setVariable ["carshop",_mNamespaceVar];

sleep 0.5;


// Setup Camera
createDialog "carmenu";
life_shop_cam = "CAMERA" camCreate getPos life_car_shop;
showCinemaBorder true;  
life_shop_cam cameraEffect ["Internal", "Back"];   
life_shop_cam camSetTarget (life_car_shop modelToWorld [0,0.5,0.3]);   
life_shop_cam camSetPos (life_car_shop modelToWorld [2,4,1.4]);   
life_shop_cam camSetFOV 1;   
life_shop_cam camSetFocus [50, 0];   
life_shop_cam camCommit 0; 


// Populate GUI Display with cars and information
_carOnePctrl = (findDisplay 92000) displayCtrl 92014;
_carTwoPctrl = (findDisplay 92000) displayCtrl 92015;
_carThreePctrl = (findDisplay 92000) displayCtrl 92016;
_carFourPctrl = (findDisplay 92000) displayCtrl 92017;
_carFivePctrl = (findDisplay 92000) displayCtrl 92018;
_carStructText = (findDisplay 92000) displayCtrl 92019;
_carStructTextI = (findDisplay 92000) displayCtrl 92020;

_vehiclePictureControls = [
_carOnePctrl, _carTwoPctrl, _carThreePctrl, _carFourPctrl, _carFivePctrl
];

_buyMultiplier = 0;

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

_displayName = FETCH_CONFIG2(getText,"CfgVehicles",(life_carshop_vehicleArray select 0),"displayName");
_speed = FETCH_CONFIG2(getNumber,"CfgVehicles",(life_carshop_vehicleArray select 0),"maxSpeed");
_armor = FETCH_CONFIG2(getNumber,"CfgVehicles",(life_carshop_vehicleArray select 0),"armor");
_seats = FETCH_CONFIG2(getNumber,"CfgVehicles",(life_carshop_vehicleArray select 0),"transportSoldier");
_hp = FETCH_CONFIG2(getNumber,"CfgVehicles",(life_carshop_vehicleArray select 0),"enginePower");
_fuel = FETCH_CONFIG2(getNumber,"CfgVehicles",(life_carshop_vehicleArray select 0),"fuelCapacity");
_initalPrice = M_CONFIG(getNumber,"LifeCfgVehicles",(life_carshop_vehicleArray select 0),"price");

_carStructText ctrlSetStructuredText parseText format["
		<t size='3' color='#ffffff'>%1</t>&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;", 
		_displayName];

_carStructTextI ctrlSetStructuredText parseText format["
		<t size='1' color='#ffffff'>Purchase Price:</t><t size='1.2' color='#00ff00'> $%1</t>
		<t size='1'color='#ffffff'>Max Speed:</t> <t size='1.2' color='#00ff00'>%2</t>
		<t size='1' color='#ffffff'>Horsepower:</t> <t size='1.2' color='#00ff00'>%3</t>
		<t size='1' color='#ffffff'>Passanger Seats:</t> <t size='1.2' color='#00ff00'>%4</t>
		<t size='1' color='#ffffff'>Fuel Capacity:</t> <t size='1.2' color='#00ff00'>%5</t>
		<t size='1' color='#ffffff'>Armor Rating:</t> <t size='1.2' color='#00ff00'>%6</t>", 
		(round(_initalPrice * _buyMultiplier)), _speed, _hp, _seats, _fuel, _armor];

for "_i" from 0 to 4 do {

	_class = life_carshop_vehicleArray select _i;
	_pic = "modules\CarShop\images\thumbnails\" + _class + ".paa";
	_ctrl = _vehiclePictureControls select _i;
	_ctrl ctrlSetText _pic;

	switch (_i) do {
		case 0: {life_carshop_class0 = _class};
		case 1: {life_carshop_class1 = _class};
		case 2: {life_carshop_class2 = _class};
		case 3: {life_carshop_class3 = _class};
		case 4: {life_carshop_class4 = _class};
	};
};

life_car_shop setVariable ["Red", 0.5, TRUE];
life_car_shop setVariable ["Green", 0.5, TRUE];
life_car_shop setVariable ["Blue", 0.5, TRUE];

life_carshop_red = 0.5;
life_carshop_green = 0.5;
life_carshop_blue = 0.5;


sliderSetRange [92021, 0, 100];
sliderSetSpeed [92021, 0.5, 2];
sliderSetPosition[92021, 50];

sliderSetRange [92022, 0, 100];
sliderSetSpeed [92022, 0.5, 2];
sliderSetPosition[92022, 50];

sliderSetRange [92023, 0, 100];
sliderSetSpeed [92023, 0.5, 2];
sliderSetPosition[92023, 50];