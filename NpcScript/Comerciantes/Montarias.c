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
| - Nota:                                                           |
|         Aluguel de Montarias para Cavaleiro/Lorde.                |
|         Aluguel de Montarias para Templário/Paladino.             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Cavaleiro e Lorde ] -
// ------------------------------------------------------------------
prontera,55,350,5	script	Criador de Pecopecos#knt	8W_SOLDIER,{
	if(Upper == 0) { .@price = 2500; }
	if(Upper == 1) { .@price = 5000; }
	if(Upper == 2) { .@price = 5000; }
	mes "[Criador de Pecopecos]";
	if (BaseJob == Job_Knight && Class < Job_Rune_Knight) {
		mes "Bom-dia honorável Cavaleiro gostaria de alugar um Pecopeco?";
		mes "Você precisa ter a Habilidade Montaria e apenas "+.@price+" Zeny sobrando.";
		next;
		switch(select("Alugar Peco Peco","Cancelar")) {
			case 1:
			if (Zeny < .@price) {
				mes "[Criador de Pecopecos]";
				mes "Sinto muito mas você não tem zenys o suficiente.";
				close;
			}
			else if(getskilllv(KN_RIDING) == 0) {
				mes "[Criador de Pecopecos]";
				mes "Você não pode usar meus serviços até aprender a habilidade Montaria.";
				close;
			}
			else if(checkmount()) {
				mes "[Criador de Pecopecos]";
				mes "Mas você já está montado em um Pecopeco.";
				close;
			}
			else if(hascashmount()) {
				mes "[Criador de Pecopecos]";
				mes "Por favor remova sua montaria atual.";
				close;
			}
			Zeny -= .@price;
			setmount(MOUNT_PECO);
			close;
			case 2:
			mes "[Criador de Pecopecos]";
			mes "Bem então, tenha um dia bom.";
			close;
		}
	}
	else {
		mes "Me desculpe mas o aluguel de pecopecos só está disponível para cavaleiros e lordes.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Templario e Paladino ] -
// ------------------------------------------------------------------
prontera,232,318,3	script	Criador de Pecopecos#cru	8W_SOLDIER,{
	if(Upper==0) .@price = 3500;
	if(Upper==1) .@price = 7000;
	if(Upper==2) .@price = 7000;

	mes "[PecoPeco Breeder]";
	if (BaseJob == Job_Crusader && Class < Job_Rune_Knight) {
		mes "Nós possuímos um Pecopeco especial preparado para você.";
		mes "Para adquirir um Pecopeco são necessários "+.@price+" Zeny.";
		next;
		switch(select("Alugar a PecoPeco","Sair")) {
			case 1:
			if (Zeny < .@price) {
				mes "[Criador de Pecopecos]";
				mes "Você não possui a quantidade de zenys suficientes.";
				mes "Se você quiser um Pecopeco por favor me traga "+.@price+" zenys...";
				close;
			}
			else if(getskilllv(KN_RIDING) == 0) {
				mes "[Criador de Pecopecos]";
				mes "Você deve primeiro aprender a como montar um Pecopeco após isso eu poderei alugar um para você.";
				close;
			}
			else if(checkmount()) {
				mes "[Criador de Pecopecos]";
				mes "Você já está montado em uma montaria";
				close;
			}
			else if(hascashmount()) {
				mes "[Criador de Pecopecos]";
				mes "Por favor remova sua montaria atual.";
				close;
			}
			Zeny -= .@price;
			setmount(MOUNT_PECO);
			close;
			case 2:
			mes "[PecoPeco Breeder]";
			mes "Nos vemos por ai.";
			close;
		}
	}
	else {
		mes "O que posso fazer por você?";
		mes "Lembre-se que esse serviço é restrito a Templários e Paladinos.";
		close;
	}
}