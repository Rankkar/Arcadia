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
| - Nota: Troca garrafas vazias e zenys por leite                   |
\*-----------------------------------------------------------------*/

-	script	MilkVendor	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME)+"]";
	mes "Ei, ei...";
	mes "Se você me trouxer 1 Garrafa Vazia e 15 Zenys, poderei trocá-los por 1 Leite.";
	mes "Isso parece ser bom para você?";
	next;
	if (select("Trocar minhas Garrafas Vazias.","Cancelar") == 1) {
		if (countitem(Empty_Bottle) <= 0) {
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Ei...";
			mes "Você não tem nenhuma Garrafa Vazia.";
			mes "Eu realmente não posso te dar o leite de outra forma, você sabe...";
			close;
		}
		.@bottles = countitem(Empty_Bottle);
		.@total_weight = .@bottles * 50;
		.@total_cost = .@bottles * 15;
		if (Zeny < .@total_cost) {
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Oh, whoa!";
			mes "Você não tem os zenys necessários para esse número de Garrafas Vazias.";
			mes "Você precisa me trazer um total de "+.@total_cost+" zenys.";
			close;
		}
		if (MaxWeight - Weight < .@total_weight) {
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Hmm...";
			mes "Acho que você deveria abrir mais espaço em seu inventário antes que eu lhe dê todo esse leite...";
			close;
		}
		Zeny -= .@total_cost;
		delitem (Empty_Bottle,.@bottles);
		getitem (Milk,.@bottles);
		close;
	}
	close;
}

prontera,73,140,0	duplicate(MilkVendor)	Vendedora de Leite#prt	4_M_04
hugel,105,169,5	duplicate(MilkVendor)	Vendedora de Leite#hug	4_F_01
lighthalzen,220,122,3	duplicate(MilkVendor)	Vendedor de Leite#lhz	4_F_01
moscovia,199,110,3	duplicate(MilkVendor)	Vendedora de Leite#mosc	4_F_RUSWOMAN1