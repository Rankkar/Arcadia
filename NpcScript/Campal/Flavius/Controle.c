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
| - Nota: Controles da Batalha Campal Flavius                       |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Salas de Espera]
//-------------------------------------------------------------------
// Azul
bat_room,86,227,4	script	Lieutenant Ator	4_M_KY_KNT,{
	end;
	OnInit:
	waitingroom "Estação de Batalha",6,"Flavius_BG::OnReadyCheck",1;
	end;
	OnBgTeans:
	$@FlaviusTeanBlue = waitingroom2bg("bat_b01",10,290,"Flavius_BG::OnBgLeave","");
	end;
}

// Vermelho
bat_room,85,204,0	script	Lieutenant Thelokus	4_M_CRU_KNT,{
	end;
	OnInit:
	waitingroom "Estação de Batalha",6,"Flavius_BG::OnReadyCheck",1;
	end;
	OnBgTeans:
	$@FlaviusTeanRed = waitingroom2bg("bat_b01",390,10,"Flavius_BG::OnBgLeave","");
	end;
}

//-------------------------------------------------------------------
// - [Controle geral da batalha] -
//-------------------------------------------------------------------
bat_b01,1,1,0	script	Flavius_BG	CLEAR_NPC,{
	OnInit:
	$@FlaviusStart = 0;
	$@FlaviusScoreBlue = 0;
	$@FlaviusScoreRed = 0;
	mapwarp strnpcinfo(NPC_MAP),"bat_room",155,150;
	donpcevent "FlaviusGuardians::OnRemove";
	donpcevent "FlaviusCrystal::OnRemove";
	donpcevent "Lieutenant Ator::OnBgTeans";
	donpcevent "Lieutenant Thelokus::OnBgTeans";
	if( $@FlaviusTeanBlue ) { bg_destroy $@FlaviusTeanBlue; $@FlaviusTeanBlue = 0; }
	if( $@FlaviusTeanRed ) { bg_destroy $@FlaviusTeanRed; $@FlaviusTeanRed = 0; }
	end;

//-------------------------------------------------------------------
// Checagem das equipes
	OnReadyCheck:
	if ($@FlaviusStart) { end; } 
	.@blueRoom = getwaitingroomstate(0,"Lieutenant Ator");
	.@redRoom  = getwaitingroomstate(0,"Lieutenant Thelokus");
	if (.@blueRoom < 5 || .@redRoom < 5) {
		mapannounce "bat_room","[ Batalha Campal Flavius - Guillaume: "+.@redTean+"/5 ~ Croix "+.@blueTean+"/5] ",1,0x006400;
		end;
	}
	else {
		donpcevent strnpcinfo(NPC_NAME)+"::OnFlaviusStart";
	}
	end;

//-------------------------------------------------------------------
// Caso deslogue o personagem
	OnBgLeave:
	bg_leave;
		//BG_Delay_Tick = gettimetick(2)+30;
	end;

//-------------------------------------------------------------------
// Início da batalha
	OnFlaviusStart:
	$@FlaviusStart = 1;
	donpcevent "Lieutenant Ator::OnBgTeans";
	donpcevent "Lieutenant Thelokus::OnBgTeans";
	donpcevent "FlaviusGuardians::OnBlueGSummon";
	donpcevent "FlaviusGuardians::OnRedGSummon";
	donpcevent "FlaviusCrystal::OnBlueCSummon";
	donpcevent "FlaviusCrystal::OnRedCSummon";
	donpcevent "FlaviusTherapist::OnEnable";
	donpcevent "FlaviusCountdown::OnEnable";
	bg_warp $@FlaviusTeanBlue,strnpcinfo(NPC_MAP),87,75;
	bg_warp $@FlaviusTeanRed,strnpcinfo(NPC_MAP),311,224;
	announce "Batalha Campal Flavius começou!",0,0x006400;
	end;

//-------------------------------------------------------------------
// Rounds da batalha
	OnRound:
	bg_updatescore strnpcinfo(NPC_MAP),$@FlaviusScoreBlue,$@FlaviusScoreRed;
	bg_warp $@FlaviusTeanBlue,strnpcinfo(NPC_MAP),10,290;
	bg_warp $@FlaviusTeanRed,strnpcinfo(NPC_MAP),390,10;
	donpcevent "FlaviusTherapist::OnStop";
	donpcevent "FlaviusGuardians::OnRemove";
	donpcevent "FlaviusCrystal::OnRemove";
	sleep(3000);
	if ($@FlaviusScoreBlue > $@FlaviusScoreRed) {
		mapannounce strnpcinfo(NPC_MAP), "O exêcito de Guillaume venceu o Round, o próximo começará em breve.",bc_map,"0xffce00";
	}
	else if ($@FlaviusScoreBlue < $@FlaviusScoreRed) {
		mapannounce strnpcinfo(NPC_MAP), "O exêcito de Croix venceu o Round, o próximo começará em breve.",bc_map,"0xffce00";
	}
	else {
		mapannounce strnpcinfo(NPC_MAP), "Ambos exêcitos estão empatados, o Round decisivo começará em breve.",bc_map,"0xffce00";
	}
	donpcevent "FlaviusGuardians::OnBlueGSummon";
	donpcevent "FlaviusGuardians::OnRedGSummon";
	donpcevent "FlaviusCrystal::OnBlueCSummon";
	donpcevent "FlaviusCrystal::OnRedCSummon";
	donpcevent "FlaviusTherapist::OnEnable";
	end;

//-------------------------------------------------------------------
// Fim da batalha
	OnMacthEnd:
	donpcevent "FlaviusTherapist::OnStop";
	disablenpc "Terapeuta#F_blueTean";
	disablenpc "Terapeuta#F_redTean";
	enablenpc "Axl Rose#F_blueTean";
	enablenpc "Swandery#F_redTean";
	donpcevent "FlaviusGuardians::OnRemove";
	donpcevent "FlaviusCrystal::OnRemove";
	donpcevent "FlaviusCountdown::OnStop";
	bg_warp $@FlaviusTeanBlue,strnpcinfo(NPC_MAP),10,290;
	bg_warp $@FlaviusTeanRed,strnpcinfo(NPC_MAP),390,10;

	sleep(3000);
	initnpctimer;

	OnTimer10000:
	mapannounce strnpcinfo(NPC_MAP),"A Batalha de Flavius fechará em 10 segundos!",1,0x006400;
	end;

	OnTimer15000:
	mapannounce strnpcinfo(NPC_MAP),"A Batalha de Flavius fechará em 15 segundos!",1,0x006400;
	end;

	OnTimer20000:
	stopnpctimer;
	if($@FlaviusTeanBlue) { bg_destroy $@FlaviusTeanBlue; $@FlaviusTeanBlue = 0; }
	if($@FlaviusTeanRed) { bg_destroy $@FlaviusTeanRed; $@FlaviusTeanRed = 0; }
	$@FlaviusStart = 0;
	$@FlaviusScoreBlue = 0;
	$@FlaviusScoreRed = 0;
	bg_updatescore "bat_b01",0,0;
	disablenpc "Axl Rose#F_blueTean";
	disablenpc "Swandery#F_redTean";
	enablenpc "Terapeuta#F_blueTean";
	enablenpc "Terapeuta#F_redTean";
	mapwarp strnpcinfo(NPC_MAP),"bat_room",155,150;
	donpcevent strnpcinfo(NPC_NAME)+"::OnReadyCheck";
	end;
}

