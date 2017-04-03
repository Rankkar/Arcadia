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
| - Nota: Npcs comuns nos Campos de Rachel                          |
\*-----------------------------------------------------------------*/

ra_fild12,45,230,3	script	Guia do Dirigível#rafild	4_M_RASWORD,{
	mes "[Guia do Dirigível]";
	mes "O serviço de Dirigível internacional da República de Schwaltzvalt para Arunafeltz só pode ser acessado em Rachel.";
	mes "Por favor";
	mes "siga a marca no seu Mini-Mapa para encontrar o Aeroporto.";
	viewpoint 1,293,208,1,0xFF0000;
	close;
}

// ------------------------------------------------------------------
ra_fild12,283,208,3	script	Criança#rafild	4_F_CHILD,{
	mes "[Papaii]";
	mes "Bem, Rachel costumou ser um deserto até que nossa divindade guiou nossos ancestrais para esta terra.";
	mes "Eles cultivaram o deserto com a graça de Freya, e fizeram esta área habitável.";
	next;
	mes "[Papaii]";
	mes "Tudo que você vê aqui foi criado artificialmente pelos humanos.";
	mes "Vê? As bênçãos de Freya certamente nos habilitou a fazer coisas miraglosas.";
	mes "Você verá quando entrar na capital.";
	close;
}