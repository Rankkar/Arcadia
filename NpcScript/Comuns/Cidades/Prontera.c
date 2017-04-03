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
| - Nota: Npcs comuns na cidade prontera                            |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [Ruas]
//-------------------------------------------------------------------

prontera,160,330,4	script	Guarda#pront::prtguard	8W_SOLDIER,{
	mes "[Guarda de Prontera]";
	mes "Bem vindo a prontera.";
	close;
}
prontera,223,99,1	duplicate(prtguard)	Guarda#2pront	8W_SOLDIER
prontera,229,104,5	duplicate(prtguard)	Guarda#3pront	8W_SOLDIER
prontera,47,339,5	duplicate(prtguard)	Guarda#4pront	8W_SOLDIER

//-------------------------------------------------------------------
prontera,101,288,3	script	Shuger#pront	4W_M_02,{
	mes "[Shuger]";
	mes "Fora dos portões da cidade, há um bixinho rosa chamado ^000077Poring^000000.";
	next;
	mes "[Shuger]";
	mes "Apesar de ser bonito na aparência e não atacar as pessoas, Porings são conhecidos por devorar itens caidos no chão para dentro deles.";
	next;
	mes "[Shuger]";
	mes "Portanto, se há algo no chão que você queira pegar, tenha cuidado para que não seja consumido por um Poring.";
	mes "Apesar de que...";
	mes "Porings são muito fracos...";
	next;
	mes "[Shuger]";
	mes "O de cor verde se chama ^000077Poporing^000000 ele é mais resistente que o Poring.";
	mes "Novatos geralmente cometem o erro de atacá-lo sem saberem que ele é muito forte...";
	mes "Por isso tenha cuidado!";
	close;
}

//-------------------------------------------------------------------
prontera,54,240,6	script	Tono#pront	4W_M_01,{
	mes "[Tono]";
	mes "Você sabia?";
	next;
	mes "[Tono]";
	mes "O Fabre é a larva dos Creamys.";
	mes "Quando o Fabre amadurece, ele se fecha num Casulo";
	next;
	mes "[Tono]";
	mes "Após permanecer no Casulo por algum tempo, ele torna-se um Creamy, uma espécie de borboleta, bem mais forte do que um Fabre comum.";
	next;
	mes "[Tono]";
	mes "Há um outro monstro que passa por uma dessas evoluções também...";
	mes "O Picky.";
	next;
	mes "[Tono]";
	mes "Pickys são muito bonitinhos quando jovens, mas quando crescem, se transformam em tipo de passáro enorme, muito desajeitado chamado Peco Peco.";
	mes "Na verdade...";
	mes "Falar sobre puberdade é estranho.";
	close;
}

//-------------------------------------------------------------------
prontera,106,116,6	script	Merideth#pront	4_F_02,{
	mes "[Merideth]";
	mes "O tempo estava bom no meu dia de folga então minha família e eu fomos a um piquenique.";
	mes "Nós escolhemos ir para uma área um pouco isolada onde nós vimos algo realmente interessante...";
	next;
	mes "[Merideth]";
	mes "Foi um grande grupo de zangões gigantes!";
	mes "O mais estranho de tudo era que eles eram todos controlados por uma tao de Abelha Rainha, seguindo cada comando seu.";
	next;
	mes "[Merideth]";
	mes "Eles podem ser apenas insetos, mas acho que eles estavam certos.";
	mes "Homens realmente deveria receber comandos a partir de nós mulheres...";
	mes "Nós fazemos as coisas direito!";
	close;
}

//-------------------------------------------------------------------
prontera,160,133,2	script	YuPi#pront	8_F,{
	mes "[YuPi]";
	mes "Entre monstros da mesma forma, existem alguns mais ferozes que outros.";
	mes "Um exemplo são Porings e Poporings, que tem a mesma forma, mas forças diferentes.";
	mes "É bom tomar cuidado ao atacar algum deles, pois você pode ser da mal.";
	next;
	mes "[YuPi]";
	mes "Normalmente, você pode determinar qual é qual pela diferença de cores.";
	mes "Como eu disse, tomar cuidado é sempre bom, então cheque os nomes dos inimigos antes de atacar.";
	close;
}

