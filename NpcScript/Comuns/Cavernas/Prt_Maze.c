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
| - Nota: Npcs comuns no Labirinto da Floresta                      |
\*-----------------------------------------------------------------*/

prt_maze02,100,69,0	script	Soldado#pront	8W_SOLDIER,{
	mes "[Soldado]";
	mes "Se eu fosse você, não entraria nessa floresta...";
	mes "Olhe para o chão...";
	mes "Só dá pra ver pegadas entrando, nenhuma saindo!";
	close;
}

//-------------------------------------------------------------------
prt_maze02,110,69,0	script	Soldado#2pront	8W_SOLDIER,{
	mes "[Soldado]";
	mes "Eu já vi jovens demais entrarem nesta floresta e não sairem nunca mais...";
	mes "Eu nunca arriscaria minha vida desse jeito, mas cada um leva a vida que quer.";
	close;
}