//-------------------------------------------------------------------
// - [Controle de Duração em segundos da batalha]
//-------------------------------------------------------------------
bat_b01,2,1,0	script	FlaviusCountdown	CLEAR_NPC,{
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

	OnTimer8000:
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Iníciamos agora a batalha no campo de flavius, boa sorte a todos.",bc_map,"0xff9900";
	end;

	OnTimer900000:
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Já se passou 15 minutos, ambos exêrcitos se aprecem restam apênas 5 minutos para o fim da batalha!",bc_map,"0xff9900";
	end;

	Ontimer1140000:
	mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Resta apênas 1 minuto para o fim da batalha!",bc_map,"0xff9900";
	end;

	OnTimer1200000:
	$@FlaviusScoreBlue += 1;
	$@FlaviusScoreRed += 1;
	if ($@FlaviusScoreBlue == $@FlaviusScoreRed) {
		mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Decreto agora o fim da Batalha no campo de Flavius. Assim sendo não houve vencedor!",bc_map,"0xff9900";
	}
	else if ($@FlaviusScoreBlue > $@FlaviusScoreRed) {
		mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Decreto agora o fim da Batalha no campo de Flavius. Pelos resultados Guillaume foi o vencedor!",bc_map,"0xff9900";
	}
	else if ($@FlaviusScoreBlue < $@FlaviusScoreRed) {
		mapannounce strnpcinfo(NPC_MAP), "Marollo VII: Decreto agora o fim da Batalha no campo de Flavius. Pelos resultados Croix foi o vencedor!",bc_map,"0xff9900";
	}
	donpcevent "Flavius_BG::OnMacthEnd";
	end;
}