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
| - Nota: Invocação de Monstros em Cidades                          |
\*-----------------------------------------------------------------*/

einbech,0,0,0,0	monster	Tarou	1175,5,1800000,1500000,0

// ------------------------------------------------------------------
jawaii,207,290,10,10	monster	Fen	1158,3,3600000,1800000,0
jawaii,221,220,30,30	monster	Estrela-do-Mar	1266,2,3600000,2400000,0
jawaii,276,163,20,20	monster	Estrela-do-Mar	1266,1,7200000,3600000,0
jawaii,221,220,30,30	monster	Molusco	1074,1,4800000,3000000,0
jawaii,276,163,20,30	monster	Molusco	1074,2,4200000,2400000,0
jawaii_in,128,121,1,4	monster	Cogumelo Vermelho	1085,1,3000000,1200000,0
jawaii_in,124,76,1,1	monster	Cogumelo Negro	1084,1,3600000,1200000,0
jawaii_in,72,74,5,1	monster	Cogumelo Negro	1084,2,3000000,1200000,0
jawaii_in,73,117,4,4	monster	Ovo de Besouro-Ladrão	1048,1,5400000,3000000,0
jawaii_in,83,117,5,5	monster	Ovo de Besouro-Ladrão	1048,1,4800000,2400000,0

// ------------------------------------------------------------------
brasilis,0,0,0,0	monster	Rosa Selvagem	1261,1,7200000,3600000,0
brasilis,283,88,6,6	monster	Hydra Estranha	2081,5,5000,0,0
brasilis,284,104,6,6	monster	Hydra Estranha	2081,4,5000,0,0
brasilis,215,80,6,6	monster	Hydra Estranha	2081,4,5000,0,0
brasilis,96,50,8,8	monster	Hydra Estranha	2081,5,5000,0,0

// ------------------------------------------------------------------
dewata,0,0,0,0	monster	Rosa Selvagem	1261,1,7200000,3600000,0

// ------------------------------------------------------------------
malaya,0,0,0,0	monster	Rosa Selvagem	1261,1,7200000,3600000,0

// ------------------------------------------------------------------
izlude,0,0,0,0	monster	Rosa Selvagem	1261,1,7200000,3600000,0

// ------------------------------------------------------------------
prontera,0,0,0,0	monster	Rosa Selvagem	1261,1,7200000,3600000,0

// ------------------------------------------------------------------
payon_in02,23,68,5,5	monster	Ovo de Besouro-Ladrão	1048,7,1200000,600000,0

// ------------------------------------------------------------------
alb_ship,0,0,0,0	monster	Rato Estranho	2057,25,0,0,0

// ------------------------------------------------------------------
niflheim,0,0,0,0	monster	Lude	1509,20,5000,0,0
niflheim,0,0,0,0	monster	Quve	1508,20,5000,0,0
niflheim,0,0,0,0	monster	Árvore Maldita	1503,10,5000,0,0
niflheim,0,0,0,0	monster	Poltergeist	1510,10,5000,0,0
niflheim,0,0,0,0	monster	Dullahan	1504,5,5000,0,0

niflheim,0,0,0	script	mvp_niflheim	FAKE_NPC,{
	OnTimer7980000:
	stopnpctimer;
	OnInit:
	switch(rand(6)) {
		case 0:
		monster "niflheim",327,193,"Senhor dos Mortos",1373,1,strnpcinfo(NPC_NAME)+"::OnLoDDead";
		monster "niflheim",330,193,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",324,193,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",327,196,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",327,190,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",324,190,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",330,190,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",324,196,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",330,196,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		break;
		case 1:
		monster "niflheim",337,252,"Senhor dos Mortos",1373,1,strnpcinfo(NPC_NAME)+"::OnLoDDead";
		monster "niflheim",337,255,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",337,249,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",334,252,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",340,252,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",334,249,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",340,255,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",340,249,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",334,255,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		break;
		case 2:
		monster "niflheim",190,185,"Senhor dos Mortos",1373,1,strnpcinfo(NPC_NAME)+"::OnLoDDead";
		monster "niflheim",190,188,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",190,182,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",193,185,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",187,185,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",187,182,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",193,182,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",193,188,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",187,188,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		break;
		case 3:
		monster "niflheim",131,138,"Senhor dos Mortos",1373,1,strnpcinfo(NPC_NAME)+"::OnLoDDead";
		monster "niflheim",131,141,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",131,135,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",128,138,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",134,138,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",134,141,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",128,141,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",134,135,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",128,135,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		break;
		case 4:
		monster "niflheim",311,64,"Senhor dos Mortos",1373,1,strnpcinfo(NPC_NAME)+"::OnLoDDead";
		monster "niflheim",311,67,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",311,61,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",308,64,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",314,64,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",314,61,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",314,67,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",308,67,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",308,61,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		break;
		case 5:
		monster "niflheim",238,131,"Senhor dos Mortos",1373,1,strnpcinfo(NPC_NAME)+"::OnLoDDead";
		monster "niflheim",238,134,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",238,128,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",235,131,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",241,131,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",235,128,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",235,134,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",241,128,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",241,134,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		break;
		case 6:
		monster "niflheim",86,219,"Senhor dos Mortos",1373,1,strnpcinfo(NPC_NAME)+"::OnLoDDead";
		monster "niflheim",86,222,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",86,216,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",89,219,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",83,219,"Serial Killer",1507,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",89,222,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",89,216,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",83,222,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		monster "niflheim",83,216,"Loli Ruri",1505,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
		break;
	}
	monster "niflheim",154,95,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",115,65,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",330,195,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",151,83,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",285,245,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",235,135,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",265,48,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",186,139,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",166,267,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",82,202,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",219,44,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",287,44,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",275,165,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",138,204,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",299,39,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",31,154,"Mascarado",1506,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",154,96,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",116,65,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",151,84,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",286,245,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",330,196,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",236,135,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",165,49,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",167,267,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",82,203,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",220,44,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",287,45,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",287,44,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",276,166,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",139,205,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",300,39,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	monster "niflheim",31,155,"Dullahan",1504,1,strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	end;

	OnLoDDead:
	killmonster "niflheim",strnpcinfo(NPC_NAME)+"::OnInvasionMonsters";
	initnpctimer;
	OnInvasionMonsters:
	end;
}