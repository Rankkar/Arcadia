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
+-------------------------------------------------------------------+
| - Criação: Spell Master 21/02/2017                                |
| - Nota: Generais e seus acistentes da batalha campal              |
\*-----------------------------------------------------------------*/

//--------------------------------------------------------------
// - [Azul] -
//--------------------------------------------------------------
bat_room,160,159,3	script	General Guillaume	4_M_KY_KIYOM,{
	if ((agitcheck()) || (agitcheck2())) {
		mes "[General Guillaume]";
		mes "No momento seu reino está em uma guerra.";
		mes "Porque não mostra sua bravura ajudando seu povo?";
		close;
	}
	cutin "bat_kiyom2",2;
	mes "[General Guillaume]";
	mes "Aventureir"+(Sex?"o":"a")+" de sangue quente, não precisamos de sua habilidade para ganhar esta batalha.";
	next;
	cutin "bat_kiyom1",2;
	mes "[General Guillaume]";
	mes "Nosso rei, Marcel Marollo VII, estão muito doente.";
	mes "Vossa Majestade declarou que seria eu ou Príncipe Croix o próximo rei dentre seus 9 filhos.";
	next;
	mes "[General Guillaume]";
	mes "Dois reis não podem dividir uma nação!";
	mes "Somente o vitorioso desta batalha será coroado.";
	next;
	mes "[General Guillaume]";
	mes "Isto não é apenas uma batalha entre nós.";
	mes "Esta batalha determinará o futuro deste país.";
	mes "Eu jurei por minha honra que serei o único que protegerá Maroll de ameaças vindas de fora.";
	next;
	switch(select("Sim, eu quero me juntar a você:Cancelar")) {
		case 1:
		mes "[General Guillaume]";
		mes "Bem-vindo ao meu exêrcito.";
		mes "Seus olhos me dizem que você é um soldado em que eu posso confiar.";
		next;
		mes "[General Guillaume]";
		mes "Agora, suba as escadas e se aliste para a batalha com seus camaradas.";
		mes "Tenho certeza que eles o receberão de coração aberto!";
		Bat_Team = 1;
		close2; cutin "",255; end;
		case 2:
		mes "[General Guillaume]";
		mes "É uma pena seus taletos seriam realmente úteis!";
		close2; cutin "",255; end;
	}
}

//--------------------------------------------------------------
bat_room,161,160,3	script	Acistente#A_Guillaume	4_M_KY_HEAD,{
	mes "[Acistente de Guillaume]";
	mes "Para de juntar ao nosso exêrcito fale com o ^2c5ec0General Guillaume^000000";
	close;
}
bat_room,161,158,3	duplicate(Acistente#A_Guillaume)	Acistente#A_Guillaume2	4_M_KY_HEAD

//--------------------------------------------------------------
bat_room,162,157,3	script	#Flag_Guillaume	1_FLAG_LION,{ end; }
bat_room,162,160,3	duplicate(#Flag_Guillaume)	#Flag_Guillaume2	1_FLAG_LION

//--------------------------------------------------------------
// - [Vermelho] -
//--------------------------------------------------------------
bat_room,160,140,3	script	Príncipe Croix	4_M_CRU_CRUA,{
	if ( (agitcheck()) || (agitcheck2()) ) {
		mes "[Príncipe Croix]";
		mes "No momento seu reino est?em uma guerra.";
		mes "Porque não mostra sua bravura ajudando seu povo?";
		close;
	}
	cutin "bat_crua1",2;
	mes "[Príncipe Croix]";
	mes "Aventureir"+(Sex?"o":"a")+", por que não nos empresta seu poder para a vitória?";
	next;
	cutin "bat_crua2",2;
	mes "[Príncipe Croix]";
	mes "Eu não quero derramar sangue, mas eu não tenho escolha a não ser lutar pela possibilidade de paz para o amor do meu povo.";
	next;
	mes "[Príncipe Croix]";
	mes "O General Guillaume pode ter uma vantagem nesta batalha e ele é um ótimo general de Maroll, mas isto não quer dizer que ele vai vencer.";
	mes "Eu quero vencer esta batalha para garantir um futuro melhor para o meu povo.";
	next;
	switch(select("Sim, eu quero me juntar a você:Cancelar")) {
		case 1:
		mes "[Príncipe Croix]";
		mes "Muito obrigado.";
		mes "Eu sinto que poderei vencer com a ajuda de aventureir"+(Sex?"o":"a")+"s como você";
		mes "Agora, por favor suba as escadas e se junte a seus camaradas que estão treinando suas habilidades para lutar com o inimigo!";
		Bat_Team = 2;
		close2; cutin "",255; end;
		case 2:
		mes "[Príncipe Croix]";
		mes "Mesmo assim fico-lhe grato por mostrar interesse.";
		close2; cutin "",255; end;
	}
}

//--------------------------------------------------------------
bat_room,161,141,3	script	Acistente#A_Croix	4_M_CRU_HEAD,{
	mes "[Acistente de Croix]";
	mes "Para de juntar ao nosso exêrcito fale com o ^bb0000Príncepe Croix^000000.";
	close;
}
bat_room,161,139,3	duplicate(Acistente#A_Croix)	Acistente#A_Croix2	4_M_CRU_HEAD

//--------------------------------------------------------------
bat_room,162,141,3	script	#Flag_Croix	1_FLAG_EAGLE,{ end; }
bat_room,162,139,3	duplicate(#Flag_Croix)	#Flag_Croix2	1_FLAG_EAGLE