//-------------------------------------------------------------------
prontera,149,202,2	script	YuNa#pront	8_F_GIRL,{
	mes "[YuNa]";
	mes "Odin é o mais poderoso dos Deuses, o todo-poderoso, o lorde dos Aesir.";
	mes "Ele é um Deus guerreiro e muito Sábio.";
	mes "Para conseguir sua sabedoria sem-limites, Odin bebeu da água do poço de Imir, e para isso teve de perder um de seus olhos.";
	mes "Isso mostra sua incrível coragem e determinação!";
	mes "Aquela estátua no centro da fonte é Odin.";
	next;
	mes "[YuNA]";
	mes "Olhe!";
	mes "Ele não está usando seu capacete de águia, não tem barba, e nem está montado em Sleipnir, seu poderoso cavalo de oito patas!";
	mes "Isso é um ultraje!";
	mes "Eu não sei como o Rei aprovou essa estátua como o principal monumento de nossa cidade!";
	close;
}

//-------------------------------------------------------------------
prontera,78,150,3	script	Dairenne#pront	4_F_01,{
	mes "[Menina da Cidade]";
	mes "Ahh...";
	mes "As ruas ficam lotadas nos dias de hoje.";
	mes "*Tosse Tosse*";
	mes "Olhe para toda essa poeira, nem tudo sobre morar na capital é bom.";
	mes "De qualquer forma, eu posso ajudá-lo?";
	next;
	if (select("Conversar","Ir Andando") == 1) {
		mes "[Menina da Cidade]";
		mes "Gostaria de saber se você também é interessado em moda ou em vestidos.";
		mes "*Risos*.";
		mes "Nesta estação de calor o tema colorido é definitivamente perfeito.";
		mes "Vestidos extravagantes e magníficos podem ser a sua cara.";
		next;
		mes "[Menina da Cidade]";
		mes "Para obter tais cores deslumbrantes ouvi dizer que as alfaiates usam um corante que só é fabricado em Morroc.";
		mes "O pior de tudo é saber que o preço está além da imaginação.";
		next;
		mes "[Menina da Cidade]";
		mes "Aahhhh...";
		mes "Eu gostaria de poder usar um vestido.";
		mes "Mesmo que seja apenas uma vez...";
		close;
	}
	mes "[Menina da Cidade]";
	mes "Hm...?";
	mes "Por que você não fala comigo primeiro?";
	mes "Que pessoa estranha...";
	close;
}


//-------------------------------------------------------------------
// - [Casas]
//-------------------------------------------------------------------
prt_in,178,92,0	script	Bibliotecário Mestre#pront	1_M_LIBRARYMASTER,{
	mes "[Bibliotecário Mestre]";
	mes "Aqui, no ramo ocidental da Biblioteca de Prontera, ";
	mes "mantemos registros de monstros encontrados em vários cavernas espalhadas por todo o reino de Rune-Midgard.";
	next;
	mes "[Bibliotecário Mestre]";
	mes "Você verá que nossas enciclopédias de monstros são de grande conveniência,";
	mes "nós organizamos as informações das criaturas pelo lugar em que residem.";
	next;
	mes "[Bibliotecário Mestre]";
	mes "Devo dizer que este lugar é uma das referência mais úteis para vocês aventureiros.";
	mes "Ao lidar com monstros é bom estar sempre informado para saber contra o que você luta.";
	mes "Agora, ee você quiser de procurar por registros de monstros organizados por suas propriedades.";
	mes "Por favor visite a parte oriental de nossa biblioteca.";
	close;
}

