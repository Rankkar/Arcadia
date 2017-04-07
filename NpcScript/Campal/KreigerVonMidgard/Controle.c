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
| - Criação: Spell Master 07/03/2017                                |
| - Nota: Controles da Batalha campal Kreiger Von Midgard           |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Salas de Espera]
//-------------------------------------------------------------------
// Azul
bat_room,169,226,4	script	Tenente Diro	4_M_KY_KNT,{
	end;
	OnInit:
	waitingroom ("Estação de Batalha",6,"KvmBG::OnReadyCheck",1);
	end;
	OnBgTeans:
	$@KvmTeanBlue = waitingroom2bg("bat_c01",52,129,"KvmBG::OnBlueQuit","KvmBG::OnBlueDied");
	end;
}

// Vermelho
bat_room,169,205,0	script	Tenente Merodi	4_M_CRU_KNT,{
	end;
	OnInit:
	waitingroom ("Estação de Batalha",6,"KvmBG::OnReadyCheck",1);
	end;
	OnBgTeans:
	$@KvmTeanRed = waitingroom2bg("bat_c01",147,55,"KvmBG::OnRedQuit","KvmBG::OnRedDied");
	end;
}

//-------------------------------------------------------------------
// - [Controle geral da batalha] -
//-------------------------------------------------------------------
bat_c01,1,1,0	script	KvmBG	CLEAR_NPC,{
	OnInit:
	$@KvmStart = 0;
	$@KvmScoreBlue = 0;
	$@KvmScoreRed = 0;
	bg_updatescore (strnpcinfo(NPC_MAP),0,0);
	mapwarp (strnpcinfo(NPC_MAP),"bat_room",155,150);
	if( $@KvmTeanBlue ) { bg_destroy ($@KvmTeanBlue); $@KvmTeanBlue = 0; }
	if( $@KvmTeanRed ) { bg_destroy ($@KvmTeanRed); $@KvmTeanRed = 0; }
	donpcevent ("Tenente Diro::OnBgTeans");
	donpcevent ("Tenente Merodi::OnBgTeans");
	end;

//-------------------------------------------------------------------
// Checagem das equipes
	OnReadyCheck:
	if ($@KvmStart) { end; }
	.@blueRoom = getwaitingroomstate(0,"Tenente Diro");
	.@redRoom  = getwaitingroomstate(0,"Tenente Merodi");
	if (.@blueRoom < 5 || .@redRoom < 5) {
		mapannounce ("bat_room","[ Batalha Campal Kreiger Von Midgard - Guillaume: "+.@redTean+"/5 ~ Croix "+.@blueTean+"/5] ",1,0x696969);
		end;
	}
	else { donpcevent (strnpcinfo(NPC_NAME)+"::OnKvmStart"); }
	end;

//-------------------------------------------------------------------
// Início da batalha
	OnKvmStart: // Início da batalha
	$@KvmStart = 1;
	announce ("Batalha Campal Kreiger Von Midgard começou!",0,0x696969);
	donpcevent ("Tenente Diro::OnBgTeans");
	donpcevent ("Tenente Merodi::OnBgTeans");
	donpcevent (strnpcinfo(NPC_NAME)+"::OnLoadBattle");
	donpcevent ("KvmCountdown::OnEnable");
	end;

//-------------------------------------------------------------------
// Carregar e recarregar os rounds da batalha
	OnLoadBattle:
	bg_updatescore (strnpcinfo(NPC_MAP),$@KvmScoreBlue,$@KvmScoreRed);
	bg_warp ($@KvmTeanBlue,strnpcinfo(NPC_MAP),53,128);
	bg_warp ($@KvmTeanRed,strnpcinfo(NPC_MAP),146,55);
	sleep(2000);
	areapercentheal (strnpcinfo(NPC_MAP),50,123,58,131,100,100);
	areapercentheal (strnpcinfo(NPC_MAP),141,52,149,60,100,100);
	mapannounce (strnpcinfo(NPC_MAP),"A batalha irá começar em breve!!",1,0x696969);
	sleep(3000);
	donpcevent ("::OnKvMKvmEffect1");
	sleep(5000);
	donpcevent ("::OnKvMKvmEffect2");
	sleep(7000);
	donpcevent ("::OnKvMKvmEffect3");
	sleep(10000);
	bg_warp ($@KvmTeanBlue,strnpcinfo(NPC_MAP),62,119);
	bg_warp ($@KvmTeanRed,strnpcinfo(NPC_MAP),137,64);
	end;

//-------------------------------------------------------------------
// Caso os jogadores sejam derrotados
	OnBlueDied:
	.BlueMember = bg_get_data($@KvmTeanBlue, 0);
	--.BlueMember;
	if (.BlueMember < 1) {
		$@KvmScoreRed += 1;
		if ($@KvmScoreRed == 2) {
			donpcevent (strnpcinfo(NPC_NAME)+"::OnMacthEnd");
		}
		else {
			donpcevent (strnpcinfo(NPC_NAME)+"::OnLoadBattle");
		}
	}
	end;

	OnRedDied:
	.RedMember = bg_get_data($@KvmTeanRed, 0);
	--.RedMember;
	if (.RedMember < 1) {
		$@KvmScoreBlue += 1;
		if ($@KvmScoreBlue == 2) {
			donpcevent (strnpcinfo(NPC_NAME)+"::OnMacthEnd");
		}
		else {
			donpcevent (strnpcinfo(NPC_NAME)+"::OnLoadBattle");
		}
	}
	end;

//-------------------------------------------------------------------
// Fim da batalha
	OnMacthEnd:
	donpcevent ("KvmCountdown::OnStop");
	enablenpc ("Axl Rose#K_blueTean");
	enablenpc ("Swandery#K_redTean");
	bg_warp ($@KvmTeanBlue,strnpcinfo(NPC_MAP),53,128);
	bg_warp ($@KvmTeanRed,strnpcinfo(NPC_MAP),146,55);
	sleep(2000);
	areapercentheal (strnpcinfo(NPC_MAP),50,123,58,131,100,100);
	areapercentheal (strnpcinfo(NPC_MAP),141,52,149,60,100,100);
	initnpctimer;
	OnTimer3000:
	mapannounce (strnpcinfo(NPC_MAP),"A Batalha de Kreiger Von Midgard fechará em 1 minuto!",1,0x696969);
	end;
	OnTimer31000:
	mapannounce (strnpcinfo(NPC_MAP),"A Batalha de Kreiger Von Midgard fechará em 30 segundos!",1,0x696969);
	end;
	OnTimer50000:
	mapannounce (strnpcinfo(NPC_MAP),"A Batalha de Kreiger Von Midgard fechará em 10 segundos!",1,0x696969);
	end;
	OnTimer60000:
	if( $@KvmTeanBlue ) { bg_destroy ($@KvmTeanBlue); $@KvmTeanBlue = 0; }
	if( $@KvmTeanRed ) { bg_destroy ($@KvmTeanRed); $@KvmTeanRed = 0; }
	$@KvmStart = 0;
	$@KvmScoreBlue = 0;
	$@KvmScoreRed = 0;
	mapwarp (strnpcinfo(NPC_MAP),"bat_room",155,150);
	disablenpc ("Axl Rose#K_blueTean");
	disablenpc ("Swandery#K_redTean");
	end;

	OnTimer65000:
	stopnpctimer;
	donpcevent ("Tenente Diro::OnBgTeans");
	donpcevent ("Tenente Merodi::OnBgTeans");
	end;

//-------------------------------------------------------------------
// Caso não haja jogadores o suficiente não realizar batalha ou
// interromper a que está em andamento.
	OnBlueQuit:
	.BlueMember = bg_get_data($@KvmTeanBlue,0);
	--.BlueMember;
	if (.BlueMember < 1) {
		$@KvmScoreRed = 2;
		bg_warp ($@KvmTeanBlue,strnpcinfo(NPC_MAP),53,128);
		bg_warp ($@KvmTeanRed,strnpcinfo(NPC_MAP),146,55);
		mapannounce (strnpcinfo(NPC_MAP),"Todos soldados do exêcito de Guillaume abandonaram a batalha!",1,0x696969);
		sleep(3000);
		donpcevent (strnpcinfo(NPC_NAME)+"::OnMacthEnd");
	}
	bg_leave;
	end;

	OnRedQuit:
	.RedMember = bg_get_data($@KvmTeanRed,0);
	--.RedMember;
	if (.RedMember < 1) {
		$@KvmScoreBlue = 2;
		bg_warp ($@KvmTeanBlue,strnpcinfo(NPC_MAP),53,128);
		bg_warp ($@KvmTeanRed,strnpcinfo(NPC_MAP),146,55);
		mapannounce (strnpcinfo(NPC_MAP),"Todos soldados do exêcito de Croix abandonaram a batalha!",1,0x696969);
		sleep(3000);
		donpcevent (strnpcinfo(NPC_NAME)+"::OnMacthEnd");
	}
	bg_leave;
	end;
}

//-------------------------------------------------------------------
// - [Controle de Tempo da batalha] -
//-------------------------------------------------------------------
bat_c01,2,1,0	script	KvmCountdown	CLEAR_NPC,{
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

	OnTimer300000:
	mapannounce (strnpcinfo(NPC_MAP),"Marollo VII: Já se passou 5 minutos, ambos exêrcitos se aprecem restam apênas 5 minutos para o fim da batalha!",bc_map,"0x696969");
	end;

	OnTimer540000:
	mapannounce (strnpcinfo(NPC_MAP),"Marollo VII: Resta apênas 1 minuto para o fim da batalha!",bc_map,"0x696969");
	end;

	OnTimer600000:
	mapannounce (strnpcinfo(NPC_MAP),"Marollo VII: Kreiger Von Midgard!",bc_map,"0x696969");
	donpcevent ("KvmBG::OnMacthEnd");
	end;
}