/*
	Filename: generatePlate.sqf 
	Author: sync0s 
	Description: 
		Generates license plate for player [temporary]
*/
private["_return"];

_r1 = floor random 10;
_r2 = floor random 10;
_r3 = floor random 10;

_alphabet = [ "a","b","c","d","e","f","g","h","i","j","k","l","m","n","o","p","q","r","s","t","u","v","w","x","y","z"];

_ra = _alphabet select floor random count _alphabet;
_rb = _alphabet select floor random count _alphabet;
_rc = _alphabet select floor random count _alphabet;

_return = [_r1,_r2,_r3,_ra,_rb,_rc];

_return;