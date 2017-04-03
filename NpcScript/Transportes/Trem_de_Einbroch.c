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
| - Nota: Trem de transporte entre Einbroch & Einbech               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Einbroch > Einbech] -
// ------------------------------------------------------------------
einbroch,232,272,3	script	Estação de Trem#EinTrain	4_M_EIN_SOLDIER,{
	mes "[Funcionário]";
	mes "Bem vind"+(Sex? "o":"a")+" a estação de trem.";
	mes "Trens para Einbech estão sempre passando então se você perder um, não será um problema.";
	next;
	mes "[Funcionário]";
	mes "A taxa para embarcar no trem que vai de Einbroch para Einbech é de 200 zeny.";
	mes "Gostaria de comprar um ticket!?";
	next;
	switch(select("Sim.","Não.","Sobre o meio ambiente...")) {
		case 1:
		if (Zeny > 199) {
			mes "[Funcionário]";
			mes "Muito obrigado.";
			mes "Tenha uma boa viagem.";
			mes "Todos a bordo!";
			close2;
			Zeny -= 200;
			warp "einbech",43,215;
			end;
		}
		else {
			mes "[Funcionário]";
			mes "Sinto muito, mas você não tem dinheiro suficiente para pagar a taxa do trem.";
			close;
		}
		case 2:
		mes "[Funcionário]";
		mes "Muito bem, então.";
		mes "Por favor, aproveite sua estadia em Einbroch.";
		close;
		case 3:
		mes "[Funcionário]";
		mes "Einbroch é abominável por sua poluição do ar, sem dúvida causada pelas instalações industriais locais.";
		mes "É realmente horrível...";
		next;
		mes "[Funcionário]";
		mes "Algumas vezes e a poluição do ar é tão forte que fica difícil até de respirar.";
		mes "Então se você ouvir o alerta de Fumaça, você deve encontrar abrigo imediatamente!"; 
		close;
	}
}

einbroch,252,301,3	duplicate(Estação de Trem#EinTrain)	Estação de Trem#EinTrain2	4_M_EIN_SOLDIER

// ------------------------------------------------------------------
// - [Einbech > Einbroch] -
// ------------------------------------------------------------------
einbech,39,215,5	script	Equipe da Estação#EinTrain3	4_M_EIN_SOLDIER,{
	mes "[Equipe]";
	mes "Bem vindo a Estação de Trem.";
	mes "O preço para pegar o trem para Einbroch é 200 zeny.";
	mes "Você gostaria de embarcar?";
	next;
	switch(select("Sim.","Não.")) {
		case 1:
		if (Zeny > 199) {
			mes "[Equipe]";
			mes "Obrigado e nós esperamos que você aproveite a viagem.";
			mes "Todos a bordo!";
			close2;
			Zeny -= 200;
			warp "einbroch",226,276;
			end;
		}
		else {
			mes "[Equipe]";
			mes "Me desculpe, mas você não tem zeny suficiente para pagar a passagem do trem.";
			close;
		}
		case 2:
		mes "[Equipe]";
		mes "Por favor aproveite sua estada aqui em Einbech.";
		close;
	}
}