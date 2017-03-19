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
| - Por: Spell Master/eAthena/rAthena/Hercules                      |
| - Nota: Diversos npcs Barqueiros                                  |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Alberta > Izlude ] - 
// ------------------------------------------------------------------
alberta,189,151,5	script	Marinheiro Fisk#AlbIz	4W_SAILOR,{
	mes "[Marinheiro Fisk]";
	mes "Olá, partirei em breve para Izlude.";
	mes "Gostaria de ir, por apênas 500 Zenys?";
	next;
	if (select("Ir á Izlude","Ficar em Alberta") == 1) {
		if (Zeny < 500) {
			mes "[Marinheiro Fisk]";
			mes "Eu disse que preciso de 500 Zeny, e parece que você não tem.";
			close;
		}
		close2;
		Zeny -= 500;
		warp "izlude",195,212;
		end;
	}
	mes "[Marinheiro Fisk]";
	mes "Bem...";
	mes "Você parece mesmo uma pessoa que gosta de terra firme.";
	close;
}

// ------------------------------------------------------------------
// - [Alberta ~ Alb2Trea] - 
// ------------------------------------------------------------------
alberta,195,151,2	script	Paul#AlbTre	4_M_04,{
	mes "[Paul]";
	mes "Bom dia";
	mes "Você gostaria de juntar-se ao time de exploração do Navio Fantasma?";
	next;
	mes "[Paul]";
	mes "Oh! Melhor lhe alertar, esse evento é recomendado para guerreiros de ALTO NÍVEL.";
	next;
	mes "[Paul]";
	mes "Então o que diz?";
	mes "Apenas 200 zeny para participar e você vai ter uma tonelada de experiência, eu garanto.";
	next;
	switch(select("Inscreva-me!","Uh, não obrigado.")) {
		case 1:
		if (Zeny < 200) {
			mes "[Paul]";
			mes "Parece que você não tem o dinheiro, meu amigo. Por favor, volte quando for capaz de pagar.";
			close;
		}
		else {
			Zeny -= 200;
			warp "alb2trea",62,69;
			close;
		}
		case 2:
		mes "[Paul]";
		mes "Tudo bem, bem... eu estarei por perto se você mudar de idéia";
		close;
	}
}

alb2trea,39,50,6	script	Paul#2AlbTre	4W_SAILOR,{
	mes "[Paul]";
	mes "Deseja voltar para alberta Alberta?";
	next;
	if (select("Sim por favor.","Não, Mudei de idéia.") == 1 ) {
		close2; warp "alberta",192,169; end;
	}
	close;
}

