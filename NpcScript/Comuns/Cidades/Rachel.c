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
| - Nota: Npcs comuns na cidade Rachel                              |
\*-----------------------------------------------------------------*/

rachel,124,132,1	script	Cidadão#rac 	4_M_CHILD1,{
	mes "[Cidadão]";
	mes "Freya te abençoe e te dê muita saúde, riqueza, alegria e felicidade!";
	next;
	mes "[Cidadão]";
	mes "Freya é a Deusa do amor e da beleza.";
	mes "Você acha que se eu rezar bastante, ela vai me ajudar a encontrar uma namorada bem bonita?";
	close;
}

// ------------------------------------------------------------------
rachel,74,150,7	script	Garota#rac	4_F_CHILD,{
	mes "[Garota]";
	mes "Eu nunca vi nossa papisa antes, eu ouvi que ela tem cabelo louro prateado e pele muito branca.";
	mes "Papai diz que apenas uma garota é como aquela em toda geração.";
	next;
	mes "[Garota]";
	mes "Meu papai diz que a papisa é muito especial para nós porque ela é Freya.";
	mes "Eu quero dizer, Freya é uma deusa.";
	mes "Mas ela também se tranforma em gente como nós para conversar conosco.";
	mes "Bem, só com os sacerdotes...";
	next;
	mes "[Garota]";
	mes "Eu não sei de tudo, mas parece que ela é uma princesa secreta.";
	mes "Isso não parece tão legal?";
	mes "Mas quando eu digo isso pro meu pai, ele fica bravo comigo!";
	mes "Ah, bom.";
	close;
}

// ------------------------------------------------------------------
rachel,144,243,5	script	Guarda#rac::ChesGuard	4_M_RASWORD,{
	mes "[Guarda de Cheshrumnir]";
	mes "Você está no Cheshrumnir, os terrenos santificador ocupados por nossa papisa.";
	mes "A incarnação mortal de Freya.";
	mes "Em a respeito pela excelência, eu espero que você entre com um coração devoto.";
	close;
}
rachel,155,243,3	duplicate(ChesGuard)	Guarda#rac2	4_M_RASWORD

// ------------------------------------------------------------------
rachel,268,120,1	script	Guarda#rac3::RaGuard	4_M_RASWORD,{
	mes "[Guarda de Rachel]";
	mes "Bem-Vind"+(Sex?"o":"a")+" à Rachel a capital de Arunafeltz.";
	mes "Por favor peça ao nosso guia no centro da cidade informações e serviços para visitantes.";
	close;
}
rachel,125,33,5	duplicate(RaGuard)	Guarda#rac4	4_M_RASWORD
rachel,31,130,3	duplicate(RaGuard)	Guarda#rac5	4_M_RASWORD

// ------------------------------------------------------------------
rachel,209,198,3	script	Criança#rac	4_M_CHILD1,{
	mes "[Criança]";
	mes "Se você abrir esta porta, você pode entrar nesta casa, e morar em um dos quartos!";
	mes "Então, você pode colocar seus sofás e uma cama e todas as suas coisas!";
	next;
	mes "[Criança]";
	mes "Tudo que você tem que fazer é...";
	mes "Ugh!";
	mes "Virar esta maçaneta e... Grrrrah!";
	mes "Abrir esta porta...";
	mes "Mas é quase impossível...";
	close;
}

// ------------------------------------------------------------------
rachel,127,117,4	script	Criança#rac2	4_F_CHILD,{
	mes "[Criança]";
	mes "Apesar de que nós rezamos para a deusa Freya e peçamos para ela todo tipo de coisas.";
	mes "Não podemos esperar que ela faça tudo para nós.";
	next;
	mes "[Criança]";
	mes "Como humanos, é nossa responsabilidade fazer tudo que estiver a nosso alcance para conceber nossa própria felicidade.";
	mes "Nós acreditamos que se é a vontade de Freya, então será realizada.";
	next;
	emotion e_what;
	mes "[Criança]";
	mes "Eu sei que pode parecer um pouco confuso para um forasteiro.";
	mes "A ideia de ser confiante em nossa Deusa em vez de ser em nós mesmos.";
	close;
}

// ------------------------------------------------------------------
rachel,260,175,3	script	Anku#rac	4_F_CHILD,{
	mes "[Anku]";
	mes "Faz tanto tempo já!";
	mes "Eu não consigo encontrar Himuhimu!";
	mes "Esconde-esconde não deveria levar tanto tempo...";
	next;
	mes "[Anku]";
	mes "Ah, já estou co fome...";
	mes "Himuhimu, saia daí para que a gente possa ir pra casa e comer!";
	mes "Himuhimu! Eu desisto!";
	mes "H-Himuhimu...?";
	close;
}

