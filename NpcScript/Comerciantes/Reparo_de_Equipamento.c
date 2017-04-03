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
| - Por: Spell Master/eAthena/rAthena/Hercules                      |
| - Nota: Conseta equipamentos danificados.                         |
\*-----------------------------------------------------------------*/

-	script	repairmain	FAKE_NPC,{
	mes "[Reparador]";
	mes "Ei você!";
	mes "Você precisa que eu repare algum item?";
	mes "Você pode contar comigo para reparar itens!";
	next;
	switch(select("Sim, faça os reparos.","Nenhum no momento.")) {
		case 1:
		.@checkitem = 1;
		while (1) {
			if (getbrokenid(.@checkitem) == 0) {
				break;
			}
			++.@checkitem;
		}
		--.@checkitem;
		if (!.@checkitem) {
			mes "[Reparador]";
			mes "Oh, isso é incrivel!";
			mes "Parece que você toma muito cuidado com as suas coisas.";
			mes "Nenhum dos seus itens foi danificado!";
			next;
			mes "[Reparador]";
			mes "Se todos fossem como você, eu estaria desempregado!!";
			mes "Haha...!";
			close;
		}
		mes "[Reparador]";
		mes "Hmm...";
		mes "Deixe-me ver...";
		mes "De todos os seus itens, "+.@checkitem+" estão danificados.";
		mes "Gostaria de repará-los?";
		next;
		.@totalcost = 5000*.@checkitem;
		mes "[Reparador]";
		mes "Cada reparo custa 5.000 Zenys.";
		mes "Então para reparar todos os seus itens você irá pagar "+.@totalcost+" Zeny!";
		mes "Você quer mesmo reparar os seus itens?";
		next;
		switch(select("Sim por favor.","Não obrigado.")) {
			case 1:
			if (Zeny < .@totalcost) {
				mes "[Reparador]";
				mes "Ei ei...";
				mes "Olhe a sua carteira antes de pedir para repararem um item, cara!";
				mes "Eu não posso reparar nada porque você não possui dinheiro suficiente.";
				close;
			}
			.@checkitem2 = 1;
			while (1) {
				if (getbrokenid(.@checkitem2) == 0) {
					break;
				}
				++.@checkitem2;
			}
			--.@checkitem2;
			if (.@checkitem == .@checkitem2) {
				Zeny -= .@totalcost;
				while (.@checkitem) {
					repair(.@checkitem);
					--.@checkitem;
				}
				mes "[Reparador]";
				mes "Tudo pronto.";
				mes "Agora, tente ter um pouco mais de cuidado.";
				mes "Você sabe, itens tem vida também.";
				close;
			}
			else {
				mes "[Reparador]";
				mes "Mmm? Tem algo errado.";
				mes "Espere...";
				mes "Pegue os itens que você quer reparar e volte aqui.";
				close;
			}
			case 2:
			mes "[Reparador]";
			mes "Bem, não é da minha conta, mas não é bom levar itens quebrados embora.";
			mes "Você deve repará-los o mais rápido possivel!";
			close;
		}
		case 2:
		mes "[Reparador]";
		mes "Hohoho...";
		mes "Você não tem nada para fazer aqui se você não tiver itens para reparar.";
		close;
	}
}

alberta_in,31,65,4	duplicate(repairmain)	Reparador#alb	4_M_04
moc_ruins,107,94,4	duplicate(repairmain)	Reparador#moc	4W_M_03
payon,143,165,0	duplicate(repairmain)	Reparador#pay	4_M_ORIENT01
prt_in,63,54,2	duplicate(repairmain)	Reparador#prt	4_M_04
yuno_in01,175,28,3	duplicate(repairmain)	Reparador#juno	4_M_04
geffen_in,34,166,3	duplicate(repairmain)	Reparador#gef	4_M_04
aldeba_in,38,60,3	duplicate(repairmain)	Reparador#alde	4_M_04
lhz_in02,284,14,3	duplicate(repairmain)	Reparador#lhz	4_M_04

//prt_gld,139,117,4	duplicate(repairmain)	Reparador#prt_gld	4_M_04,{
//gef_fild13,263,117,4	duplicate(repairmain)	Reparador#gef_fild	4_M_04
//pay_gld,295,183,4	duplicate(repairmain)	Reparador#pay_gld	4_M_04
//alde_gld,220,152,4	script	Reparador#alde_gld	4_M_04
//aru_gld,189,336,4	script	Reparador#aru_gld	4_M_04
//sch_gld,340,80,7	script	Reparador#sch_gld	4_M_04