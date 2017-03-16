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
| - Nota: Venda de Materiais de Forja para Ferreiros.               |
\*-----------------------------------------------------------------*/

-	script	BlacksmithSupplier	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME)+"]";
	mes "Seja bem-vind"+(Sex?"o":"a")+" à minha loja.";
	mes "Você pode achar tudo relacionado a forja aqui.";
	mes "O que traz você até mim?";
	next;
	switch(select("Comprar uma bigorna","Comprar itens de forja","Comprar metais","Purificar minérios","Cancelar")) {
		case 1:
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Uma boa bigorna aumenta muito as suas chances de se fazer uma boa arma, você sabe né?";
		mes "Mas irá custar mais zeny.";
		mes "Escolha a que melhor se encaixa em suas finalidade.";
		next;
		switch(select("Bigorna - 30,000 zeny","Bigorna de Oridecon - 120,000 zeny","Bigorna de Ouro - 300,000 zeny","Uma bigorna melhor que as outras.","Cancelar.")) {
			case 1:
			if (Zeny < 30000) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Eu não posso vende-la pra você se você não tem o dinheiro.";
				close;
			}
			else if (checkweight(Anvil,1) == 0) {
				mes "[Paul Spanner]";
				mes "Você está levando muito peso e não vai poder carrega-la.";
				close;
			}
			else {
				getitem Anvil,1;
				Zeny -= 30000;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Este é um dos mais baratos, mas suficiente para forjar vários itens.";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para voltar a qualquer hora, sempre que precisar.";
				close;
			}
			case 2:
			if (Zeny < 120000) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Eu não posso vende-la pra você se você não tem o dinheiro.";
				close;
			}
			else if (checkweight(Oridecon_Anvil,1) == 0) {
				mes "[Paul Spanner]";
				mes "Você está levando muito peso e não vai poder carrega-la.";
				close;
			}
			else {
				getitem Oridecon_Anvil,1;
				Zeny -= 120000;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Humm, muitos compram essa bigorna.";
				mes "Essa é uma bigorna própria para forjadores, não é?";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para voltar a qualquer hora, sempre que precisar.";
				close;
			}
			case 3:
			if (Zeny < 300000) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Eu não posso vende-la pra você se você não tem o dinheiro.";
				close;
			}
			else if (checkweight(Golden_Anvil,1) == 0) {
				mes "[Paul Spanner]";
				mes "Você está levando muito peso e não vai poder carrega-la.";
				close;
			}
			else {
				getitem Golden_Anvil,1;
				Zeny -= 300000;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Essa é a melhor bigorna que eu vendo na minha oficina!";
				mes "Com ela, você irá dominar o mundo da forja!";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para voltar a qualquer hora, sempre que precisar.";
				close;
			}
			case 4:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Bem, sinto muito.";
			mes "Mas eu não tenha nada melhor que a Bigorna de Ouro.";
			next;
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Eu acho, que o lendário criador de bigornas tem uma.";
			mes "Mas, eu não acho que você possa achá-lo, embora ele esteja em algum lugar do mundo.";
			close;
			case 5:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "OK, sinta-se a vontade para voltar quando quiser, quando precisar.";
			mes "Até mais.";
			close;
		}
		case 2:
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Um forjador respeitável deve usar ótimas ferramentas.";
		mes "Você pode comprá-las aqui.";
		mes "Escolha qual quer.";
		next;
		switch(select("Mini-Fornalha - 150 zeny","Martelo de Ferro - 1000 zeny","Martelo de Ouro - 3000 zeny","Martelo de Oridecon - 5000 zeny","Cancelar.")) {
			case 1:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "É uma ferramenta muito útil para se refinar metais!";
			mes "Mas, quantas você irá comprar?";
			mes "Se você quiser desistir, basta colocar o número 0.";
			next;
			while(1) {
				input .@input;
				if (.@input == 0) {
					mes "["+strnpcinfo(NPC_NAME)+"]";
					mes "Bem, a negociação foi cancelada.";
					mes "Até mais.";
					close;
				}
				else if ((.@input < 0) || (.@input > 500)) {
					mes "["+strnpcinfo(NPC_NAME)+"]";
					mes "Você pode comprar 500, ou menos.";
					next;
				}
				else {
					break;
				}
			}
			.@sell = .@input * 150;
			if (Zeny < .@sell) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você não possui zenys o suficiente.";
				close;
			}
			else if (checkweight(Portable_Furnace,.@input) == 0) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Me parece que você não tem espaço suficiente no seu inventário.";
				mes "Porque você não coloca seus itens no armazém da Kafra?";
				close;
			}
			else {
				getitem Portable_Furnace,.@input;
				Zeny -= .@sell;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para vir aqui, sempre que precisar.";
				close;
			}
			case 2:
			if (Zeny < 1000) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você não possui zenys o suficiente.";
				close;
			}
			else if (checkweight(Iron_Hammer,1) == 0) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você está levando muito peso e não vai poder carrega-lo.";
				close;
			}
			else {
				getitem Iron_Hammer,1;
				Zeny -= 1000;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para vir aqui, sempre que precisar.";
				close;
			}
			case 3:
			if (Zeny < 3000) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você não possui zenys o suficiente.";
				close;
			}
			else if (checkweight(Golden_Hammer,1) == 0) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você está levando muito peso e não vai poder carrega-lo.";
				close;
			}
			else {
				getitem Golden_Hammer,1;
				Zeny -= 3000;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para vir aqui, sempre que precisar.";
				close;
			}
			case 4:
			if (Zeny < 5000) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você não possui zenys o suficiente.";
				close;
			}
			else if (checkweight(Oridecon_Hammer,1) == 0) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você está levando muito peso e não vai poder carrega-lo.";
				close;
			}
			else {
				getitem Oridecon_Hammer,1;
				Zeny -= 5000;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para vir aqui, sempre que precisar.";
				close;
			}
			case 5:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Volte aqui quando quiser, sempre que precisar.";
			mes "Até mais.";
			close;
		}
		case 3:
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Eu preparo muitos metais, e todos com grande qualidade.";
		mes "Mas então, qual deles você precisa?";
		next;
		switch(select("Fracon - 200z.","Emveretarcon - 1000z.","Cancelar.")) {
			case 1:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Bem, quantos você deseja comprar?";
			mes "Se você quiser cancelar a negociação, basta colocar o número 0.";
			next;
			while(1) {
				input .@input;
				if (.@input == 0) {
					mes "["+strnpcinfo(NPC_NAME)+"]";
					mes "A negociação foi cancelada.";
					mes "Até mais.";
					close;
				}
				else if ((.@input < 0) || (.@input > 500)) {
					mes "["+strnpcinfo(NPC_NAME)+"]";
					mes "Você só pode comprar 500, ou menos.";
					next;
				}
				else {
					break;
				}
			}
			.@sell = .@input * 200;
			if (Zeny < .@sell) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você não tem o dinheiro.";
				mes "Você sabe que eu não posso vender por um baixo preço...";
				mes "Minha esposa reclama muito sobre a falta de Zeny.";
				close;
			}
			else if (checkweight(Phracon,.@input) == 0) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Me parece que você não tem espaço suficiente no seu inventário.";
				mes "Porque você não coloca seus itens no armazém da Kafra?";
				close;
			}
			else {
				getitem Phracon,.@input;
				Zeny -= .@sell;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para vir aqui, sempre que precisar.";
				close;
			}
			case 2:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Bem, quantos você deseja comprar?";
			mes "Se você quiser cancelar a negociação, basta colocar o número 0.";
			next;
			while(1) {
				input .@input;
				if (.@input == 0) {
					mes "["+strnpcinfo(NPC_NAME)+"]";
					mes "A negociação foi cancelada.";
					mes "Até mais.";
					close;
				}
				else if ((.@input < 0) || (.@input > 500)) {
					mes "["+strnpcinfo(NPC_NAME)+"]";
					mes "Você só pode comprar 500, ou menos.";
					next;
				}
				else {
					break;
				}
			}
			.@sell = .@input * 1000;
			if (Zeny < .@sell) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Você não tem o dinheiro.";
				mes "Você sabe que eu não posso vender por um baixo preço...";
				mes "Minha esposa reclama muito sobre a falta de Zeny.";
				close;
			}
			else if (checkweight(Emveretarcon,.@input) == 0) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Meu amigo...";
				mes "Você não tem espaço suficiente no inventário.";
				mes "Porque não guarda algumas coisas no armazém da Kafra primeiro?";
				close;
			}
			else {
				getitem Emveretarcon,.@input;
				Zeny -= .@sell;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Obrigado por comprar na minha oficina.";
				mes "Sinta-se livre para vir aqui, sempre que precisar.";
				close;
			}
			case 3:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Sinta-se livre para voltar, sempre que precisar.";
			mes "Até mais.";
			close;
		}
		case 4:
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Eu posso purificar Oridecons e Eluniuns.";
		mes "Eu crio um metal refinado a partir de 5 metais brutos, seus minérios.";
		mes "Bem... Qual deles você quer fazer?";
		next;
		switch(select("Fazer um Oridecon","Fazer um Elunium","Cancelar.")) {
			case 1:
			if (countitem(Oridecon_Stone) < 5) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Eu lhe disse, eu preciso de 5 Minérios de Oridecon para fazer um Oridecon.";
				close;
			}
			else {
				delitem Oridecon_Stone,5;
				getitem Oridecon,1; 
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Ótimo, aqui está o seu Oridecon.";
				mes "Volte sempre que precisar, espero sua visita.";
				close;
			}
			case 2:
			if (countitem(Elunium_Stone) < 5) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Eu lhe disse, eu preciso de 5 Minérios de Eluniuns para fazer um Elunium.";
				close;
			}
			else {
				delitem Elunium_Stone,5;
				getitem Elunium,1;
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Ótimo, aqui está o seu Elunium.";
				mes "Volte sempre que precisar, espero sua visita.";
				close;
			}
			case 3:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Sinta-se livre para vir aqui, sempre que precisar.";
			mes "Até mais.";
			close;
		}
		case 5:
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Volte sempre, sempre que precisar ou que quiser.";
		mes "Até mais.";
		close;
	}
}

geffen_in,110,172,0	duplicate(BlacksmithSupplier)	Christopher Guillenrow#gef	1_M_SMITH
ein_in01,38,29,0	duplicate(BlacksmithSupplier)	Paul Spanner#ein	1_M_SMITH
