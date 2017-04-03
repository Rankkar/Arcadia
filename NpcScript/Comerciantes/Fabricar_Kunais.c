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
| - Criação: Spell Master 14/03/2017                                |
| - Nota: Negocia Shurikens e itens por Kunais                      |
\*-----------------------------------------------------------------*/

que_ng,72,29,3	script	Mercador de Kunais#KunaiTrade	4_M_01,{
	if (BaseClass != Job_Ninja) {
		mes "[Kashin]";
		mes "Como você encontrou esse lugar?!";
		mes "É melhor que saia o quanto antes, para o seu próprio bem.";
		close;
	}
	else {
		mes "[Kashin]";
		mes "Meu nome é Kashin e negocio de Kunais por itens.";
		mes "Veja se exite algo que lhe interece.";
		next;
		switch(select("Kunai Veneno Mortal","Kunai Nevasca","Kunai Sopro do Vento","Kunai Terra Negra","Kunai Onda de Calor","Cancelar")) {
			case 1: .@Shuriken = 13250; .@shurAmmout = 20; .@itemRequire = 7524; .@itemAmmout = 1; .@KunaiItem = 13259; break;
			case 2: .@Shuriken = 13251; .@shurAmmout = 8;  .@itemRequire = 7522; .@itemAmmout = 2; .@KunaiItem = 13255; break;
			case 3: .@Shuriken = 13252; .@shurAmmout = 4;  .@itemRequire = 7523; .@itemAmmout = 2; .@KunaiItem = 13257; break;
			case 4: .@Shuriken = 13253; .@shurAmmout = 2;  .@itemRequire = 7524; .@itemAmmout = 1; .@KunaiItem = 13256; break;
			case 5: .@Shuriken = 13254; .@shurAmmout = 1;  .@itemRequire = 7521; .@itemAmmout = 2; .@KunaiItem = 13258; break;
			case 6:
			mes "[Kashin]";
			mes "Por favor, volte quando precisar de algumas Kunais.";
			mes "Até breve.";
			close;
		}
		mes "[Kashin]";
		mes "Você pode trocar "+.@shurAmmout+" "+getitemname(.@Shuriken)+" e "+.@itemAmmout+" "+getitemname(.@itemRequire)+" por 10 "+getitemname(.@KunaiItem)+".";
		next;
		mes "[Kashin]";
		mes "Eu posso só lhe dar de cada vez um máximo de 500 Kunais.";
		mes "Se quiser cancelar a troca basta que digite 0.";
		mes "Quantas Kunais você gostaria?";
		next;
		input .@kunaiAmmout;
		if (.@kunaiAmmout == 0) {
			mes "[Kashin]";
			mes "Você cancelou a negociação.";
			mes "Tudo bem volte quando quiser fazer negócio.";
			close;
		}
		else if (.@kunaiAmmout > 500) {
			mes "[Kashin]";
			mes "Parece que não me ouviu...";
			mes "Eu disse que só posso negociar 500 Kunais por vez.";
			close;
		}
		else if(countitem(.@Shuriken) < .@kunaiAmmout*.@shurAmmout || countitem(.@itemRequire) < .@kunaiAmmout*.@itemAmmout) {
			mes "[Kashin]";
			mes "Parece que você não tem a quantidade de itens necessários para a troca.";
			close;
		}
		else if(checkweight(.@KunaiItem, .@kunaiAmmout*10) == 0) {
			mes "[Kashin]";
			mes "Tudo certo, mas temos um problema...";
			mes "Você está levando muito peso com você e não vai poder carregar as Kunais que eu lhe entregar.";
			mes "Livre-se de um pouco de peso no seu inventário e tente novamente.";
			close;
		}
		else {
			mes "[Kashin]";
			mes "Ótimo, tudo está em ordem, assim prossigamos com a troca.";
			mes "Só um instante....";
			mes "....";
			next;
			mes "[Kashin]";
			mes ".....";
			mes "......";
			next;
			mes "[Kashin]";
			mes "Espero que faça bom proveito com suas novas Kuanis.";
			delitem .@Shuriken, .@shurAmmout*.@kunaiAmmout;
			delitem .@itemRequire, .@itemAmmout*.@kunaiAmmout;
			getitem .@KunaiItem, 10*.@kunaiAmmout;
			close;
		}
	}
}