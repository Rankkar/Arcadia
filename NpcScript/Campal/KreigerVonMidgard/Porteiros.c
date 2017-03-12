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
| - Criação: Spell Master 07/03/2017                                |
| - Nota: Porteiros da batalha campal Kreiger Von Midgard.          |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Entrada para salas de espera] -
//-------------------------------------------------------------------
-	script	KvmEnter	FAKE_NPC,{
	if (!Bat_Team) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "Você ainda não se alistou para a batalha.";
		close;
	}
	else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") && (Bat_Team == 2)) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "O que um aliado de ^bb0000Príncepe Croix^000000 faz aqui?";
		close;
	}
	else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Croix") && (Bat_Team == 1)) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "O que um aliado de ^2c5ec0General Guillaume^000000 faz aqui?";
		close;
	}
	if ((agitcheck()) || (agitcheck2())) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "No momento seu reino está em uma guerra.";
		mes "Porque não mostra sua bravura ajudando seu povo?";
		close;
	}
	else {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") {
			mes "Olá ^777777"+strcharinfo(PC_NAME)+"^000000, vamos mostrar o poder do Exército Guillaume para estes Croixs!";
		}
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Croix") {
			mes "Olá ^777777"+strcharinfo(PC_NAME)+"^000000, vamos mostrar o poder de nós Croixs para estes Guillaumes";
		}
		mes "Está pront"+(Sex?"o":"a")+" para a batalha?";
		next;
		if (select("Sim:Não") == 1) {
			mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
			mes "Boa sorte!";
			close2;
			if (Bat_Team == 1) { warp strnpcinfo(NPC_MAP),169,223; }
			if (Bat_Team == 2) { warp strnpcinfo(NPC_MAP),169,207; }
			end;
		}
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "Tudo bem, quando sentir que está preparado"+(Sex?"o":"a")+", venha falar comigo novamente.";
		close;
	}
}
// Azul
bat_room,141,178,5	duplicate(KvmEnter)	Oficial KVM#Guillaume	4_M_KY_KNT
// Vermelho
bat_room,140,121,1	duplicate(KvmEnter)	Oficial KVM#Croix	4_M_CRU_KNT

//-------------------------------------------------------------------
// - [Cavaleiros da Entrada] -
//-------------------------------------------------------------------
-	script	KvmKnt	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Olá guerreiro o que você deseja?";
	next;
	switch (select("Participar da batalha:Informações da batalha:Nada")) {
		case 1:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Para participar da batalha do Kreiger Von Midgard, primeiro você deve se alistar com o ^2c5ec0General Guillaume^000000 ou com o ^bb0000Príncepe Croix^000000.";
		mes "Depois solicite aos oficiais que levem você as salas de espera da batalha.";
		close;
		case 2:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "A batalha tem seu início quando ambos exêrcitos estiverem compostos de 3 participantes em sua devida sala de espera.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "O objetivo da batalha é simples!";
		mes "Derrotar todos inímigos.";
		mes "A batalha consta com 2 Rounds, a exêrcito que vencer esses rounds será o vencedor.";
		mes "Em caso de emparte 1X1 haverá um terceiro round para decisão.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "O tempo limite de duração da batalha é de 00:10:00(Dez minutos).";
		mes "Se dentro desse tempo não houver vencedor, a vitória será dada ao exêrcito com a maior pontuação.";
		mes "Caso a pontuação esteja empatada será decretado um empate entre os exêrcitos.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Para os vencedores serão recompensados com 2 emblemas de Guerra.";
		mes "Para os derrotados terão recompensação de 1 emblema de Guerra.";
		mes "Em caso de empate ambos recebem 1 emblemas de Guerra.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Haverá sempre uma contagem dos participantes, se algum exêrcito não tiver pelo menos 1 participante a batalha tem seu fim decretado.";
		mes "Vence então a equipe que ainda tenha 1 ou mais membros na batalha.";
		close;
		case 3:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Tudo bem estarei aqui caso precize de alguma informação.";
		close;
	}
}
// Azul
bat_room,143,178,5	duplicate(KvmKnt)	Cavaleiro de Guillaume#KvmKnt	4_M_KY_SOLD
// Vermelho
bat_room,143,121,1	duplicate(KvmKnt)	Cavaleiro de Croix#KvmKnt	4_M_CRU_SOLD