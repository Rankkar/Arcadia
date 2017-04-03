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
| - Nota: Potais no Laboratório de Somatologia                      |
\*-----------------------------------------------------------------*/

lhz_dun01,149,291,0	warp	lhz_dun1-1	1,1,lhz_in01,19,129
lhz_dun01,281,150,0	warp	lhz_dun2-1	1,1,lhz_dun02,282,153
lhz_dun01,149,9,0	warp	lhz_dun3-1	1,1,lhz_dun02,153,19
lhz_dun01,18,145,0	warp	lhz_dun4-1	1,1,lhz_dun02,17,150

// ------------------------------------------------------------------
lhz_dun02,282,161,0	warp	lhz_dun2-2	1,1,lhz_dun01,281,154
lhz_dun02,146,19,0	warp	lhz_dun3-2	1,1,lhz_dun01,144,9
lhz_dun02,17,156,0	warp	lhz_dun4-2	1,1,lhz_dun01,18,150
lhz_dun02,149,149,4	script	lhz_dun5-1	WARPNPC,2,2,{
	OnTouch:
	if ((Upper != 1 && BaseLevel < 95) || (Upper == 1 && BaseLevel < 90)) {
		end;
	}
	else {
		warp "lhz_dun03",140,133;
	}
	end;
}

// ------------------------------------------------------------------
lhz_dun03,139,137,0	warp	lhz_dun5-2	1,1,lhz_dun02,149,142