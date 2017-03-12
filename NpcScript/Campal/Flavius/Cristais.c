/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Criação: Spell Master 21/02/2017                                |
| - Nota: Cristais da Batalha Campal Flavius                        |
\*-----------------------------------------------------------------*/

bat_b01,1,3,0	script	FlaviusCrystal	CLEAR_NPC,{

// Invocação dos dos cristais e suas proteções
	OnBlueCSummon: // Equipe Azul
		bg_monster $@FlaviusTeanBlue,strnpcinfo(NPC_MAP),61,150,"Cristal Azul",OBJ_A2,strnpcinfo(PC_NAME)+"::OnBlueCDead";
		setcell strnpcinfo(NPC_MAP),62,149,60,151,cell_basilica,1;
		setcell strnpcinfo(NPC_MAP),62,149,60,151,cell_walkable,0;
	end;

	OnRedCSummon: // Equipe Vermelha
		bg_monster $@FlaviusTeanRed,strnpcinfo(NPC_MAP),328,150,"Cristal Vermelho",OBJ_B2,strnpcinfo(PC_NAME)+"::OnRedCDead";
		setcell strnpcinfo(NPC_MAP),327,151,329,149,cell_basilica,1;
		setcell strnpcinfo(NPC_MAP),327,151,329,149,cell_walkable,0;
	end;

//-------------------------------------------------------------------
// Caso os guardiões sejam destruídos
	OnBlueCDead: // Equipe Azul
		if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueGDead") < 1) {
			mapannounce strnpcinfo(NPC_MAP), "Os Cristal de Guillaume foi destruído.",bc_map,"0xbb0000";
			$@FlaviusScoreRed += 1;
			if ($@FlaviusScoreRed == 2) { donpcevent "Flavius_BG::OnMacthEnd"; }
			else { donpcevent "Flavius_BG::OnRound"; }
		}
	end;

	OnRedCDead: // Equipe Vermelha
		if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedCDead") < 1) {
			mapannounce strnpcinfo(NPC_MAP), "O Cristal de Croix foi destruído.",bc_map,"0x2c5ec0";
			$@FlaviusScoreBlue += 1;
			if ($@FlaviusScoreBlue == 2) { donpcevent "Flavius_BG::OnMacthEnd"; }
			else { donpcevent "Flavius_BG::OnRound"; }
		}
	end;

//-------------------------------------------------------------------
// Desabilitar os guardiões
	OnRemove:
		killmonster strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueGDead";
		killmonster strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedGDead";
	end;
}