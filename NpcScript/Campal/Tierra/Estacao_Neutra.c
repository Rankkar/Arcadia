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
| - Cria��o: Spell Master 22/02/2017                                |
| - Nota: Base neutra da Batalha campal Tierra                      |
\*-----------------------------------------------------------------*/

bat_a01,5,1,0	script	NeutralFlag	CLEAR_NPC,{
	OnEnable:
	monster (strnpcinfo(NPC_MAP),273,203,"Bandeira Neutra",OBJ_NEUTRAL,1,strnpcinfo(NPC_NAME)+"::OnNeutalBreak");
	end;

	OnNeutalBreak:
	if (mobcount(strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnNeutalBreak") < 1) {
		bg_team_setxy (getcharid(CHAR_ID_BG),56,212);
		// Azul quebrou
		if (getcharid(CHAR_ID_BG) == $@TierraTeanBlue) {
			mapannounce (strnpcinfo(NPC_MAP), "O ex�rcito Guillaume obteve a Esta��o Neutra. Seus refor�os foram convocados!",bc_map,"0x2c5ec0");
			bg_monster ($@TierraTeanBlue,strnpcinfo(NPC_MAP),272,204,"Guardi�o do Ex�rcito Guillaume",B_S_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
			bg_monster ($@TierraTeanBlue,strnpcinfo(NPC_MAP),272,213,"Guardi�o do Ex�rcito Guillaume",B_S_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
			bg_monster ($@TierraTeanBlue,strnpcinfo(NPC_MAP),273,197,"Guardi�o do Ex�rcito Guillaume",B_B_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
			bg_monster ($@TierraTeanBlue,strnpcinfo(NPC_MAP),275,198,"Guardi�o do Ex�rcito Guillaume",B_B_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
		}
		// Vermelho quebrou
		if (getcharid(CHAR_ID_BG) == $@TierraTeanRed) {
			mapannounce (strnpcinfo(NPC_MAP), "O ex�rcito Croix obteve a Esta��o Neutra. Seus refor�os foram convocados!",bc_map,"0xbb0000");
			bg_monster ($@TierraTeanRed,strnpcinfo(NPC_MAP),272,204,"Guardi�o do Ex�rcito Croix",B_S_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
			bg_monster ($@TierraTeanRed,strnpcinfo(NPC_MAP),272,213,"Guardi�o do Ex�rcito Croix",B_S_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
			bg_monster ($@TierraTeanRed,strnpcinfo(NPC_MAP),273,197,"Guardi�o do Ex�rcito Croix",B_B_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
			bg_monster ($@TierraTeanRed,strnpcinfo(NPC_MAP),275,198,"Guardi�o do Ex�rcito Croix",B_B_GUARDIAN,strnpcinfo(PC_NAME)+"::OnGuardDead");
		}
	}
	end;

	OnGuardDead:
	end;

	OnRemove:
	killmonster (strnpcinfo(NPC_MAP),strnpcinfo(NPC_NAME)+"::OnGuardDead");
	end;
}