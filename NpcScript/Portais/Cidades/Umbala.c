/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Versão: Spell Master                                            |
| - Nota: Potais em Umbala                                          |
\*-----------------------------------------------------------------*/

umbala,106,285,0	warp	um_dun1-1	1,1,um_dun01,42,30
umbala,68,253,0	warp	um_chief1-1	1,1,um_in,38,113
umbala,138,129,0	warp	um_tool1-1	1,1,um_in,99,114
umbala,125,157,0	warp	um_weapon1-1	1,1,um_in,155,114
umbala,94,186,0	warp	um_houseA1-1	1,1,um_in,141,42
umbala,100,203,0	warp	um_houseA2-1	1,1,um_in,163,69
umbala,107,130,0	warp	um_houseB1-1	1,1,um_in,99,66

umbala,220,189,0	script	um_shaman1-1	WARPNPC,1,1,{
	OnTouch:
	if (event_umbala == 7) {
		warp "um_in",32,71;
	}
	end;
}

// ------------------------------------------------------------------
um_in,38,110,0	warp	um_chief1-2	1,1,umbala,66,250
um_in,99,111,0	warp	um_tool1-2	1,1,umbala,136,127
um_in,155,111,0	warp	um_weapon1-2	1,1,umbala,126,154
um_in,141,39,0	warp	um_houseA1-2	1,1,umbala,94,183
um_in,166,69,0	warp	um_houseA2-2	1,1,umbala,102,205
um_in,99,63,0	warp	um_houseB1-2	1,1,umbala,108,127
um_in,29,71,0	warp	um_shaman2-1	1,1,umbala,217,186
