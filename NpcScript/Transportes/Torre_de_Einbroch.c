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
| - Por: Spell Master 14/03/2017                                    |
| - Nota: Torre de Einbroch                                         |
\*-----------------------------------------------------------------*/

einbroch,175,196,5	script	Morei#einTower	4_M_EINMAN2,{
	mes "[Morei]";
	mes "Saudações, Eu sou Morei, Guia Assistente da Torre de Einbroch.";
	next;
	mes "[Morei]";
	mes "Se você quiser voltar para o andar térreo, por favor me avise.";
	mes "Você gostaria de voltar para o térreo?";
	next;
	switch(select("Sim.","Não.")) {
		case 1:
		mes "[Morei]";
		mes "Tudo bem.";
		mes "Deixe-me levá-lo para o térreo.";
		mes "Obrigado por usar nossos serviços.";
		close2;
		warp "einbroch",170,229;
		end;
		case 2:
		mes "[Morei]";
		mes "Entendo.";
		mes "Eu espero que você aproveite o seu tempo na torre de Einbroch.";
		close;
	}
}

// ------------------------------------------------------------------
-	script	EinTower	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Bom dia~";
	mes "Eu sou "+strnpcinfo(NPC_NAME_VISIBLE)+", seu guia de exploração da Torre de Einbroch.";
	next;
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "A Torre de Einbroch oferece a melhor vista de nossa cidade além de ser um ótimo lugar para reunir-se com os amigos ou marcar encontros.";
	mes "A entrada para a Torra de Einbroch custa 10 zenys.";
	next;
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "E agora estamos oferecendo uma promoção especial chamada de Combo da Maçã por apenas 20 zenys.";
	mes "Esse combo conta com o ticket para entrar na Torre de Einbroch e a maçã para um lanchinho.";
	next;
	switch(select("Apenas o Ticket","Combo da Maçã","Cancelar")) {
		case 1:
		if (Zeny < 10) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Sinto muito, mas você não tem dinheiro suficiente.";
			mes "A entrada para a Torre de Einbroch custa apenas 10 zenys.";
			close;
		}
		else {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Obrigado por usar nossos serviços.";
			mes "Deixe-me guiá-lo para a Torre agora mesmo.";
			Zeny -= 10;
			close2;
			warp "einbroch",181,196;
			end;
		}
		case 2:
		if (Zeny < 20) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Sinto muito, mas você não tem zeny suficiente.";
			mes "O Combo da maçã custa 20 zenys.";
			close;
		}
		else {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Antes de guiá-lo a torre, deixe-me ver o seu estado para garantir sua segurança antes de lhe dar seu Combo da Maçã.";
			next;
			if ((MaxWeight - Weight) < 20) {
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Me perdoe, mas você está carregando muitos itens com você.";
				close;
			}
			else {
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Obrigado por utilizar nossos serviços.";
				mes "Deixe-me guiá-lo para a Torre agora mesmo.";
				Zeny -= 20;
				getitem Apple,1;
				close2;
				warp "einbroch",174,204;
				end;
			}
		}
		case 3:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Tudo bem.";
		mes "Sinta-se livre para voltar quando quiser.";
		mes "Obrigado.";
		close;
	}
}

einbroch,218,198,5	duplicate(EinTower)	Mark#ein	4_M_EINMAN
einbroch,173,229,5	duplicate(EinTower)	Oberu#ein	4_M_EINMAN
einbroch,176,172,5	duplicate(EinTower)	Khemko#ein	4_M_EINMAN