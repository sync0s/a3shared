/*
	Filename: sliderPosChanged.sqf 
	Author: Slovy 
	Description:
		Changes the color of the car based on the slider positions 
*/
_this params [["_slider",""],["_pos",0]];

if (_pos > 100) then {_pos=100};
if (_pos < 0) then {_pos=0};

_pos = _pos / 100;

switch (_slider) do {
	case "red": {life_carshop_red = _pos};
	case "green": {life_carshop_green = _pos};
	case "blue": {life_carshop_blue = _pos};
	case "apply": {
		_class = (typeof life_car_shop);
		deleteVehicle life_car_shop;

		life_car_shop = _class createVehicleLocal life_carshop_pos;
		life_car_shop setPos (getPos life_carshop_case);
		life_car_shop setDir 108;

		life_car_shop setVariable ["Red", life_carshop_red, TRUE];
		life_car_shop setVariable ["Green", life_carshop_green, TRUE];
		life_car_shop setVariable ["Blue", life_carshop_blue, TRUE];
	};
};