//-------------------------------------------------------------------
prt_in,175,50,0	script	Bibliotecária#pront	1_F_LIBRARYGIRL,{
	mes "[Bibliotecária Ellen]";
	mes "Bem-vindo!";
	mes "Os dados nesta biblioteca estão separados pelos nomes dos monstros.";
	mes "Você pode ler livros e escritas de seu interesse aqui.";
	mes "Aqui também existem livros sobre as classes dos Ferreiros e Mercadores.";
	next;
	mes "Ah!";
	mes "A próxima biblioteca também é muito interessante.";
	mes "Visite-a se puder.";
	close;
}

//-------------------------------------------------------------------
prt_in,47,141,0	script	Idoso#pront	1_M_KNIGHTMASTER,{
	mes "[Idoso]";
	mes "Os Esgotos de Prontera ficaram vazios por um longo tempo.";
	mes "Agora o lugar está infestado de ^000077Besouros Ladrões^000000!";
	next;
	mes "[Idoso]";
	mes "Estes insetos conseguem roubar rapidamente itens que caem no chão, e depois fogem com eles...";
	mes "Eles são ainda mais irritante do que as baratas!!";
	close;
}

//-------------------------------------------------------------------
prt_in,26,31,0	script	Idoso#2pront	1_M_JOBGUIDER,{
	mes "[Idoso]";
	mes "Você pode não acreditar em mim, mas eu vi uma coisa incrível nos ^000077Esgotos de Prontera^000000.";
	mes "Eu já fui lá muitas vezes, pois sou um dos encarregados da manutenção das tubulações de lá...";
	mes "Conheço tudo como a palma da minha mão!";
	mes "Eu vi a tal coisa.";
	mes "Na quarta noite remendando uma tubulação furada no subsolo";
	mes "Eu contenplei...";
	mes "Era um ^000077Besouro Ladrão^000000 brilhante!";
	mes "Dourado e reluzia no escuro! Foi muito estranho!";
	next;
	mes "[Idoso]";
	mes "Um Besouro Ladrão Dourado, imagine só!";
	mes "Ele tinha uma luz mágica, acho que até sagrada e parecia ser muito, mais muito forte!";
	mes "Como pode um bicho tão repulsivo e sujo ter uma luz dessas?";
	close;
}

//-------------------------------------------------------------------
prt_in,180,20,2	script	Garçom#pront	1_M_PUBMASTER,{
	mes "[Garçom]";
	mes "Olá, seja bem-vindo!";
	mes "Hehehe!";
	mes "A freguesia anda aumentando por aqui!";
	mes "Este já foi um negócio bem difícil, sabe?";
	mes "Pelo menos os lucros sempre foram bons...";
	mes "Hehe, mas agora estão melhores...";
	mes "A dificuldade?";
	mes "Ora, conseguir os ingredientes para a cozinha!";
	next;
	mes "[Garçom]";
	mes "Como você deve saber, o aumento das hordas de monstros agressivos em torno das cidade do reino criou uma escassez na obetenção de certas matérias-primas e produtos...";
	mes "Por isso, tentamos adaptar o menu do restaurante quando há falta de alimentos.";
	mes "Fazemos especiais ou inventamos pratos mais simples pra não perder a clientela.";
	next;
	mes "[Garçom]";
	mes "Então, eu tenho contratado caçadores para me trazerem ingredientes frescos e especiais.";
	mes "Mas a demanda excedeu a oferta nestes últimos dias.";
	next;
	mes "[Garçom]";
	mes "Eu não posso manter o meu negócio ocupado sem meu menu especial 'Carapaças de formiga ao molho' e 'Perna de Gafanhoto frita'...*Suspiro*";
	next;
	.@drink = 1;
	while(.@drink) {
		switch(select("'Carapaça de formiga ao molho'?","'Perna de Gafanhoto frita'?","Eu... acho que vou indo.")) {
			case 1:
			mes "[Garçom]";
			mes "É uma deleciosa iguaria e um clássico local!";
			mes "É feito à partir das cascas das formigas do deserto sograt, ao sul daqui.";
			mes "Essas formiga são bem grandes e ferozes, e o melhor lugar para caçá-las é no Formigueiro Infernal...";
			mes "O problema é que lá às vezes há formigas demais... Por isso, a maioria das pessoas tem medo de enfrentá-las...";
			next;
			mes "[Garçom]";
			mes "Mesmo assim, a maioria das pessoas também gostam de um belo prato de formiga ao molho...";
			mes "E adoram reclamar se acaba meu estoque.";
			next;
			break;
			case 2:
			mes "[Garçom]";
			mes "Sim, as pernas de gafanhoto ficam especialmente boas fritas com azeite de olive...";
			mes "Uma delícia.";
			mes "Só é pena que hoje os gafanhotos estejam tão agressivos...";
			mes "Mas ainda assim, não são tão difíceis de caçar.";
			mes "O problema é que eu sou meio covarde na hora de matar monstros, senão ia lá e ensinava uma lição a eles!";
			next;
			mes "[Garçom]";
			mes "É, mas do jeito que vão as coisas logo, logo, vou ter que voltar a feazer pratos comuns de novo...";
			next;
			break;
			case 3:
			mes "[Garçom]";
			mes "Bem, tenha cuidado lá fora, e coma uma pouco da próxima vez!";
			close2;
			.@drink = 0;
			break;
		}
	}
	end;
}

