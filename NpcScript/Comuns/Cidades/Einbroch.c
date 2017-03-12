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
| - Nota: Npcs comuns na cidade einbroch                            |
\*-----------------------------------------------------------------*/

einbroch,94,267,3	script	Funcionário#ein01	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Einbroch.";
	mes "Utilize essa porta para embarcar no digirível que te leva para Juno, Lighthalzen e Hugel na República de Schwarzwald.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Caso seja Einbroch o seu destino, desça as escadas e fale com nossa Equipe de Recepção para levá-lo até o terminal principal.";
	mes "Obrigado, e tenha um voo agradável.";
	close;
}