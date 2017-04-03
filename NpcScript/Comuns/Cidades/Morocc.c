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
| - Nota: Npcs comuns na cidade Morroc                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
morocc,150,120,5	script	Soldado de Morroc#moc	4_M_MOC_SOLDIER,3,3,{
	end;
	OnTouch:
	mes "[Soldado de Morroc]";
	mes "Ei, você! Pare ai.";
	next;
	mes "[Soldado de Morroc]";
	mes "Essa é uma área restrita.";
	mes "Você não pode se aproximar!";
	close;
}

// ------------------------------------------------------------------
morocc,202,244,0	script	Voluntário#moc	4_F_CRU,{
	mes "[Voluntário de Morroc]";
	mes "Depois que o terrível acidente varreu Morroc inteira.";
	mes "O Reino de Rune-Midgard tem reunido voluntários para ajudar nas restaurações.";
	next;
	mes "[Voluntário de Morroc]";
	mes "Por mais importante que pareça, todos estão sendo cautelosos.";
	mes "Mas há sempre alguns que realmente não compreendem a situação, não acha?";
	close;
}

// ------------------------------------------------------------------
morocc,88,133,3	script	Voluntário#moc2	4_M_ALCHE_A,{
	mes "[Voluntário de Morroc]";
	mes "Estamos inundados de trabalho...";
	next;
	mes "[Voluntário de Morroc]";
	mes "Este trabalho é como o infinito.";
	mes "Não importa quanto esforço façamos!!!";
	mes "Povo de Rune-Midgard!! Nos dêem uma mãozinha!";
	close;
}

// ------------------------------------------------------------------
morocc,202,110,0	script	Voluntário#moc3	4_M_JOB_ASSASSIN,{
	mes "[Voluntário de Morroc]";
	mes "Ainda estamos incapazes de estimar os danos gerais.";
	next;
	mes "[Voluntário de Morroc]";
	mes "A União dos Aventureiros e o Reino de Prontera estão colocando seus esforços.";
	mes "Na restauração bem como nas restrições da causa original do desastre.";
	next;
	mes "[Voluntário de Morroc]";
	mes "Se não desvendarmos a causa orginal.";
	mes "Os danos ultrapassarão os limites de Morroc.";
	mes "A única coisa que falta é piorar.";
	close;
}

// ------------------------------------------------------------------
morocc,268,287,3	script	Voluntário#moc4	4_F_JOB_HUNTER,{
	mes "[Voluntário de Morroc]";
	mes "Por pior que pareça, nem sequer podemos pedir mais apoio.";
	mes "Certamente esta deve ser a pior coisa que aconteceu na história de Rune-Midgard.";
	next;
	mes "[Voluntário de Morroc]";
	mes "Eu queria saber como ruim foi o dano, mas eu mão posso estimá-lo.";
	mes "É como jogar pás de areia contra a maré..";
	close;
}

// ------------------------------------------------------------------
morocc,37,287,0	script	Voluntário#moc5	1_F_PRIEST,{
	mes "[Voluntário de Morroc]";
	mes "Está tudo destruído na cidade, mas o problema real são os cidadões.";
	next;
	mes "[Voluntário de Morroc]";
	mes "É muito triste ver as vítimas do desastre.";
	mes "As pessoas que testemunharam o ocorrido estão muito chocadas.";
	mes "E simplesmente não estão mais normais...";
	next;
	mes "[Voluntário de Morroc]";
	mes "As pessoas estão extremamente assustadas.";
	mes "Mas até que elas tem sorte...";
	mes "Muitos dos que presenciaram o desastre ficaram mentalmente perturbados.";
	close;
}

// ------------------------------------------------------------------
morocc,223,102,0	script	Voluntário#moc6::MocVolunteer	2_M_BARD_ORIENT,{
	mes "[Voluntário de Morroc]";
	mes "Argh...";
	mes "Esse local é meio fantasmagórico...";
	mes "Até mesmo essas brisas secas do deserto parece ter uma natureza sombria...";
	next;
	mes "[Voluntário de Morroc]";
	mes "Ooh!! Eu...";
	mes "Eu estou sentindo alguma coisa!";
	mes "Esse clima sombrio daqui está me dando inspiração musical!";
	next;
	mes "[Voluntário de Morroc]";
	mes "Certo, acho que você deveria ouvi-la.";
	mes "O nome da canção é...";
	mes "'A Rapsódia da Ressurreição do Imperador Morroc'!!!";
	next;
	mes "[Voluntário de Morroc]";
	mes "Quando finalmente acordar.";
	mes "Será a mesma escuridão falhou ao renascer no mesmo lugar,";
	mes "Precisa se esforçar mais e nunca desistir.";
	mes "Mas mesmo depois de centenas e milhares de tentativas.";
	mes "O grande Imperador Morroc não poderá renascer.";
	next;
	mes "[Voluntário de Morroc]";
	mes "Meus estúpidos hímens são inúteis, contra esses aventureiros.";
	mes "Agora eu devo renascer, rompendo o tempo e o espaço...";
	next;
	mes "[Voz Ecoante]";
	mes "Calado! Você não vê o que está acontecendo?!";
	next;
	mes "[Voluntário de Morroc]";
	mes "Ei, você está pegando pesado demais.";
	mes "Seu punho aparenta ser bem frágil, mas certamente pode machucar alguém.";
	next;
	mes "[Voz Ecoante]";
	mes "Bem... não tenho tempo a perder.";
	mes "Eu acho que já ouvi algo parecido antes...";
	next;
	mes "[Voluntário de Morroc]";
	mes "Não, não diga isso!";
	mes "Com certeza não!";
	close;
}
morocc,226,102,4	duplicate(MocVolunteer)	Voluntário#moc7	4_F_JOB_BLACKSMITH