//-------------------------------------------------------------------
prt_in,173,24,2	script	Shevild#pront	4_M_03,{
	mes "[Shevild]";
	mes "Ei, colega!";
	mes "Chegue aqui e tome um drinque comigo!";
	mes "Eu tenho umas histórias boas pra te contar.";
	mes "Sabe, eu já andei por todos os arredores de Prontera!";
	mes "Lugares cheios de monstros, lugares cheios de itens. ótimos para treinar!";
	next;
	if (select("E como você foi pra tantos lugares?","É? E daí?") == 1) {
		mes "[Shevild]";
		mes "Ora, eu sou um cara muito talentoso!";
		mes "Eu já fiz de tudo!";
		mes "Eu já viajei bastante por aí fazendo serviços para os aventureiros e para a cidade...";
		mes "Fazendo o quê?";
		mes "Bem...hã...entregando coisas.";
		mes "É... Eu sei que às vezes é um trabalho meio chato e sem graça, esse de fazer entregas.";
		next;
		mes "[Shevild]";
		mes "Mas assim eu tenho a oportunidade de viajar bastante e conhecer novos lugares!";
		mes "É muito divertido!";
		mes "Mas não pense que eu faço isso por diversão...";
		mes "Eu sou um cara muito dedicado, viu?";
		mes "Se você precisa entregar alguma coisa, eu sou seu homem!";
		next;
		mes "[Shevild]";
		mes "Viajando por aí eu já achei alguns lugares bem estranhos e também fascinantes...";
		mes "(É muito legal, porque eu sei que quase ninguém aqui sabe deles... Hehehe.)";
		mes "Por exemplo, uma certa caverna que eu conheço...";
		mes "E também aquela floresta perigosíssima...";
		next;
		switch(select("Que caverna?","Floresta perigosa?","Bem, eu preciso ir...")) {
			case 1:
			mes "[Shevild]";
			mes "Hmm... A caverna...";
			mes "Ela fica ao Norte daqui.";
			mes "Eu acompanhei alguns caçadores até lá uma vez.";
			next;
			mes "[Shevild]";
			mes "Embora existam muitos montros por lá, ouvi dizer que há ótimos tesouros também.";
			mes "Quando eu estive lá, mesmo estando com aventureiros experientes, era difícil não se perder.";
			next;
			mes "[Shevild]";
			mes "Chegou uma hora em que todos os caminhos pareciam dar no mesmo lugar.";
			mes "Estávamos sem muitas opções e ficando sem suprimentos.";
			mes "Então, acabamos voltando...";
			mes "De mãos abanando, claro.";
			mes "Mas...";
			mes "Quem sabe eu volto lá algum dia.";
			next;
			if (select("Como eu faço pra chegar lá?","Bom, a gente se vê por ai.") == 1) {
				mes "[Shevild]";
				mes "O quê?";
				mes "Mas é aqui do lado!";
				mes "Você deveria conhecer...";
				mes "É só sair da cidade pelo portão Norte.";
				mes "A caverna fica na parte de cima da floresta...";
				close;
			}
			mes "[Shevild]";
			mes "Tudo bem... Tome cuidado por aí.";
			close;
			case 2:
			mes "[Shevild]";
			mes "Essa floresta fica à nordeste daqui.";
			mes "Existem algumas ruínas bem bonitas ali perto...";
			mes "Eu fui entregar um pacote para um caçador que mora lá uma vez.";
			mes "Antes dessas ruínas, você vai ver a tal flotesta.";
			mes "Ela é cheia de texugos e macacos.";
			next;
			mes "[Shevild]";
			mes "É bom tomar cuidado lá...";
			mes "Se você deixar cair algum item no chão, os Yoyos saem correndo pra pegá-lo.";
			mes "E o pior é que se você atacar um deles, eles vão se juntar contra você.";
			next;
			if (select("Como se chega lá?","Ah, cansei dessa conversa...") == 1) {
				mes "[Shevild]";
				mes "O caminho é um pouquinho complicado, mas se você seguir para o Norte e depois Leste, não tem como errar.";
				mes "Só cuidado com algumas plantas que tem pelo caminho...";
				mes "Elas atacam qualquer um que chegar muito perto.";
				close;
			}
			mes "[Shevild]";
			mes "Tudo bem, então!...";
			mes "Lembre sempre de tomar cuidado quando viajar por aí.";
			close;
			case 3:
			mes "[Shevild]";
			mes "Tudo bem... Tome cuidado por aí.";
			close;
		}
	}
	mes "[Shevild]";
	mes "Bem, se tiver alguma dúvida, venha falar comigo~";
	close;
}

