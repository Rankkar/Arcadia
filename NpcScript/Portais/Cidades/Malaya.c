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
| - Nota: Potais em Malaya                                          |
\*-----------------------------------------------------------------*/

malaya,370,277,0	warp	malaya_mal_fild01	1,1,ma_fild01,40,272
malaya,309,70,0	warp	malaya_ship_mal_in_ship	1,1,ma_in01,108,92

malaya,178,211,0	script	malaya_inn	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 10) {
		mes "A porta está fechada";
		close;
	}
	warp "ma_in01",24,80;
	end;
}

malaya,112,212,0	script	malaya_ws	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 20) {
		mes "A porta está fechada";
		close;
	}
	warp "ma_in01",83,16;
	end;
}

malaya,299,167,0	script	malaya_ts	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 20) {
		mes "A porta está fechada";
		close;
	}
	warp "ma_in01",12,24;
	end;
}

malaya,261,240,0	script	malaya_shop	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 20) {
		mes "A porta está fechada";
		close;
	}
	warp "ma_in01",126,20;
	end;
}

malaya,300,211,0	script	malaya_house01	WARPNPC,1,1,{
	end;
	OnTouch:
	if (malaya_hi < 10) {
		mes "A porta está fechada";
		close;
	}
	warp "ma_in01",36,152;
	end;
}

// ------------------------------------------------------------------
ma_in01,86,16,0	warp	mal_in_ws	1,1,malaya,115,212
ma_in01,24,77,0	warp	mal_in_inn	1,1,malaya,178,208
ma_in01,33,152,0	warp	mal_in_house01	1,1,malaya,52,75
ma_in01,105,92,0	warp	mal_in_ship_malaya_ship	1,1,malaya,310,67
ma_in01,9,24,0	warp	mal_in_ts	1,1,malaya,296,167
ma_in01,126,17,0	warp	mal_in_shop_malaya_shop	1,1,malaya,261,237
ma_in01,105,160,0	warp	mf_in_minga_mf_minga	1,1,ma_fild01,248,190

// ------------------------------------------------------------------
ma_scene01,140,80,0	warp	bknw_tofild01	1,1,ma_fild01,288,55

// ------------------------------------------------------------------
/*
function	script	F_Malaya_Warp	{
	.@i$ = getarg(select("Voltar para trás",getarg(1)+" Jeepney",getarg(2)+" Jeepney") - 1);
	close2;
	switch(getarg(3)) {
		case 1:
		if (.@i$ == "Centro") { warp "malaya",241,238; }
		else if (.@i$ == "Sudoeste") { warp "malaya",71,43; }
		else if (.@i$ == "Sudeste") { warp "malaya",284,129; }
		break;
		case 2:
		if (.@i$ == "Noroeste") { warp "malaya",134,247; }
		else if (.@i$ == "Sudeste") { warp "malaya",341,150; }
		else if (.@i$ == "Nordeste") { warp "malaya",294,293; }
		break;
		case 3:
		if (.@i$ == "Centro") { warp "malaya",239,221; }
		else if (.@i$ == "Noroeste") { warp "malaya",59,246; }
		else if (.@i$ == "Sudeste") { warp "malaya",254,68; }
		break;
	}
	end;
}

ma_zif01,30,22,0	script	Town Warp#zif01	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Centro","Sudoeste","Sudeste",1; }
ma_zif02,30,22,0	script	Town Warp#zif02	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Sudoeste","Centro","Sudeste",1; }
ma_zif03,30,22,0	script	Town Warp#zif03	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Sudeste","Centro","Sudoeste",1; }

ma_zif04,30,22,0	script	Town Warp#zif04	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Noroeste","Sudeste","Nordeste",2; }
ma_zif05,30,22,0	script	Town Warp#zif05	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Sudeste","Noroeste","Nordeste",2; }
ma_zif06,30,22,0	script	Town Warp#zif06	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Nordeste","Noroeste","Sudeste",2; }

ma_zif07,30,22,0	script	Town Warp#zif07	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Centro","Noroeste","Sudeste",3; }
ma_zif08,30,22,0	script	Town Warp#zif08	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Noroeste","Centro","Sudeste",3; }
ma_zif09,30,22,0	script	Town Warp#zif09	WARPNPC,1,1,{ callfunc "F_Malaya_Warp","Sudeste","Centro","Noroeste",3; }
*/
//ma_zif01,30,22,0	warp	malaya_car0001	1,1,malaya,241,238
//ma_zif02,30,22,0	warp	malaya_car0002	1,1,malaya,71,43
//ma_zif03,30,22,0	warp	malaya_car0003	1,1,malaya,284,129
//ma_zif04,30,22,0	warp	malaya_car0004	1,1,malaya,134,247
//ma_zif05,30,22,0	warp	malaya_car0005	1,1,malaya,341,150
//ma_zif06,30,22,0	warp	malaya_car0006	1,1,malaya,294,293
//ma_zif07,30,22,0	warp	malaya_car0007	1,1,malaya,239,221
//ma_zif08,30,22,0	warp	malaya_car0008	1,1,malaya,59,246
//ma_zif09,30,22,0	warp	malaya_car0009	1,1,malaya,254,68