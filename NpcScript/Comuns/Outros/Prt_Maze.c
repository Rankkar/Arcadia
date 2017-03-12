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
| - Por: eAthena/rAthena/Hercules                                   |
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