//-------------------------------------------------------------------
prt_in,177,20,2	script	TenSue#pront	4W_M_01,{
	switch(rand(3)) {
		case 1:
		mes "[TenSue]";
		mes "O que...?";
		mes "Então, você está cansado de só matar monstros?";
		mes "Não aguenta mais ficar dentro de calabouços ou se perdendo nas florestas?...";
		next;
		mes "[TenSue]";
		mes "Hahaha, parece que você não está confiante de sua força, hein?";
		mes "Hmm...";
		mes "Por que você não vai entra num clã?";
		mes "Quero dizer, todos os caras durões fazem isso.";
		next;
		mes "[TenSue]";
		mes "Pessoalmente, eu não conheço nenhuma para te recomendar, então você vai ter que procurar ao redor da cidade.";
		mes "Fazer alguns contatos, conexões, você sabe, networking.";
		next;
		mes "[TenSue]";
		mes "Eu não sei mesmo se você não gosta de receber ordens, mas se esse é o caso, por que não fazer o seu próprio clã?";
		close;
		case 2:
		mes "[TenSue]";
		mes "Uma vez que eu andei todo o caminho até Al de Baran.";
		mes "Era muito perigoso com todos aqueles monstros!";
		next;
		mes "[TenSue]";
		mes "Eu quase morri!";
		mes "Alguns desses monstros só ficavam me seguindo e tentando me matar, mesmo se eu não fizesse nada, só de passar perto eles atacavam!";
		mes "Foi muito louco.";
		next;
		mes "[TenSue]";
		mes "Bem, ainda, sinto que tomar a rota mais dificil valeu a pena.";
		mes "Conheci alguns lugares bastante magníficos no caminho.";
		next;
		mes "[TenSue]";
		mes "Mesmo a cidade de Al de Baran tem uma visão esplêndida para os olhos, com sua arquitetura elegante e seu romântico canal.";
		next;
		mes "[TenSue]";
		mes "A sede da Corporação Kafra também está localizada em Al de Baran.";
		mes "Você realmente deveria ir lá e verificar por si mesmo.";
		close;
		default:
		mes "[TenSue]";
		mes "O reino de Rune-Midgard é governado pelo benevolente Rei Tristan III.";
		next;
		mes "[TenSue]";
		mes "Nós realmente devemos a prosperidade de Rune-Midgard a ele.";
		mes "Ele foi capaz de convencer as pessoas a acolher estrangeiros em Prontera, bem como estabelecer o comércio com outras terras, como Amatsu e Kunlun.";
		next;
		mes "[TenSue]";
		mes "Mas às vezes...";
		mes "Pode ser difícil de acreditar que ele é um líder tão brilhante e capaz.";
		next;
		mes "[TenSue]";
		mes "Afinal, a única vez que o vejo é quando ele está realizando casamentos.";
		mes "Mesmo se um casamento não estiver acontecendo, ele ainda é o tipo de pessoa que vive em torno da igreja de Prontera!";
		next;
		mes "[TenSue]";
		mes "Porém...";
		mes "Eu acho que pode acontecer um monte de coisas quando você é o senhor e governante de uma nação inteira.";
		close;
	}
}