// ------------------------------------------------------------------
// - [Alberta ~ Amatsu ] - 
// ------------------------------------------------------------------
alberta,246,74,3	script	Capitão#Walter	4_M_SEAMAN,{
	mes "[Walter Moers]";
	mes "Ei, você aí...";
	mes "Por acaso você sabia que existem países completamente diferentes do reino de Rune Midgard?";
	next;
	switch(select("Saber mais sobre Amatsu...","Ir para Amatsu:Cancelar")) {
		case 1:
		mes "[Walter Moers]";
		mes "Eu ouvi falar que um navio à deriva acidentalmente descobriu este país peculiar...";
		mes "A embarcação foi completamente destruída por uma incrível tempestade de fúria indescritível.";
		next;
		mes "[Walter Moers]";
		mes "Enfim, o viajante acordou em uma praia, cercado pelos destroços de seu antigo navio.";
		mes "Se levantando, cansado e ferido, ele avistou Amatsu.";
		mes "Os habitantes de lá o acolheram e cuidaram de seus ferimentos, e ele continuou vivendo lá até poder completar um mapa para voltar.";
		next;
		mes "[Walter Moers]";
		mes "Ele faleceu quando retornou dessa incrível viagem.";
		mes "Por sorte, o mapa foi encontrado e entregue à Tristan III.";
		mes "Que prometeu recompensar aqueles que se aventurarem em Amatsu, com sua eterna gratidão e reconhecimento.";
		next;
		mes "[Walter Moers]";
		mes "Incontáveis aventureiros e corajosos capitães resolveram aceitar o desafio.";
		mes "Pois além da grande fortuna que poderiam adquirir com a troca de produtos e conhecimento com os habitantes de Amatsu.";
		mes "Ainda haveria a generosa recompensa de nosso Rei...";
		next;
		mes "[Walter Moers]";
		mes "Porém, todos eles falharam!";
		mes "Para superar as fortes correntes marítimas e as tempestades que cercam esse páis.";
		mes "É preciso de nada menos que os mais experientes homens e mulheres.";
		mes "Mas eles foram todos cegos pela promessa de fama e fortuna.";
		mes "Eles não estavam preparados para essa viagem.";
		next;
		mes "[Walter Moers]";
		mes "O que eles não sabiam é que existia uma rota muito mais tranquila e segura para Amatsu...";
		mes "E apenas um homem a conhece...";
		mes "Eu! Capitão Walter Moers! Hahaha!";
		mes "E aqui termina a minha história sobre Amatsu.";
		next;
		mes "[Walter Moers]";
		mes "Eu obtive excelentes lucros com o comércio entre Amatsu e Rune Midgard durante todos esses anos.";
		mes "Mas agora, eu estou interessado apenas no turismo.";
		mes "Se você deseja ir a Amatsu, fale comigo para negociarmos sua viagem!";
		close;
		case 2:
		mes "[Walter Moers]";
		mes "Você quer ir até Amatsu é?";
		mes "É um longo caminho...";
		mes "E por isso, eu terei que lhe cobrar uma taxa.";
		mes "Você não pensou que eu ia fazer uma viagem longa e perigosa dessas de graça né?";
		next;
		mes "[Walter Moers]";
		mes "Serão apenas 10,000 zeny pelo pacote completo!";
		mes "Você terá um quarto com lençóis limpos e boa comida durante toda a viagem!";
		mes "Considerando que esta viagem não é apenas de ida, eu diria que o preço está ótimo, não?";
		next;
		mes "[Walter Moers]";
		mes "Então, vamos partir agora?";
		mes "Você está levando o dinheiro consigo, não?";
		mes "Então vamos lá!";
		next;
		if (select("Embarcar no Navio!","Cancelar") == 1) {
			if (Zeny > 9999) {
				mes "[Walter Moers]";
				mes "Ok, eu vou içar as velas!";
				mes "Todos preparem-se para zarpar!";
				close2;
				Zeny -= 10000;
				warp "amatsu",197,83;
				end;
			}
			mes "[Walter Moers]";
			mes "Por acaso você não fui claro o suficiente?";
			mes "São 10,000 zeny.";
			mes "Se você não tem isso, vá caçar monstros...";
			mes "Ou procurar tesouros em algum navio fantasma.";
			mes "Eu quero ver essa grana contadinha na minha mão.";
			close;
		}
		mes "[Walter Moers]";
		mes "Se você é um aventureiro, essa é a sua grande chance de se aventurar em novos reinos...";
		mes "Bem, a decisão final é sua.";
		close;
		case 3:
		mes "[Walter Moers]";
		mes "Quando você se cansar da sua vida rotineira, viaje comigo até esse país distante do outro lado do oceano.";
		close;
	}
}

amatsu,194,79,5	script	Capitão#Walter2	4_M_SEAMAN,{
	mes "[Walter Moers]";
	mes "Ahn, é você! Me conte, o que está achando da sua visita em Amatsu?";
	mes "Não vai me dizer que já quer voltar para Alberta?";
	next;
	if (select("Voltar para Alberta","Cancelar") == 1) {
		mes "[Walter Moers]";
		mes "Vou preparar o navio para a partida!";
		mes "Aposto que você tem muita coisa pra contar quando voltar!";
		mes "Todos à bordo!";
		close2;
		warp "alberta",243,91;
		end;
	}
	mes "[Walter Moers]";
	mes "Tudo bem, fique o tempo que desejar.";
	mes "O navio estará sempre aqui para quando você quiser voltar...";
	close;
}

