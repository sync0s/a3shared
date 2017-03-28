/*
	Filename: fn_initMissions.sqf
	Author: Feel Good
	
	Description:
		Initialize side missions
*/
private["_towns","_weapons","_missionTypes","_handle"];
diag_log "Initializing side missions...";

life_mission_active = false;
life_mission_current = "";
life_mission_last = "No Mission";
life_mission_lastTown = "";
life_mission_delay = 15; //In Minutes

publicVariable "life_mission_delay";
publicVariable "life_mission_active";
publicVariable "life_mission_current";
publicVariable "life_mission_last";
publicVariable "life_mission_lastTown";

life_mission_active = false;
life_mission_current = "";
life_mission_last = "No Mission";
life_mission_lastTown = "";
life_mission_delay = 15; //In Minutes

missionNamespace setVariable["mission_active",false];
missionNamespace setVariable["mission_current",""];
missionNamespace setVariable["mission_last","No Mission"];
missionNamespace setVariable["mission_lastTown",""];
missionNamespace setVariable["mission_delay",15];

//Generate array of markers to use for missions
_towns = [
	"mission_Chalkeia","mission_Molos","mission_Abdera","mission_Panochori"
];

//Generate array of weapons and ammo to give to AI
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

//Generate array of mission types
_missionTypes = [
	"Town Invasion",
	"Town Invasion",
	"No Mission"
];

if (!isServer) exitWith {}; //Only execute when loaded by mission

waitUntil{(count playableUnits) > 0};

while {true} do {
	diag_log "Side missions initialization complete. Starting missions...";
	sleep ((missionNamespace getVariable["mission_delay",15]) * 60);
	//if (!(missionNamespace getVariable["mission_active",false])) then {
	if (!life_mission_active) then {
		_handle = [_towns,_weapons,_missionTypes] spawn life_fnc_startMission;
		waitUntil {scriptDone _handle};
	};
};