//-------------------------------------------------------------------
prt_in,177,18,2	script	Marvin#pront	1_F_PUBGIRL,{
	mes "[Marvin]";
	mes "Quando se trata de paquerar o sexo oposto, eu tenho que dizer é tudo questão de ^333399habilidade^000000.";
	next;
	mes "[Marvin]";
	if (Sex == SEX_MALE) {
		mes "Eu não posso ajudá-lo muito quando o assunto é falar com mulheres atraentes, como eu.";
	}
	else {
		mes "Eu realmente não tenho algum conselho de habilidades quando se trata de falar com um cara bonito.";
	}
	mes "Mas eu posso te ensinar o que eu sei sobre as habilidades que ajudam na batalha.";
	next;
	mes "[Marvin]";
	mes "A maioria das habilidades é maximizada no nível 10, e isso são muitos pontos...";
	next;
	mes "[Marvin]";
	mes "Ao decidir que habilidades você vai usar, seja muito cuidadoso.";
	mes "Pesquise a respeito delas, por que nem todas valem a pena ser maximizadas.";
	next;
	mes "[Marvin]";
	mes "Muitas vezes, abrimos mãos de certas habilidades por não temos pontos o bastante...";
	mes "Por isso em certas classes é importante ir até o nível 50 de classe.";
	next;
	mes "[Marvin]";
	mes "Claro que versatilidade é algo importante, masé sempre bom pensar com que tipo de pessoas você vai estar acompanhado.";
	mes "Minha dica é sempre a mesma:";
	mes "Estude, estude, estude!";
	mes "Você não vai querer se arrepender depois...";
	close;
}

//-------------------------------------------------------------------
prt_in,284,168,3	script	Ginedin Rephere#pront	1_M_JOBTESTER,{
	mes "[Ginedin Rephere]";
	mes "Hmmm...";
	mes "Espero que caiba todos os meus convidados aqui...";
	mes "Oh! Perdão, eu mal percebi que você estava aqui!";
	next;
	switch(select("Conversar","Tingir Roupas","Cancelar")) {
		case 1:
		mes "[Ginedin Rephere]";
		mes "As pessoas ficam cada vez mais ricas, e podem gastar dinheiro com mais coisas.";
		mes "Eu acho isso maravilhoso, por que assim as pessoas podem deixar de usar farrapos e investirem em lindas roupas!";
		mes "Eu não acho que roupas bonitas sejam algo superfluo, como muitos acham.";
		mes "Mas é claro que antes você deve se preocupar em por comida na mesa!";
		next;
		mes "[Ginedin Rephere]";
		mes "Uma roupa bem escolhida faz com que você se sinta melhor consigo mesmo, e seja mais feliz.";
		mes "E eu adoro trabalhar com isso..";
		mes "Fazer roupas que deixem as pessoas mais felizes, que expressem as suas personalidades..";
		mes "Pode ser um trabalho muito difícil, mas é imensamente recompensador.";
		close;
		case 2:
		mes "[Ginedin Rephere]";
		mes "Ah...";
		mes "Você veio aqui tingir suas roupas?";
		mes "Eu sinto muito, eu estou ocupadíssimo no momento, não posso mais tingir roupas.";
		mes "Volte mais tarde, e quem sabe eu tenho um tempinho pra você.";
		close;
		case 3:
		mes "[Ginedin Rephere]";
		mes "Por favor, sinta-se em casa.";
		mes "Perdoe-me por não poder lhe dar atenção, tenho que organizar a minha festa.";
		close;
	}
}

