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
| - Por: eAthena/rAthena/Hercules                                   |
| - Versão: Spell Master                                           |
| - Nota: Npcs comuns na cidade Lutie                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
xmas,206,168,4	script	Garotinho#xmas	4_M_KID1,{
	mes "[Charu Charu]";
	mes "Feliz Natal!";
	mes "Heheheheheh.!";
	next;
	mes "[Charu Charu]";
	mes "Você falou com o palhaço ali?";
	mes "Ele é tãão entediante.";
	next;
	mes "[Charu Charu]";
	mes "Quando Marcell e eu vamos no show dele, nos sentimos meio idiotas!";
	next;
	mes "[Marcell]";
	mes "Charu Charu!";
	mes "Fique quieto!";
	mes "Como você se atreve a falar assim do Hashokii?!";
	mes "Ele sempre tenta nos fazer sorrir!";
	next;
	mes "[Charu Charu]";
	mes "É, é.";
	mes "Que seja.";
	mes "Eu sei disso!";
	mes "Mas ele não é engraçado!";
	mes "Prefiro conversar com o ^3355FFBoneco de Neve^000000.";
	next;
	mes "[Charu Charu]";
	mes "Bem, se você não visitou Boneco de Neve ainda, deveria ir pelo menos uma vez.";
	mes "Ele é legal!";
	next;
	mes "[Charu Charu]";
	mes "Feliz Natal!";
	mes "Aproveite sua viagem em Lutie.!";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
xmas_in,100,96,4	script	Papai Noel#xmas	4_M_SANTA,{
	mes "[Papai Noel]";
	mes "Ho Ho Ho.";
	mes "Feliiiiz Nataaal !!";
	next;
	mes "^3355FFÉ...^000000";
	mes "^3355FFÉ o Papai Noel de verdade!^000000";
	next;
	mes "[Papai Noel]";
	mes "Ho Ho Ho.";
	mes "Sou o Papai Noel, e no Natal levo presentes para todas as crianças boazinhas!";
	next;
	mes "[Papai Noel]";
	mes "Se você quiser sair de Lutie, vá para o Sul do primeiro mapa após a cidade.";
	mes "Você encontrará um warp que te levará de volta a Al de Baran.";
	next;
	mes "[Papai Noel]";
	mes "Ho ho ho.";
	mes "Feliiiz Nataaal!";
	close;
}