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
| - Desenvolvido por: Spell Master 14/03/2017                       |
| - Nota: Torre de Einbroch                                         |
\*-----------------------------------------------------------------*/

einbroch,175,196,5	script	Morei#einTower	4_M_EINMAN2,{
	mes "[Morei]";
	mes "Sauda��es, Eu sou Morei, Guia Assistente da Torre de Einbroch.";
	next;
	mes "[Morei]";
	mes "Se voc� quiser voltar para o andar t�rreo, por favor me avise.";
	mes "Voc� gostaria de voltar para o t�rreo?";
	next;
	switch(select("Sim.","N�o.")) {
		case 1:
		mes "[Morei]";
		mes "Tudo bem.";
		mes "Deixe-me lev�-lo para o t�rreo.";
		mes "Obrigado por usar nossos servi�os.";
		close2;
		warp ("einbroch",170,229);
		end;
		case 2:
		mes "[Morei]";
		mes "Entendo.";
		mes "Eu espero que voc� aproveite o seu tempo na torre de Einbroch.";
		close;
	}
}

// ------------------------------------------------------------------
-	script	EinTower	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Bom dia!";
	mes "Eu sou "+strnpcinfo(NPC_NAME_VISIBLE)+", seu guia de explora��o da Torre de Einbroch.";
	next;
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "A Torre de Einbroch oferece a melhor vista de nossa cidade al�m de ser um �timo lugar para reunir-se com os amigos ou marcar encontros.";
	mes "A entrada para a Torra de Einbroch custa 10 zenys.";
	next;
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "E agora estamos oferecendo uma promo��o especial chamada de Combo da Ma�� por apenas 20 zenys.";
	mes "Esse combo conta com o ticket para entrar na Torre de Einbroch e a ma�� para um lanchinho.";
	next;
	switch(select("Apenas o Ticket","Combo da Ma��","Cancelar")) {
		case 1:
		if (Zeny < 10) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Sinto muito, mas voc� n�o tem dinheiro suficiente.";
			mes "A entrada para a Torre de Einbroch custa apenas 10 zenys.";
			close;
		}
		else {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Obrigado por usar nossos servi�os.";
			mes "Deixe-me gui�-lo para a Torre agora mesmo.";
			Zeny -= 10;
			close2;
			warp ("einbroch",181,196);
			end;
		}
		case 2:
		if (Zeny < 20) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Sinto muito, mas voc� n�o tem zeny suficiente.";
			mes "O Combo da ma�� custa 20 zenys.";
			close;
		}
		else {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Antes de gui�-lo a torre, deixe-me ver o seu estado para garantir sua seguran�a antes de lhe dar seu Combo da Ma��.";
			next;
			if ((MaxWeight - Weight) < 20) {
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Me perdoe, mas voc� est� carregando muitos itens com voc�.";
				close;
			}
			else {
				mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
				mes "Obrigado por utilizar nossos servi�os.";
				mes "Deixe-me gui�-lo para a Torre agora mesmo.";
				Zeny -= 20;
				getitem (Apple,1);
				close2;
				warp ("einbroch",174,204);
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