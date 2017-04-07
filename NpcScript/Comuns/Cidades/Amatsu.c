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
| - Nota: Npcs comuns na cidade Amatsu                              |
\*-----------------------------------------------------------------*/

amatsu,230,160,3	script	Donzela#ama	4_F_JPN2,{
	mes "[Yuuko]";
	mes "Eu sempre venho aqui buscar água neste poço, mas nunca faço isso quando o clima está chuvoso.";
	next;
	mes "[Yuuko]";
	mes "É que...";
	mes "Nesses dias é possível escutar alguém escalando as paredes do poço.";
	mes "Melhor nem lembrar...";
	close;
}

// ------------------------------------------------------------------
amatsu,179,107,4	script	John#ama	4_M_04,{
	mes "[John]";
	mes "Vo... Você não é daqui, certo?";
	mes "Percebi.";
	mes "Você é como eu.";
	next;
	mes "[John]";
	mes "Já faz uns cinco anos desde que eu vim para cá arriscar a sorte nos negócios. ";
	next;
	mes "[John]";
	mes "Eu pensei, 'Grande Oportunidade!'";
	mes "Quando se iniciou o comércio entre o Reino de Rune-Midgard e o Império de Amatsu.";
	next;
	mes "[John]";
	mes "Eu queria fazer algo diferente do que os outros faziam.";
	next;
	mes "[John]";
	mes "Então decidi vir para Amatsu para aprender os segredos da culinária local.";
	mes "Voltar para minha cidade e ficar rico preparando pratos exóticos. ";
	next;
	mes "[John]";
	mes "Mas quem disse que eu consegui?!";
	mes "Eu me apaixonei tanto pelo lugar que já estou aqui há bons cinco anos.";
	next;
	mes "[John]";
	mes "Eu gosto de conversar com os habitantes sempre neste local.";
	mes "Mas aí ele apareceu... ";
	next;
	mes "[John]";
	mes "Sabe ali? Do outro lado da rua?";
	mes "Desde que o Mestre do Sushi abriu sua loja, estou arruinado!";
	next;
	mes "[John]";
	mes "Eu vim em busca de um sonho em Amatsu, mas parece que agora ele acabou.";
	close;
}

// ------------------------------------------------------------------
amatsu,205,163,3	script	Mimi#ama	4_F_JPNCHIBI,{
	mes "[Mimi]";
	mes "Mimimi...";
	mes "Você viu a Miss Amatsu no porto?";
	mes "Ela não é liiiiinda?";
	next;
	mes "[Mimi]";
	mes "Eu quero participar do Concurso Miss Amatsu quando crescer!";
	next;
	mes "[Mimi]";
	mes "Eu sei que sou a mais mais mais bonita da cidade, só que as outras sempre se maquiam!";
	mes "Nhaa!";
	close;
}

// ------------------------------------------------------------------
amatsu,185,115,3	script	Homem Bêbado#ama	4_M_JPNOJI2,{
	mes "[Kosake]";
	mes "*hic*...";
	mes "Minha mulher é uma fera...";
	mes "*hic*...";
	mes "Eu não quero...";
	mes "*hic*...";
	mes "Voltar pra casa...";
	mes "*hic*";
	next;
	if (select("Pára de encher a cara e vai logo!","Opa! Pede um copo pra mim!") == 1) {
		mes "[Kosake]";
		mes "Quê?! Você já viu o tamanho da mão da minha esposa?";
		mes "*hic*...";
		mes "Você não tem noção do perigo!";
		mes "Quando ela era mais, nova, matou um tigre com as mãos!!";
		next;
		mes "[Kosake]";
		mes "Co...Co...";
		mes "Só lembro que o nome da cidade começa assim!";
		mes "Ela me deu uma surra porque eu perdi uns trocados jogando lá...";
		mes "*hic*";
		next;
		mes "[Kosake]";
		mes "A vida... É uma... Droga...";
		mes "Eu deveria... Ter apostado";
		mes "No ... *hic*.... Nove...";
		mes "....z......Z.....z.....";
		mes "...zZz....ZzZ....RONC..";
		close;
	}
	mes "[Kosake]";
	mes "Mwahaha... Muito bom...";
	mes "*hic*...";
	mes "Mas, escuta...*hic*";
	mes "Esse copo é só meu...";
	mes "Mwhahaha...";
	next;
	mes "[Kosake]";
	mes "Mas se você pagar a próxima garrafa...";
	mes "*hic*";
	mes "Podemos negociar..hehehe.";
	close;
}

