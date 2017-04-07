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
| - Criação: Spell Master 11/03/2017                                |
| - Nota: Venda de artigos para realização de alquimia              |
\*-----------------------------------------------------------------*/

alde_alche,24,188,3	script	Comerciante da Guilda	2_M_ALCHE,{
	if (BaseJob == Job_Alchemist) {
		mes "[Gever Al Sharp]";
		mes "Bem vindo guila dos alquimistas";
		mes "Em que posso ajudar?";
		next;
		switch (select("Comprar Materiais","Comprar Manuais","Cancelar")) {
			case 1:
			mes "[Gever Al Sharp]";
			mes "Qual material gostaria de comprar?";
			next;
			switch(select(getitemname(Medicine_Bowl)+" 250 Zenys",getitemname(Life_Force_Pot)+" 5.000 Zenys",getitemname(Yggdrasilberry_Dew)+" 20.000 Zenys",getitemname(Seed_Of_Life)+" 60.000 Zenys","Cancelar")) {
				case 1: .@item = 7134; .@price = 250; break;
				case 2: .@item = 7143; .@price = 5000; break;
				case 3: .@item = 7141; .@price = 20000; break;
				case 4: .@item = 7140; .@price = 60000; break;
				case 6:
				mes "[Gever Al Sharp]";
				mes "Tudo bem volte quando quiser fazer negócios.";
				close;
			}
			break;
			case 2:
			if ((MaxWeight - Weight) < 10) {
				mes "[Gever Al Sharp]";
				mes "Parece que você está levando muito peso e não vai poder carregar um manual.";
				mes "Diminua o peso de itens que carrega antes de processeguir com a negociação.";
				close;
			}
			else if (Zeny < 100000) {
				mes "[Gever Al Sharp]";
				mes "Vejo que você não possui zenys o suficiente para comprar um manual de criação.";
				mes "Cada manual custa 100.000 Zenys.";
				close;
			}
			else {
				mes "[Gever Al Sharp]";
				mes "O preço pelos Manuais de Criação são 100.000 zenys cada.";
				mes "Qual gostaria de comprar?";
				next;
				switch (select("Manual de Criação de Poções","Manual de Criação de Álcool","Manual de Criação de Fogo Grego","Manual de Criação de Frasco de Ácido","Manual de Criação de Plantas","Manual de Criação de Esferas-Marinhas","Manual de Criação de Revestimentos","Manual de Criação de Poções Compacta","Cancelar Negociação.")) {
					case 1:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Poções Comuns.";
					Zeny -= 100000;
					getitem (Normal_Potion_Book,1);
					close;
					case 2:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Álcool.";
					Zeny -= 100000;
					getitem (Alcol_Create_Book,1);
					close;
					case 3:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Fogo Grego.";
					Zeny -= 100000;
					getitem (FireBottle_Create_Book,1);
					close;
					case 4:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Ácidos.";
					Zeny -= 100000;
					getitem (Acid_Create_Book,1);
					close;
					case 5:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Plantas.";
					Zeny -= 100000;
					getitem (Plant_Create_Book,1);
					close;
					case 6:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Esferas-Marinhas.";
					Zeny -= 100000;
					getitem (Mine_Create_Book,1);
					close;
					case 7:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Revestimentos.";
					Zeny -= 100000;
					getitem (Coating_Create_Book,1);
					close;
					case 8:
					mes "[Gever Al Sharp]";
					mes "Está aqui seu Manual de Criação de Poções Compactas.";
					Zeny -= 100000;
					getitem (Slim_Potion_Create_Book,1);
					close;
					case 9:
					mes "[Gever Al Sharp]";
					mes "Pois bem...";
					mes "Volte caso você tenha nescessidade de comprar um manual de produção.";
					close;
				}
			}
			case 3:
			mes "[Gever Al Sharp]";
			mes "Tudo bem volte quando quiser fazer negócios.";
			close;
		}
		mes "[Gever Al Sharp]";
		mes "Digite a quantidade de "+getitemname(.@item)+" que deseja.";
		mes "Se quiser cancelar digite '0'";
		mes "E só posso vender até 1000 itens por vez.";
		next;
		input (.@input);
		if (.@input == 0) {
			mes "[Gever Al Sharp]";
			mes "Você cancelou a negociação";
			close;
		}
		else if (.@input > 1000) {
			mes "[Gever Al Sharp]";
			mes "Você digitou uma quantidade muito alta, eu só posso vender por vez até 1.000 unidades.";
			close;
		}
		else {
			.@total_weight = .@input * 10;
			mes "[Gever Al Sharp]";
			mes "Então você quer comprar "+.@input+" "+getitemname(.@item)+"?";
			if ((MaxWeight - Weight) < .@total_weight) {
				mes "Mas infelismente pareceque você carrega muito peso, e não vai poder levar tudo.";
				mes "Se diminua o peso em itens que carrega, depois venha negociar comigo.";
				close;
			}
			next;
			.@total_price = .@input * .@price;
			if (select("Comprar","Cancelar") == 1) {
				if (Zeny < .@total_price) {
					mes "[Gever Al Sharp]";
					mes "Você não possui zeny o suficiente.";
					mes "Cheque o quanto de Zeny você tem primeiro.";
					close;
				}
				else {
					mes "[Gever Al Sharp]";
					mes "Foi um prazer fazer negócios com você.";
					mes "Volte sempre.";
					Zeny -= .@total_price;
					getitem (.@item,.@input);
					close;
				}
			}
			mes "[Gever Al Sharp]";
			mes "Tudo bem volte quando quiser fazer negócios.";
			close;
		}
	}
	else if (BaseJob == Job_Merchant) {
		mes "[Gever Al Sharp]";
		mes "Hunn...?";
		mes "Um mercador!";
		mes "Já pensou em aprofundar suas habilidades de comércio na pesquisa com alquimía?";
		mes "Este é o lugar, fale com os outros integrantes da guila, eles podem lhe ajudar";
		close;
	}
	else {
		mes "[Gever Al Sharp]";
		mes "Bem vindo guila dos alquimistas.";
		mes "Este é o lugar onde fazemos pesquisas com alquimia.";
		close;
	}
}