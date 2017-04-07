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
| - Nota: Npcs comuns na cidade Niflheim                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
niflheim,52,147,3	script	Keedz#nif	4_M_NFDEADSWDMAN,{
	mes "[Keedz]";
	mes "Não permitirei que qualquer pessoa que esteja viva venha para esse lugar!";
	close;
}

// ------------------------------------------------------------------
niflheim,195,211,6	script	Gigantia#nif	4_M_NFDEADSWDMAN,3,3,{
	if (isequipped(Deviruchi_Cap) || isequipped(Snowy_Horn) || isequipped(Magestic_Goat)) {
		mes "["+strcharinfo(PC_NAME)+"]";
		mes "O que foi?";
		next;
		mes "[Gigantia]";
		mes "Apenas...";
		mes "Venha até aqui.";
		mes "Tenho algo que venha servir para você.";
		next;
		mes "[Gigantia]";
		mes "Seu chifre está torto.";
		mes "Certifique-se sempre se seu chifre está reto e elegante.";
		mes "O Senhor dos Mortos sempre está te vigiando.";
		close;
	}
	else {
		mes "[Gigantia]";
		mes "O Senhor dos Mortos sabe e vê tudo.";
		mes "É inútil se esconder e fugir do suave abraço da morte.";
		close;
	}
}

// ------------------------------------------------------------------
niflheim,350,258,1	script	Alma Amaldiçoada#nif	4_NFWISP,{
	mes "[Bruce Ashe]";
	mes "Eu sinto que você está amaldiçoado";
	mes "por uma magia poderosa...";
	mes "Hmm... É claro que";
	mes "você só precisa....";
	next;
	mes "[Bruce Ashe]";
	mes "Se você quer se livrar de sua maldição....";
	mes "Passando-a para mim!!";
	next;
	mes "[Bruce Ashe]";
	mes "Só porque eu sou um espírito amaldiçoado, você acha que pode aventurar-se a jogar sua maldição em mim?!";
	emotion (e_an);
	next;
	mes "[Bruce Ashe]";
	mes "Me recuso deixar";
	mes "que você continue aqui.....";
	mes "saia agora ou irei";
	mes "tirá-lo a força....";
	next;
	mes "[Bruce Ashe]";
	mes "....E...";
	mes "....Faça o que fizer...";
	mes "....NÃO toque em meus livros...";
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
nif_in,16,27,1	script	Galinha#nif	4_NFCOCK,{
	percentheal (-5,0);
	mes "[Galinha]";
	mes "Eu vivia uma vida pacífica como uma galinha normal.";
	mes "Mas veio o dia que eu fui tragicamente morta e comida por humanos.";
	mes "Bem... Agora é minha vez!";
	mes "*Nhac!*";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Ai...!";
	mes "A galinha me atacou!";
	next;
	mes "[Galinha]";
	mes "Eu posso falar e banquetear de humanos vivos!";
	mes "Virar zumbi é maravilhoro!";
	mes "*Nhac!*";
	close;
}

// ------------------------------------------------------------------
nif_in,16,30,4	script	Morcego#nif	4_NFBAT,{
	percentheal (-5,0);
	mes "[Morcego]";
	mes "Oooh, que conveniente, um humano!";
	mes "Sangue fresco é sempre saboroso...!";
	mes "Acho que vou tomar apenas um gole.";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Ai! Minha veia!";
	mes "Você chupou o meu sangue?!";
	next;
	mes "[Morcego]";
	mes "Mwahahaha";
	mes "Mortal tolo!";
	mes "Cuidado com meus poderes!";
	close;
}

// ------------------------------------------------------------------
nif_in,156,93,5	script	Criança#nif	4_F_NFLOSTGIRL,{
	mes "[Anna Alakina]";
	mes "Onde... Onde estou...?";
	mes "Me lembro de estar dormindo e quando acordei estava aqui...";
	mes "Mamãe, você viu a minha mãe?";
	mes "Quero ir para casa...";
	mes "*soluço*";
	next;
	switch(select("Sobre a bruxa","Sobre a maldição","Cancelar.")) {
		case 1:
		mes "[Anna Alakina]";
		mes "Bruxa...?";
		mes "Nuca vi uma bruxa, mas já li sobre elas nos livros.";
		mes "Não tenho certeza se elas existem ou não, mas seria tão assustador se fosse verdade ...";
		next;
		mes "[Anna Alakina]";
		mes "Por que está tão frio aqui...?";
		mes "Você não esta sentindo frio ou medo?";
		mes "Quero ir para casa... é quente lá.";
		mes "Você poderia me ajudar a voltar para casa...";
		mes "Por favor...? M-me ajude...";
		close;
		case 2:
		mes "[Anna Alakina]";
		mes "Uma maldição...?";
		mes "Minha avó disse que existe muitas maldições pelo mundo.";
		mes "Você pode chamar algumas de maldições passageiras.";
		mes "Mas há outras que te seguirão o resto da vida...";
		next;
		mes "[Anna Alakina]";
		mes "Vovó também disse que maldições pode ser de outra forma...";
		mes "Como alguém que está sempre bravo contigo, e não vai te perdoar.";
		mes "Você pode considerar isso como uma maldição também.";
		next;
		mes "[Anna Alakina]";
		mes "Minha avó disse que só existe um encantamento forte o bastante.";
		mes "Para quebrar uma maldição sobre você...";
		next;
		mes "[Anna Alakina]";
		mes "Klaatu...";
		mes "Verata.....";
		mes "Ne...ni...umm...?";
		mes "Como é mesma a ultima parte?";
		mes "E-eu não consigo lembrar a ultima parte do encantamento!";
		next;
		mes "[Anna Alakina]";
		mes "Se você repetir o encanto na ordem, irá te libertar de qualquer de raiva ou ódio que tenham por você.";
		mes "E se fizer perto de um espírito malígno, eles que serão amaldiçoados.";
		next;
		mes "[Anna Alakina]";
		mes "Por que está me perguntando sobre essas coisas assustadoras...?";
		mes "Eu só quero ir para casa...";
		close;
		case 3:
		mes "[Anna Alakina]";
		mes "Está frio aqui...";
		mes "Eu estou congelando...";
		mes "Eu quero ir para casa e fugir deste lugar assustador...";
		next;
		mes "[Anna Alakina]";
		mes "Por favor... me ajude.";
		mes "Poderia me levar com você...?";
		close;
	}
}