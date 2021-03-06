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
| - Cria��o: Spell Master 21/02/2017                                |
| - Nota: Porteiros da Batalha Flavius                              |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Entrada para salas de espera] -
//-------------------------------------------------------------------
-	script	FlaviusEnter	FAKE_NPC,{
	if (!Bat_Team) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "Voc� ainda n�o se alistou para a batalha.";
		close;
	}
	else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") && (Bat_Team == 2)) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "O que um aliado de ^bb0000Pr�ncepe Croix^000000 faz aqui?";
		close;
	}
	else if ((strnpcinfo(NPC_NAME_HIDDEN) == "Croix") && (Bat_Team == 1)) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "O que um aliado de ^2c5ec0General Guillaume^000000 faz aqui?";
		close;
	}
	if ((agitcheck()) || (agitcheck2())) {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "No momento seu reino est� em uma guerra.";
		mes "Porque n�o mostra sua bravura ajudando seu povo?";
		close;
	}
	else {
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Guillaume") {
			mes "Ol� ^777777"+strcharinfo(PC_NAME)+"^000000, vamos mostrar o poder do Ex�rcito Guillaume para estes Croixs!";
		}
		if (strnpcinfo(NPC_NAME_HIDDEN) == "Croix") {
			mes "Ol� ^777777"+strcharinfo(PC_NAME)+"^000000, vamos mostrar o poder de n�s Croixs para estes Guillaumes";
		}
		mes "Est� pront"+(Sex?"o":"a")+" para a batalha?";
		next;
		if (select("Sim","N�o") == 1) {
			mes "["+strnpcinfo(NPC_NAME_HIDDEN)+"]";
			mes "Boa sorte!";
			close2;
			if (Bat_Team == 1) { warp ("bat_room",85,223); }
			if (Bat_Team == 2) { warp ("bat_room",85,207); }
			end;
		}
		mes "[Oficial de "+strnpcinfo(NPC_NAME_HIDDEN)+"]";
		mes "Tudo bem, quando sentir que est� preparado"+(Sex?"o":"a")+", venha falar comigo novamente.";
		close;
	}
}
// Azul
bat_room,133,178,5	duplicate(FlaviusEnter)	Oficial de Flavius#Guillaume	4_M_KY_KNT
// Vermelho
bat_room,133,121,1	duplicate(FlaviusEnter)	Oficial de Flavius#Croix	4_M_CRU_KNT

//-------------------------------------------------------------------
// - [Cavaleiros da Entrada] -
//-------------------------------------------------------------------
-	script	::FlaviusKnt	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Ol� guerreiro o que voc� deseja?";
	next;
	switch (select("Participar da batalha","Informa��es da batalha","Nada")) {
		case 1:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Para participar da batalha de Flavius, primeiro voc� deve se alistar com o ^2c5ec0General Guillaume^000000 ou com o ^bb0000Pr�ncepe Croix^000000.";
		mes "Depois solicite aos oficiais que levem voc� as salas de espera da batalha.";
		close;
		case 2:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "O objetivo da batalha � destruir o cristal inimino, localizado a parte oposta do mapa.";
		mes "Vence quem conseguir realizar essa fa�anha por 2 vezes.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Os cristais s�o protegidos por uma barreira m�gica que impede que ele seja atingido, at� que seus guardi�es sejam destru�dos.";
		mes "Estes mesmos cristais s�o imunes a qualquer tipo de habilidade, somente o ataque f�sico pode dan�ficar-los.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "A batalha tem in�cio quando cada equipe estiver composta de 5 participantes dentro de suas respectivas salas de espera.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "O tempo limite de dura��o da batalha � de 00:20:00(Vinte minutos).";
		mes "Se dentro desse tempo n�o houver vencedor, a vit�ria ser� dada ao ex�rcito com a maior pontua��o.";
		mes "Caso a pontua��o esteja empatada ser� decretado um empate entre os ex�rcitos.";
		next;
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Para os vencedores ser�o recompensados com 3 emblemas de bravura.";
		mes "Para os derrotados ter�o recompensa��o de 1 emblema de bravura.";
		mes "Em caso de empate ambos recebem 2 emblemas de bravura.";
		close;
		case 3:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Tudo bem estarei aqui caso precize de alguma informa��o.";
		close;
	}
}
// Azul
bat_room,135,178,5	duplicate(FlaviusKnt)	Cavaleiro de Guillaume#FlaviusKnt	4_M_KY_SOLD
// Vermelho
bat_room,135,121,1	duplicate(FlaviusKnt)	Cavaleiro de Croix#FlaviusKnt	4_M_CRU_SOLD
