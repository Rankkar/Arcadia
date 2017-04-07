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
| - Nota: Depósitos de supimentos na batalha campal Tierra          |
\*-----------------------------------------------------------------*/

bat_a01,3,1,0	script	TierraDepot	CLEAR_NPC,{
//-------------------------------------------------------------------
// Invocação dos Depósitos
	OnBlueSummon:
	bg_monster ($@FlaviusTeanBlue,strnpcinfo(NPC_MAP),176,345,"Base de Suprimentos",OBJ_A,strnpcinfo(NPC_NAME)+"::OnBlueDead");
	end;

	OnRedSummon:
	bg_monster ($@FlaviusTeanRed,strnpcinfo(NPC_MAP),167,50,"Base de Suprimentos",OBJ_B,strnpcinfo(NPC_NAME)+"::OnRedDead");
	end;

//-------------------------------------------------------------------
// Caso os Depósitos sejam destruídos
	OnBlueDead: // Equipe Azul
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueDead") < 1) {
		mapannounce (strnpcinfo(NPC_MAP), "General Guillaume: Conseguimos destruir os suprimentos de Croix! A vitória é nossa!",bc_map,"0x2c5ec0");
		$@TierraRedVictory = 1;
		donpcevent ("TierraBG::OnMacthEnd");
	}
	end;

	OnRedDead: // Equipe Vermelha
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedDead") < 1) {
		mapannounce (strnpcinfo(NPC_MAP), "Príncipe Croix: Muito bem bravos guerreiros, destruímos os suprimentos de Guillaume! Vencemos a batalha!",bc_map,"0xbb0000");
		$@TierraBlueVictory = 1;
		donpcevent ("TierraBG::OnMacthEnd");
	}
	end;

//-------------------------------------------------------------------
// Desabilitar os Depósitos
	OnRemove:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnBlueDead");
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnRedDead");
	end;
}