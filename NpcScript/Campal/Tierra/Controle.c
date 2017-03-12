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
| - Nota: Controles da Batalha Campal Tierra                        |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Salas de Espera]
//-------------------------------------------------------------------
// Azul
bat_room,57,227,5	script	Tenente Kalos	4_M_KY_KNT,{
	end;
	OnInit:
	waitingroom "Estação de Batalha",6,"TierraBG::OnReadyCheck",1;
	end;
	OnBgTeans:
	$@TierraTeanBlue = waitingroom2bg("bat_a01",50,374,"TierraBG::OnBgLeave","");
	end;
}

// Vermelho
bat_room,58,204,1	script	Tenente Eyor	4_M_CRU_KNT,{
	end;
	OnInit:
	waitingroom "Estação de Batalha",6,"TierraBG::OnReadyCheck",1;
	end;
	OnBgTeans:
	$@TierraTeanRed = waitingroom2bg("bat_a01",42,16,"TierraBG::OnBgLeave","");
	end;
}

//-------------------------------------------------------------------
// - [Controle geral da batalha] -
//-------------------------------------------------------------------
bat_a01,1,1,0	script	TierraBG	CLEAR_NPC,{
	OnInit:
	mapwarp strnpcinfo(NPC_MAP),"bat_room",155,150;
	donpcevent "Tenente Kalos::OnBgTeans";
	donpcevent "Tenente Eyor::OnBgTeans";
	donpcevent "TierraDepot::OnRemove";
	donpcevent "NeutralFlag::OnRemove";
	if( $@TierraTeanBlue ) { bg_destroy $@TierraTeanBlue; $@TierraTeanBlue = 0; }
	if( $@TierraTeanRed ) { bg_destroy $@TierraTeanRed; $@TierraTeanRed = 0; }
	$@TierraStart = 0;
	$@TierraBlueVictory = 0;
	$@TierraRedVictory = 0;
	end;

//-------------------------------------------------------------------
// Checagem das equipes
	OnReadyCheck:
	if ($@TierraStart) { end; }
	.@blueRoom = getwaitingroomstate(0,"Tenente Kalos");
	.@redRoom  = getwaitingroomstate(0,"Tenente Eyor");
	if (.@blueRoom < 5 || .@redRoom < 5) {
		mapannounce "bat_room","[ Batalha Campal no Desfiladeiro de Tierra - Guillaume: "+.@redTean+"/5 ~ Croix "+.@blueTean+"/5] ",1,0xffa500;
		end;
	}
	else { donpcevent strnpcinfo(NPC_NAME)+"::OnTierraStart"; }
	end;

//-------------------------------------------------------------------
// Caso deslogue o personagem
	OnBgLeave:
	bg_leave;
		//BG_Delay_Tick = gettimetick(2)+30;
	end;

//-------------------------------------------------------------------
// Início da batalha
	OnTierraStart:
	donpcevent "Tenente Kalos::OnBgTeans";
	donpcevent "Tenente Eyor::OnBgTeans";
	donpcevent "TierraDepot::OnBlueSummon";
	donpcevent "TierraDepot::OnRedSummon";
	donpcevent "TierraTherapist::OnEnable";
	donpcevent "NeutralFlag::OnEnable";
	donpcevent "TierraWall::OnEnableNorth";
	donpcevent "TierraWall::OnEnableSoulth";
	donpcevent "TierraCountdown::OnEnable";
	bg_warp $@TierraTeanBlue,strnpcinfo(NPC_MAP),352,342;
	bg_warp $@TierraTeanRed,strnpcinfo(NPC_MAP),353,52;
	announce "Batalha Campal pelo Desfiladeiro de Tierra começou!",0,0xffa500;
	end;

//-------------------------------------------------------------------
// Fim da batalha
	OnMacthEnd:
	donpcevent "TierraDepot::OnRemove";
	donpcevent "NeutralFlag::OnRemove";
	donpcevent "TierraTherapist::OnStop";
	donpcevent "TierraWallRepair::OnDisable";
	disablenpc "Terapeuta#T_blueTean";
	disablenpc "Terapeuta#T_redTean";
	enablenpc "Axl Rose#T_blueTean";
	enablenpc "Swandery#T_redTean";
	donpcevent "TierraCountdown::OnStop";
	bg_warp $@TierraTeanBlue,strnpcinfo(NPC_MAP),50,374;
	bg_warp $@TierraTeanRed,strnpcinfo(NPC_MAP),42,16;
	sleep(3000);
	initnpctimer;

	OnTimer10000:
	mapannounce strnpcinfo(NPC_MAP),"A Batalha de Tierra fechará em 10 segundos!",1,0x006400;
	end;

	OnTimer15000:
	mapannounce strnpcinfo(NPC_MAP),"A Batalha de Tierra fechará em 15 segundos!",1,0x006400;
	end;

	OnTimer20000:
	stopnpctimer;
	if($@TierraTeanBlue) { bg_destroy $@TierraTeanBlue; $@TierraTeanBlue = 0; }
	if($@TierraTeanRed) { bg_destroy $@TierraTeanRed; $@TierraTeanRed = 0; }
	$@TierraStart = 0;
	$@TierraRedVictory = 0;
	$@TierraBlueVictory = 0;
	mapwarp strnpcinfo(NPC_MAP),"bat_room",155,150;
	disablenpc "Axl Rose#T_blueTean";
	disablenpc "Swandery#T_redTean";
	enablenpc "Terapeuta#T_blueTean";
	enablenpc "Terapeuta#T_redTean";
	donpcevent strnpcinfo(NPC_NAME)+"::OnReadyCheck";
	end;
}

//-------------------------------------------------------------------
// - [Controle de Duração em segundos da batalha]
//-------------------------------------------------------------------
bat_a01,2,1,0	script	TierraCountdown	CLEAR_NPC,{
	OnInit:
	stopnpctimer;
	end;

	OnEnable:
	stopnpctimer;
	initnpctimer;
	end;

	OnStop:
	stopnpctimer;
	end;

	OnTimer3000:
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Aos bravos guerreiros que lutam em nome dos meus herdeiros, eu vos saúdo!",bc_map,"0xff9900";
	end;

	OnTimer5000:
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Iníciamos agora a batalha no Desfiladeiro de Tierra, boa sorte a todos.",bc_map,"0xff9900";
	end;

	OnTimer7000:
	mapannounce strnpcinfo(NPC_MAP), "General Guillaume: A vitória já nossa vamos bravos soldados destruam, queimem a base de suprimetos de Croix!",bc_map,"0x2c5ec0";
	end;

	OnTimer9000:
	mapannounce strnpcinfo(NPC_MAP), "Príncepe Croix: Vamos mostrar o poder do nosso exêrcito a Guillaume, acabem a base de suprimentos dele!",bc_map,"0xbb0000";
	end;

	OnTimer900000:
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Já se passou 15 minutos, ambos exêrcitos se aprecem restam apênas 5 minutos para o fim da batalha!",bc_map,"0xff9900";
	end;

	Ontimer1140000:
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Resta apênas 1 minuto para o fim da batalha!",bc_map,"0xff9900";
	end;

	OnTimer1200000:
	$@TierraBlueVictory = 1;
	$@TierraRedVictory = 1;
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Decreto agora o fim da Batalha no campo de Tierra. Assim sendo não houve vencedor!",bc_map,"0xff9900";
	donpcevent "TierraBG::OnMacthEnd";
	end;
}