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
| - Nota: Npcs comuns na cidade Izlude                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
izlude,55,74,2	script	Bonne#izl	4_F_01,{
	mes "[Bonne]";
	mes "Saudações!";
	mes "Izlude recebe vocês.";
	next;
	mes "[Bonne]";
	mes "Izlude é uma cidade satélite de Prontera, capital do Reino de Rune-Midgart.";
	next;
	mes "[Bonne]";
	mes "Izlude é fundamental para nosso reino pois a 'Associação dos Espadachim' é sediada aqui.";
	mes "Bem como o fato de Izlude proteger a costa de Rune-Midgard .";
	next;
	mes "[Bonne]";
	mes "Eu sei, esta ponte parece velha e frágil.";
	mes "Mas é realmente uma arte, construída com a mais avançada tecnologia.";
	next;
	mes "[Bonne]";
	mes "Não se preocupe com tempestades fortes, ou quantas pessoas ela aguenta, esta ponte nunca cairá.";
	next;
	mes "[Bonne]";
	mes "Por favor, aproveite sua estadia aqui em Izlude.";
	close;
}

// ------------------------------------------------------------------
izlude,135,78,2	script	Charfri#izl	4_F_02,{
	mes "[Charfri]";
	switch(rand(2)) {
		case 1:
		mes "Muitas pessoas acham que Izlude é apenas uma cidade satélite de Prontera, e não é tão importante...";
		next;
		mes "[Charfri]";
		mes "Mas Izlude é uma bela cidade litorãnea, assim como a linda Ilha Bylan.";
		next;
		mes "[Charfri]";
		mes "Você terá de embarcar em um navio no porto para chegar à Ilha Byalan.";
		mes "Existem perigosas cavernas naquela ilha, então tome cuidado por onde anda.";
		close;
		case 2:
		mes "Embora seja muito bonita, a Ilha Byalan tem uma misteriosa caverna profunda que se estende sob o mar.";
		next;
		mes "[Charfri]";
		mes "Pessoas que visitaram recentemente disseram que se você descer até uma certa profundidade.";
		mes "A caverna fica realmente sub-aquática.";
		next;
		mes "[Charfri]";
		mes "Surpeendentemente, quando você chegar lá, poderá respirar como um peixe.";
		mes "Talvez algum tipo de força sobrenatural exista por lá.";
		next;
		mes "[Charfri]";
		mes "Ah...";
		mes "As pessoas que foram até lá dizem que continuar sonhando com o local até os dias de hoje.";
		next;
		mes "[Charfri]";
		mes "Mas infelizmente, os monstros são muito fortes para pessoas comuns irem até lá.";
		mes "Ainda assim, apenas uma vez, eu gostaria de ir até lá...";
		close;
	}
}

// ------------------------------------------------------------------
izlude,119,121,2	script	Cuskoal#izl	4_F_TELEPORTER,{
	mes "[Cuskoal]";
	switch(rand(2)) {
		case 1:
		mes "Esta arena é O lugar para jovens habilidosos de todo reino de Rune-Midgart se enfrentarem e testar suas habilidades.";
		next;
		mes "[Cuskoal]";
		mes "Você pode duelar com monstros de diferentes leveis.";
		mes "Então, quanto mais estágios você sobreviver é a prova do quão forte você é.";
		next;
		mes "[Cuskoal]";
		mes "Então, o que você me diz?";
		close;
		case 2:
		mes "Os bares de Prontera estão sempre cheios de pessoas de áreas locais e forasteiros.";
		mes "Pode ficar muito ocupado.";
		next;
		mes "[Cuskoal]";
		mes "É um bom lugar para se conseguir informações e escutar rumores.";
		next;
		mes "[Cuskoal]";
		mes "Então, se você ouvir atentamente, com alguma sorte você pode ouvir coisas úteis para você.";
		close;
	}
}

