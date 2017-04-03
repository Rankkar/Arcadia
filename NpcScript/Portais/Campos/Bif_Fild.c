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
| - Nota: Potais nos Campos da Fonteira                             |
\*-----------------------------------------------------------------*/

bif_fild01,318,48,0	warp	bifrost_field0002	1,1,splendide,271,382

// ------------------------------------------------------------------
bif_fild02,292,351,0	warp	biffild_fild01-1	1,1,ecl_fild01,205,76

-	script	bifrost_field0000	FAKE_NPC,{
	mes "Você ver um pequeno buraco um jardim de luminoso.";
	next;
	if(select("Investigar","Que buraco é esse?") == 1) {
		mes "Quando você bate na porta-como a coisa apenas para o divertimento.";
		mes "A porta estala ao abrir e você sente alguma força misteriosa que puxa-o para dentro.";
		close2;
		switch(atoi(charat(strnpcinfo(NPC_NAME_HIDDEN),9))) {
			case 1: warp "mora",179,74; end;
			case 2: warp "mora",22,157; end;
			case 3: warp "mora",58,27; end;
		}
	}
	close;
	OnTouch:
	specialeffect EF_LEVEL99_4;
	end;
}
bif_fild02,285,332,0	duplicate(bifrost_field0000)	Pequeno Buraco#ep14_mora1	CLEAR_NPC
bif_fild02,95,310,0	duplicate(bifrost_field0000)	Pequeno Buraco#ep14_mora2	CLEAR_NPC
bif_fild02,174,162,0	duplicate(bifrost_field0000)	Pequeno Buraco#ep14_mora3	CLEAR_NPC