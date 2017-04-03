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
| - Nota: Potais na Sala Cúbica (Quest da BioLab)                   |
\*-----------------------------------------------------------------*/

lhz_cube,231,96,0	warp	lhzcube1	1,1,lhz_dun02,220,6
lhz_cube,231,12,0	warp	lhzcube3	1,1,lighthalzen,310,302
lhz_cube,177,96,0	warp	lhzcube4	1,1,lighthalzen,310,302

// -1 are warps facing east.
// -2 the warps facing south.
// -3 are warps facing west.
// -4 are warps facing north.

//- Room 66 74 -
lhz_cube,74,74,0	script	cubew01-1	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,66,67,0	warp	cubew01-2	2,2,lhz_cube,10,18
lhz_cube,59,74,0	script	cubew01-3	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,66,82,0	script	cubew01-4	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}

//- Room 66 136 -
lhz_cube,74,136,0	warp	cubew02-1	2,2,lhz_cube,10,193
lhz_cube,66,129,0	script	cubew02-2	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,59,136,0	script	cubew02-3	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,66,144,0	script	cubew02-4	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}

//- Room 67 193 -
lhz_cube,74,192,0	script	cubew03-1	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,67,185,0	script	cubew03-2	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,59,192,0	script	cubew03-3	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,67,200,0	warp	cubew03-4	2,2,lhz_cube,10,136

//- Room 66 18 -
lhz_cube,74,18,0	script	cubew04-1	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,66,11,0	warp	cubew04-2	2,2,lhz_cube,10,18
lhz_cube,59,18,0	script	cubew04-3	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,66,26,0	warp	cubew04-4	2,2,lhz_cube,123,18

//- Room 66 18 -
lhz_cube,18,18,0	warp	cubew05-1	2,2,lhz_cube,10,193
lhz_cube,10,11,0	warp	cubew05-2	2,2,lhz_cube,123,18
lhz_cube,3,18,0	script	cubew05-3	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,10,26,0	script	cubew05-4	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}

//- Room 10 74 -
lhz_cube,18,74,0	script	cubew06-1	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,10,67,0	warp	cubew06-2	2,2,lhz_cube,123,18
lhz_cube,3,74,0	warp	cubew06-3	2,2,lhz_cube,66,18
lhz_cube,10,82,0	script	cubew06-4	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}

//- Room 10 136 -
lhz_cube,18,136,0	warp	cubew07-1	2,2,lhz_cube,10,74
lhz_cube,10,129,0	script	cubew07-2	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,3,136,0	script	cubew07-3	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,10,144,0	script	cubew07-4	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}

//- Room 10 193 -
lhz_cube,18,192,0	script	cubew08-1	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,10,185,0	script	cubew08-2	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,3,192,0	warp	cubew08-3	2,2,lhz_cube,10,74
lhz_cube,10,200,0	warp	cubew08-4	2,2,lhz_cube,66,18

//- Room 123 18 -
lhz_cube,130,18,0	script	cubew09-1	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,123,11,0	script	cubew09-2	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}
lhz_cube,115,18,0	warp	cubew09-3	2,2,lhz_cube,248,184
lhz_cube,123,26,0	script	cubew09-4	WARPNPC,1,1,{
	callfunc "randomw";
	end;
}

// Função para portais aleatórios -----------------------------------
function	script	randomw	{
	switch(rand(3)) {
		case 1: warp "lhz_cube",66,136; end;
		case 2: warp "lhz_cube",66,74; end;
		default: warp "lhz_cube",67,193; end;
	}
}

// ------------------------------------------------------------------
lhz_dun02,224,6,0	warp	lhzcube2	1,1,lhz_cube,231,90