// ------------------------------------------------------------------
// - [Alberta ~ Ayothaya ] - 
// ------------------------------------------------------------------
alberta,246,29,3	script	Aibakthing#ayo	4_M_THAIONGBAK,{
	mes "[Aibakthing]";
	mes "Hmm! Hahh! Hmm! Hahh!";
	mes "Deixe-me apresentar a você minha cidade, Ayothaya onde vive tudo o que é sagrado e misterioso!";
	next;
	switch(select("Fale-me sobre Ayothaya.","Ir para Ayothaya.","Cancelar.")) {
		case 1:
		mes "[Aibakthing]";
		mes "Nós, os Ayothayanos somos religiosos e amamos a paz e a sinceridade.";
		mes "Nós procuramos uma vida nobre e esplêndida.";
		mes "Somos de natureza gentil, mas capazes de nos proteger quando é preciso.";
		next;
		mes "[Aibakthing]";
		mes "A comida é especialmente boa.";
		mes "Nosso prato mais tradicional é a Sopa Tailandesa feita com limão, camarões e pimenta que possui um sabor incrível com aroma único.";
		mes "E sugiro que você prove-a em Ayothaya.";
		next;
		mes "[Aibakthing]";
		mes "Na história de Ayothaya existe um fato terrível que fala sobre uma criatura maligna chamada 'Tigre Sa-mhing' que, contam, devorava pessoas.";
		next;
		mes "[Aibakthing]";
		mes "Hmm! Hah! Hmm! Hah!";
		mes "Ninguém resiste a um convite tão tentador a visitar uma área tão bela.";
		mes "Você será Bem-vindo a qualquer hora!";
		close;
		case 2:
		mes "[Aibakthing]";
		mes "Se você desejar visitar Ayothaya.";
		mes "Pedirei uma humilde taxa de 10.000 zenys!";
		mes "Hmm! Hah! Hmm! Hah!";
		next;
		mes "[Aibakthing]";
		mes "Agora, você gostaria de visitar Ayothaya!?";
		next;
		if (select("Estou pronto, Vamos Lá!","Não, obrigado.") == 1) {
			if (Zeny > 9999) {
				mes "[Aibakthing]";
				mes "Hmm! Hah! Hmm! Hah!";
				mes "Ah, minha cidade natal, Ayothaya...";
				mes "Eu estou chegando!";
				close2;
				Zeny -= 10000;
				warp "ayothaya",149,71;
				end;
			}
			mes "[Aibakthing]";
			mes "Como falei para você, sem a taxa de 10.000 zenys você não poderá apreciar a beleza de Ayothaya.";
			close;
		}
		mes "[Aibakthing]";
		mes "Se todos sonham em viver em um lugar pacífico e belo, este lugar é Ayothaya, minha cidade!";
		close;
		case 3:
		mes "[Aibakthing]";
		mes "Se todos sonham em viver em um lugar pacífico e belo, este lugar é Ayothaya, minha cidade!";
		close;
	}
}

ayothaya,152,68,1	script	Barqueiro Aibakthing#ayo2	4_M_THAIONGBAK,{
	mes "[Aibakthing]";
	mes "Hmm! Hah! Hmm! Hah!";
	mes "Então, você gostou de conhecer Ayothaya?";
	mes "Gostou da Sopa Tailandesa?";
	mes "Já é hora de voltar para seu país!";
	next;
	if (select("Voltar para Alberta.","Cancelar.") == 1) {
		mes "[Aibakthing]";
		mes "Estaremos aqui sempre para dar as boas-vindas.";
		mes "Espero que possamos nos rever em breve!";
		mes "Faça uma boa viagem!";
		close2;
		warp "alberta",238,22;
		end;
	}
	mes "[Aibakthing]";
	mes "Ah, eu entendo porque você não quer deixar um lugar tão belo como Ayothaya.";
	mes "Não se preocupe, fique o tempo que precisar.";
	close;
}

// ------------------------------------------------------------------
// - [Alberta ~ Kunlun(Gon_Fild) ] - 
// ------------------------------------------------------------------
alberta,246,62,3	script	Wabakho#gon	4_M_TWMIDMAN,{
	mes "[Wabakho]";
	mes "Saudações.";
	mes "Eu gostaria de convidar todos vocês a Kunlun.";
	mes "Eu tenho a honra de ser o encarregado de transportar os cidadãos de Rune Midgard a um país completamente novo.";
	mes "Kunlun!";
	next;
	switch(select("Saber mais sobre Kunlun...","Ir para Kunlun.","Cancelar.")) {
		case 1:
		mes "[Wabakho]";
		mes "Kunlun é o melhor lugar para realizar as fantasias de pessoas de toda Midgard.";
		mes "Você irá passar pela casa em miniatura na Vila dos Pigmeus e entrar em Kunlun através de um pilar feito de uma luz encantadora.";
		next;
		mes "[Wabakho]";
		mes "Eu ouvi dizer que os sábios daqui construíram uma cidade voadora...";
		mes "É um feito impressionante, porém Kunlun sempre flutuou no céu naturalmente!";
		mes "Kunlun possui a mais bela vista do mundo!";
		next;
		mes "[Wabakho]";
		mes "Nossas especialidades locais são pão doce de passas e pêssego, são suculentos e deliciosos.";
		mes "Como era de se esperar, um novo calabouço repleto de novos perigos o espera em Kunlun.";
		mes "Então esteja bem preparado quando resolver ir lá!";
		next;
		mes "[Wabakho]";
		mes "Quando você desejar partir, por favor me informe.";
		mes "É um grande prazer servir pessoas, como você, do continente de Midgard.";
		close;
		case 2:
		mes "[Wabakho]";
		mes "Bem, tudo pronto para a viagem?";
		mes "Nós cobramos ^0000FF10,000^000000z por uma passagem para Kunlun.";
		mes "A passagem é apenas válida para uma ida.";
		mes "Mas você pode voltar quando desejar sem custo algum.";
		next;
		mes "[Wabakho]";
		mes "Você quer embarcar agora?";
		next;
		if (select("Sim por favor!","Hmm, talvez outra hora.") == 1) {
			if (Zeny > 9999) {
				mes "[Wabakho]";
				mes "Tripulação, preparem-se para a partida.";
				close2;
				Zeny -= 10000;
				warp "gon_fild01",258,82;
				end;
			}
			mes "[Wabakho]";
			mes "Eu sinto muito, mas você precisa trazer ^0000FF10,000^000000z para comprar sua passagem.";
			mes "Por favor, tenha certeza de que você tem dinheiro suficiente.";
			mes "Obrigado.";
			close;
		}
		mes "[Wabakho]";
		mes "Por favor, me avise se desejar visitar Kunlun.";
		mes "É um grande prazer servir pessoas, como você, do continente de Midgard.";
		close;
		case 3:
		mes "[Wabakho]";
		mes "Por favor, me avise se desejar visitar Kunlun.";
		mes "É um grande prazer servir pessoas, como você, do continente de Midgard.";
		close;
	}
}

