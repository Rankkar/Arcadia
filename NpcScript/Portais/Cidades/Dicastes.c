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
| - Criação: Spell Master 02/04/2017                                |
| - Nota: Potais em Dicastes                                        |
\*-----------------------------------------------------------------*/

dicastes01,199,34,0	warp	dicwarp01	1,1,dic_fild01,149,279
dicastes01,283,285,0	warp	dicwarp02	1,1,dic_in01,45,30
dicastes01,163,297,0	warp	dicwarp03	1,1,dic_in01,371,101
dicastes01,94,259,0	warp	dicwarp04	1,1,dic_in01,390,53
dicastes01,136,103,0	warp	dicwarp05	1,1,dic_in01,26,98
dicastes01,255,175,0	warp	dicwarp06	1,1,dic_in01,344,272

// ------------------------------------------------------------------
dicastes02,120,77,0	warp	dicwarp07	1,1,dicastes01,197,351
dicastes02,120,237,0	warp	dicwarp08	1,1,dic_in01,45,246

// ------------------------------------------------------------------
dic_in01,45,28,0	warp	dicwarp09	1,1,dicastes01,281,284
dic_in01,372,99,0	warp	dicwarp10	1,1,dicastes01,163,295
dic_in01,390,55,0	warp	dicwarp11	1,1,dicastes01,95,257
dic_in01,26,96,0	warp	dicwarp12	1,1,dicastes01,137,106
dic_in01,342,271,0	warp	dicwarp13	1,1,dicastes01,255,173
dic_in01,45,244,0	warp	dicwarp16	1,1,dicastes02,119,235
dic_in01,299,248,0	warp	dicwarp15	1,1,dic_in01,262,191

dic_in01,242,182,0	script	#dicwarp16	CLEAR_NPC,{
	if (isequipped(Ring_Of_Wise_King)) {
		select("Escritório administrativo");
	}
	else {
		select("*-/+.#@");
	}
	warp strnpcinfo(NPC_MAP),138,221;
	end;
}

-	script	Elevator#dicwarp17	-1,{
	.@warpnumber = atoi(strnpcinfo(NPC_NAME_HIDDEN));
	if (isequipped(Ring_Of_Wise_King)) {
		if (.@warpnumber < 5) {
			switch(select("Administrações civis","Quarto de arquivo","Quarto de situação","Escritório administrativo")) {
				case 1: .@x = 45;  .@y = 286; break;
				case 2: .@x = 36;  .@y = 212; break;
				case 3: .@x = 122; .@y = 282; break;
				case 4: .@x = 121; .@y = 201; break;
			}
			warp strnpcinfo(NPC_MAP),.@x,.@y; end;
		}
		if (.@warpnumber < 11) {
			switch(select("Área Residencial 1","Área Residencial 2","Área Residencial 3","Bar Burman Flone")) {
				case 1: .@x = 42;  .@y = 115; break;
				case 2: .@x = 110; .@y = 108; break;
				case 3: .@x = 178; .@y = 108; break;
				case 4: .@x = 260; .@y = 115; break;
			}
		}
		if (.@warpnumber <= 13) {
			switch(select("Estação de Batalha","Quartel Galten")) {
				case 1: .@x = 385; .@y = 272; break;
				case 2: .@x = 385; .@y = 208; break;
			}
			warp strnpcinfo(NPC_MAP),.@x,.@y; end;
		}
	}
	else {
		if (.@warpnumber < 5) {
			switch(select("¢³¡ð¡Ð","¡ñ¡ñ¡ò","¡ø¡ø¡ð","¡÷¡ú¡ð")) {
				case 1: .@x = 45;  .@y = 286; break;
				case 2: .@x = 36;  .@y = 212; break;
				case 3: .@x = 122; .@y = 282; break;
				case 4: .@x = 121; .@y = 201; break;
			}
			warp strnpcinfo(NPC_MAP),.@x,.@y; end;
		}
		if (.@warpnumber < 11) {
			switch(select("¡ô¡õ¡ñ ¡þ","¢³¡ü¡Ð ¡ú","¡ï¢³¢¤ ¢²","¢±¡Ð¡ñ")) {
				case 1: .@x = 42;  .@y = 115; break;
				case 2: .@x = 110; .@y = 108; break;
				case 3: .@x = 178; .@y = 108; break;
				case 4: .@x = 260; .@y = 115; break;
			}
		}
		if (.@warpnumber <= 13) {
			switch(select("¡ø¡ô¡ï ¡ò","¡ü¡÷¡ó ¡÷ ")) {
				case 1: .@x = 385; .@y = 272; break;
				case 2: .@x = 385; .@y = 208; break;
			}
			warp strnpcinfo(NPC_MAP),.@x,.@y; end;
		}
	}
}

dic_in01,46,287,0	duplicate(Elevator#dicwarp17)	Elevador#1	CLEAR_NPC
dic_in01,122,283,0	duplicate(Elevator#dicwarp17)	Elevador#2	CLEAR_NPC
dic_in01,121,203,0	duplicate(Elevator#dicwarp17)	Elevador#3	CLEAR_NPC
dic_in01,35,213,0	duplicate(Elevator#dicwarp17)	Elevador#4	CLEAR_NPC
dic_in01,43,115,0	duplicate(Elevator#dicwarp17)	Elevador#5	CLEAR_NPC
dic_in01,111,108,0	duplicate(Elevator#dicwarp17)	Elevador#6	CLEAR_NPC
dic_in01,179,108,0	duplicate(Elevator#dicwarp17)	Elevador#7	CLEAR_NPC
dic_in01,261,115,0	duplicate(Elevator#dicwarp17)	Elevador#8	CLEAR_NPC
dic_in01,55,48,0	duplicate(Elevator#dicwarp17)	Elevador#9	CLEAR_NPC
dic_in01,137,46,0	duplicate(Elevator#dicwarp17)	Elevador#10	CLEAR_NPC
dic_in01,222,46,0	duplicate(Elevator#dicwarp17)	Elevador#11	CLEAR_NPC
dic_in01,388,272,0	duplicate(Elevator#dicwarp17)	Elevador#12	CLEAR_NPC
dic_in01,389,208,0	duplicate(Elevator#dicwarp17)	Elevador#13	CLEAR_NPC