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
| - Script: Spell Master ?/?/?                                      |
| - Nota: Acesso a cidade Niflheim                                  |
\*-----------------------------------------------------------------*/

umbala,140,197,1	script	BungeeJump	HIDDEN_NPC,0,4,{
	OnTouch:
	switch(rand(1,3)) {
		case 1:
		percentheal (-50,0);
		mapannounce ("umbala","AAAAAAAAAAAAAA!!!!!!!!!!!!!!!!!!!!!!!!!",bc_map);
		warp ("umbala",145,166);
		end;
		case 2:
		mapannounce ("umbala","OOOOOOOOOOOOOO!!!!!!!!!!!!!!!!!!!!!!!!!",bc_map);
		warp ("umbala",145,166);
		end;
		case 3:
		percentheal (-99,0);
		mapannounce ("umbala","UUUUUOOOOOOOOOOOOOOOO!!!!!!!!!!!!!!!!!!!!",bc_map);
		warp ("nif_fild01",315,69);
		end;
	}
}