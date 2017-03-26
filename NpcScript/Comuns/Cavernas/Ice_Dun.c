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
| - Nota: Npcs comuns na Caverna de Gelo                            |
\*-----------------------------------------------------------------*/

ice_dun04,33,166,3	script	Garoto congelado#ice	4_M_FROZEN,{
	cutin "ra_sboy.bmp",2;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Este garoto deve ser o que Ktullanux tenta proteger.";
	next;
	mes "- O garoto está congelado dentro de uma grande pedra de gelo e parece mais que ele está dormindo do que morto. -";
	next;
	mes "- Você se sente congelando ao se aproximar da grande pedra de gelo que prende o garoto,";
	mes "- mas por alguma razão, você sente uma força misteriosa vindo da pedra. -";
	next;
	mes "- O garoto parece ser branco como a neve, e bonito da cabeça aos pés. -";
	next;
	mes "- Você se pergunta porquê um jovem garoto teve de ser confinado nesta caverna isolada, -";
	mes "- você instintivamente sabe que nenhuma magia no mundo seria capaz de libertá-lo desta pedra de gelo. -";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "O que aconteceu a este garoto?";
	close2;
	cutin "",255;
	end;
}