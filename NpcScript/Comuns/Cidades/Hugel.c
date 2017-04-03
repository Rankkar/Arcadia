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
| - Nota: Npcs comuns na cidade Hugel                               |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
hugel,189,143,5	script	Jovem#hug	4_M_HUMAN_01,{
	mes "[Jovem]";
	mes "Então aquela bolsa de ar gigante pode fazer as pessoas flutuarem no ar?";
	mes "Será que se eu encher minha barriga com vento também funciona assim?";
	close;
}

// ------------------------------------------------------------------
hugel,126,151,3	script	Emily#hug	4_F_01,{
	mes "[Emily]";
	mes "Eu me sinto tão feliz por viver nesta calma e pequena cidade.";
	mes "É tão bonita e todos são tão legais.";
	next;
	mes "[Emily]";
	mes "Por algum motivo, minha irmã mais velha quer se mudar de Hugel assim que puder.";
	mes "Ela diz que está ficando louca por causa das pessoas que vivem aqui.";
	mes "Não acha que isso é estranho?";
	close;
}

// ------------------------------------------------------------------
hugel,86,165,5	script	Kayplas#hug	4_M_HUBOY,{
	mes "[Kayplas]";
	mes "Ah, eu realmente quero aquela garrafa vermelha.";
	mes "Eu devia pedir para a minha mãe me comprar uma.";
	mes "Ela não parece ser muito cara, parece?";
	close;
}

// ------------------------------------------------------------------
hugel,71,197,3	script	Lisa#hug	4_F_01,{
	mes "[Lisa]";
	mes "Hugel é uma pequena vila residencial.";
	mes "Todo mundo se conhece, todos sabem o que os outros estão fazendo.";
	mes "É tão sufocante!";
	next;
	mes "[Lisa]";
	mes "Não há privacidade em cidades pequenas.";
	mes "Algum dia eu vou embora e vou viver na cidade grande. ";
	close;
}

// ------------------------------------------------------------------
hugel,169,112,5	script	Velha Nikki#hug	4_F_HUGRANMA,{
	mes "[Velha Nikki]";
	mes "Você não deve ser daqui.";
	mes "Ah, você é um aventureir"+(Sex?"o":"a")+", certo?";
	mes "E você sabe como eu sei?";
	next;
	mes "[Velha Nikki]";
	mes "É porque todo mundo que vive aqui começa a ter a mesma aparência após algum tempo.";
	mes "E você certamente não parece tão velho quanto nós.";
	mes "Bem, tenha um bom dia, aventureiro.";
	close;
}

// ------------------------------------------------------------------
hugel,175,115,5	script	Marius#hug	4_M_HUGRANFA,{
	mes "[Marius]";
	mes "Sim, eu sou um velho, mas eu posso vencer um paspalho como você em qualquer dia da semana!";
	mes "Você sabe, Hugel tem uma expectativa de vida muito maior do que as outras cidades.";
	mes "Quer saber por quê?";
	next;
	mes "[Marius]";
	mes "É porque os velhos desta cidade se recusam a deitar e morrer!";
	mes "Agora, vamos!";
	mes "Deixe-me mostrar como eu sou forte!";
	mes "Vamos lutar ou algo assim, garot"+(Sex?"o":"a")+".";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
hu_in01,111,386,4	script	Chris#hug	4_M_04,{
	mes "[Chris]";
	mes "Você sabe, as pessoas não lutam com monstros perigosos.";
	mes "Elas só se protegem usando armaduras.";
	mes "É só o jeito deles.";
	next;
	mes "[Chris]";
	mes "Se você quer comprar alguma armadura melhor, então eu sugiro que vá comprar em uma cidade maior.";
	close;
}

// ------------------------------------------------------------------
hu_in01,18,94,0	script	Assistente Temporário#hug	1_M_03,{
	mes "[Luda]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Escritório da Expedição ao Templo.";
	mes "Eu sou Luda, um assistente temporário.";
	mes "Meu trabalho é manter o escritório arrumado e limpo, mas veja só este lugar!";
	next;
	mes "[Luda]";
	mes "Ainda assim, eu acho que posso cuidar dessa tarefa.";
	mes "Esta sala é o escritório da equipe da Repúlica de Schwaltzvalt, e a outra é da equipe de Rune-Midgard.";
	next;
	mes "[Luda]";
	mes "Eu tenho que limpar as duas salas, então estou sempre muito ocupado.";
	mes "Por que você não se alista como voluntário para a expedição?";
	next;
	mes "[Luda]";
	mes "Eu sei que eles não podem pagar a você.";
	mes "Mas é uma grande chance de explorar.";
	close;
}

// ------------------------------------------------------------------
hu_in01,26,77,4	script	Assistente Temporário#hug2	1_M_04,{
	mes "^3355FFEste temporário está completamente desgostoso com essa tarefa de organizar livros e arquivos.^000000";
	close;
}