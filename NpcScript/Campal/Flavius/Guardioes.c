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
| - Nota: Guardiões da batalha campal Flavius                       |
\*-----------------------------------------------------------------*/

bat_b01,1,2,0	script	FlaviusGuardians	CLEAR_NPC,{

//-------------------------------------------------------------------
// Invocação dos guardiões
	OnBlueGSummon: // Equipe Azul
		bg_monster $@FlaviusTeanBlue,strnpcinfo(NPC_MAP),108,159,"Guardião de Guillaume",B_S_GUARDIAN,strnpcinfo(PC_NAME)+"::OnBlueGDead";
		bg_monster $@FlaviusTeanBlue,strnpcinfo(NPC_MAP),108,141,"Guardião de Guillaume",B_B_GUARDIAN,strnpcinfo(PC_NAME)+"::OnBlueGDead";
	end;

	OnRedGSummon: // Equipe Vermelha
		bg_monster $@FlaviusTeanRed,strnpcinfo(NPC_MAP),307,160,"Guardião de Croix",B_S_GUARDIAN,strnpcinfo(PC_NAME)+"::OnRedGDead";
		bg_monster $@FlaviusTeanRed,strnpcinfo(NPC_MAP),307,138,"Guardião de Croix",B_B_GUARDIAN,strnpcinfo(PC_NAME)+"::OnRedGDead";
	end;

//-------------------------------------------------------------------
// Caso os guardiões sejam destruídos
	OnBlueGDead: // Equipe Azul
		if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueGDead") < 1) {
			mapannounce strnpcinfo(NPC_MAP), "Os Guardiões que protegiam o Cristal de Guillaume foram destruídos, o cristal está vunerável.",bc_map,"0xbb0000";
			setcell strnpcinfo(NPC_MAP),62,149,60,151,cell_basilica,0;
			setcell strnpcinfo(NPC_MAP),62,149,60,151,cell_walkable,1;
		}
	end;

	OnRedGDead: // Equipe Vermelha
		if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedGDead") < 1) {
			mapannounce strnpcinfo(NPC_MAP), "Os Guardiões que protegiam o Cristal de Croix foram destruídos, o cristal está vunerável.",bc_map,"0x2c5ec0";
			setcell strnpcinfo(NPC_MAP),327,151,329,149,cell_basilica,0;
			setcell strnpcinfo(NPC_MAP),327,151,329,149,cell_walkable,1;
		}
	end;

//-------------------------------------------------------------------
// Desabilitar os guardiões
	OnRemove:
		killmonster strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueGDead";
		killmonster strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedGDead";
	end;
}