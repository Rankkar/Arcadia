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
| - Por: Spell Master 03/08/2014                                    |
| - Versão Atual: Spell Master 07/04/2017                           |
| - Nota: Venda de Poções para Acistentes.                          |
\*-----------------------------------------------------------------*/

-	script	MercPotion	FAKE_NPC,{
	mes "[Itens para Assistente]";
	mes "Olá, eu vendo mercadorias que os Assistentes podem utilizar.";
	mes "^bb0000E somente útil para acistentes, não sendo possível usa-los em você ou outra pessoa^000000.";
	next;
	mes "[Itens para Assistente]";
	mes "Veja meus produtos e me diga se quer comprar algo.";
	next;
	switch(select("Poção Vermelha","Poção Azul","Poção de Concentração","Poção do Despertar","Poção da Fúria Selvagem","Nada Obrigado") ) {
		case 1: .@item = 12184; .@Zeny = 2500; break;
		case 2: .@item = 12185; .@Zeny = 5000; break;
		case 3: .@item = 12241; .@Zeny = 800;  break;
		case 4: .@item = 12242; .@Zeny = 1500; break;
		case 5: .@item = 12243; .@Zeny = 3000; break;
		case 6:
		mes "[Itens para Assistente]";
		mes "Volte quando quiser algum item excluzivo para acistentes.";
		close;
	}
	mes "[Itens para Assistente]";
	mes "1 "+getitemname(.@item)+" custa "+.@Zeny+" Zenys.";
	next;
	mes "[Itens para Assistente]";
	mes "Me diga quantos você quer?";
	mes "Mas só posso vender no máximo 100 por vez!";
	mes "Caso queira cancelar digite \"0\", entendido?";
	next;
	input(.@quant);
	if (!.@quant) {
		mes "[Itens para Assistente]";
		mes "Você digitou zero!";
		mes "A negociação foi cancelada.";
		close;
	}
	else if (.@quant > 100) {
		mes "[Itens para Assistente]";
		mes "Eu disse que só poderia vender 100 por vez.";
		close;
	}
	else {
		.@ZenyRequire = .@Zeny * .@quant;
		.@weight = getiteminfo(.@item,ITEM_WEIGHT);
		.@total_weight = .@quant * .@weight;
		mes "[Itens para Assistente]";
		mes "Certo você quer comprar "+.@quant+" "+getitemname(.@item)+", não é mesmo?";
		mes "Então serão necessários "+.@ZenyRequire+" Zenys.";
		next;
		mes "[Itens para Assistente]";
		mes "Deseja comprar-los agora?";
		next;
		if (select("Sim","Não. Mudei de idéia") == 1) {
			mes "[Itens para Assistente]";
			if ((MaxWeight - Weight) < .@total_weight) {
				mes "Infelismente parece que você carrega muito peso, e não vai poder levar tudo.";
				mes "Diminua o peso em itens que carrega, depois venha negociar comigo novamente.";
				close;
			}
			else if (Zeny < .@ZenyRequire) {
				mes "Infelismente parece que você não possui a quantidade de Zenys necessária.";
				mes "Quando conseguir mais zenys, venha negociar comigo novamente.";
				close;
			}
			else {
				Zeny -= .@ZenyRequire;
				getitem(.@item,.@quant);
				mes "Estão aqui seus "+getitemname(.@item)+".";
				mes "Lembrando a você que estes itens só funcionam em acistentes.";
				close;
			}
		}
		mes "[Itens para Assistente]";
		mes "Volte quando quiser algum item excluzivo para acistentes.";
		close;
	}
}

prontera,30,337,4	duplicate(MercPotion)	Poções de Acistentes#prt	8_F_GIRL
izlude,55,170,4	duplicate(MercPotion)	Poções de Acistentes#izl	4_F_HUWOMAN
pay_arche,102,167,5	duplicate(MercPotion)	Poções de Acistentes#pay	4_F_CAPEGIRL