// ------------------------------------------------------------------
rachel,272,141,3	script	Himuhimu#rac	4_M_CHILD1,{
	mes "[Himuhimu]";
	mes "Zzzz...Z...";
	mes "Anku, você nunca vai me encontr...";
	mes "Nunca encontrar eu aqui... Zzzzz...";
	mes "... Que fome...";
	close;
}

// ------------------------------------------------------------------
rachel,76,77,3	script	Sacerdote#rac	4_M_MASK,{
	mes "[Sacerdote de Rachel]";
	mes "Bwahahaha!";
	mes "De alguma forma, a bebida tem um gosto muito melhor na hora do serviço!";
	close;
}

// ------------------------------------------------------------------
rachel,206,30,3	script	Sacerdote#rac2	4_F_TRAINEE,{
	mes "[Sacerdote de Freya]";
	mes "Isto...";
	mes "Me aborrece...";
	next;
	mes "[Sacerdote de Freya]";
	mes "Você!";
	mes "Entretenha-me!";
	emotion e_ag;
	next;
	if (select("O quê? Você não pode me dizer o que fazer!","Você sabe disto.") == 1) {
		mes "[Sacerdote de Freya]";
		mes "Ah. Isto tudo é";
		mes "verdade, eu suponho.";
		close;
	}
	mes "[Sacerdote de Freya]";
	mes "Bem, então, o que você vai fazer para me entreter?";
	next;
	if (select("Aqui está uma história engraçada...","Eu vou fazer o que você quer que eu faça.") == 1) {
		mes "^3355FFVocê contou a ela a primeira história engraçada que você pôde lembrar.^000000";
		specialeffect2 EF_TALK_FROSTJOKE;
		next;
		mes "[Sacerdote de Freya]";
		mes "Isto é supostamente engraçado?";
		mes "Eu suponho que não entendo humor popular.";
		close;
	}
	mes "[Sacerdote de Freya]";
	mes "Bom, bom.";
	mes "Oh? Oh!";
	mes "Isto é maravilhoso!";
	close;
}

// ------------------------------------------------------------------
rachel,201,174,3	script	Discípulo#rac	4_M_MASK1,{
	mes "[Discípulo de Freya]";
	mes "Todos nós de Arunafeltz acreditamos na Deusa Freya.";
	mes "Mas há alguns de nós que estão mais seriamente envolvidos em adoração e veneração.";
	next;
	mes "[Discípulo de Freya]";
	mes "Primeiro, há 'Discípulos de Freya,' homens e mulheres como eu que se vestem com máscaras sagradas e mantos.";
	mes "Eu percebo que nossa roupa pode parecer um pouco peculiar pra você, mas este é o nosso jeito.";
	next;
	mes "[Discípulo de Freya]";
	mes "Então, tem os Sacerdotes que se vestem em mantos flutuantes limpos e brancos.";
	mes "Eles trabalham no templo e servem a comunidade como líderes religiosos.";
	next;
	mes "[Discípulo de Freya]";
	mes "Entre estes sacerdotes estão os Sumo Sacerdotes que diretamente assistem nossa papisa.";
	mes "Eles usam roupas mais coloridas em sinal de seu nível social elevado em Rachel.";
	next;
	mes "[Discípulo de Freya]";
	mes "Todos nós trabalhamos incessantemente para trazer prosperidade para Arunafeltz, e efetuar os ensinamentos de nossa amada deusa Freya.";
	close;
}

// ------------------------------------------------------------------
rachel,197,137,3	script	Bardo#rac	1_M_BARD,{
	mes "[Bardo]";
	mes "Eu vaguei por esta terra, cantando minha canção.";
	mes "Procurando por alguém para acalmar meu coração.";
	next;
	mes "[Bardo]";
	mes "Posso eu satisfazer esta esperança?";
	mes "Encontrando a garota com pele branca em um tom de lírios na Torre de Pizza.";
	mes "Sim, Estou falando da papisa...";
	mes "Papisa, Papisa....";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Você deve estar fora de si cantando este tipo de música aqui em Arunafeltz!";
	next;
	mes ".........";
	mes ".........";
	mes ".........";
	emotion e_sob;
	close;
}