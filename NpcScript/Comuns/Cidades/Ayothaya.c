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
| - Nota: Npcs comuns na cidade Ayothaya                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
ayothaya,189,120,3	script	Jovem Thang#ayo	4_M_THAIONGBAK,{
	mes "[Thang]";
	mes "Temos um terrível prédio antigo.";
	mes "Ninguém se atreve a chegar perto dele.";
	next;
	mes "[Thang]";
	mes "No passado, alguns curiosos entraram no edifício apesar das histórias terríveis sobre ele.";
	mes "E nunca voltaram.";
	mes "Fico imaginando o que acontece lá dentro... ";
	next;
	mes "[Thang]";
	mes "Mas, se você quiser provar a sua coragem para os outros.";
	mes "Seria uma ótima idéia desafiar um grande perigo... eu acho.";
	close;
}

// ------------------------------------------------------------------
ayothaya,171,152,5	script	Garota#ayo	4_F_THAIAYO,{
	mes "[Lalitha]";
	mes "Quando for a leste da vila, chegará às ruínas que outrora eram um templo.";
	mes "Agora são um ninho de monstros terríveis.";
	next;
	mes "[Lalitha]";
	mes "Se você pretende se aventurar nas ruínas, é melhor se preparar muito bem.";
	next;
	mes "[Lalitha]";
	mes "Ah, queria saber onde está o meu príncipe amaldiçoado.";
	close;
}

// ------------------------------------------------------------------
ayothaya,143,102,5	script	Velho Aldeão#ayo	4_M_THAIOLD,{
	mes "[Velho Aldeão]";
	mes "Hum hum... ";
	mes "Hã?";
	mes "Você deve ser de fora.";
	mes "Hum hum... você perguntou para onde estou indo?";
	mes "Estou indo pescar logo adiante.";
	next;
	mes "[Velho Aldeão]";
	mes "Hum... quer ouvir uma notícia interessante?";
	mes "Estão dizendo que alguém encontrou um anel dentro de um peixe que apanharam no pesqueiro!";
	mes "Eu também já ouvi falar que várias pessoas encontraram itens valiosos em peixes.";
	next;
	mes "[Velho Aldeão]";
	mes "Isso significa que, se tiver sorte, poderá se tornar um milionário pescando aqui...";
	mes "......hu hu hu...";
	next;
	mes "[Velho Aldeão]";
	mes "!? Ah... entrei para o mercado da pesca!";
	mes "Nossa... peguei um caminho totalmente errado...";
	mes "O pesqueiro é do outro lado.";
	mes "Huhuhu, já que entrei para o mercado da pesca não seria uma má idéia dar uma olhada ao redor.";
	mes "Huhuhuhu.";
	next;
	mes "[Velho Aldeão]";
	mes "Ah, os produtos aquáticos desse mercado são todos frescos e saborosos.";
	mes "Você tem de experimentar pelo menos uma vez, senão pode se arrepender.";
	mes "Huhu huhuhu...";
	close;
}

// ------------------------------------------------------------------
ayothaya,197,189,5	script	Jovem Kwan#ayo	4_M_THAIAYO,{
	mes "[Kwan]";
	mes "É melhor ser cuidadoso quando viajar fora da vila.";
	mes "Quando estiver fora, há as ruínas de um templo na floresta.";
	mes "Devo avisá-lo de que é um lugar muito perigoso para uma simples visita.";
	next;
	mes "[Kwan]";
	mes "Ouvi dizer que, se você tiver uma espécie de amuleto, poderá entrar no templo sem problemas...";
	next;
	mes "[Kwan]";
	mes "Mas sugiro que não vá lá.";
	mes "Espero que aproveite a sua viagem e não fique perambulando pelas áreas perigosas.";
	close;
}

// ------------------------------------------------------------------
ayothaya,214,142,5	script	Jovem Detzi#ayo	4_M_THAIONGBAK,{
	mes "[Detzi]";
	mes "Nós, homens jovens de Ayothaya, praticamos as tradicionais artes marciais para nos tornarmos mais fortes.";
	next;
	mes "[Detzi]";
	mes "Por que você não aprende artes marciais?";
	mes "Garanto que será de grande ajuda em sua viagem.";
	close;
}

// ------------------------------------------------------------------
ayothaya,241,264,5	script	Jovem Eik#ayo	4_M_THAIONGBAK,{
	mes "[Eik]";
	mes "Ei... você parece forte.";
	mes "Quer lutar comigo?";
	next;
	if (select("Claro!","Não") == 1) {
		mes "[Eik]";
		mes "Ei, ei, ei, estava brincando.";
		mes "Não sou tão rude a ponto de começar uma briga com estranhos sem nenhum motivo.";
		emotion e_wah;
		close;
	}
	mes "[Eik]";
	mes "O poder verdadeiro nasce de milhares de lutas.";
	mes "Não tenha medo de lutar.";
	emotion e_pif;
	close;
}