// ------------------------------------------------------------------
amatsu,217,179,1	script	Vovó Hatsue#ama	4_F_JPNOBA2,{
	mes "[Hatsue]";
	mes "Eu estou preocupada com meu marido.";
	mes "Ele perdeu nossas economias numa cidade hoje.";
	next;
	mes "[Hatsue]";
	mes "Eu fiquei furiosa e... Bati nele!";
	mes "Se eu o conheço bem, deve ter ido encher a cara.";
	close;
}

// ------------------------------------------------------------------
amatsu,287,266,3	script	Jyaburo#ama	4_M_JPNOJI,{
	mes "[Jyaburo]";
	mes "Este lugar me lembra a minha amada esposa.";
	next; 
	mes "[Jyaburo]";
	mes "Foi ali, embaixo daquela grande árvore, que eu confessei o meu amor.";
	mes "Eu realmente não fazia idéia que ela sentia o mesmo por mim.";
	next;
	mes "[Jyaburo]";
	mes "Depois daquele dia, tivemos muitas conversas aqui.";
	mes "O melhor lugar para nós dois.";
	mes "Sereno e tranqüilo.";
	mes "Bons tempos aqueles.";
	next;
	mes "[Jyaburo]";
	mes "Quando fecho meus olhos, consigo visualizar alguns momentos como se fossem ontem...";
	mes "Huhu..";
	next;
	mes "[Jyaburo]";
	mes "Minha amada esposa se foi.";
	mes "Desde então faço minha jornada solitário até aqui.";
	mes "Sinto como se ela estivesse aqui, me esperando.";
	next;
	mes "[Jyaburo]";
	mes "Enquanto você escutava a minha história, você tinha alguém em mente?";
	mes "Se tinha, não se contenha para mostrar o que sente.";
	next;
	mes "[Jyaburo]";
	mes "A vida deveria ter um fundo musical para dançarmos para sempre ao lado da pessoa amada.";
	mes "Deixe o sofrimento de lado e busque a felicidade todos os dias.";
	close;
}

// ------------------------------------------------------------------
amatsu,269,221,1	script	Casamenteira#ama	4_F_JPN,{
	mes "[Hutari Shioko]";
	mes "Prazer em conhece-lo.";
	mes "Meu nome e Hutari Shioko.";
	mes "Meu hobby e ouvir musica.";
	mes "Eu gosto muito de musica classica.";
	next;
	mes "[Hutari Shioko]";
	mes "Existe uma historia sobre a colina que fica em nossa cidade.";
	mes "Voce quer conhece-la?";
	next;
	mes "[Hutari Shioko]";
	mes "Se voce pedir alguem em casamento sob aquela árvore.";
	mes "Você e sua amada serao felizes para sempre.";
	next;
	mes "[Hutari Shioko]";
	mes "Mas perceba que nao basta fazer o pedido a qualquer momento.";
	mes "Deve ser feito em uma noite de sabado. ";
	next;
	mes "[Hutari Shioko]";
	mes "E tambem, depois do pedido no sabado a noite.";
	mes "Você deve receber a resposta dela ate a noite de domingo.";
	next;
	emotion (e_lv2);
	mes "[Hutari Shioko]";
	mes "Se voce gosta de alguem...";
	mes "Por que nao fazer o pedido de casamento sob aquela árvore?";
	mes "Isso trara muita felicidade a voces.";
	close;
}

// ------------------------------------------------------------------
amatsu,243,202,3	script	Professora de Teatro#ama	4_F_JPNOBA2,{
	mes "[Garakame sensei]";
	mes "Esse e um lindo lugar com suas eternas flores, as Sakuras.";
	mes "Essa cidade e, tambem, o local de origem da famosa peca, 'A Driade Branca'...";
	next;
	if (Sex == SEX_MALE) {
		mes "[Garakame sensei]";
		mes "Se voce conhecer alguma garota que tenha talento como atriz, por favor mande ela aqui.";
		mes "Ha muito tempo procuro uma garota que possa interpretar 'A Driade Branca'.";
		next;
		mes "[Garakame sensei]";
		mes "'A Driade Branca' e uma ninfa da cerejeira...";
		mes "E muito dificil encontrar uma garota que consiga interpretar 'A Driade Branca'...";
		close;
	}
	emotion (e_gasp);
	mes "[Garakame sensei]";
	mes "Voce esta interessada em teatro?";
	mes "Eu preciso de alguem que seja mais que isso.";
	next;
	mes "[Garakame sensei]";
	mes "Quando voce sobe em um palco, voce deve se tornar o personagem.";
	mes "Voce deve vestir a mascara e tocar a audiencia.";
	next;
	mes "[Garakame sensei]";
	mes "Eu poderia dizer que a sua vida e um grande teatro, estou certo?";
	mes "Aproveite a vida como ela e e me procure novamente algum dia.";
	close;
}

