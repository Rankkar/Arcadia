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
| - Por: eAthena/rAthena/Hercules                                   |
| - Versão: Spell Master                                            |
| - Nota: Controle sobre as rotas dos dirigiveis                    |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Rota: Juno, Einbroch, Lighthalzen, Hugel ] -
//-------------------------------------------------------------------
airplane,243,73,0	script	#AirshipWarp-1	WARPNPC,1,1,{
	end;

	OnInit:
	OnHide:
	specialeffect (EF_BASH);
	disablenpc (strnpcinfo(NPC_NAME));
	end;

	OnUnhide:
	enablenpc (strnpcinfo(NPC_NAME));
	specialeffect (EF_SUMMONSLAVE);
	end;

	OnTouch:
	switch ($@airplanelocation) {
		case 0: warp ("yuno",92,260); end;
		case 1: warp ("einbroch",92,278); end;
		case 2: warp ("lighthalzen",302,75); end;
		case 3: warp ("hugel",181,146); end;
	}
}

airplane,243,29,0	duplicate(#AirshipWarp-1)	#AirshipWarp-2	WARPNPC,1,1

airplane,1,1,0	script	Aeroplano_Domestico	HIDDEN_NPC,{
	end;
	OnInit:
	initnpctimer;
	end;
	OnTimer20000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Einbroch.",bc_map,"0x00ff00");
	end;
	OnTimer50000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Einbroch.",bc_map,"0x00ff00");
	end;
	OnTimer60000:
	$@airplanelocation = 1;
	donpcevent ("#AirshipWarp-1::OnUnhide");
	donpcevent ("#AirshipWarp-2::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Einbroch. Tenha uma boa viagem.",bc_map,"0x00ff00");
	end;
	OnTimer70000:
	mapannounce (strnpcinfo(NPC_MAP),"Atualmente estamos em Einbroch. O Aeroplano vai decolar em breve.",bc_map,"0x00ff00");
	end;
	OnTimer80000:
	donpcevent ("#AirshipWarp-1::OnHide");
	donpcevent ("#AirshipWarp-2::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está decolando. Nosso próximo destino é Lighthalzen.",bc_map,"0x70dbdb");
	end;
	OnTimer100000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Lighthalzen.",bc_map,"0x70dbdb");
	end;
	OnTimer130000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Lighthalzen.",bc_map,"0x70dbdb");
	end;
	OnTimer140000:
	$@airplanelocation = 2;
	donpcevent ("#AirshipWarp-1::OnUnhide");
	donpcevent ("#AirshipWarp-2::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Lighthalzen. Tenha uma boa viagem.",bc_map,"0x70dbdb");
	end;
	OnTimer150000:
	mapannounce (strnpcinfo(NPC_MAP),"Atualmente estamos em Lighthalzen. O Aeroplano vai decolar em breve.",bc_map,"0x70dbdb");
	end;
	OnTimer160000:
	donpcevent ("#AirshipWarp-1::OnHide");
	donpcevent ("#AirshipWarp-2::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está deixando o solo. Nosso próximo destino é Einbroch.",bc_map,"0x00ff00");
	end;
	OnTimer180000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Einbroch.",bc_map,"0x00ff00");
	end;
	OnTimer210000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Einbroch.",bc_map,"0x00FF00");
	end;
	OnTimer220000:
	$@airplanelocation = 1;
	donpcevent ("#AirshipWarp-1::OnUnhide");
	donpcevent ("#AirshipWarp-2::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Einbroch. Tenha uma boa viagem.",bc_map,"0x00ff00");
	end;
	OnTimer230000:
	mapannounce (strnpcinfo(NPC_MAP),"Atualmente estamos em Einbroch. O Aeroplano vai decolar em breve.",bc_map,"0x00ff00");
	end;
	OnTimer240000:
	donpcevent ("#AirshipWarp-1::OnHide");
	donpcevent ("#AirshipWarp-2::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está decolando. Nosso próximo destino é Juno.",bc_map,"0xff8200");
	end;
	OnTimer260000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Juno.",bc_map,"0xff8200");
	end;
	OnTimer290000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Juno.",bc_map,"0xff8200");
	end;
	OnTimer300000:
	$@airplanelocation = 0;
	donpcevent ("#AirshipWarp-1::OnUnhide");
	donpcevent ("#AirshipWarp-2::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Juno. Tenha uma boa viagem.",bc_map,"0xff8200");
	end;
	OnTimer310000:
	mapannounce (strnpcinfo(NPC_MAP),"Atualmente estamos em Juno. O Aeroplano sairá em breve.",bc_map,"0xff8200");
	end;
	OnTimer320000:
	donpcevent "#AirshipWarp-1::OnHide";
	donpcevent "#AirshipWarp-2::OnHide";
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está deixando o solo. Nosso próximo destino é Hugel.",bc_map,"0xca4bf3");
	end;
	OnTimer340000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Hugel.",bc_map,"0xca4bf3");
	end;
	OnTimer370000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Hugel.",bc_map,"0xca4bf3");
	end;
	OnTimer380000:
	$@airplanelocation = 3;
	donpcevent ("#AirshipWarp-1::OnUnhide");
	donpcevent ("#AirshipWarp-2::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Hugel. Tenha uma boa viagem.",bc_map,"0xca4bf3");
	end;
	OnTimer390000:
	mapannounce (strnpcinfo(NPC_MAP),"Atualmente estamos em Hugel. O Aeroplano sairá em breve.",bc_map,"0xca4bf3");
	end;
	OnTimer400000:
	donpcevent ("#AirshipWarp-1::OnHide");
	donpcevent ("#AirshipWarp-2::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está deixando o solo. Nosso próximo destino é Juno.",bc_map,"0xff8200");
	end;
	OnTimer420000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Juno.",bc_map,"0xff8200");
	end;
	OnTimer450000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Juno.",bc_map,"0xff8200");
	end;
	OnTimer460000:
	$@airplanelocation = 0;
	donpcevent ("#AirshipWarp-1::OnUnhide");
	donpcevent ("#AirshipWarp-2::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Juno. Tenha uma boa viagem.",bc_map,"0xff8200");
	end;
	OnTimer470000:
	mapannounce (strnpcinfo(NPC_MAP),"Atualmente estamos em Juno. O Aeroplano sairá em breve.",bc_map,"0xff8200");
	end;
	OnTimer480000:
	donpcevent ("#AirshipWarp-1::OnHide");
	donpcevent ("#AirshipWarp-2::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está deixando o solo. Nosso próximo destino é Einbroch.",bc_map,"0x00ff00");
	stopnpctimer;
	initnpctimer;
}

//-------------------------------------------------------------------
// - [ Rota: Izlude, Yuno ] -
//-------------------------------------------------------------------
airplane_01,243,73,0	script	#AirshipWarp-3	WARPNPC,1,1,{
	end;

	OnTouch:
	switch ($@airplanelocation2) {
		case 0: warp ("ra_fild12",292,204); end;
		case 1: warp ("izlude",200,56); end;
		case 2: warp ("yuno",12,261); end;
	}

	OnInit:
	OnHide:
	specialeffect (EF_BASH);
	disablenpc (strnpcinfo(PC_NAME));
	end;

	OnUnhide:
	enablenpc (strnpcinfo(PC_NAME));
	specialeffect (EF_SUMMONSLAVE);
	end;
}

