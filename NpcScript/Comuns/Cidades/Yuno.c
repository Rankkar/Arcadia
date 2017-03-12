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
| - Nota: Npcs comuns na cidade Juno (yuno)                         |
\*-----------------------------------------------------------------*/

yuno,14,262,5	script	Funcionário#yuno01	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirigível que voa até Izlude dentro do Reino de Rune-Midgard.";
	mes "E para Rachel na República de Arunafeltz.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, desça as escadas e peça para a Equipe de Recepção levá-lo até o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,88,263,3	script	Funcionário#yuno02	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirigível que voa até Einbroch, Lighthalzen e Hugel na República de Schwaltzvalt.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, desça as escadas e peça para a Equipe de Recepção levá-lo até o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}