// ------------------------------------------------------------------
izlude,150,118,2	script	Dega#izl	4_M_02,{
	mes "[Dega]";
	switch(rand(3)) {
		case 1:
		mes "Monte Mjornir, fica ao norte de Prontera, é de difícil";
		mes "acesso, com uma subida íngrime.";
		next;
		mes "[Dega]";
		mes "Fora os perigos próprios da montanha, insetos insanos vivem por lá.";
		mes "Ou seja, eles te atacam sem motivo algum.";
		next;
		mes "[Dega]";
		mes "Se você quiser visitar os arredores além do Monte Mjolnir, se prepare para o desafio.";
		mes "Ou você pode dar a volta nele.";
		close;
		case 2:
		mes "Alguns monstros no mundo, tem a capacidade de sentir energia mística.";
		mes "Podem detectar magias antes de serem conjuradas.";
		next;
		mes "[Dega]";
		mes "Golem do deserto é um deles.";
		mes "Não o subestime devido a sua lentidão...";
		next;
		mes "[Dega]";
		mes "Se você tentar conjurar uma magia próximo a ele, ele irá detectar e vai saltar sobre você para te esmagar.";
		mes "Então é melhor você tomar cuidado com o Golem.";
		close;
		case 3:
		mes "Tem um lugar muito agradável onde se pode encontrar todos os tipos de Poring.";
		next;
		mes "[Dega]";
		mes "Fica em algum lugar próximo a ponte que liga a floresta e o deserto...";
		mes "A caminho da cidade de Payon que fica ao sudeste daqui.";
		next;
		mes "[Dega]";
		mes "Não tem só Porings rosa mas também Drops, que podem ser encontrados no deserto, e os Poporing Verdes.";
		next;
		mes "[Dega]";
		mes "Mas cuidado, antes de você fazer isso, você pode ficar cara a cara com um Ghostring.";
		mes "Um Poring mortal que flutua pelo ar como um fantasma.";
		next;
		mes "[Dega]";
		mes "Bem, é claro, eles são todos muito bonitinhos, mas o Ghostring é uma exceção.";
		mes "É muito perigoso.";
		next;
		mes "[Dega]";
		mes "Se você tiver sorte, pode até deparar-se com um Angelring, o Poring com asas de anjo.";
		next;
		while(1) {
			switch(select("Ghostring?","Angelring?","Finalizar Conversa.")) {
				case 1:
				mes "[Dega]";
				mes "Ghostring é um Poring cizento que flutua pelo ar como um fantasma.";
				mes "Assim como outros fantasmas, ataques físicos não podem afeta-lo.";
				next;
				mes "[Dega]";
				mes "Aqueles que têm ataques físicos como principal forma de ataque como os Espadachins tem que correr para salvar suas vidas quando avistam um Ghostring.";
				next;
				mes "[Dega]";
				mes "Mas não desista ainda!";
				mes "Existe uma ótima notícia para estas classes.";
				mes "Fazer uma arma de alguma propriedade elemental é a chave.";
				next;
				mes "[Dega]";
				mes "Assim, mesmo um Espadachim ou Arqueiro pode causar dano, do mesmo jeito que a Mágica faz, em Ghostrings.";
				next;
				break;
				case 2:
				mes "[Dega]";
				mes "Angelrings são imunes a ataques mágicos.";
				mes "Se uma pessoa que só possui ataques mágicos avistar um  Angelring, então ela tem que correr.";
				next;
				mes "[Dega]";
				mes "Se você tem uma faca ou espada extra, você poderia tentar.";
				mes "Mas seria muito difícil sozinho, não acha...?";
				next;
				break;
				case 3:
				mes "[Dega]";
				mes "Boa Sorte.";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
izlude,150,143,2	script	Kylick#izl	4W_M_01,{
	mes "[Kylick]";
	mes "Eu estava pensando, apesar de o povo de Izlude viver tão perto do oceano...";
	next;
	mes "[Kylick]";
	mes "Existem outras culturas que têm completamente se desenvolvido sem a vida no mar.";
	mes "Claro, estou falando de Amatsu.";
	next;
	mes "[Kylick]";
	mes "Eu ouvi dizer que as comidas de lá são muito boas!";
	mes "Embora a ideia de comer peixe cru seja nova para mim, eu adoraria ir para lá, para experimentar só uma vez!";
	close;
}

// ------------------------------------------------------------------
izlude,56,126,2	script	Red#izl::RedCebalis	4_M_03,{
	mes "[Red]";
	mes "A única habilidade necessária a um Espadachim é o ^FF2400Golpe Fulminante^000000!";
	mes "Golpe Fulminante, Golpe Fulminante e SÓ ^FF2400Golpe Fulminante^000000!";
	mes "Não perca tempo aprimorando outras habilidades insignificantes!";
	mes "O resto é para fracos e covardes!";
	next;
	mes "[Cebalis]";
	mes "O que você está falando!?";
	mes "O verdadeiro espadachim resolve tudo sozinho.";
	mes "Quando esta cercado por inúmeros inimigos quebra todos eles com um incrível ataque.";
	next;
	mes "[Cebalis]";
	mes "^EE0000IMPACTO EXPLOSIVO!^000000";
	mes "Certamente, o Impacto Explosivo é uma habilidade que faz o trabalho certo!!";
	next;
	mes "[Cebalis]";
	mes "Bem, algumas vezes o dano da explosão pode atingir acidentalmente os monstros errados.";
	mes "Quando atingidos, vão querer lhe atacar.";
	mes "Mas isso é somente um risco que um Espadachim deve correr!!";
	next;
	mes "[Red]";
	mes "E por isso que você é burro, um idiota!";
	mes "E o que é 'o Espadachim Ideal?'";
	mes "Eu me lembro da última vez que você usou o Impacto Explosivo...";
	next;
	mes "[Red]";
	mes "Você fugiu de todos os monstros que você bateu com a habilidade estúpida!";
	mes "Frouxo!";
	mes "Todos aqueles Porings a sua volta que foram atingidos querendo te matar.. ";
	next;
	mes "[Cebalis]";
	mes "Se me lembro bem, você estava correndo também...";
	mes "Aparentemente muito ocupado para usar seu precisoso Golpe Fulminante.";
	mes "Em todo caso, Impacto Explosivo é A habilidade de um Espadachim~!!";
	next;
	mes "[Cebalis]";
	mes "Algo simples como Golpe Fulminante é só um dos pequenos passos para o Impacto Explosivo.";
	next;
	mes "[Red]";
	mes "Ei, eu sei que você ouviu tudo.";
	mes "O que você acha?";
	next;
	mes "[Red]";
	mes "O que você acha melhor?";
	mes "Uma habilidade de dano crítico, ^FF2400Golpe Fulminante^000000.";
	mes "Ou uma de dano em área, ^EE0000Impacto Explosivo^000000?";
	next;
	if (select("Golpe Fulminante","Impacto Explosivo") == 1)  {
		mes "[Red]";
		mes "Hahahaha!!!";
		mes "Sabia que você pensa como eu!!";
		mes "Sem dúvida, só o ^FF2400Golpe Fulminante^000000 realiza um Espadachim.";
		mes "Por favor diga isso para esse outro aqui Hahaha!";
		close;
	}
	mes "[Cebalis]";
	mes "Certo?!";
	mes "^EE0000Impacto Explosivo^000000!!!";
	mes "Você sabe do que está falando, né?";
	mes "Eu não sei porque você é tãoooo teimoso.";
	close;
}
izlude,58,126,2	duplicate(RedCebalis)	Cebalis#izl	4W_M_02

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
izlude_in,125,164,2	script	Aaron#izl	1_M_YOUNGKNIGHT,{
	mes "[Aaron]";
	mes "Não acha que Força, VIT e treinar um método unico de respirar que permite uma rápida recuperação de HP são as maiores vantagens de um Espadachim?";
	next;
	mes "[Aaron]";
	mes "Se você treinar suas habilidades, você pode ver seu HP recuperando.";
	mes "A quantidade de recuperação depende da vitalidade, ou VIT.";
	next;
	mes "[Aaron]";
	mes "Então quando mais pontos você colocar de VIT, você poderá recuperar mais HP quando em repouso.";
	next;
	mes "[Aaron]";
	mes "Mas, evidentemente, que seria bom ter Ataque alto, não é?";
	mes "Você pode adquirir uma boa arma ou aumentar sua FOR para fortalecer o ataque.";
	next;
	mes "[Aaron]";
	mes "De qualquer maneira você sabe que vai precisar de muita força para manusear equipamentos de qualidade facilmente.";
	next;
	mes "[Aaron]";
	mes "Outra coisa importante é a forma como vai acertar seus oponentes.";
	mes "DES é a chave.";
	mes "Se você aumentar a DES, então a diferença entre o dano MIN e o MAX irá diminuir.";
	next;
	mes "[Aaron]";
	mes "Hm...";
	mes "Você está entediado por toda esta conversa?";
	mes "Ou você quer que eu continue?";
	next;
	if (select("Conte-me mais.","Finalizar conversa.") == 1) {
		mes "[Aaron]";
		mes "Hmm...";
		mes "Nesse caso, eu vou falar um pouco sobre os outros atributos.";
		mes "A fim de atacar e fugir rapidamente, você tem que treinar a AGI. ";
		next;
		mes "[Aaron]";
		mes "No caso de querer mais ataques críticos, você deve investir em SOR.";
		mes "INT vai aumentar o SP, que é necessário para utilizar a maioria das habilidades...";
		mes "Isto é tudo.";
		close;
	}
	mes "[Aaron]";
	mes "Tudo bem, até logo.";
	close;
}