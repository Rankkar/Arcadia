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
| - Vers�o: Spell Master                                            |
| - Nota: Potais em Jawaii                                          | 
\*-----------------------------------------------------------------*/

jawaii,192,215,0	warp	jawaiiwarp005	1,1,jawaii_in,28,94

// ------------------------------------------------------------------
jawaii_in,90,78,0	warp	jawaiiwarp001	1,1,jawaii,115,172
jawaii_in,113,61,0	warp	jawaiiwarp002	1,1,jawaii,138,202
jawaii_in,133,107,0	warp	jawaiiwarp003	1,1,jawaii,111,199
jawaii_in,88,117,0	warp	jawaiiwarp004	1,1,jawaii,109,186
jawaii_in,27,91,4	script	jawaiiwarp006	WARPNPC,1,1,{
	if (getpartnerid() > 0) {
		end;
	}
	else {
		warp "jawaii_in",27,94;
		end;
	}
}

