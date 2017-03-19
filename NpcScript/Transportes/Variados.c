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
| - Por: Spell Master/eAthena/rAthena/Hercules                      |
| - Nota: Npcs que levam personagens a locais variados              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [gonryun > gon_fild01 ] - 
// ------------------------------------------------------------------
gonryun,153,64,7	script	Anunciante de Kunlun#gon4	4_M_TWMIDMAN,{
	mes "[Jangchungryong]";
	mes "Quando desejar terminar sua visita a Kunlun.";
	mes "Eu irei leva-lo para o porto.";
	next;
	if (select("Retornar ao porto.","Cancelar.") == 1) {
		mes "[Jangchungryong]";
		mes "Eu espero que você tenha se divertido conosco.";
		mes "Vamos indo então?";
		close2;
		warp "gon_fild01",258,82;
		end;
	}
	mes "[Jangchungryong]";
	mes "Demore o tempo que quiser aqui.";
	mes "Existem muitos lugares misteriosos em Kunlun pra você visitar.";
	close;
}
