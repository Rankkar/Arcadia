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
| - Criação: Spell Master 07/03/2017                                |
| - Nota: Troca de emblemas da batalha Campal                       |
\*-----------------------------------------------------------------*/

bat_room,160,150,3	script	Erundek#BgNpc	4_M_MANAGER,{
	mes "[Erundek]";
	mes "Bem-vind"+(Sex?"o":"a")+".";
	mes "O que eu posso fazer por você?";
	next;
	switch(select("Ler Catálago:Trocar Emlemas de Bravura:Trocar Emlemas de Valor:Trocar Emlemas de Guerra")) {
		case 1:
		mes "[Erundek]";
		mes "Temos muitos itens...";
		mes "Fique à vontade para olhar antes de trocar.";
		close2;
		readbook 11010,1;
		end;
		case 2:
		mes "[Erundek]";
		mes "Você quer trocar ^0000FFEmblemas de Bravura^000000 por quais tipos de itens?";
		.@BG_Badge = 7828;
		next;
		switch(select("Armas (100):Capas (50):Calçados (50):Armaduras (80):Acessórios (500)")) {
			case 1: // Armas
			setarray .@BG_Item[0],13036,13411,1425,1632,1634,1543,1924,1978,1574,1824,1183,1380,13305,1279,1739,13108,13172;
			.@BgBadgeValue = 100;
			break;
			case 2: // Capas
			setarray .@BG_Item[0],2538,2539,2540;
			.@BgBadgeValue = 50;
			break;
			case 3: // Calçados
			setarray .@BG_Item[0],2435,2436,2437;
			.@BgBadgeValue = 50;
			break;
			case 4: // Armaduras
			setarray .@BG_Item[0],2376,2377,2378,2379,2380,2381,2382;
			.@BgBadgeValue = 80;
			break;
			case 5: // Acessórios
			setarray .@BG_Item[0],2720,2721,2722,2723,2724,2725,2733;
			.@BgBadgeValue = 500;
			break;
		}
		break;
		case 3:
		mes "[Erundek]";
		mes "Você quer trocar ^0000FFEmblemas de Valor^000000 por quais tipos de itens?";
		.@BG_Badge = 7829;
		next;
		switch(select("Armas (100):Capas (50):Calçados (50):Armaduras (80):Acessórios (500)") ) {
			case 1: // Armas
			setarray .@BG_Item[0],13037,13410,1633,1635,1542,1923,1977,1575,1823,1184,1482,1379,13306,1280,1738,13171,13173,13174;
			.@BgBadgeValue = 100;
			break;
			case 2: // Capas
			setarray .@BG_Item[0],2538,2539,2540;
			.@BgBadgeValue = 50;
			break;
			case 3: // Calçados
			setarray .@BG_Item[0],2435,2436,2437;
			.@BgBadgeValue = 50;
			break;
			case 4: // Armaduras
			setarray .@BG_Item[0],2376,2377,2378,2379,2380,2381,2382;
			.@BgBadgeValue = 80;
			break;
			case 5: // Acessórios
			setarray .@BG_Item[0],2720,2721,2722,2723,2724,2725,2733;
			.@BgBadgeValue = 500;
			break;
		}
		break;
		case 4:
		mes "[Erundek]";
		mes "Você quer trocar ^0000FFEmblemas de Guerra^000000 por quais tipos de itens?";
		.@BG_Badge = 7773;
		next;
		switch(select("Armas (2000):Capas/Calçados/Armaduras/Acessórios")) {
			case 1: // Armas
			setarray .@BG_Item[0],13042,13416,13417,13418,1187,1426,1486,2002,1640,1641,1546,1310,1382,13307,1743,1281,1282,1927,1981,1576,1577,1826,1827,13110,13176,13177,13178,13179;
			.@BgBadgeValue = 2000;
			break;
			case 2: // Capas/Calçados/Armaduras/Acessórios
			mes "[Erundek]";
			mes "Exitem 3 níveis para esses equipamentos com custo diferente para cada nível e para cada equipamento.";
			mes "Por favor selecione o Nível.";
			set .@KvmItemTrade2,1; // Pular menu de arrays nos itens Capa Calçado Armadura e Acessórios KVM
			next;
			switch( select("Nível 1:Nível 2:Nível 3") ) {
				case 1: // Nível 1
				switch(select("Armadura Pública (15):Sapatos Públicos (10):Acessório Público (30)")) {
					case 1: 
					setarray .@BG_Item[0],2396;
					.@BgBadgeValue = 15;
					break;
					case 2:
					setarray .@BG_Item[0],2446;
					.@BgBadgeValue = 10;
					break;
					case 3:
					setarray .@BG_Item[0],2774;
					.@BgBadgeValue = 30;
					break;
				}
				break;
				case 2: //Nível 2
				switch(select("Armadura de Suprimento (120):Sapatos de Suprimento (70):Acessório de Suprimento (200)")) {
					case 1:
					setarray .@BG_Item[0],2395;
					.@BgBadgeValue = 120;
					break;
					case 2:
					setarray .@BG_Item[0],2445;
					.@BgBadgeValue = 70;
					break;
					case 3:
					setarray .@BG_Item[0],2773;
					.@BgBadgeValue = 200;
					break;
				}
				break;
				case 3: //Nível 3
				switch(select("Túnica Gloriosa (840):Sobrepeliz Gloriosa (630):Sapatos Gloriosos (580):Anel Glorioso (1200)")) {
					case 1:
					setarray .@BG_Item[0],2394;
					.@BgBadgeValue = 120;
					break;
					case 2:
					setarray .@BG_Item[0],2549;
					.@BgBadgeValue = 630;
					break;
					case 3:
					setarray .@BG_Item[0],2444;
					.@BgBadgeValue = 580;
					break;
					case 4:
					setarray .@BG_Item[0],2772;
					.@BgBadgeValue = 1200;
					break;
				}
				break;
			}
		}
	}
	if (!.@KvmItemTrade2) {
		for(.@i = 0; .@i < getarraysize(.@BG_Item); ++.@i) {
			.@Menu$ += getitemname(.@BG_Item[.@i]) + ":";
		}
		.@Item_ID = .@BG_Item[select(.@Menu$) - 1];
		mes "[Erundek]";
		mes "Você gostaria de trocar";
		mes "^FF0000"+.@BgBadgeValue+" "+ getitemname(.@BG_Badge)+"^000000 por um(a)";
		mes "^0000FF"+getitemname(.@Item_ID)+"^000000?";
		next;
	}
	else {
		mes "[Erundek]";
		mes "Você gostaria de trocar";
		.@Item_ID = .@BG_Item;
		mes "^FF0000"+.@BgBadgeValue+" "+ getitemname(.@BG_Badge)+"^000000 por um(a)";
		mes "^0000FF"+getitemname(.@Item_ID)+"^000000?";
		next;
	}
	switch(select("Sim:Não")) {
		case 1:
		if(countitem(.@BG_Badge) < .@BgBadgeValue ) {
			mes "[Erundek]";
			mes "Eu sinto muito, mas você não possui emblemas suficientes para trocar.";
			close;
		}
		mes "[Erundek]";
		mes "Aqui está o seu item.";
		delitem .@BG_Badge,.@BgBadgeValue;
		getitem .@Item_ID,1;
		close;
		case 2:
		mes "[Erundek]";
		mes "Tudo bem volte quando quiser fazer alguma troca.";
		close;
	}
}