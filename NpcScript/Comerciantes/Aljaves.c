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
| - Criação: Spell Master 15/03/2017                                |
| - Nota: Troca Flechas e Zenys por Aljaves de Flechas              |
| - Observações: Mantidos diálagos e var iguais aos dos scripts     |
|                padrões usados em outros emuladores.               |
\*-----------------------------------------------------------------*/

payon_in01,5,134,5	script	Inventor Jaax#Quiver	4_M_ORIENT02,{
	mes "[Inventor Jaxx]";
	mes "Meu nome é Jaxx.";
	mes "Sem dúvidas, posso dizer que sou o ^663300maior inventor dos últimos tempos^000000.";
	next;
	mes "[Inventor Jaxx]";
	mes "Atualmente, eu tenho criado algo verdadeiramente extraordinário.";
	mes "Eu os chamo de... ^663300Aljaves Mágicos^000000!!";
	mes "Isto será lembrado na história por uma Revolução das Flechas!";
	emotion e_no1;
	next;
	mes "[Inventor Jaax]";
	mes "Eu estudei magia e aljaves durante anos, trabalhando noite e dia até que finalmente descobri como condensar flechas com magia!";
	mes "Com Aljaves Mágicos, você estará transportando mais flechas, mas com menos peso!";
	next;
	mes "[Inventor Jaax]";
	mes "Você gostaria de tentar usar um dos meu Aljaves Mágicos?";
	mes "Não tenho dúvidas que alguém como você pode apreciar minha geniosidade!";
	next;
	switch(select("Aljave de Flechas","Aljave de Flechas de Ferro","Aljave de Flechas de Aço","Aljave de Flechas de Oridecon","Aljave de Flechas de Fogo","Aljave de Flechas de Prata","Aljave de Flechas de Vento","Aljave de Flechas de Pedra","Aljave de Flechas de Cristal","Aljave de Flechas Sombrias","Aljave de Flechas Incorpóreas","Aljave de Flechas Enferrujadas","Nenhuma")) {
		case 1:  .@arrowItem = 1750; .@quiverItem = 12004; break;
		case 2:  .@arrowItem = 1770; .@quiverItem = 12005; break;
		case 3:  .@arrowItem = 1753; .@quiverItem = 12006; break;
		case 4:  .@arrowItem = 1765; .@quiverItem = 12007; break;
		case 5:  .@arrowItem = 1752; .@quiverItem = 12008; break;
		case 6:  .@arrowItem = 1751; .@quiverItem = 12009; break;
		case 7:  .@arrowItem = 1755; .@quiverItem = 12010; break;
		case 8:  .@arrowItem = 1756; .@quiverItem = 12011; break;
		case 9:  .@arrowItem = 1754; .@quiverItem = 12012; break;
		case 10: .@arrowItem = 1767; .@quiverItem = 12013; break;
		case 11: .@arrowItem = 1757; .@quiverItem = 12014; break;
		case 12: .@arrowItem = 1762; .@quiverItem = 12015; break;
		case 13:
		mes "[Inventor Jaax]";
		mes "O que...?";
		mes "Você não viu que essa invenção pode mudar para sempre a forma que as Flechas são carregadas?!";
		mes "O Futuro é agora!";
		close;
	}
	if (countitem(.@arrowItem) >= 500) {
		mes "[Inventor Jaax]";
		mes "Excelente!";
		mes "As flechas estão com você?";
		mes "Irei lhe providenciar um Aljave que pode carregar 500 de suas "+getitemname(.@arrowItem)+" por apenas^FF3131 500 Zeny^000000.";
		next;
		switch(select("Trocar quantas Aljaves possíveis","1 Aljave:Cancelar")) {
			case 1:
			.@arrows = countitem(.@arrowItem);
			.@quiver = .@arrows / 500;
			.@arrows_used = .@quiver * 500;
			.@arrow_zeny01 = .@quiver * 500;
			mes "Número de Flechas: ^3131FF"+.@arrows+"^000000.";
			mes "Número máximo que pode ser comprado de Aljaves: ^3131FF"+.@quiver+"^000000.";
			mes "Zeny requerido: ^3131FF"+.@arrow_zeny01+" Zeny^000000.";
			next;
			mes "[Inventor Jaax]";
			mes "Você gostaria de comprar quantos Aljaves possíveis para as Flechas que você está carregando?";
			next;
			if (select("Sim","Não") == 1) {
				if (.@arrow_zeny01 < Zeny) {
					mes "[Inventor Jaax]";
					mes "Aqui estão!";
					mes "Apenas relembrando, ^FF0000você não poderá utilizar os Aljaves caso seu peso seja maior que 90% do peso máximo^000000.";
					Zeny -= .@arrow_zeny01;
					delitem .@arrowItem,.@arrows_used;
					getitem .@quiverItem,.@quiver;
					next;
					mes "[Inventor Jaax]";
					mes "Então...";
					mes "Apenas tenha controle da quantidade que você carrega por vez e tudo ficará bem.";
					close;
				}
				else {
					mes "[Inventor Jaax]";
					mes "Me desculpe, mas você não tem Zeny o suficiente.";
					mes "Eu não posso dá-las por nada depois de anos de trabalho para criar essa tecnologia revolucionária!";
					close;
				}
			}
			mes "[Inventor Jaax]";
			mes "Você mudou de idéia?";
			mes "Logo agora que a glória de possuir um Aljave estava tão perto?";
			close;
			case 2:
			if (Zeny > 500) {
				mes "[Inventor Jaax]";
				mes "Aqui está!";
				mes "Apenas relembrando, ^FF0000você não poderá utilizar os Aljaves caso seu peso seja maior que 90% do peso máximo^000000.";
				Zeny -= 500;
				delitem .@arrowItem,500;
				getitem .@quiverItem,1;
				next;
				mes "[Inventor Jaax]";
				mes "Então...";
				mes "Apenas tenha controle da quantidade que você carrega por vez e tudo ficará bem.";
				close;
			}
			else {
				mes "[Inventor Jaax]";
				mes "Você não possui 500 Zeny?";
				mes "Me desculpe. Eu não tinha idéia que você era tão...";
				mes "^333333Desprovido^000000.";
				close;
			}
			case 3:
			mes "[Inventor Jaax]";
			mes "O que...?";
			mes "Você não viu que essa invenção pode mudar para sempre a forma que as Flechas são carregadas?!";
			mes "O Futuro é agora!";
			close;
		}
	}
	else {
		mes "[Inventor Jaax]";
		mes "Você pode carregar no máximo 500 Flechas dentro deste Aljave. Isso foi feito usando meu método secreto,";
		mes "para que o peso total de Flechas e Aljaves juntos é menor do que se carregasse apenas Flechas.";
		next;
		mes "[Inventor Jaax]";
		mes "Isso é um Milagre da Ciência! Você mesmo pode experimentar se você me trazer no mínimo 500 Flechas e 500 Zeny para cada Aljave.";
		close;
	}
}