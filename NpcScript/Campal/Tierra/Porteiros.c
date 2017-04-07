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
| - Criação: Spell Master 21/02/2017                                |
| - Nota: Porteiros da batalha campal Tierra.                       |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Entrada para salas de espera] -
//-------------------------------------------------------------------
-	script	TierraEnter	FAKE_NPC,{
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
			if (Bat_Team == 1) { warp ("bat_room",57,223); }
			if (Bat_Team == 2) { warp ("bat_room",57,207); }
			end;
		}
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "Tudo bem, quando sentir que está preparado"+(Sex?"o":"a")+", venha falar comigo novamente.";
		close;
	}
}
// Azul
bat_room,124,178,5	duplicate(TierraEnter)	Oficial de Tierra#Guillaume	4_M_KY_KNT
// Vermelho
bat_room,125,121,1	duplicate(TierraEnter)	Oficial de Tierra#Croix	4_M_CRU_KNT

//-------------------------------------------------------------------
// - [Cavaleiros da Entrada] -
//-------------------------------------------------------------------
-	script	TierraKnt	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Olá guerreiro o que você deseja?";
	next;
	switch (select("Participar da batalha","Informações da batalha","Nada")) {
		case 1:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Para participar da batalha do Desfiladeiro de Tierra, primeiro você deve se alistar com o ^2c5ec0General Guillaume^000000 ou com o ^bb0000Príncepe Croix^000000.";
		mes "Depois solicite aos oficiais que levem você as salas de espera da batalha.";
		close;
		case 2:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "O mapa de batalha é em uma região montanhosa, ambos exêrcitos começam em seus navios de desenbarque.";
		mes "Onde sua base de suprimento se encontra nas proximidades laterais ao desnbarque.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "O objetivo da batalha é destruir a base de suprimento enimiga.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "No centro do mapa existe uma base neutra, o exêrcito que destruir essa base ganhará ajuda de guardiões na batalha.";
		mes "Também existe barricadas que impedem o avanço direto entre as bases de suprimentos.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "As Bases de Suprimentos são imunes a qualquer tipo de habilidade, somente o ataque físico pode daníficar-las.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "A batalha tem início quando cada equipe estiver composta de 5 participantes dentro de suas respectivas salas de espera.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "O tempo limite de duração da batalha é de 00:20:00(Vinte minutos).";
		mes "Se dentro desse tempo não houver vencedor, a vitória será dada ao exêrcito com a maior pontuação.";
		mes "Caso a pontuação esteja empatada será decretado um empate entre os exêrcitos.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Para os vencedores serão recompensados com 3 emblemas de valor.";
		mes "Para os derrotados terão recompensação de 1 emblema de valor.";
		mes "Em caso de empate ambos recebem 2 emblemas de valor.";
		close;
		case 3:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Tudo bem estarei aqui caso precize de alguma informação.";
		close;
	}
}
// Azul
bat_room,127,178,5	duplicate(TierraKnt)	Cavaleiro de Guillaume#TierraKnt	4_M_KY_SOLD
// Vermelho
bat_room,127,121,1	duplicate(TierraKnt)	Cavaleiro de Croix#TierraKnt	4_M_CRU_SOLD
