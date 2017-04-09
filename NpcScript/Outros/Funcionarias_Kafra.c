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
| - Desenvolvido por: Spell Master 27/03/2017                       |
| - Nota: Funcionárias da Corporação Kafra                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	KafraCorp	FAKE_NPC,{
	cutin (strnpcinfo(NPC_NAME_HIDDEN),2);
	if (getskilllv(NV_BASIC) < 6) {
		mes "[Funcionária Kafra]";
		mes "Me desculpe mas você deve pelo menos ter suas ^777777Habilidades Básicas^000000.";
		mes "Ampliadas até o Nível 6 para usar o serviços da Corporação Kafra.";
		close2; cutin ("",255); end;
	}
	// "Salvar","Usar Armazém","Serviço de Teletransporte","Alugar Carrinho","Outros Serviços"
	if (strnpcinfo(NPC_MAP) == "prontera")          { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "morocc")            { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "geffen")            { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "payon")             { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "alberta")           { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "izlude")            { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "payon")             { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "aldebaran")         { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "comodo")            { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "yuno")              { .@kaframenu = 1; }
	if (strnpcinfo(NPC_MAP) == "umbala")            { .@kaframenu = 1; }
	// "Salvar","Usar Armazém","Alugar Carrinho","Outros Serviços"
	if (strnpcinfo(NPC_MAP) == "moc_ruins")         { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "pay_arche")         { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "cmd_fild07")        { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "amatsu")            { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "gonryun")           { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "ayothaya")          { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "louyang")           { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "lighthalzen")       { .@kaframenu = 2; }
	if (strnpcinfo(NPC_MAP) == "moscovia")          { .@kaframenu = 2; }
	// "Salvar","Usar Armazém","Alugar Carrinho"
	if (strnpcinfo(NPC_MAP) == "aldeba_in")         { .@kaframenu = 3; }
	// "Usar Armazém","Cancelar"
	if (strnpcinfo(NPC_MAP) == "mjolnir_02")        { .@kaframenu = 4; }
	if (strnpcinfo(NPC_MAP) == "niflheim")          { .@kaframenu = 4; }
	// "Usar Armazém","Alugar Carrinho","Outros Serviços"
	if (strnpcinfo(NPC_MAP) == "prt_fild05")        { .@kaframenu = 5; }
	if (strnpcinfo(NPC_MAP) == "gef_fild10")        { .@kaframenu = 5; }
	if (strnpcinfo(NPC_MAP) == "alb2trea")          { .@kaframenu = 5; }
	if (strnpcinfo(NPC_MAP) == "einbroch")          { .@kaframenu = 5; }
	if (strnpcinfo(NPC_MAP) == "einbech")           { .@kaframenu = 5; }
	if (strnpcinfo(NPC_MAP) == "lhz_in02")          { .@kaframenu = 5; }
	if (strnpcinfo(NPC_MAP) == "izlu2dun") {
		// ** NOTA: Criar função para quest de mudança de classe para mercador!
		.@kaframenu = 5;
	}
	mes "[Funcionária Kafra]";
	mes "Seja bem vind"+(Sex?"o":"a")+" aos serviços da Corporação kafra.";
	mes "Em que posso ajudar?";
	next;
	if (.@kaframenu == 1) {
		switch(select("Salvar","Usar Armazém","Serviço de Teletransporte","Alugar Carrinho","Outros Serviços","Cancelar")) {
			case 1: .@kafraoption = 1; break; // Salvar
			case 2: .@kafraoption = 2; break; // Usar Armazém
			case 3: .@kafraoption = 3; break; // Serviço de Teletransporte
			case 4: .@kafraoption = 4; break; // Alugar Carrinho
			case 5: .@kafraoption = 5; break; // Outros Serviços
			case 6: .@kafraoption = 6; break; // Cancelar
		}
	}
	if (.@kaframenu == 2) {
		switch(select("Salvar","Usar Armazém","Alugar Carrinho","Outros Serviços","Cancelar")) {
			case 1: .@kafraoption = 1; break; // Salvar
			case 2: .@kafraoption = 2; break; // Usar Armazém
			case 3: .@kafraoption = 4; break; // Alugar Carrinho
			case 4: .@kafraoption = 5; break; // Outros Serviços
			case 5: .@kafraoption = 6; break; // Cancelar
		}
	}
	if (.@kaframenu == 3) {
		switch(select("Salvar","Usar Armazém","Alugar Carrinho","Cancelar")) {
			case 1: .@kafraoption = 1; break; // Salvar
			case 2: .@kafraoption = 2; break; // Usar Armazém
			case 3: .@kafraoption = 4; break; // Alugar Carrinho
			case 4: .@kafraoption = 6; break; // Cancelar
		}
	}
	if (.@kaframenu == 4) {
		switch(select("Usar Armazém","Cancelar")) {
			case 1: .@kafraoption = 2; break; // Usar Armazém
			case 2: .@kafraoption = 6; break; // Cancelar
		}
	}
	if (.@kaframenu == 5) {
		switch(select("Usar Armazém","Alugar Carrinho","Outros Serviços","Cancelar")) {
			case 1: .@kafraoption = 2; break; // Usar Armazém
			case 2: .@kafraoption = 4; break; // Alugar Carrinho
			case 3: .@kafraoption = 5; break; // Outros Serviços
			case 4: .@kafraoption = 6; break; // Cancelar
		}
	}
	switch(.@kafraoption) {
		case 1: // Salvar ponto de retorno
		mes "[Funcionária Kafra]";
		mes "Seu ponto de retorno foi salvo.";
		mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
		if (strnpcinfo(NPC_NAME_UNIQUE) == "prtkaf1") {savepoint (strnpcinfo(NPC_MAP),116,73);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "prtkaf3") {savepoint (strnpcinfo(NPC_MAP),150,33);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "prtkaf4") {savepoint (strnpcinfo(NPC_MAP),281,203);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "prtkaf5") {savepoint (strnpcinfo(NPC_MAP),150,33);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "prtkaf6") {savepoint (strnpcinfo(NPC_MAP),150,33);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "mockaf1") {savepoint (strnpcinfo(NPC_MAP),157,272);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "mockaf2") {savepoint (strnpcinfo(NPC_MAP),156,46);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "mockaf3") {savepoint (strnpcinfo(NPC_MAP),41,141);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "gefkaf1") {savepoint (strnpcinfo(NPC_MAP),119,40);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "gefkaf2") {savepoint (strnpcinfo(NPC_MAP),200,124);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "paykaf1") {savepoint (strnpcinfo(NPC_MAP),257,242);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "paykaf2") {savepoint (strnpcinfo(NPC_MAP),160,58);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "paykaf3") {savepoint (strnpcinfo(NPC_MAP),49,144);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "albkaf1") {savepoint (strnpcinfo(NPC_MAP),31,231);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "albkaf2") {savepoint (strnpcinfo(NPC_MAP),117,57);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "izlkaf1") {savepoint (strnpcinfo(NPC_MAP),129,97);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "aldkaf1") {savepoint (strnpcinfo(NPC_MAP),96,179);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "aldkaf2") {savepoint (strnpcinfo(NPC_MAP),143,109);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "comkaf1") {savepoint (strnpcinfo(NPC_MAP),204,143);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "yunkaf1") {savepoint (strnpcinfo(NPC_MAP),158,125);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "yunkaf2") {savepoint (strnpcinfo(NPC_MAP),328,101);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "yunkaf3") {savepoint (strnpcinfo(NPC_MAP),274,229);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "amakaf")  {savepoint (strnpcinfo(NPC_MAP),116,94);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "gonkaf")  {savepoint (strnpcinfo(NPC_MAP),160,62);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "ayokaf")  {savepoint (strnpcinfo(NPC_MAP),149,69);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "loukaf")  {savepoint (strnpcinfo(NPC_MAP),217,92);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "lhzkaf1") {savepoint (strnpcinfo(NPC_MAP),158,94);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "lhzkaf2") {savepoint (strnpcinfo(NPC_MAP),194,313);}
		if (strnpcinfo(NPC_NAME_UNIQUE) == "moskaf")  {savepoint (strnpcinfo(NPC_MAP),221,194);}
		close2; cutin ("",255); end;
		case 2: // Usar Armazém
		if ((Zeny < 40) && (!countitem(Cargo_Free_Ticket))) {
			mes "[Funcionária Kafra]";
			mes "Me desculpe mas você deve possuir pelo menos 40 Zenys.";
			mes "Para pagar a taxa de uso do Armazém.";
			close2; cutin ("",255); end;
		}
		else if (#kafra_code) {
			mes "[Funcionária Kafra]";
			mes "Digite a senha do seu armazém";
			input (.@storagecode);
			next;
			if (.@storagecode != #kafra_code) {
				mes "[Funcionária Kafra]";
				mes "Você não digitou a senha corretamente.";
				close2; cutin ("",255); end;
			}
			else {
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
				if (countitem(Cargo_Free_Ticket)) {
					delitem (Cargo_Free_Ticket,1);
				}
				else {
					Zeny -= 40;
				}
				if (RESRVPTS < 100000) { RESRVPTS += 5; }
				close2;
				openstorage;
				cutin ("",255); end;
			}
		}
		else {
			mes "[Funcionária Kafra]";
			mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
			if (countitem(Cargo_Free_Ticket)) {
				delitem (Cargo_Free_Ticket,1);
			}
			else {
				Zeny -= 40;
			}
			if (RESRVPTS < 100000) { RESRVPTS += 5; }
			close2;
			openstorage;
			cutin ("",255); end;
		}
		case 3: // Serviço de Teletransporte
		mes "[Funcionária Kafra]";
		mes "Por favor selecione a localidade para levar-l"+(Sex?"o":"a")+".";
		next;
		if (strnpcinfo(NPC_MAP) == "prontera") {
			switch(select("Izlude 600 Zenys","Geffen 1.200 Zenys","Payon 1.200 Zenys","Morroc 1.200 Zenys","Calabouço dos Orcs 1.200 Zenys","Alberta 1.800 Zenys","Cancelar")) {
				case 1: .@price = 600;  .@map$ = "izlude";     .@cordX = 128; .@cordY = 98;  break;
				case 2: .@price = 1200; .@map$ = "geffen";     .@cordX = 120; .@cordY = 39;  break;
				case 3: .@price = 1200; .@map$ = "payon";      .@cordX = 161; .@cordY = 58;  break;
				case 4: .@price = 1200; .@map$ = "morocc";     .@cordX = 156; .@cordY = 46;  break;
				case 5: .@price = 1200; .@map$ = "gef_fild10"; .@cordX = 52;  .@cordY = 326; break;
				case 6: .@price = 1800; .@map$ = "alberta";    .@cordX = 117; .@cordY = 56;  break;
				case 7:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "morocc") {
			switch(select("Prontera 1.200 Zenys","Payon 1.200 Zenys","Alberta 1.800 Zenys","Comodo 1.800 Zenys","Cancelar")) {
				case 1: .@price = 1200; .@map$ = "prontera"; .@cordX = 116; .@cordY = 72;  break;
				case 2: .@price = 1200; .@map$ = "payon";    .@cordX = 161; .@cordY = 58;  break;
				case 3: .@price = 1800; .@map$ = "alberta";  .@cordX = 117; .@cordY = 56;  break;
				case 4: .@price = 1800; .@map$ = "comodo";   .@cordX = 209; .@cordY = 143; break;
				case 5:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "geffen") {
			switch(select("Prontera 1.200 Zenys","Al De Baran 1.200 Zenys","Calabouço dos Orcs 1.200 Zenys","Monte Mjolnir 1.700 Zenys","Cancelar")) {
				case 1: .@price = 1200; .@map$ = "prontera";   .@cordX = 116; .@cordY = 72;  break;
				case 2: .@price = 1200; .@map$ = "aldebaran";  .@cordX = 168; .@cordY = 112; break;
				case 3: .@price = 1200; .@map$ = "gef_fild10"; .@cordX = 52;  .@cordY = 326; break;
				case 4: .@price = 1700; .@map$ = "mjolnir_02"; .@cordX = 99;  .@cordY = 351; break;
				case 5:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "payon") {
			switch(select("Prontera 1.200 Zenys","Alberta 1.200 Zenys","Morroc 1.200 Zenys","Cancelar")) {
				case 1: .@price = 1200; .@map$ = "prontera"; .@cordX = 116; .@cordY = 72; break;
				case 2: .@price = 1200; .@map$ = "alberta";  .@cordX = 117; .@cordY = 56; break;
				case 3: .@price = 1200; .@map$ = "morocc";   .@cordX = 156; .@cordY = 46; break;
				case 4:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "alberta") {
			switch(select("Payon 1.200 Zenys","Morroc 1.800 Zenys","Prontera 1.800 Zenys","Cancelar")) {
				case 1: .@price = 1200; .@map$ = "payon";    .@cordX = 161; .@cordY = 58; break;
				case 2: .@price = 1200; .@map$ = "morocc";   .@cordX = 156; .@cordY = 46; break;
				case 3: .@price = 1200; .@map$ = "prontera"; .@cordX = 116; .@cordY = 72; break;
				case 4:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "izlude") {
			switch(select("Geffen 1.200 Zenys","Payon 1.200 Zenys","Morroc 1.200 Zenys","Al Debaran 1.800 Zenys","Cancelar")) {
				case 1: .@price = 1200; .@map$ = "geffen";    .@cordX = 120; .@cordY = 39;  break;
				case 2: .@price = 1200; .@map$ = "payon";     .@cordX = 161; .@cordY = 58;  break;
				case 3: .@price = 1200; .@map$ = "morocc";    .@cordX = 156; .@cordY = 46;  break;
				case 4: .@price = 1800; .@map$ = "aldebaran"; .@cordX = 168; .@cordY = 112; break;
				case 5:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "aldebaran") {
			switch(select("Geffen 1.200 Zenys", "Juno 1.200 Zenys" , "Izlude 1.800 Zenys", "Mjolnir 1.700 Zenys","Cancelar")) {
				case 1: .@price = 1200; .@map$ = "geffen";     .@cordX = 120; .@cordY = 39;  break;
				case 2: .@price = 1200; .@map$ = "yuno";       .@cordX = 158; .@cordY = 125; break;
				case 3: .@price = 1800; .@map$ = "izlude";     .@cordX = 128; .@cordY = 98;  break;
				case 4: .@price = 1700; .@map$ = "mjolnir_02"; .@cordX = 99;  .@cordY = 351; break;
				case 5:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "comodo") {
			switch(select("Morroc 1.800 Zenys","Umbala 1.800 Zenys","Cancelar")) {
				case 1: .@price = 1800; .@map$ = "morocc"; .@cordX = 156; .@cordY = 46;  break;
				case 2: .@price = 1800; .@map$ = "umbala"; .@cordX = 100; .@cordY = 154; break;
				case 3:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "yuno") {
			switch(select("Al Debaran 1.200 Zenys","Cancelar")) {
				case 1: .@price = 1200; .@map$ = "aldebaran"; .@cordX = 168; .@cordY = 112; break;
				case 2:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if (strnpcinfo(NPC_MAP) == "umbala") {
			switch(select("Comodo 1.800 Zenys","Cancelar")) {
				case 1: .@price = 1800; .@map$ = "comodo"; .@cordX = 209; .@cordY = 143; break;
				case 2:
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
				close2; cutin ("",255); end;
			}
		}
		if ((Zeny < .@price) && (!countitem(Warp_Free_Ticket))) {
			mes "[Funcionária Kafra]";
			mes "Me desculpe mas você deve possuir pelo menos "+.@price+" Zenys.";
			mes "Para pagar a taxa de uso do Teletransporte.";
			close2; cutin ("",255); end;
		}
		else {
			mes "[Funcionária Kafra]";
			mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
			if (countitem(Warp_Free_Ticket)) {
				delitem (Warp_Free_Ticket,1);
			}
			else {
				Zeny -= .@price;
			}
			if (RESRVPTS < 100000) { RESRVPTS += 5; }
			close2;
			warp (.@map$,.@cordX,.@cordY);
			cutin ("",255); end;
		}
		case 4: // Alugar Carrinho
		if (BaseClass != Job_Merchant) {
			mes "[Funcionária Kafra]";
			mes "O serviço de Aluguel de Carrinhos só está disponível para mercadores e evoluções.";
			close2; cutin ("",255); end;
		}
		else if (getskilllv(MC_PUSHCART) == 0) {
			mes "[Funcionária Kafra]";
			mes "Desculpe, mas para alugar um carrinho, você primeiro deve aprender a habilidade ^777777Usar Carrinho^000000.";
			close2; cutin ("",255); end;
		}
		else if (checkcart() == 1) {
			mes "[Funcionária Kafra]";
			mes "Vejo que você já possui um carrinho.";
			mes "Assim não pode ter outro, o serviço somente está disponível em um carrinho para cada cliente.";
			close2; cutin ("",255); end;
		}
		else {
			if ((Zeny < 1200) && (!countitem(Cart_Free_Ticket))) {
				mes "[Funcionária Kafra]";
				mes "Me desculpe mas você deve possuir pelo menos 1.200 Zenys.";
				mes "Para pagar alugar um carrinho.";
				close2; cutin ("",255); end;
			}
			else {
				if (countitem(Cart_Free_Ticket)) {
					delitem (Cart_Free_Ticket,1);
				}
				else {
					Zeny -= 1200;
				}
				mes "[Funcionária Kafra]";
				mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
				if (RESRVPTS < 100000) { RESRVPTS += 5; }
				close2;
				setcart;
				cutin ("",255); end;
			}
		}
		case 5: // Outros Serviços
		mes "[Funcionária Kafra]";
		mes "Por favor selecione a opção que deseja.";
		next;
		switch(select("Ver Pontos de Reserva","Senha do Armazém","Cancelar")) {
			case 1: // Ver Pontos de Reserva
			mes "[Funcionária Kafra]";
			if (!RESRVPTS) {
				mes "Atualmente você não possui nenhum ponto de reserva.";
			}
			else {
				mes "Seu saldo de pontos de reserva é de: \"^0000bb"+RESRVPTS+"^000000\".";
			}
			mes "Os pontos de reserva podem ser usados para participar da loteria da Corporação Kafra.";
			next;
			mes "[Funcionária Kafra]";
			mes "Indo a sede da Corporação localizada na cidade Al Debaran.";
			mes "Você poderá participar do mini jogo e concorrer a itens.";
			mes "Toda vez que usa os serviços Kafra você aumenta seu saldo de pontos.";
			close2; cutin ("",255); end;
			case 2: // Senha do Armazém
			mes "[Funcionária Kafra]";
			if (#kafra_code) {
				mes "O que deseja fazer com sua senha do armazém?";
				next;
				switch(select("Modificar > 5.000 Zenys","Remover > 1000 Zenys")) {
					case 1:
					mes "[Funcionária Kafra]";
					if (Zeny < 5000) {
						mes "Me desculpe mas você deve possuir pelo menos 5.000 Zenys.";
						mes "Para poder modificar sua senha do armazém.";
						close2; cutin ("",255); end;
					}
					mes "Por favor digite sua senha atual para verificação.";
					input (.@storagecode);
					next;
					if (.@storagecode != #kafra_code) {
						mes "[Funcionária Kafra]";
						mes "Você não digitou a senha corretamente.";
						close2; cutin ("",255); end;
					}
					else {
						mes "[Funcionária Kafra]";
						mes "Certo agora podemos prosseguir.";
						mes "Por favor digite sua nova senha.";
						mes "Sua senha deve ser maior que ^0000bb1000^000000 e menor que ^7777779999^000000.";
						input (.@newstoragecode);
						next;
						if (.@newstoragecode == #kafra_code) {
							mes "[Funcionária Kafra]";
							mes "Você deve digitar uma senha diferente.";
							close2; cutin ("",255); end;
						}
						else if ((.@newstoragecode < 1000) || (.@newstoragecode > 9999)) {
							mes "[Funcionária Kafra]";
							mes "A senha digitada é inválida!";
							close2; cutin ("",255); end;
						}
						else {
							mes "[Funcionária Kafra]";
							mes "Sua senha foi modificada.";
							mes "Use-a na próxima vez que for usar o armazém.";
							Zeny -= 5000;
							#kafra_code = .@newstoragecode;
							next;
							mes "[Funcionária Kafra]";
							mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
							if (RESRVPTS < 100000) { RESRVPTS += 5; }
							close2; cutin ("",255); end;
						}
					}
					case 2: // Remover a senha
					mes "[Funcionária Kafra]";
					if (Zeny < 1000) {
						mes "Me desculpe mas você deve possuir pelo menos 1.000 Zenys.";
						mes "Para poder remover sua senha do armazém.";
						close2; cutin ("",255); end;
					}
					mes "Por favor digite sua senha atual para verificação.";
					input (.@storagecode);
					next;
					if (.@storagecode != #kafra_code) {
						mes "[Funcionária Kafra]";
						mes "Você não digitou a senha corretamente.";
						close2; cutin ("",255); end;
					}
					else {
						mes "[Funcionária Kafra]";
						mes "Você quer realmenter remover sua senha?!";
						mes "Não se preocupe, a qualquer momento poderá solicitar outra.";
						next;
						if (select("Sim remover a senha","Manter minha senha") == 1) {
							mes "[Funcionária Kafra]";
							mes "Sua senha do armazém foi removida.";
							Zeny -= 1000;
							#kafra_code = 0;
							next;
							mes "[Funcionária Kafra]";
							mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
							if (RESRVPTS < 100000) { RESRVPTS += 5; }
							close2; cutin ("",255); end;
						}
						mes "[Funcionária Kafra]";
						mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
						close2; cutin ("",255); end;
					}
				}
			}
			else {
				mes "No momento seu armazém não possui senha.";
				mes "Deseja adicionar a senha?";
				next;
				switch(select("Adicionar Senha > 1.000 Zenys","Cancelar")) {
					case 1:
					while (1) {
						mes "[Funcionária Kafra]";
						mes "Por favor digite a senha para seu armazém.";
						mes "Ela deve ser maior que ^0000bb1000^000000 e menor que ^7777779999^000000.";
						input (.@storagecode);
						next;
						if ((.@storagecode < 1000) || (.@storagecode > 9999)) {
							mes "[Funcionária Kafra]";
							mes "A senha digitada é inválida!";
							close2; cutin ("",255); end;
						}
						else {
							mes "[Funcionária Kafra]";
							mes "Você tem certeza que deseja adicionar a senha ao seu armazém?";
							mes "Poderá remover-la ou modificar-la quando quiser.";
							mes "Mas será necessário digitar a senha que adicionou para confirmação.";
							next;
							switch(select("Adicionar Senha","Mais Informações","Digitar a senha novamente","Cancelar")) {
								case 1:
								Zeny -= 1000;
								#kafra_code = .@storagecode;
								next;
								mes "[Funcionária Kafra]";
								mes "A Corporação Kafra agradece por você utilizar nossos serviços.";
								if (RESRVPTS < 100000) { RESRVPTS += 5; }
								close2; cutin ("",255); end;
								case 2:
								mes "^bb0000O serviço de proteção do armazém com senha visa impedir que invasores.";
								mes "Tenham acesso aos itens em seu armazém.";
								mes "Por isso ao tentar acessar o armazém, modificar a senha ou remover-la.";
								mes "Será necessário digitar a senha atual antes.^000000";
								next;
								mes "Caso esqueça de sua senha poderá recuperar-la pelo painel de controle do servidor.";
								mes "Inserindo os dados pessoais de sua conta.";
								next;
								if (select("Voltar a digitar a senha","Cancelar") == 2) {
									mes "[Funcionária Kafra]";
									mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
									close2; cutin ("",255); end;
								}
								break;
								case 3:
								break;
								case 4:
								mes "[Funcionária Kafra]";
								mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
								close2; cutin ("",255); end;
							}
						}
					}
					case 2:
					mes "[Funcionária Kafra]";
					mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
					close2; cutin ("",255); end;
				}
			}
			case 3: // Cancelar
			mes "[Funcionária Kafra]";
			mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
			close2; cutin ("",255); end;
		}
		case 6: // Cancelar
		mes "[Funcionária Kafra]";
		mes "A Corporação Kafra estará sempre ao seu dispor para servir-l"+(Sex?"o":"a")+".";
		close2; cutin ("",255); end;
	}
}

// ------------------------------------------------------------------
// - [ Duplificações ] -
// ------------------------------------------------------------------
prontera,146,89,6	duplicate(KafraCorp)	Funcionária Kafra#kafra_01::prtkaf1	4_F_KAFRA1
prontera,151,29,0	duplicate(KafraCorp)	Funcionária Kafra#kafra_03::prtkaf3	4_F_KAFRA3
prontera,282,200,2	duplicate(KafraCorp)	Funcionária Kafra#kafra_04::prtkaf4	4_F_KAFRA4
prontera,29,207,6	duplicate(KafraCorp)	Funcionária Kafra#kafra_05::prtkaf5	4_F_KAFRA5
prontera,152,326,3	duplicate(KafraCorp)	Funcionária Kafra#kafra_06::prtkaf6	4_F_KAFRA6
prt_fild05,290,224,3	duplicate(KafraCorp)	Funcionária Kafra#kafra_04::kafra_07	4_F_KAFRA4

// ------------------------------------------------------------------
morocc,160,258,4	duplicate(KafraCorp)	Kafra#kafra_04::mockaf1	4_F_KAFRA4
morocc,156,97,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_05::mockaf2	4_F_KAFRA5
moc_ruins,59,157,5	duplicate(KafraCorp)	Funcionária Kafra#kafra_04::mockaf3	4_F_KAFRA4

// ------------------------------------------------------------------
geffen,120,62,0	duplicate(KafraCorp)	Funcionária Kafra#kafra_03::gefkaf1	4_F_KAFRA3
geffen,203,123,2	duplicate(KafraCorp)	Funcionária Kafra#kafra_04::gefkaf2	4_F_KAFRA4
gef_fild10,73,340,5	duplicate(KafraCorp)	Funcionária Kafra#kafra_02::gefkaf3	4_F_KAFRA2

// ------------------------------------------------------------------
payon,175,226,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_02::paykaf1	4_F_KAFRA2
payon,181,104,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_05::paykaf2	4_F_KAFRA5
pay_arche,55,123,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_03::paykaf3	4_F_KAFRA3

// ------------------------------------------------------------------
alberta,28,229,0	duplicate(KafraCorp)	Funcionária Kafra#kafra_02::albkaf1	4_F_KAFRA2
alberta,113,60,6	duplicate(KafraCorp)	Funcionária Kafra#kafra_06::albkaf2	4_F_KAFRA6
alb2trea,59,69,5	duplicate(KafraCorp)	Funcionária Kafra#kafra_01::albkaf3	4_F_KAFRA1

// ------------------------------------------------------------------
izlude,134,87,3	duplicate(KafraCorp)	Funcionária Kafra#kafra_01::izlkaf1	4_F_KAFRA1
izlu2dun,106,58,0	duplicate(KafraCorp)	Funcionária Kafra#kafra_03::izlkaf2	4_F_KAFRA3

// ------------------------------------------------------------------
aldeba_in,96,181,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_05::aldkaf1	4_F_KAFRA5
aldebaran,143,119,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_05::aldkaf2	4_F_KAFRA5

// ------------------------------------------------------------------
comodo,195,150,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_07::comkaf1	4_F_KAFRA7
cmd_fild07,136,134,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_07::comkaf2	4_F_KAFRA7

// ------------------------------------------------------------------
yuno,152,187,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_08::yunkaf1	4_F_KAFRA8
yuno,327,108,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_08::yunkaf2	4_F_KAFRA8
yuno,277,221,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_09::yunkaf3	4_F_KAFRA9

// ------------------------------------------------------------------
amatsu,102,149,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_02::amakaf	4_F_KAFRA2

// ------------------------------------------------------------------
gonryun,159,122,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_02::gonkaf	4_F_KAFRA2

// ------------------------------------------------------------------
ayothaya,212,169,5	duplicate(KafraCorp)	Funcionária Kafra#kafra_02::ayokaf	4_F_KAFRA2

// ------------------------------------------------------------------
umbala,87,160,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_07::umbkaf	4_F_KAFRA7

// ------------------------------------------------------------------
// NOTA: IMAGEM kafra_nif.bmp é custom
niflheim,202,180,3	duplicate(KafraCorp)	Funcionária Kafra#kafra_nif::nifkaf	4_F_NFDEADKAFRA

// ------------------------------------------------------------------
louyang,210,104,5	duplicate(KafraCorp)	Funcionária Kafra#kafra_01::loukaf	4_F_KAFRA1

// ------------------------------------------------------------------
einbroch,242,205,5	duplicate(KafraCorp)	Funcionária Kafra#kafra_08::einkaf1	4_F_KAFRA8
einbroch,59,203,6	duplicate(KafraCorp)	Funcionária Kafra#kafra_09::einkaf2	4_F_KAFRA9

// ------------------------------------------------------------------
einbech,181,132,5	duplicate(KafraCorp)	Funcionária Kafra#kafra_08::einkaf3	4_F_KAFRA8

// ------------------------------------------------------------------
lighthalzen,164,100,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_08::lhzkaf1	4_F_KAFRA8
lighthalzen,191,320,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_09::lhzkaf2	4_F_KAFRA9
lhz_in02,237,284,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_09::lhzkaf3	4_F_KAFRA9

// ------------------------------------------------------------------
moscovia,223,191,3	duplicate(KafraCorp)	Funcionária Kafra#kafra_04::moskaf	4_F_KAFRA4

// ------------------------------------------------------------------
mjolnir_02,83,362,4	duplicate(KafraCorp)	Funcionária Kafra#kafra_02::mjokaf	4_F_KAFRA2