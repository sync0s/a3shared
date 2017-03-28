/*
	Name: fn_carScroll.sqf
	Author: Ind3pth Studios - Slovy
	Description: Scrolls cars.
*/
disableSerialization;

_carOnePctrl = (findDisplay 92000) displayCtrl 92014;
_carTwoPctrl = (findDisplay 92000) displayCtrl 92015;
_carThreePctrl = (findDisplay 92000) displayCtrl 92016;
_carFourPctrl = (findDisplay 92000) displayCtrl 92017;
_carFivePctrl = (findDisplay 92000) displayCtrl 92018;

_vehiclePictureControls = [
	_carOnePctrl, _carTwoPctrl, _carThreePctrl, _carFourPctrl, _carFivePctrl
];

_direction = _this select 0;

switch (_direction) do {
	
	case "next":{
		if ((life_carshop_picIndex + 1) > ((count life_carshop_vehicleArray) - 5)) exitWith {};
		life_carshop_picIndex = life_carshop_picIndex + 1; 
	};

	case "back":{
		if ((life_carshop_picIndex - 1) < 0) exitWith {};
		life_carshop_picIndex = life_carshop_picIndex - 1;
	};

};

_x = 0;
for [{_i = life_carshop_picIndex}, {_i < (count life_carshop_vehicleArray)}, {_i = _i + 1}] do {
		_class = life_carshop_vehicleArray select _i;
		_pic = "modules\CarShop\images\thumbnails\" + _class + ".paa";
		_ctrl = _vehiclePictureControls select _x;
		_ctrl ctrlSetText _pic;

		switch (_x) do {
			case 0: {life_carshop_class0 = _class};
			case 1: {life_carshop_class1 = _class};
			case 2: {life_carshop_class2 = _class};
			case 3: {life_carshop_class3 = _class};
			case 4: {life_carshop_class4 = _class};
		};

		_x = _x + 1;
		if (_x > 4) exitWith {};
};