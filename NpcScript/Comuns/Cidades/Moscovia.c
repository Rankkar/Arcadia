/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Versão: Spell Master                                            |
| - Nota: Npcs comuns na cidade Moscovia                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
moscovia,253,166,4	script	Soldado#mosk1	4_M_RUSKNIGHT,{
	mes "[Soldado]";
	mes "Lá está nosso Czar no palácio.";
	mes "Ele governa a nossa Moscovia.";
	mes "Por favor, tome cuidado para não irritá-lo. .";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
-	script	Soldado#mosk::MoscSoldier	4_M_RUSKNIGHT,{
	mes "[Soldado]";
	mes "Por favor, fique quieto ou o Czar vai se irritar.";
	close;
}
mosk_in,118,66,5	duplicate(MoscSoldier)	Soldier#mosk02	4_M_RUSKNIGHT
mosk_in,133,110,3	duplicate(MoscSoldier)	Soldier#mosk03	4_M_RUSKNIGHT
mosk_in,133,73,3	duplicate(MoscSoldier)	Soldier#mosk04	4_M_RUSKNIGHT
mosk_in,113,124,5	duplicate(MoscSoldier)	Soldier#mosk05	4_M_RUSKNIGHT