gon_fild01,255,79,7	script	Wabakho#gon2	4_M_TWMIDMAN,{
	mes "[Wabakho]";
	mes "E então ilustre visitante, o que achou de Kunlun?";
	mes "Podemos partir para o continente quando quiser, basta dar as ordens.";
	next;
	if (select("Quero voltar para Alberta.","Cancelar") == 1) {
		mes "[Wabakho]";
		mes "Espero que tenha gostado de Kunlun e que volte a nos visitar no futuro.";
		mes "Tripulação, prepare-se para a partida!";
		close2;
		warp "alberta",243,67;
		end;
	}
	mes "[Wabakho]";
	mes "Demore o tempo que quiser aqui, amigo.";
	mes "Existem muitos lugares misteriosos em Kunlun pra você visitar.";
	close;
}

// ------------------------------------------------------------------
// - [Cmd_Fild > Alberta * Cmd_Fild > Izlude ] - 
// ------------------------------------------------------------------
-	script	cmdboard	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Chamando os passageiros da escuna 'Lutifus'...";
	mes "Com destino a Izlude e Alberta...";
	mes "O embarque está liberado!";
	mes "Agradecemos a preferência!";
	mes "Você vai embarcar na 'Lutifus'?";
	next;
	switch(select("Porto de Alberta - 600 Zenys","Porto de Izlude - 800 Zenys","Sair")) {
		case 1:
		if (Zeny < 600) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Você não tem dinheiro suficiente para pagar a passagem.";
			close;
		}
		Zeny -= 600;
		warp "alberta",192,169;
		end;
		case 2:
		if (Zeny < 800) {
			mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
			mes "Você não tem dinheiro suficiente para pagar a passagem.";
			close;
		}
		Zeny -= 800;
		warp "izlude",195,212;
		end;
		case 3:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Muito obrigado por escolher a";
		mes "'Lutifus'!";
		close;
	}
}
cmd_fild07,299,83,4	duplicate(cmdboard)	Zain#cmd	4W_SAILOR
cmd_fild07,94,134,4	duplicate(cmdboard)	Sarumane#cmd	4W_SAILOR

// ------------------------------------------------------------------
// - [ Izlude > Izlu2Dun / Izlude > Alberta ] - 
// ------------------------------------------------------------------
izlude,197,205,1	script	Marinheiro#izlude	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Olá, todo mundo!";
	mes "Atenção, atenção!";
	mes "Venham passear ao vento em um barco fascinante!";
	mes "Rápido, rápido!";
	next;
	switch(select("Ilha Byalan -> 150 Zeny.","Marinha de Alberta  -> 500 Zeny.","Cancelar.")) {
		case 1:
		if (Zeny < 150) {
			mes "[Marinheiro]";
			mes "150 Zeny!";
			mes "Somente 150 Zeny para partir!";
			close;
		}
		Zeny -= 150; warp "izlu2dun",107,50; end;
		case 2:
		if (Zeny < 500) {
			mes "[Marinheiro]";
			mes "500 Zeny!";
			mes "Somente 500 Zeny para partir!";
			close;
		}
		Zeny -= 500; warp "alberta",188,169; end;
		case 3:
		close;
	}
}