airplane_01,243,29,0	duplicate(#AirshipWarp-3)	#AirshipWarp-4	WARPNPC,1,1

airplane_01,1,1,0	script	International_Airship	HIDDEN_NPC,{
	end;
	OnInit:
	OnEnable:
	initnpctimer;
	end;
	OnTimer25000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Izlude.",bc_map,"0x00ff00");
	end;
	OnTimer50000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Izlude.",bc_map,"0x00ff00");
	end;
	OnTimer60000:
	$@airplanelocation2 = 1;
	donpcevent ("#AirshipWarp-3::OnUnhide");
	donpcevent ("#AirshipWarp-4::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Izlude. Tenha uma boa viagem.",bc_map,"0x00ff00");
	end;
	OnTimer70000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos atualmente em Izlude. O Aeroplano vai decolar em breve.",bc_map,"0x00ff00");
	end;
	OnTimer80000:
	donpcevent ("#AirshipWarp-3::OnHide");
	donpcevent ("#AirshipWarp-4::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está decolando. Nosso próximo destino é Juno.",bc_map,"0x70dbdb");
	end;
	OnTimer105000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Juno.",bc_map,"0x70dbdb");
	end;
	OnTimer130000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Juno.",bc_map,"0x70dbdb");
	end;
	OnTimer140000:
	$@airplanelocation2 = 2;
	donpcevent ("#AirshipWarp-3::OnUnhide");
	donpcevent ("#AirshipWarp-4::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Juno. Tenha uma boa viagem.",bc_map,"0x70dbdb");
	end;
	OnTimer150000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos atualmente em Juno. O Aeroplano sairá em breve.",bc_map,"0x70dbdb");
	end;
	OnTimer160000:
	donpcevent ("#AirshipWarp-3::OnHide");
	donpcevent ("#AirshipWarp-4::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está deixando o solo. Nosso próximo destino é Rachel.",bc_map,"0xFF8200");
	end;
	OnTimer185000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos indo para Rachel.",bc_map,"0xFF8200");
	end;
	OnTimer210000:
	mapannounce (strnpcinfo(NPC_MAP),"Logo chegaremos em Rachel.",bc_map,"0xFF8200");
	end;
	OnTimer220000:
	$@airplanelocation2 = 0;
	donpcevent ("#AirshipWarp-3::OnUnhide");
	donpcevent ("#AirshipWarp-4::OnUnhide");
	mapannounce (strnpcinfo(NPC_MAP),"Bem-vindo(a) a Rachel. Tenha uma boa viagem.",bc_map,"0xFF8200");
	end;
	OnTimer230000:
	mapannounce (strnpcinfo(NPC_MAP),"Estamos atualmente em Rachel. O Aeroplano vai decolar em breve.",bc_map,"0xFF8200");
	end;
	OnTimer240000:
	donpcevent ("#AirshipWarp-3::OnHide");
	donpcevent ("#AirshipWarp-4::OnHide");
	mapannounce (strnpcinfo(NPC_MAP),"O Aeroplano está decolando. Nosso próximo destino é Izlude.",bc_map,"0x00ff00");
	stopnpctimer;
		/*++.moninv;
		if (.moninv == 7) {
			if (rand(1,3) == 3) {
				donpcevent "Airship#air02::OnEnable";
				end;
			}
			.moninv = 0;
		}*/
	initnpctimer;
	end;
}