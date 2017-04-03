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
| - Nota: Npcs comuns na cidade Louyang                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
louyang,297,167,2	script	Mulher Musculosa#lou	4_F_CHNDRESS1,{
	if (Sex == SEX_FEMALE) {
		mes "[Zhi Ching Li]";
		mes "Todos os membros do Palácio, incluindo eu e nossa mestre, somos todas mulheres.";
		next;
		mes "[Zhi Ching Li]";
		mes "Recentemente nós tivemos um treinamento pesado de novos membros.";
		mes "Então eu estou aqui para checar se há alguma mulher querendo se alistar.";
		emotion e_dots;
		close;
	}
	mes "[Zhi Ching Li]";
	mes "...";
	next;
	mes "[Zhi Ching Li]";
	mes "...";
	mes "......";
	next;
	mes "[Zhi Ching Li]";
	mes "Por favor me deixe em paz.";
	mes "Estou ocupada.";
	close;
}

// ------------------------------------------------------------------
louyang,274,136,4	script	Garoto Forte#lou	4_M_CHN8GUEK,{
	mes "[Akiira]";
	mes "Eu estou praticando o \"Punho do Dragão\".";
	mes "Eu só preciso usar o poder dos meus punhos.";
	mes "Também preciso me condicionar espiritualmente.";
	next;
	mes "[Akiira]";
	mes "Toda arte marcial requere treinamento espiritual desde que a mente controla o corpo.";
	mes "Se você se treinar espiritualmente, você pode facilmente usar qualquer parte do corpo!";
	next;
	mes "[Akiira]";
	mes "Se você estiver pensando em estudar artes marciais.";
	mes "Você deveria primeiramente ter conhecimento antes de começar o treino físico.";
	next;
	mes "[Akiira]";
	mes "Aprenda sobre as artes marciais e medite sobre a vida.";
	mes "Primeiro, você deve achar a paz do espírito antes de desejar a melhora da mente de do corpo.";
	close;
}

// ------------------------------------------------------------------
louyang,276,136,4	script	Mestre do Punho#lou	4_M_CHN8GUEK,{
	mes "[Zhiang Xiau Ji]";
	mes "Finalmente...";
	mes "Eu dominei o \"Punho do Dragão\"!";
	next;
	mes "[Zhiang Xiau Ji]"; 
	mes "Apesar de ter outros passos básicos eu tive que aprender sobre a história desta arte, e meditar.";
	mes "Focando no meu desenvolvimento espiritual por três anos.";
	next;
	mes "[Zhiang Xiau Ji]";
	mes "Depois disso, meu mestre finalmente começou a me ensinar a parte física dos outros passos do Punho do Dragão.";
	mes "Eu tenho me dedicado a esta arte por treze anos.";
	next;
	mes "[Zhiang Xiau Ji]";
	mes "Tenho muito orgulho de ter dominado esta arte dez anos antes do que eu esperava.";
	mes "Agora eu preciso estudar esta técnica para melhorá-la corrigindo seus pontos fracos e aumentando seus pontos fortes.";
	next;
	mes "[Zhiang Xiau Ji]";
	mes "Eu acho que isso vai levar mais uns dez anos.";
	mes "Mas eu não estou desanimado com isso nem um pouco.";
	next;
	mes "[Zhiang Xiau Ji]";
	mes "Quando você está aprendendo uma arte marcial você não pode se apressar e aprender tudo em um curto espaço de tempo.";
	mes "É impossivel!";
	mes "E ainda por cima essa não é a essência da coisa.";
	close;
}

// ------------------------------------------------------------------
louyang,276,133,0	script	Aprendiz#lou	4_M_CHN8GUEK,{
	mes "[Aprendiz]";
	mes "Yeeeyap~!";
	mes "Taaaaaah!!";
	mes "Hooo.";
	close;
}

