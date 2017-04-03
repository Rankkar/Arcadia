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
| - Nota: Acesso a cidade Lutie                                     |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Aldebaran > Lutie(Xmas_Fild01) ] -
//-------------------------------------------------------------------
aldebaran,223,222,4	script	Sr. Noel	4_M_SANTA,{
	mes "[Senhor Noel]";
	mes "Ho Ho Ho.";
	mes "Feliz Natal!!";
	mes "Desejo toda a felicidade natalina para você!";
	next;
	switch(select("Sobre Lutie","Ir para Lutie","Cancelar")) {
		case 1:
		mes "[Senhor Noel]";
		mes "^3355FFLutie^000000, a maravilhosa Cidade do Natal!";
		mes "Sempre cheia do espírito natalino.";
		mes "Lutie é cheia de bolos apetitosos, soldadinhos de brinquedos e várias outras coisas maravilhosas.!";
		next;
		mes "[Senhor Noel]";
		mes "Ho Ho Ho.";
		mes "É uma terra maravilhosa.";
		mes "Abençoada com a beleza do inverno, e com uma atmosfera festiva o ano todo!";
		next;
		mes "[Senhor Noel]";
		mes "Eu guio as pessoas até Lutie, a Cidade Natalina.";
		mes "Quando quiser ir lá, me peça, e eu o enviarei.";
		close;
		case 2:
		mes "[Senhor Noel]";
		mes "Ho Ho Ho.";
		mes "O único jeito de chegar em Lutie é comigo, aqui em Al de Baran!";
		next;
		mes "[Senhor Noel]";
		mes "Eu mantenho esse lugar e transporto pessoalmente as pessoas que querem visitar Lutie.";
		next;
		mes "[Senhor Noel]";
		mes "Ho Ho Ho.";
		mes "Bem, você está pronto?";
		mes "Tenha uma boa viagem!";
		mes "Feliiiiiiiz Nataaaal!";
		close2;
		warp "xmas_fild01",78,68;
		end;
		case 3:
		mes "[Senhor Noel]";
		mes "Ho Ho Ho.";
		mes "Quando quiser visitar Lutie, venha falar comigo!";
		next;
		mes "[Senhor Noel]";
		mes "Ho ho hooooo!!";
		mes "Boas Festaaaas!";
		close;
	}
}

//-------------------------------------------------------------------
// - [ Lutie(Xmas_Fild01) > Aldebaran ] -
//-------------------------------------------------------------------
xmas_fild01,84,48,5	script	Sr. Noel#xmas	4_M_SANTA,{
	mes "[Senhor Noel]";
	mes "Ho Ho Ho";
	mes "Apreciou o clima natalino desee lugar?";
	mes "Mas se quiser voltar para aldebaran é só falar.";
	if (select("Voltar para Aldebaran","Cancelar") == 1) {
		close2;
		warp "aldebaran",140,234;
		end;
	}
	mes "[Senhor Noel]";
	mes "Fique o tempo que desejar.";
	close;
}
