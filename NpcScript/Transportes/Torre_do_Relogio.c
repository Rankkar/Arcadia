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
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Versão: Spell Master                                            |
| - Nota: Acesso ao andares inferiores da Torre do relógio          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Acesso ao quarto andar] -
// - Uso da chave da torre do relógio
// ------------------------------------------------------------------
c_tower3,10,249,4	script	Porteiro#ct	4_M_02,{
	callfunc "F_ClockTowerGate","4th",7026,"c_tower4",185,44;
}

// ------------------------------------------------------------------
// - [Acesso ao subsolo] -
// - Uso da chave do subterrâneo
// ------------------------------------------------------------------
alde_dun03,264,16,4	script	Porteiro#ct1	4W_F_01,{
	callfunc "F_ClockTowerGate","B4th",7027,"alde_dun04",79,267;
}

// ------------------------------------------------------------------
// - [Função] -
// ------------------------------------------------------------------
function	script	F_ClockTowerGate	{
	mes "[Porteiro]";
	mes "Bem vindo a";
	mes "Kinase - Blue Gallino";
	mes "O único com Especialidade Local em Al De baran.";
	mes "Você não pode passar do Andar "+getarg(0)+",";
	mes "Por favor volte.";
	next;
	switch(select("Sobre Torre do Relógio:Sobre o "+getarg(0)+" Andar:Ir para o "+getarg(0)+" Andar:Finalizar Conversa")) {
		case 1:
		mes "[Porteiro]";
		mes "Terra da Alquimia, Al De Baran!";
		mes "Há muito tempo atrás, haviam 3 Alquimistas lendários...";
		mes "Eram eles:";
		mes "Bruke Seimer, Philip Warisez e...";
		next;
		mes "[Porteiro]";
		mes "Romero Specialre!";
		mes "Essa arquitetura venerável é a obra-prima deles.";
		mes "Eu presumo que você sentiria algo incomum no caminho desse Andar, cada característica dessa Torre do Relógio ";
		next;
		mes "[Porteiro]";
		mes "Consiste de Magias Misteriosas Antigas.";
		mes "Se você vagar por aqui, atoa.";
		next;
		mes "[Porteiro]";
		mes "Você vai encontrar várias criaturas que guardam o lugar.";
		mes "Tome cuidado ..";
		close;
		case 2:
		mes "[Porteiro]";
		mes "Alquimistas Poderosos";
		mes "Selaram o portão do 4º andar usando um dispositivo químico para manter algo afastado de Criaturas Malvadas e Inimigos Humanos.";
		next;
		mes "[Porteiro]";
		mes "Para abrir é necessário uma chave.";
		mes "Rumores dizem que as Criaturas Guardiãs que possuem a chave, vagam por aqui.";
		next;
		mes "[Porteiro]";
		mes "A Chave é a Intensificação da Alquimia Antiga,";
		mes "boatos dizem que quando usada uma vez.";
		mes "Ela será libertada do encantamento e desaparecerá.";
		next;
		mes "[Porteiro]";
		mes "Se essa chave vir a ser sua.";
		mes "Por favor me mostre.";
		mes "Quem possuir a chave terá permissão de passar por esse portão!";
		next;
		mes "[Porteiro]";
		mes "Eu vou te dar uma chance.";
		mes ". . . . .";
		close;
		case 3:
		if (countitem(getarg(1)) > 0) {
			mes "[Porteiro]";
			mes "Hmm! Eu já senti que você não é uma pessoa comum.";
			mes "Por favor, entre.";
			mes "Que deus abençoe você..";
			close2;
			delitem getarg(1),1;
			warp getarg(2),getarg(3),getarg(4);
			end;
		}
		else {
			mes "[Porteiro]";
			mes ". . . . . .";
			mes "Infelizmente você não tem o privilégio de entrar nesse Portão ..";
			mes "Você não será capaz de passar enquanto os Alquimistas não deixarem você ir.";
			close;
		}
		case 4:
		mes "[Porteiro]";
		mes "Essa torre do relógio";
		mes "É o lugar onde os 3 Alquimistas Lendários deixaram seus espíritos e habilidades.";
		mes "Por favor não rabisque ou faça danos ao interior.";
		close;
	}
}