// ------------------------------------------------------------------
amatsu,283,203,1	script	Bonubonu#ama2	HIDDEN_NPC,{
	emotion (e_swt2);
	mes "[Bonubonu]";
	mes "Aquela árvore na colina e uma árvore muito antiga.";
	mes "E uma grande cerejeira de flores eternas.";
	next;
	emotion (e_swt2);
	mes "[Bonubonu]";
	mes "Alem disso, ela tem grandes poderes.";
	mes "Sempre que estou triste ou angustiado, eu costumo me sentar sob aquela árvore, ";
	mes "E toda a tristeza e angustia se vao...";
	next;
	emotion (e_swt2);
	mes "[Bonubonu]";
	mes "Aquela e uma árvore milagrosa que faz as pessoas esquecerem toda a tristeza.";
	next;
	emotion (e_swt2);
	mes "[Bonubonu]";
	mes "Quando estiver triste ou angustiado, experimente sentar sob aquela árvore. ";
	mes "Os poderes dela sao milagrosos...";
	close;
}

// ------------------------------------------------------------------
amatsu,274,178,7	script	Veterinario#ama	4_M_JOB_WIZARD,{
	mes "[Sakura Seiichi]";
	mes "Ah... Nao, eu nao sou um louco.";
	mes "Nao tenha medo.";
	mes "Eu sou um simples veterinario.";
	mes "Meu trabalho e tratar e curar animais doentes.";
	next;
	mes "[Sakura Seiichi]";
	mes "Por sinal...";
	mes "Voce conhece a historia da cerejeira da colina...";
	mes "Aposto que ainda nao ouviu falar nela.";
	next;
	mes "[Sakura Seiichi]";
	mes "Aquela árvore tem um segredo para manter sua forca e vitalidade.";
	mes "O segredo e... ";
	mes "Existem pessoas enterradas sob as raizes daquela árvore...";
	next;
	if (select("Mas isso nao e triste? Pobres pessoas...","Nah, isso e loucura...") == 1) {
		mes "[Sakura Seiichi]";
		mes "Hehehe... Poderia ser...";
		mes "Por sinal, voce gostaria de fazer uma aposta...?";
		next;
		emotion (e_dots);
		mes "[Sakura Seiichi]";
		mes "Se eu..........";
		mes "............";
		mes ".........";
		next;
		mes "^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.";
		mes "Ate que nao se ouvia mais nem um suspiro.";
		mes "Por mais que se tente, nao possivel nem lembrar sobre o que ele falava...^000000";
		close;
	}
	mes "[Sakura Seiichi]";
	mes "Nao posso fazer muito se e isso que achas...";
	mes "Tenha cuidado.";
	mes "Um dia, podera acontecer com voce...";
	next;
	emotion (e_dots);
	mes "[Sakura Seiichi]";
	mes "Haha... Hahaha.....";
	mes "...............";
	mes "...........";
	next;
	mes "^3355FFSua voz foi ficando cada vez mais baixa enquanto o vento soprava.";
	mes "Ate que nao se ouvia mais nem um suspiro.";
	mes "Por mais que se tente, nao possivel nem lembrar sobre o que ele falava...^000000";
	close;
}

// ------------------------------------------------------------------
amatsu,262,197,1	script	Árvore Lendária	HIDDEN_NPC,{
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "^3355FFHavia uma cerejeira na colina.";
	mes "Ela não se parece com as outras arvores.";
	mes "Essa arvore parece ter muitas historias para contar.^000000";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "^3355FFHaverão pessoas morando aqui?";
	mes "Eu dou uma olhada ao redor e vejo alguem lá embaixo.";
	mes "Vou perguntar sobre esta arvore.^000000";
	close;
}