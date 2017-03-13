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
// - [] - 
// ------------------------------------------------------------------

