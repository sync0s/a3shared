#include "..\..\script_macros.hpp"
/*
	Name: fn_carShopAction.sqf
	Author: Ind3pth Studios - Slovy
	Description: Destroys car menu.
*/
private["_class"];
_this params [["_action", ""],["_selected", 0]];

disableSerialization;
_carStructText = (findDisplay 92000) displayCtrl 92019;
_carStructTextI = (findDisplay 92000) displayCtrl 92020;

switch (_action) do {
	case "exit": {
		_elements = missionNamespace getVariable ["carshop", []];

		if ((count _elements) < 1) exitWith {hint "no elements"};

		{
			detach _x;
			deleteVehicle _x;

		} forEach _elements;

		life_shop_cam cameraEffect ["TERMINATE","BACK"];
		camDestroy life_shop_cam;
		closeDialog 0;

		_locArray = life_carshop_pos nearObjects 30;
		{
			deleteVehicle _x;
		} foreach _locArray
	};

	case "selected": {
		_class = "";
		switch (_selected) do {
			case 0: {_class = life_carshop_class0};
			case 1: {_class = life_carshop_class1};
			case 2: {_class = life_carshop_class2};
			case 3: {_class = life_carshop_class3};
			case 4: {_class = life_carshop_class4};
			default {_class = ""};
		};

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

		_displayName = FETCH_CONFIG2(getText,"CfgVehicles",_class,"displayName");
		_speed = FETCH_CONFIG2(getNumber,"CfgVehicles",_class,"maxSpeed");
		_armor = FETCH_CONFIG2(getNumber,"CfgVehicles",_class,"armor");
		_seats = FETCH_CONFIG2(getNumber,"CfgVehicles",_class,"transportSoldier");
		_hp = FETCH_CONFIG2(getNumber,"CfgVehicles",_class,"enginePower");
		_fuel = FETCH_CONFIG2(getNumber,"CfgVehicles",_class,"fuelCapacity");
		_vInv = FETCH_CONFIG2(getNumber,"CfgVehicles",_class,"vItemSpace");
		_initalPrice = M_CONFIG(getNumber,"LifeCfgVehicles",_class,"price");

		_carStructText ctrlSetStructuredText parseText format["
		<t size='3' color='#ffffff'>%1</t>&#160;&#160;&#160;&#160;&#160;&#160;&#160;&#160;", 
		_displayName];

		_carStructTextI ctrlSetStructuredText parseText format["
		<t size='1' color='#ffffff'>Purchase Price:</t><t size='1.2' color='#00ff00'> $%1</t>
		<t size='1'color='#ffffff'>Max Speed:</t> <t size='1.2' color='#00ff00'>%2</t>
		<t size='1' color='#ffffff'>Horsepower:</t> <t size='1.2' color='#00ff00'>%3</t>
		<t size='1' color='#ffffff'>Passanger Seats:</t> <t size='1.2' color='#00ff00'>%4</t>
		<t size='1' color='#ffffff'>Fuel Capacity:</t> <t size='1.2' color='#00ff00'>%5</t>
		<t size='1' color='#ffffff'>Trunk Space:</t> <t size='1.2' color='#00ff00'>%6</t>
		<t size='1' color='#ffffff'>Armor Rating:</t> <t size='1.2' color='#00ff00'>%7</t>", 
		(round(_initalPrice * _buyMultiplier)), _speed, _hp, _seats, _fuel, _vInv, _armor];


		deleteVehicle life_car_shop;

		sleep 0.1;

		life_car_shop = _class createVehicleLocal life_carshop_pos;
		life_car_shop setPos (getPos life_carshop_case);
		life_car_shop setDir 108;

		life_car_shop setVariable ["Red", life_carshop_red, TRUE];
		life_car_shop setVariable ["Green", life_carshop_green, TRUE];
		life_car_shop setVariable ["Blue", life_carshop_blue, TRUE];
	};
};