louyang,276,131,0	script	Aprendiz#lou2	4_M_CHN8GUEK,{
	mes "[Aprendiz]";
	mes "Tah Tah Tah!";
	mes "Taaaaaah!!";
	mes "Schwooooooo";
	close;
}

louyang,276,129,0	script	Aprendiz#lou3	4_M_CHN8GUEK,{
	mes "[Aprendiz]";
	mes "Si!";
	mes "Ayah!!";
	close;
}

louyang,274,133,0	script	Aprendiz#lou4	4_M_CHN8GUEK,{
	mes "[Aprendiz]";
	mes "Dergh!";
	mes "Dergh!";
	mes "Schwa--!";
	close;
}

louyang,274,131,0	script	Aprendiz#lou5	4_M_CHN8GUEK,{
	mes "[Aprendiz]";
	mes "Yah Yah Yah!";
	mes "Taaaaaah!!";
	mes "Wataaaaaaaah!";
	close;
}

louyang,274,129,0	script	Aprendiz#lou6	4_M_CHN8GUEK,{
	mes "[Aprendiz]";
	mes "Yeeeyap~!";
	mes "Taaaaaah!!";
	mes "Hooo~";
	close;
}

louyang,278,133,0	duplicate(Aprendiz#lou)	Aprendiz#7lou	4_M_CHN8GUEK
louyang,278,131,0	duplicate(Aprendiz#lou2)	Aprendiz#8lou	4_M_CHN8GUEK
louyang,278,129,0	duplicate(Aprendiz#lou3)	Aprendiz#9lou	4_M_CHN8GUEK
louyang,272,133,0	duplicate(Aprendiz#lou4)	Aprendiz#10lou	4_M_CHN8GUEK
louyang,272,131,0	duplicate(Aprendiz#lou5)	Aprendiz#11lou	4_M_CHN8GUEK
louyang,272,129,0	duplicate(Aprendiz#lou6)	Aprendiz#12lou	4_M_CHN8GUEK

// ------------------------------------------------------------------
// - [ Casas(Torre) ] -
// ------------------------------------------------------------------
lou_in01,25,23,5	script	Garota Amigável#lo	4_F_CHNDRESS3,{
	mes "[Hong Miao]";
	mes "Bem-Vindo.";
	next;
	mes "[Hong Miao]";
	mes "Este é um elevador que leva a Torre de Observação.";
	mes "Nós providenciamos um transporte seguro e rápido por um preço barato.";
	mes "Você gostaria de usar este serviço?";
	next;
	switch(select("Informações.","Sim.","Cancelar.")) {
		case 1:
		mes "[Hong Miao]";
		mes "Depois de muitas sugestões e propostas sendo mandadas para o escritório de Turismo de Louyang.";
		mes "A Torre de Observação foi construída para os turistas apreciarem a vista.";
		next;
		mes "[Hong Miao]";
		mes "Você pode subir na torre usando o elevador.";
		mes "Nós estamos disponibilizando este serviço rápido e seguro por 500 zeny por pessoa.";
		close;
		case 2:
		if (Zeny < 500) {
			mes "[Hong Miao]";
			mes "Desculpe-me, mas você não tem a quantidade de zeny necessária.";
			mes "Espero que você volte para apreciar a Torre de Observação. Tenha um bom dia.";
			close;
		}
		mes "[Hong Miao]";
		mes "Nós tentamos oferecer o melhor serviço.";
		mes "Volte sempre.";
		next;
		Zeny -= 500;
		warp "lou_in01",17,19;
		end;
		case 3:
		mes "[Hong Miao]";
		mes "Volte mais tarde.";
		mes "Tenha um bom dia.";
		close;
	}
}

louyang,84,254,0	script	Saída#lou	HIDDEN_NPC,{
	mes "^3355FFHá alguns aparatos para descer.";
	mes "Você gostaria de usá-los?^000000";
	next;
	if (select("Sim.","Não.") == 1) {
		close2;
		warp "lou_in01",10,18;
		end;
	}
	close;
}