//-------------------------------------------------------------------
prt_in,173,13,4	script	Cliente#SoloHan	4_M_04,{
	mes "[SoloHan]";
	if (getpartnerid()) {
		mes "Nossa...";
		mes "Acho que estou bêbado.";
		mes "*Hiccup!*";
		next;
		mes "[SoloHan]";
		mes "...O quê!?";
		mes "Ah rapaz!";
		mes "Saia da minha frente!";
		if (Sex == SEX_MALE) {
			mes "Você parece um daqueles maridos que só obedece a mulher!";
		}
		else {
			next;
			mes "[SoloHan]";
			mes "Acho que sei reconhecer uma esposa mandona quando vejo uma!";
			mes "Vá irritar seu marido com alguma besteira!";
		}
		next;
		mes "[SoloHan]";
		mes "Me deixe em paz!";
		mes "Não quero saber da sua felicidade conjugal!";
		mes "Vamos lá, Bachewcca!";
		mes "Fale pra eles que o tipo deles não é bem vindo aqui!";
		next;
		mes "[Bachewcca]";
		mes "^666666*Grrr...!*^000000";
		specialeffect EF_THROWITEM,AREA,"Cliente#Bachewcca";
		close;
	}
	else {
		mes "Nossa...";
		mes "Acho que estou bêbado~";
		mes "^666666*Hiccup...!*^000000";
		next;
		mes "[SoloHan]";
		mes "Ei, você...!";
		mes "Você compreende, não?!";
		mes "Não fica chateado por ver todos esses recém-casados felizes?!";
		mes "Fica~? Eu também!";
		next;
		mes "[SoloHan]";
		mes "Como eles se atrevem a ficar felizes na nossa frente--!! ^666666*Snif*^000000 Só porque eles encontraram o amor verdadeiro, acham que são melhores que nós?!";
		next;
		mes "[SoloHan]";
		mes "Lembro quando os casais eram educados e só demonstravam seu amor com portas fechadas. Agora andam de mãos dadas e se agarram em público. Qual é! Arrumem um quarto!";
		next;
		mes "[SoloHan]";
		mes "Quero dizer, ^666666*Sniff*^000000, não é como se eu fosse solitário nem nada. Não preciiiso de uma mulher~!";
		mes "Certo, Bachewcca!";
		next;
		mes "[Bachewcca]";
		mes "...!";
		emotion e_no1,0,"Cliente#Bachewcca";
		next;
		mes "[SoloHan]";
		mes "Não faz muita diferença se você é casado ou não, certo? Certo?!";
		mes "Vamos lá! Beba comigo!!";
		next;
		mes "^3355FFDo nada ele passou a me tratar como um amigo íntimo.";
		mes "É meio constrangedor, mas uma bebida grátis não é má idéia...^000000";
		next;
		mes "^3355FF* Gulp Gulp Gulp *^000000";
		close;
	}
}

//-------------------------------------------------------------------
prt_in,170,14,0	script	Cliente#Bachewcca	4_M_ORIENT02,{
	mes "[Bachewcca]";
	mes "..............";
	mes "^666666*Gulp....gulp...*^000000";
	mes "Grrrrr!! Essa foi boa!";
	emotion e_sob;
	close;
}
