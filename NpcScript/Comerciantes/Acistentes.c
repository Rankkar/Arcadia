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
| - Nota: Compra de pergaminhos para acistentes.                    |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	MercenaryRent	FAKE_NPC,{
	mes "[Gerente do Clã]";
	mes "Olá "+strcharinfo(PC_NAME)+".";
	mes "Sou responsavel pela contratação de acistentes de nosso clã.";
	mes "Estaria enterçad"+(Sex?"o":"a")+" em algum?";
	if (strnpcinfo(NPC_MAP) == "prontera") { .@mercenaryType$ = "SPEAR_MERC_GUILD"; .@mercenaryName$ = "Lanceiro"; }
	if (strnpcinfo(NPC_MAP) == "izlude") { .@mercenaryType$ = "SWORD_MERC_GUILD"; .@mercenaryName$ = "Espadachim"; }
	if (strnpcinfo(NPC_MAP) == "pay_arche") { .@mercenaryType$ = "ARCH_MERC_GUILD";  .@mercenaryName$ = "Arqueiro"; }
	next;
	switch(select("Contratar Acistente","Informações","Cancelar")) {
		case 1:
		mes "[Gerente do Clã]";
		mes "Então você quer contratar um ^0000bb"+.@mercenaryName$+"^000000 de nosso clã?";
		mes "Então me diga qual Nível que desejado.";
		next;
		switch(select("Nível 1 (LV-20)","Nível 2 (LV-30)","Nível 3 (LV-40)","Nível 4 (LV-50)","Nível 5 (LV-60)","Nível 6 (LV-70)","Nível 7 (LV-80)","Nível 8 (LV-90)","Nível 9 (LV-95)","Nível 10 (LV-99)","Nenhum, mudei de ideia")) {
			case 1:  .@level = 1;  .@minLevel = 15; .@loyalty = 0;   break;
			case 2:  .@level = 2;  .@minLevel = 25; .@loyalty = 0;   break;
			case 3:  .@level = 3;  .@minLevel = 35; .@loyalty = 0;   break;
			case 4:  .@level = 4;  .@minLevel = 45; .@loyalty = 0;   break;
			case 5:  .@level = 5;  .@minLevel = 55; .@loyalty = 0;   break;
			case 6:  .@level = 6;  .@minLevel = 65; .@loyalty = 0;   break;
			case 7:  .@level = 7;  .@minLevel = 70; .@loyalty = 50;  break;
			case 8:  .@level = 8;  .@minLevel = 75; .@loyalty = 100; break;
			case 9:  .@level = 9;  .@minLevel = 85; .@loyalty = 300; break;
			case 10: .@level = 10; .@minLevel = 95; .@loyalty = 500; break;
			case 11:
			mes "[Gerente do Clã]";
			mes "Tudo bem, se sentir necessidade de nossa ajuda.";
			mes "Volte a me procurar";
			close;
		}
		break;
		case 2:
		mes "[Gerente do Clã]";
		mes "Eu sou um gerente responsável pela contratação de acistentes de nosso clã.";
		mes "Você pode encontrar outros como em alguns lugares, e cada um responsável pela contrato de acistentes expecíficos.";
		next;
		mes "[Gerente do Clã]";
		mes "Prontera: ^777777Acistentes Lanceiros^000000.";
		mes "Izlude: ^777777Acistentes Espadachins^000000.";
		mes "Vila dos Arqueiros: ^777777Acistentes Arqueiros^000000.";
		next;
		mes "[Gerente do Clã]";
		mes "Assistentes são soldados que lutarão a seu lado no campo de batalham,";
		mes "Mas existem alguns termos e condições que você deve cumprir para contratá-los.";
		next;
		mes "[Gerente do Clã]";
		mes "Você deve cumprir o requisito de nível e pagar uma taxa em Zeny para contratar um Assistente.";
		next;
		mes "[Gerente do Clã]";
		mes "Assistente de alto nível também tem como condição que você tenha um certo nível de Lealdade a nós.";
		next;
		mes "[Gerente do Clã]";
		mes "Contratos de Assistentes não podem ser transferidos para outras pessoas.";
		mes "Nós só permitimos uma diferença de 5 Níveis de Base entre Assistente e cliente";
		mes "Então você não pode contratar alguém muito mais forte que você.";
		next;
		mes "[Gerente do Clã]";
		mes "Bem, você pode se informar melhor dos detalhes quando você de fato contratar um de nossos Assistentes.";
		mes "Você receber o Pergaminho de Invocação que irá convocar um Assistente para lhe escoltar.";
		next;
		mes "[Gerente do Clã]";
		mes "Você não pode dar esse pergaminho para outra pessoa e o Assistente só ficará com você até 30 minutos.";
		mes "Depois que você convocá-lo.";
		close;
		case 3:
		mes "[Gerente do Clã]";
		mes "Tudo bem, se sentir necessidade de nossa ajuda.";
		mes "Volte a me procurar";
		close;
	}
	.@zenyrequire = .@level * 1000;
	.@mercLevel = .@minLevel + 5;
	.@mercLoyalty = mercenary_get_faith(getd(.@mercenaryType$));
	if (.@mercenaryType$ == "SPEAR_MERC_GUILD") {
		setarray (.@arrItem[1],12173,12174,12175,12176,12177,12178,12179,12180,12181,12182);
	}
	if (.@mercenaryType$ == "SWORD_MERC_GUILD") {
		setarray (.@arrItem[1],12163,12164,12165,12166,12167,12168,12169,12170,12171,12172);
	}
	if (.@mercenaryType$ == "ARCH_MERC_GUILD") {
		setarray (.@arrItem[1],12153,12154,12155,12156,12157,12158,12159,12160,12161,12162);
	}
	mes "[Gerente do Clã]";
	mes "Para contratar um acistente de Nível "+.@level+".";
	mes "Cujo seu level é "+.@mercLevel+" você vai precisar de:";
	mes "Está no mínimo com o level de base em ^0000bb"+.@minLevel+"^000000 ou maior.";
	mes "Possuir pelo menos ^0000bb"+.@zenyrequire+"^000000 Zenys.";
	if (.@loyalty >= 50) {
		mes "Possuir pelo menos ^0000bb"+.@loyalty+"^000000 pontos de fidelidade com nosso clã.";
	}
	next;
	mes "[Gerente do Clã]";
	mes "Deseja assinar o contrato agora?";
	next;
	if (select("Claro","Não obrigado") == 1) {
		mes "[Gerente do Clã]";
		if (Zeny < .@zenyrequire) {
			mes "Sinto muito mas você não possui a quantidade de Zenys necessária para contratação desse acistente.";
			close;
		}
		else if(.@mercLoyalty < .@loyalty ) {
			mes "Sua Lealdade para com nosso clã não é o suficiente para contratar esse acistente.";
			mes "Você pode contratar um de Nível menor se preferir.";
			close;
		}
		else if (BaseLevel < .@minLevel) {
			mes "Hunn...";
			mes "Você não pode contratar esse acistente porque seu Level de Base é muito inferior ao dele.";
			mes "Lembre-se você deve está no mímino 5 Level de diferença entre ele.";
			close;
		}
		else {
			mes "Está aqui seu pergaminho de invocação.";
			Zeny -= .@zenyrequire;
			getitem (.@arrItem[.@level],1);
			if (.@level == 10) {
				mercenary_set_faith (getd(.@mercenaryType$),-400);
				mes "Pelo contrato com o acistente de Nível 10.";
				mes "Seus pontos de Lealdade também foram reduzidos em 400 pontos.";
			}
			next;
			mes "[Gerente do Clã]";
			mes "Lembre-se que depois de usado o acistente irá acompanha-l"+(Sex?"o":"a")+" para qualquer lugar.";
			mes "Irá enfrentar qualquer perigo por você.";
			mes "Mas seu contrato expira em ^bb000030 minutos^000000, depois desse tempo ele irá embora.";
			mes "Use seus serviços com sabedoria.";
			close;
		}
	}
	mes "[Gerente do Clã]";
	mes "Tudo bem, se sentir necessidade de nossa ajuda.";
	mes "Volte a me procurar";
	close;
}

// ------------------------------------------------------------------
// - [ Duplificações ] -
// ------------------------------------------------------------------
prontera,41,337,5	duplicate(MercenaryRent)	Clã de Assis#Spear	8W_SOLDIER
izlude,47,170,5	duplicate(MercenaryRent)	Clã de Assis#Sword	4_M_JOB_KNIGHT2
pay_arche,99,167,4	duplicate(MercenaryRent)	Clã de Assis#Bow	4_M_JOB_HUNTER