izlu2dun,108,27,0	script	Marinheiro#2izlude	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Quer voltar para Izlude?";
	next;
	if (select("Sim.","Não, quero ficar mais tempo!") == 1) {
		warp "izlude",197,210;
		end;
	}
	close;
}

// ------------------------------------------------------------------
// - [Izlude ~ Jawaii] - 
// ------------------------------------------------------------------
izlude,171,185,3	script	Auxiliar Lua de Mel#Izl	1_F_LIBRARYGIRL,{
	mes "[Auxiliar]";
	mes "Recém casados e casais antigos...";
	mes "Nós os convidamos para passar sua lua de mel aqui!";
	next;
	switch(select("Jawaii?","Ir para Jawaii!","Cancelar.")) {
		case 1:
		mes "[Auxiliar]";
		mes "Existe uma ilha distante, em um continente longe de Rune-Midgard.";
		mes "É uma ilha muito bonita e tranquila que abre as suas portas para os casais.";
		next;
		mes "[Auxiliar]";
		mes "Essa é uma oferta exclusiva de viagem para refúgio da lua de mel especial para os cidações de Rune-Midgard.";
		mes "Sendo que o preço é de 100.000 zeny.";
		mes "Pode ser caro, mas você vai aproveitar cada centavo.";
		next;
		mes "[Auxiliar]";
		mes "Eu garanto a você que esse serão os momentos mais felizes que você pode expereimentar em seu casamento estando na ilha.";
		mes "Você realmente vai colocar algum preço nisso?";
		close;
		case 2:
		mes "[Auxiliar]";
		if (!getpartnerid()) {
			mes "Hummm....";
			mes "Infelizmente, solteiros não são permitidos na ilha.";
			mes "Porque você não vai esquecer sua solidão no barzinho de Prontera?";
			close;
		}
		else if (Zeny > 99999) {
			Zeny -= 100000;
			mes "Bon Voyage...!!";
			mes "Deixe-me guiar você para Jawaii";
			close2;
			warp "jawaii",245,125;
			end;
		}
		mes "Como eu expliquei antes, você precisa ter 100.000 zeny para poder visitar Jawaii.";
		mes "Porque você não pede para pessoa amada uma ajuda em zeny para essa viagem?";
		close;
		case 3:
		mes "[Auxiliar]";
		mes "Não há melhor forma de aproveitar momentos especiais com sua pessoa amada através de uma viagem secreta para um lugar remoto e exótico.";
		next;
		mes "[Auxiliar]";
		mes "Umas férias em Jawaii poderia ser um incrível presente para quem você ama~";
		close;
	}
}

jawaii,239,112,7	script	Marinheiro#jaw	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Este navio está indo para ^666699Izlude^000000.";
	mes "Você aproveitou seu tempo em Jawaii?";
	mes "Você deve verficar se não esqueceu alguma coisa antes de partirmos.";
	next;
	mes "[Marinheiro]";
	mes "Bem, então você gostaria de voltar para Izlude?";
	next;
	if (select("Voltar.","Cancelar.") == 1) {
		mes "[Marinheiro]";
		mes "Agora, deixe-me guiar você para Izlude.";
		close2;
		warp "izlude",195,212;
		end;
	}
	mes "[Marinheiro]";
	mes "Aproveite o seu tempo e olhe tudo que gostar ao seu redor.";
	mes "De qualquer forma, esse não é um lugar que você pode visitar com frequência.";
	mes "Entende?";
	close;
}

// ------------------------------------------------------------------
// - [ Jawaii > Alberta ] - 
// ------------------------------------------------------------------
jawaii,122,263,5	script	Marinheiro#jaw2	4W_SAILOR,{
	mes "[Marinheiro]";
	mes "Esse navio está voltando para ^003399Alberta^000000.";
	mes "Você aproveitou seu tempo em Jawaii?";
	mes "Você deve verificar se não esqueceu alguma coisa antes de partirmos.";
	next;
	mes "[Marinheiro]";
	mes "Agora, você está pront"+(Sex?"o":"a")+" para ir a Alberta?";
	next;
	if (select("Ir para Alberta.","Cancelar.") == 1) {
		mes "[Marinheiro]";
		mes "Agora, deixe-me levar você para Alberta.";
		close2;
		warp "alberta",192,157;
		end;
	}
	mes "[Marinheiro]";
	mes "Isso...";
	mes "Tente aproveitar suas férias o máximo que você puder.";
	mes "Nós vamos estar prontos para sair quando você quiser.";
	close;
}

// ------------------------------------------------------------------
// - [] - 
// ------------------------------------------------------------------

