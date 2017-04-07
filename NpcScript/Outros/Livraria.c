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
| - Script: Spell Master/ eAthena/ rAthena/ Hercules                |
| - Nota: Livraria de Prontera                                      |
\*-----------------------------------------------------------------*/

prt_in,168,56,4	script	Enciclopédia#prt	HIDDEN_NPC,{
	mes "^FF0000[Enciclopédia]^000000";
	mes "Esta é uma Enciclopédia de Monstros contendo informações sobre monstros de propriedade de Água, Vento e Fantasma.";
	next;
	.@loop1 = 1;
	while(.@loop1) {
		.@loop2 = 1;
		switch(select("Monstros de Água","Monstros de Vento","Monstros Fantasma","Cancelar")) {
			case 1:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "1. Plâncton";
					mes "Mesmo que eles pareçam insignificantemente pequenos, tenha cuidado para não pisar neles.";
					mes "O plancton é leve e pode flutuar na água.";
					next;
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "2. Kukre";
					mes "Kukre parece melhor do que Thief Bugs mas, basicamente, pilha itens exatamente o mesmo.";
					mes "Felizmente, eles não atacam jogadores de um grupo.";
					next;
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "3. Hydra";
					mes "Monstros Vegetais que vivem perto da água ou no mar profundo que atacam usando tentáculos.";
					mes "Como um grupo, eles são uma dor de cabeça.";
					next;
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "4. Vadon";
					mes "Coberto em uma casca grossa e protetora, Vadons ataca com pinças poderosas.";
					mes "Embora pareçam caranguejos, sua carne não pode ser comida.";
					next;
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "5. Marina";
					mes "Medusa transparentes que atacam esticando seus corpos flexíveis de uma forma semelhante a um chicote.";
					mes "Eles vivem em lugares frescos perto da água.";
					next;
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "6. Cornutus";
					mes "Monstro benignos que se escondem em conchas duras, em forma de turbante.";
					mes "Eles tentam viver o mais pacificamente possível neste mundo louco e louco.";
					next;
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "7. Magnólia";
					mes "Criaturas bonitas que aparecem como grandes frigideiras cozinhando um ovo.";
					mes "Eles espancam impiedosamente todos os que se opõem a eles.";
					next;
					mes "^FF0000[Vol. 1: Monstros de Água Pequenos]^000000";
					mes "8. Esfera Marinha";
					mes "Estranhos monstros redondos que pulsam com energia destrutiva.";
					mes "Reunir seus Detonadores pode ser útil para Alquimistas.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "1. Poring";
					mes "Pequenos monstros rosados ??feitos de uma substância gelatinosa viva.";
					mes "Eles são bonitos, e se movem saltando.";
					mes "^0099FFItem Drops^000000: Jellopy, Sticky Mucus, Apple, Empty Bottle, Red Herb";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "2. Sapo de Roda";
					mes "Sapos anfíbios que têm um croar irritante.";
					mes "Em alguns países, suas pernas são uma iguaria.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "3. Esporo";
					mes "Monstros como cogumelos que utilizam a reprodução micelial.";
					mes "Geralmente vivem em florestas ou masmorras.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "4. Goblin";
					mes "Pequena, máscara vestindo monstros que atacam viciosamente os transeuntes.";
					mes "Parece haver diferentes tipos que usam armas diferentes.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "5. Sapo de Thara";
					mes "sapos vermelhos que são muito mais fortes do que os sapos verdes de Roda.";
					mes "Eles também produzem um barulho irritante irritante.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "6. Fen";
					mes "Um peixe azul com nariz pontiagudo e olhos tristes, incrivelmente tristes e desocupados.";
					next;
					mes "7. Martin";
					mes "Uma lula em miniatura com tentáculos em miniatura.";
					mes "Como se move através da água com essas pequenas coisas ainda é um mistério científico.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "8. Obeaune";
					mes "Uma sereia feminina que ataca com seus cabelos selvagens e fluidos.";
					mes "Se sua versão masculina é ou não Merman ainda está em debate.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "9. Sohee";
					mes "Um fantasma feminino que abriga um profundo ressentimento.";
					mes "Embora esteja chorando, ela pode se tornar feroz ao encontrar os vivos.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "10. Cavalo Marinho";
					mes "Um orgulhoso cavalo de mar que parece um dragão.";
					mes "Infelizmente, você não pode montá-lo.";
					next;
					mes "^FF0000[Vol. 2: Monstro de Água Médios]^000000";
					mes "11. Deviace";
					mes "Monstro de peixe com uma boca grande presa a uma ventosa.";
					mes "Pequeno, forte, e meio que se parece com uma melancia.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 3: Monstros de Água Grandes]^000000";
					mes "1. Ambernite";
					mes "Um monstro caracol em forma, é ofensa e defesa altamente forte.";
					mes "No entanto, é incrivelmente lento como todos os outros caracóis.";
					next;
					mes "^FF0000[Vol. 3: Monstros de Água Grandes]^000000";
					mes "2. Peixe Espada";
					mes "Monster Fish com um nariz afiado e comprido que é como uma espada.";
					mes "Embora tenha olhos pegajosos, é um monstro perigoso.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 2:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstro médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "1. Chonchon";
					mes "Voar monstros que se movem com grande velocidade.";
					mes "Surpreendentemente, eles podem curar na presença de matéria fecal.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "2. Zangão";
					mes "Normalmente benigno, eles atacarão em grupos se um deles for pertubado.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "3. Arenoso";
					mes "Um monstro voador com belas asas.";
					mes "Ele escapará teleportando se acha que está em grave perigo.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "4. Frilldora";
					mes "Inseto pequeno minúsculo com um shell splended, joaninha-como.";
					mes "Pode sentir magia e atacar quando uma mágica começar a lançar.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "5. Chonchon de Aço";
					mes "Semelhante a Chonchon, mas é amarelo e verde.";
					mes "Pega tudo do chão, por isso tome cuidado para não deixar cair itens.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "6. Poeira";
					mes "Este monstros voadores tem uma taxa de esquiva alta, então se você tem baixa precisão de ataque, você pode querer deixá-la sozinha.";
					next;
					mes "^FF0000[Vol. 4: Monstro de Vento Pequeno]^000000";
					mes "7. Mosca Caçadora";
					mes "Inseto voado coberto pelo sangue de inocentes.";
					mes "É incrivelmente rápido, bem como forte.";
					mes "Os novatos devem fugir desse monstro a todo custo.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 5: Monstro de Vento Médio]^000000";
					mes "1. Condor";
					mes "Um pássaro parecido com um abutre de aparência engraçada e careca.";
					mes "Eles tendem a atacar em um grupo se um deles está ameaçado.";
					next;
					mes "^FF0000[Vol. 5: Monstro de Vento Média]^000000";
					mes "2. Cobold ";
					mes "Um monstro parece um lobo bebê, mas é inteligente o suficiente para fazer e usar ferramentas.";
					mes "Embora Kobolds são fofos, eles são realmente bastante hostis.";
					next;
					mes "^FF0000[Vol. 5: Monstro de Vento Média]^000000";
					mes "3. Petite";
					mes "Um minúsculo e bonito dragão voador.";
					mes "Há outro tipo de Petite que anda, mas é da propriedade da Terra.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 6: Grandes Monstro do Vento]^000000";
					mes "1. Coringa";
					mes "Um cartão de jogo grande e encantado.";
					mes "Se você não tem boa precisão de ataque, as apostas estão contra você quando estiver lutando contra Coringa.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 3:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 7: Monstros Fantasma Pequenos]^000000";
					mes "1. Sussurro";
					mes "Um pedaço de tecido que emite vibrações assustadoras.";
					mes "Às vezes, ele gosta de se tornar invisível ...";
					next;
					mes "^FF0000[Vol. 7: Monstros Fantasma Pequenos]^000000";
					mes "2. Marionette";
					mes "Um monstro renascido como uma boneca amaldiçoada que está ligada a cordas presas a bastões de madeira.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 8: Monstro Fantasma Médio]^000000";
					mes "1. Eggyra";
					mes "Uma coisa estranha, ovo robotizado, que se espalha quando anda.";
					mes "Ninguém sabe de onde vêm essas coisas.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 9: Monstros Fantasma Grande]^000000";
					mes "1. Pesadelo";
					mes "Um cavalo fantasmagórico que irradia uma aura violeta de mal.";
					next;
					mes "^FF0000[Vol. 9: Monstros Fantasma Grande]^000000";
					mes "2. Medusa";
					mes "Monstro com cabelo composto de cobras.";
					mes "Está espalhado boatos para transformar as pessoas em pedra se olharem em seus olhos.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 4:
			close2;
			.@loop1 = 0;
			end;
		}
	}
}

// ------------------------------------------------------------------
prt_in,159,56,4	script	Enciclopédia#2pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclopédia]^000000";
	mes "Esta é uma Enciclopédia de Monstros contendo informações sobre monstros de Terra, Fogo e Neutro.";
	next;
	.@loop1 = 1;
	while(.@loop1) {
		.@loop2 = 1;
		switch(select("Monstros de Terra","Monstros de Fogo","Monstros Neutro","Cancelar")) {
			case 1:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "1. Fabre";
					mes "A larva fraca e pequena de Creamy.";
					mes "Embora alguns dizem que é bonito, outros descordam.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "2. Pupa";
					mes "Monstro que é a fase pupal de Fabre.";
					mes "Não ataca, então é fácil para aprendizes matar.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "3. Bebe Selvagem";
					mes "Pequena, rosa bebê Savage.";
					mes "É desanimador saber que cresce até ficar feio.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "4. Andre";
					mes "Uma espécie de formiga trabalhadora, André é amarelo, muito diligente e recolhe tudo à vista para a rainha Ant.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "5. Coco";
					mes "Um pequeno esquilo com olhos escuros e penetrantes.";
					mes "Sempre está segurando uma Acorn, e seria bonito se não tivesse sempre um olhar de desprezo total.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "6. Piere";
					mes "Pieres são formigas trabalhadoras verdes que são sutilmente diferentes de Andres.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "7. Fumacento";
					mes "Um pequeno guaxinim gordinho que não ama nada melhor do que correr.";
					mes "É rumores de usar uma folha mágica para se tornar invisível!";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "8. Deniro";
					mes "Formigas trabalhadoras vermelhas que vivem para servir a Rainha.";
					mes "Se houver alguma coisa no chão, eles vão buscá-la.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "9. Yoyo";
					mes "Um macaco travesso que pega qualquer coisa do chão.";
					mes "Eles são muito rápidos e vão se juntar a você se você atacar apenas um deles.";
					next;
					mes "10. Vitata";
					mes "Formigas gordas que curam o";
					mes "outras formigas em sua colônia.";
					mes "matou seu vazamento de corpos ... mel?";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "11. Caramelo";
					mes "Um adorável porco-espinho com minúsculos espinhos.";
					mes "No entanto, ele fica incrivelmente irritado quando tocado.";
					next;
					mes "^FF0000[Vol. 10: Monstros da Terra Pequenos]^000000";
					mes "13. Giearth";
					mes "Um duende idoso que vagueia cavernas para coletar minérios.";
					mes "Eles são incríveis fumantes.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "1. Salgueiro";
					mes "Criatura renascida de uma árvore velha.";
					mes "Suas características e os sons que ele faz são incrivelmente misteriosos.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "2. Rocker";
					mes "Um gafanhoto preguiçoso que adora tocar violino, assim como na fábula de Esopo.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "3. Mandragora";
					mes "Embora permaneça no mesmo lugar, pode atacar o transeunte de uma distância usando os talos subterrâneos.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "4. Lobo";
					mes "Lobos selvagens, roving com manes azuis.";
					mes "Eles tendem a atacar como um bando quando mesmo um deles é ameaçado.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "5. Jibóia";
					mes "Cobra verde que vive no florestas e desertos, são venenosas, e suas mordidas doem.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "6. Besouro Chifre";
					mes "Embora pareça feroz, é realmente um inseto pacífico.";
					mes "Vagueia em torno de campos com um som de trituração.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "7. Guerreiro Orc";
					mes "Um guerreiro da raça orgulhosa de Orcs.";
					mes "Em um momento, Orcs e seres humanos eram aliados, mas agora eles são inimigos amargos.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "8. Hode";
					mes "Uma enorme minhoca que normalmente se esconde debaixo da terra, geralmente pode ser encontrado no deserto.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "9. Louva-a-Deus";
					mes "Vagueia sobre campos, acenando um um fã minúsculo, umas artes marciais inteiras é baseado nos movimentos de este inseto.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "10. Selvagem";
					mes "Um javali que anda por aí, grunhido inquieto, seu áspero olhando presas tornam difícil acredito que era bonito como um bebê.";
					next;
					mes "^FF0000[Vol. 11: Monstro Terra Médio]^000000";
					mes "11. Petite";
					mes "Bonito, andando Dragão.";
					mes "Há outro tipo de Petite que voa, mas é da propriedade Vento.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "1. Rabo de Verme";
					mes "Um estranho monstro que usa chicoteando ataques com uma cauda que parece uma folha de grama.";
					next;
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "2. Muka";
					mes "Cacto bonito comumente encontrado no deserto, tenta ameaçar transeunte com seus rosnados.";
					mes "Mas seu são muito engraçados para serem assustadores.";
					next;
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "3. Pé Grande";
					mes "Embora seu nome pode ser enganoso, é realmente um grande bera.";
					mes "Anda como se possui a floresta, e ele faz.";
					next;
					mes "^FF0000[Vol. 12: Grandes Monstros da Terra]^000000";
					mes "4. Flora";
					mes "Uma planta que come o homem, suas partes são considerado útil para Alquimistas fazer monstros por conta própria...";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 2:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 13: Small Fire Monsters]^000000";
					mes "^FF0000[Vol. 13: Monstros de Fogo Pequeno]^000000";
					mes "1. Picky";
					mes "Pintinho bonito que pode crescer e ser um Peco Peco, a menos que você o mata.";
					next;
					mes "^FF0000[Vol. 13: Monstros de Fogo Pequeno]^000000";
					mes "2. Filhote de Lobo do Deserto";
					mes "Um Lobo do Deserto do Bebê que se cansa de ameaçar aventureiros com o seu bonito pequenos gritos.";
					next;
					mes "^FF0000[Vol. 13: Monstros de Fogo Pequeno]^000000";
					mes "3. Horong";
					mes "Uma bola de fogo violenta e de aparência estranha.";
					mes "É inútil usar habilidades escondidas perto desse espírito vingativo.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "1. Drops";
					mes "A versão do deserto do Poring que tem uma cor laranja pálida.";
					mes "Parece um pouco mais forte do que Poring, no entanto.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "2. Salgueiro Ancião";
					mes "A versão mais velha do Salgueiro";
					mes "É vermelho e pode até usar alguma magia.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "3. Metaller";
					mes "A forma evoluída de Rocker.";
					mes "É marrom escuro e vive no deserto.";
					mes "Este grilo vai pegar itens para cima do chão.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "4. Zerom";
					mes "Um escravo morto.";
					mes "Infelizmente, nem mesmo a morte trará paz ao horas abusivas de trabalho Zerom sofre de seu Faraó.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "5. Escorpião";
					mes "Escorpiões podem ser encontrados em áreas onde há deserto.";
					mes "Tem um cor bonita, mas pode ser perigoso.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "6. Lobo do Deserto";
					mes "Lobos no deserto são muito mais forte do que aqueles que vivem nas florestas.";
					mes "Se você bater um, você vai tem que lidar com o bando inteiro.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "7. Frilldora";
					mes "Lagarto com um frilly, fã-como pescoço.";
					mes "Embora pareça rediculous, é realmente muito forte.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "8. Cobold";
					mes "Um monstro azul, lobo, que é incrivelmente fofo.";
					mes "No entanto, todos Kobolds juraram odiar humanos.";
					mes "Existem diferentes tipos de Kobolds que usam diferentes armas.";
					next;
					mes "^FF0000[Vol. 14: Monstro de fogo médio]^000000";
					mes "9. Jakk";
					mes "Um assustador monstro de cabeça de abóbora que se veste em um traje formal.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 15: Grandes Monstros de Fogo]^000000";
					mes "1. Peco Peco";
					mes "Hoje em dia peco peco é popular como um para Cavaleiros e Cruzados.";
					mes "Eles vivem no deserto ou na floresta e também atacar em bandos se um deles está ameaçado.";
					next;
					mes "^FF0000[Vol. 15: Grandes Monstros de Fogo]^000000";
					mes "2. Marduk";
					mes "Um bruxo de escuridão que sabe usar bem a magia.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 3:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "1. Lunatico";
					mes "Um monstro desgrenhado que parece tipo de como um coelho, embora alguns possam acho que é bonito, o autor acredita que é absolutamente horrível.";
					mes "Talvez seja por causa de seus alleriges.";
					next;
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "2. Ovo de Peco Peco";
					mes "É pequeno, e indefeso, tornando-o um alvo perfeito para Novices.";
					next;
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "3. Ovo de André";
					mes "Um ovo indefeso, alguns deles realmente podem chocar e ser tornar uma formiga.";
					next;
					mes "^FF0000[Vol. 16: Monstro Neutros Pequenos]^000000";
					mes "4. Filhore de Besouro-Ladrão";
					mes "Criaturas sujas e imundas que tendem para trabalhar em grupos.";
					mes "Não os deixe poluir os Esgotos de Prontera, seria um desastre!";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 17: Monstro Neutro Médio]^000000";
					mes "^0099FF...^000000";
					next;
					mes "^FF0000[Vol. 17: Monstro Neutro Médio]^000000";
					mes "^ 0099FF...^000000";
					mes "^ 0099FF......^000000";
					next;
					mes "^FF0000[Vol. 17: Monstro Neutro Médio]^000000";
					mes "^ 0099FFAlgumas páginas parecem ter sido rasgadas...^000000";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 18: Grandes Monstros Neutros]^000000";
					mes "1. Golem";
					mes "Um ser de pedra viva que tem foi encantado com magia negra.";
					mes "Move-se incrivelmente lento devido ao seu problema de peso.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 4:
			close2;
			.@loop1 = 0;
			end;
		}
	}
}

// ------------------------------------------------------------------
prt_in,161,50,4	script	Enciclopédia#3pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclopédia]^000000";
	mes "Esta é uma Enciclopédia de Monstros contendo informações sobre Sombra, Veneno e Mortos-vivos.";
	next;
	.@loop1 = 1;
	while(.@loop1) {
		.@loop2 = 1;
		switch(select("Monstros Sombrios","Monstros de veneno","Monstros mortos-vivos","Cancelar")) {
			case 1:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "1. Ovo de Besouro-Ladrão";
					mes "Um ovo imundo de um Besouro-Ladrão.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "2. Familiar";
					mes "Um morcego cinzento que não é muito forte, mas realmente irritante porque ataca muito rápido e persegue implacavelmente.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "3. Tarou";
					mes "Um pequeno, pequeno rato branco.";
					mes "Geralmente encontrado nos Esgotos de Prontera.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "4. Drainliar";
					mes "Um bastão vermelho sangue que é muito mais forte do que Familiar.";
					mes "Também tende a perseguir qualquer humano que encontra.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "5. Dokebi";
					mes "Um demônio coreano tradicional com o poder gerar riqueza usando mamonita, não é grande coisa para eles.";
					next;
					mes "^FF0000[Vol. 19: Monstros Sombrios Pequenos]^000000";
					mes "6. Deviruchi";
					mes "Um demônio em miniatura.";
					mes "É bonito, mas mesmo assim é um demônio da escuridão.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 20: Monstro Escuro Médio]^000000";
					mes "1. Besouro-Ladrão Fêmea";
					mes "Grandes insetos marrons que são horrível para os olhos e repugnante ao toque Notorious para rapidamente pegar o que cai para o chão.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro Médio]^000000";
					mes "2. Besouro-Ladrão Macho";
					mes "Um grande inseto verde, o Besouro-Ladrão Macho é consideravelmente poderoso.";
					mes "Eles também são muito agressivos para os seres humanos.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro Médio]^000000";
					mes "3. Matyr";
					mes "Um cão saturado de mal, sempre dormindo, mas nasce para depois de cheirar um aventureiro.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro Médio]^000000";
					mes "4. Zenorc";
					mes "Um Orc desonroso cujo corpo foi amaldiçoado.";
					mes "Tem mania de saquear itens que caíam no chão.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro Médio]^000000";
					mes "5. Requiem";
					mes "Um antigo escravo que carrega um caixão pesado em suas costas cansado de seu trabalho.";
					next;
					mes "^FF0000[Vol. 20: Monstro Escuro Médio]^000000";
					mes "6. Bathory";
					mes "Uma bruxa usando coelho que atacarão qualquer coisa mais bonita que ela.";
					mes "Em outras palavras ela ataca todos.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 21: Grandes monstros escuros]^000000";
					mes "1. Isis";
					mes "Um monstro que é meia serpente e meia mulher.";
					next;
					mes "^FF0000[Vol. 21: Grandes monstros escuros]^000000";
					mes "2. Raydric";
					mes "Uma alma presa dentro de uma armadura através de maldição.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 2:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 22: Monstro Pequeno Venenoso]^000000";
					mes "^0099FF...^000000";
					next;
					mes "^FF0000[Vol. 22: Monstro Pequeno Venenoso]^000000";
					mes "^0099FF...^000000";
					mes "^0099FF......^000000";
					next;
					mes "^0099FFPáginas foram arrancadas do livro, você terá que aprender por conta própria^000000.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 23: Monstro Médio Venenoso]^000000";
					mes "1. Poporing";
					mes "Um poring que emana uma luz verde de propiedade veneneno.";
					mes "É muito mais forte de Poring, mas ainda se move por significa saltar.";
					next;
					mes "^FF0000[Vol. 23: Monstro Médio Venenoso]^000000";
					mes "2. Esporo venenoso";
					mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
					next;
					mes "^FF0000[Vol. 23: Monstro Médio Venenoso]^000000";
					mes "3. Cobold";
					mes "Um pequeno monstro lobo que é inteligente o suficiente para usar armas.";
					mes "Olhando rápido parece inofensivo, no entanto ele é muito malvado para um garotinho.";
					next;
					mes "^FF0000[Vol. 23: Monstro Médio Venenoso]^000000";
					mes "4. Anaconda";
					mes "Uma cobra de cor escura.";
					mes "Tenha cuidado e mate-as antes que possam te envenenar.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 24: Monstro Grande Venenoso]^000000";
					mes "1. Argos";
					mes "Uma aranha monstruosa que vai atacar aventureiros à vista.";
					next;
					mes "^FF0000[Vol. 24: Monstro Grande Venenoso]^000000";
					mes "2. Argriope";
					mes "Um monstro de tipo milípede, segmentado que vai atacar o transeunte com veneno.";
					next;
					mes "^FF0000[Vol. 24: Monstro Grande Venenoso]^000000";
					mes "^FF0000[Vol. 24: Grandes Monstro Venenos]^000000";
					mes "3. Névoa";
					mes "Um estranho monstro feito de névoa que está ligado a um fantasma.";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 3:
			while(.@loop2) {
				switch(select("Monstros pequenos","Monstros médios","Monstros grandes","Cancelar")) {
					case 1:
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Pequeno]^000000";
					mes "^0099FF...^000000";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Pequeno]^000000";
					mes "^0099FF...^000000";
					mes "^0099FF......^000000";
					next;
					mes "^0099FFPáginas foram arrancadas do livro, você terá que aprender por conta própria^000000.";
					next;
					break;
					case 2:
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "1. Zumbi";
					mes "Um humano que foi transformado em morto por magina negra.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "2. Megalodon";
					mes "Um esqueleto de peixe animado que vagueia pelos mares, embora pareça assustador, é realmente benigno.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "3. Orc Zumbi";
					mes "Orcs que voltaram pois o espírito de luta honorável do Guerreiro Orc nunca morre!";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "4. Esqueleto Pirata";
					mes "Um pirata que salta em meias roxas.";
					mes "Flagelo dos sete mares.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "5. Orc Esqueleto";
					mes "O esqueleto de um Orc que foi trazido de volta à vida.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "6. Esqueleto";
					mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
					mes "Ele deve ter sido um ótimo espadachim quando ele estava vivo.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "7. Munak";
					mes "Um zumbi bonito que parece ser ligado a Bongun de alguma forma.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "8. Esqueleto Operário";
					mes "Um esqueleto reanimado de um mineiro que morreu sem receber seu indenização.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "9. Arqueiro Esqueleto";
					mes "Apesar de não ter olhos deteriorados, eles possuem boa pontaria.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "10. Múmia";
					mes "Um cadáver ambulante coberto de bandagens.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "11. Verit";
					mes "Um cão mumificado que vai pegar qualquer coisa caiu no chão.";
					mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
					next;
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Médio]^000000";
					mes "12. Carniçal";
					mes "Semelhante a um Zumbi, mas os Carniçais são verde e muito mais fortes.";
					mes "Vomitam em tudo que passa ao seu redor.";
					next;
					break;
					case 3:
					mes "^FF0000[Vol. 25: Monstro Mortos-Vivo Grande]^000000";
					mes "1. Druida Maligno";
					mes "Um druida extravagantemente malvado.";
					mes "Sempre usando um livro de magia flutuante que crepita com energia para causar miséria para aventureiros";
					next;
					break;
					case 4:
					close2;
					.@loop2 = 0;
					end;
				}
			}
			case 4:
			close2;
			.@loop = 0;
			end;
		}
	}
}

// ------------------------------------------------------------------
prt_in,172,96,4	script	Enciclopédia#4pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclopédia]^000000";
	mes "Esta é uma enciclopédia que descreve que vivem em Cavernas.";
	next;
	.@loop1 = 1;
	switch(select("Formigueiro Infernal","Torre de Geffen","Esfinge","Cancelar")) {
		case 1:
		while(.@loop1) {
			switch(select("1º Andar","2º Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "1. Ovo de André";
				mes "Apenas um ovo de formiga.";
				mes "Não pode machucar você.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "2. Andre";
				mes "Uma formiga trabalhadora diligente que vive por causa da colônia.";
				mes "Embora passiva se atacar alguma você terá que lutar contra todos eles.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "3. Piere";
				mes "Uma formiga de trabalhador verde que trabalha apenas, tão diligentemente como André.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "4. Deniro";
				mes "A formiga de trabalhador vermelho, e é mais rápido que Pieres e Deniros.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "5. Vitata";
				mes "Formigas trabalhadoras que são gordas com querida...";
				mes "Tão gorda, eles não vão escolher qualquer coisa.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "6. Giearth";
				mes "Um duende idoso que vagueia cavernas para colher minérios.";
				mes "Quando morre, ele planeja deixar o mundo seu bigode bonito.";
				next;
				break;
				case 2:
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "1. Ovo de Andre";
				mes "Ovos de formiga incapazes de atacar, ou até sentir dor.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "2. Andre";
				mes "Uma formiga de trabalhador amarela que pode ser o mais lento de sua raça, além da Vitata.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "3. Piere";
				mes "Um trabalhador verde e obviamente vindos da França.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "4. Deniro";
				mes "O mais veloz das formigas operárias que vem em uma cor vermelha chamativa.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "5. Vitata";
				mes "Formigas trabalhadoras encarregadas de armazenar mel dentro de suas barrigas.";
				next;
				mes "^FF0000[Formigueiro Infernal]^000000";
				mes "6. Giearth";
				mes "Um duende idoso que vagueia cavernas para colher minérios.";
				mes "Quase um anão, mas não muito.";
				next;
				mes "^FF0000[Ant Hell 2F Monsters]^000000";
				mes "7. Maya";
				mes "A Rainha das formigas, raramente aparece.";
				mes "Muito perigosa ao ver intrusos em seu domínimo, cuidado ela é muito forte!";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1º Andar","2º Andar","3º Andar","4º Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte, mas realmente irritante porque ataca muito rápido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Poporing";
				mes "Um poring de cor verde, mas muito mais forte que um poring comum.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Poeira";
				mes "Este monstro voador difícil de atingir com ataques normais.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. Esporo venenoso";
				mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
				next;
				break;
				case 2:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte, mas realmente irritante porque ataca muito rápido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Poeira";
				mes "Este monstro voador difícil de atingir com ataques normais.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Esporo venenoso";
				mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. Argos";
				mes "Uma aranha monstruosa que vai atacar aventureiros à vista, é muito grande para os aventureiros esmagarem com seus pés.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "5. Sussurro";
				mes "Um pedaço de tecido que emite vibrações assustadoras, gosta de se tornar invisível...";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "6. Jakk";
				mes "Um assustador monstro de cabeça de abóbora que gosta de se vestir em trajes formais.";
				next;
				break;
				case 3:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. Argos";
				mes "Uma aranha monstruosa que vai atacar aventureiros à vista, é muito grande para os aventureiros esmagarem com seus pés.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Sussurro";
				mes "Um pedaço de tecido que emana vibrações assustadoras.";
				mes "E gosta de se tornar invisível ...";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Jakk";
				mes "Um assustador monstro de cabeça de abóbora que gosta de se vestir em trajes formais.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. Névoa";
				mes "Um estranho monstro feito de névoa que que se parece com um fantasma.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "5. Marionette";
				mes "Um monstro renascido como uma boneca amaldiçoada.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "6. Bathory";
				mes "Uma bruxa que atacará qualquer coisa mais bonita do que ela.";
				mes "Em outras palavras, ela ataca todos.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "7. Pesadelo";
				mes "Um cavalo fantasma que irradia um aura violeta do mal.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "8. Drácula";
				mes "Um príncepe das trevas, ele é muito poderoso e anda camuflado.";
				mes "Normalmente quando você o ver já é tarde demais.";
				next;
				break;
				case 4:
				mes "^FF0000[Torre de Geffen]^000000";
				mes "1. Névoa";
				mes "Um estranho monstro feito de névoa que se parece com um fantasma.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "2. Deviruchi";
				mes "Um demônio minado que repetidamente apunhala os humanos com sua forquilha.";
				mes "É bonito, mas mesmo assim é um demônio da escuridão.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "3. Raydric";
				mes "Uma alma presa dentro da armadura por uma maldição.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "4. Coringa";
				mes "Um cartão de jogo grande, encantado por magia negra.";
				next;
				mes "^FF0000[Torre de Geffen]^000000";
				mes "5. Doppelganger";
				mes "Um cópia fantasmagórica de um Espadachim.";
				mes "Talvez ele tenha sido no passado o mais poroso em toda a Rune-Midgard.";
				next;
				break;
				case 5:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		while(.@loop1) {
			switch(select("1º Andar","2º Andar","3º Andar","4º Andar","5º Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte, mas realmente irritante porque ataca muito rápido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "2. Zerom";
				mes "Um escravo não morto.";
				mes "Infelizmente, nem mesmo a morte trará paz as horas abusivas de trabalho que sofreu pelo faraó.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Matyr";
				mes "Um cão saturado de mal.";
				mes "Sempre dormindo, mas acorda depois de cheirar um aventureiro.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "4. Requiem";
				mes "Um antigo escravo que carrega um caixão pesado em suas costas.";
				next;
				break;
				case 2:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte, mas realmente irritante porque ataca muito rápido e implacavelmente persegue quem avista.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "2. Matyr";
				mes "Um cão saturado de mal.";
				mes "Sempre dormindo, mas acorda depois de cheirar um aventureiro.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Requiem";
				mes "Um antigo escravo que carrega um caixão pesado em suas costas.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "4. Sussurro";
				mes "Um pedaço de tecido que emana vibrações assustadoras.";
				mes "E gosta de se tornar invisível ...";
				next;
				break;
				case 3:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Matyr";
				mes "Um cão saturado de mal.";
				mes "Sempre dormindo, mas acorda depois de cheirar um aventureiro.";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "2. Sussurro";
				mes "Um pedaço de tecido que emana vibrações assustadoras.";
				mes "E gosta de se tornar invisível ...";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Marduk";
				mes "Um bruxo da escuridão, que sabe usar bem a magia.";
				next;
				break;
				case 4:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Sussurro";
				mes "Um pedaço de tecido que emana vibrações assustadoras.";
				mes "E gosta de se tornar invisível ...";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Marduk";
				mes "Um bruxo da escuridão, que sabe usar bem a magia.";
				next;
				break;
				case 5:
				mes "^FF0000[Esfinge]^000000";
				mes "1. Sussurro";
				mes "Um pedaço de tecido que emana vibrações assustadoras.";
				mes "E gosta de se tornar invisível ...";
				next;
				mes "^FF0000[Esfinge]^000000";
				mes "3. Marduk";
				mes "Um bruxo da escuridão, que sabe usar bem a magia.";
				next;
				break;
				case 6:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 4:
		close;
	}
}

// ------------------------------------------------------------------
prt_in,164,96,4	script	Enciclopédia#5pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclopédia]^000000";
	mes "Esta é uma enciclopédia que descreve Monstros que vivem em Cavernas.";
	next;
	.@loop1 = 1;
	switch(select("Calabouço dos Orcs","Ilha de Byalan","Esgotos de Prontera")){
		case 1:
		while(.@loop1) {
			switch(select("1º Andar","2º Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "1. Chonchon";
				mes "Um monstro voador que se movem com grande velocidade, eles comem tudo que ver pelo chão.";
				next;
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "2. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "E realmente irritante porque ataca muito rápido e implacavelmente e persegue todo mundo.";
				next;
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "3. Orc Zumbi";
				mes "Orcs que voltaram dos mortos, pois o espírito de luta honorável do Guerreiro Orc nunca morre!";
				next;
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "4. Orc Esqueleto";
				mes "O esqueleto de um Orc que foi trazido de volta à vida.";
				mes "Herb";
				next;
				break;
				case 2:
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "1. Chonchon";
				mes "Um monstro voador que se movem com grande velocidade, eles comem tudo que ver pelo chão.";
				next;
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "2. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "E realmente irritante porque ataca muito rápido e implacavelmente e persegue todo mundo.";
				next;
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "4. Orc Esqueleto";
				mes "O esqueleto de um Orc que foi trazido de volta à vida.";
				next;
				mes "^FF0000[Calabouço dos Orcs]^000000";
				mes "4. Zenorc";
				mes "Um Orc desonroso cujo corpo foi amaldiçoado.";
				mes "Tem a mania de saquear itens que caíam no chão.";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1º Andar","2º Andar","3º Andar","4º Andar","5º Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Plâncton";
				mes "Mesmo que pareçam insignificantemente pequeno, tenha cuidado não pisar neles.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Kukre";
				mes "Kukre parece um Besouro-Ladrão porque come tudo pelo chão.";
				mes "Felizmente, eles não atacam em um grupo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Hydra";
				mes "Monstros Vegetais que vivem perto água ou no mar profundo.";
				mes "Ataque usando tentáculos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Vadon";
				mes "Coberto por uma espessa, carapaça";
				mes "Vadons atacam com suas poderosas guarras.";
				mes "Embora pareçam caranguejos, sua carne não pode ser comido.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Marina";
				mes "Medusa transparentes que atacam esticando seus corpos flexíveis em um chicote-like fashion.";
				mes "Elas vivem em lugares frescos perto da água.";
				next;
				break;
				case 2:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Plâncton";
				mes "Mesmo que pareçam insignificantemente pequeno, tenha cuidado não pisar neles.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Kukre";
				mes "Kukre parece um Besouro-Ladrão porque come tudo pelo chão.";
				mes "Felizmente, eles não atacam em um grupo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Hydra";
				mes "Monstros Vegetais que vivem perto água ou no mar profundo.";
				mes "Ataque usando tentáculos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Vadon";
				mes "Coberto por uma espessa, carapaça";
				mes "Vadons atacam com suas poderosas guarras.";
				mes "Embora pareçam caranguejos, sua carne não pode ser comido.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Marina";
				mes "Medusa transparentes que atacam esticando seus corpos flexíveis em um chicote-like fashion.";
				mes "Elas vivem em lugares frescos perto da água.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "6. Sapo de Thara";
				mes "Sapos de cor vermelha, certamente mais fortes do que os Sapos de Roda.";
				mes "Dizem que existe um mistério no som irritante que ele produz.";
				next;
				break;
				case 3:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Hydra";
				mes "Monstros Vegetais que vivem perto água ou no mar profundo.";
				mes "Ataque usando tentáculos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Sapo de Thara";
				mes "Sapos de cor vermelha, certamente mais fortes do que os Sapos de Roda.";
				mes "Dizem que existe um mistério no som irritante que ele produz.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Cornutus";
				mes "Monstro benignos que escondem dentro de uma concha dura.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Martin";
				mes "Uma lula em miniatura com pequenos tentáculos.";
				mes "Como ele se move através de água com essas pequenas coisas é ainda um mistério científico.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Obeaune";
				mes "Uma Sereia feminina que ataca com seu cabelo selvagem.";
				mes "Dizem que sua forma masculina é o Ermitão, mas ninguém sabe ao certo.";
				next;
				break;
				case 4:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Hydra";
				mes "Monstros Vegetais que vivem perto água ou no mar profundo.";
				mes "Ataque usando tentáculos.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Martin";
				mes "Uma lula em miniatura com pequenos tentáculos.";
				mes "Como ele se move através de água com essas pequenas coisas é ainda um mistério científico.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Obeaune";
				mes "Uma Sereia feminina que ataca com seu cabelo selvagem.";
				mes "Dizem que sua forma masculina é o Ermitão, mas ninguém sabe ao certo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Esfera Marinha";
				mes "Monstro estranhos, redondos que com energia destrutiva.";
				mes "Quando se sente em perigo ela explode.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Fen";
				mes "Um peixe azul com um nariz pontiagudo com uma aparência muito triste.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "6. Peixe Espada";
				mes "Um monstro peixe com um nariz afiado, longo como uma espada.";
				mes "Tem olhos pegajosos, é perigoso.";
				next;
				break;
				case 5:
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "1. Esfera Marinha";
				mes "Monstro estranhos, redondos que com energia destrutiva.";
				mes "Quando se sente em perigo ela explode.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "2. Peixe Espada";
				mes "Um monstro peixe com um nariz afiado, longo como uma espada.";
				mes "Tem olhos pegajosos, é perigoso.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "3. Martin";
				mes "Uma lula em miniatura com pequenos tentáculos.";
				mes "Como ele se move através de água com essas pequenas coisas é ainda um mistério científico.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "4. Obeaune";
				mes "Uma Sereia feminina que ataca com seu cabelo selvagem.";
				mes "Dizem que sua forma masculina é o Ermitão, mas ninguém sabe ao certo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "5. Cavalo Marinho";
				mes "Um cavalo de mar que mais parece um dragão.";
				mes "Infelizmente, você não pode montá-lo.";
				next;
				mes "^FF0000[Ilha de Byalan]^000000";
				mes "6. Strouf";
				mes "Um monstro de peixe senhor que olha como o Deus dos Mares.";
				mes "Carrega um tridente para lutar contra pessoas da superfície.";
				next;
				break;
				case 6:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		while(.@loop1) {
			switch(select("1º Andar","2º Andar","3º Andar","4º Andar","Cancelar")) {
				case 1:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladrão";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladrão";
				mes "A versão ainda não desenvolvida dos outro besouros ladrões";
				mes "Mesmo como bebês, eles são muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Esporo";
				mes "Monstros como cogumelos que utilizam a reprodução micelial.";
				mes "Geralmente vivem em florestas ou masmorras.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Tarou";
				mes "Um pequeno rato branco.";
				next;
				break;
				case 2:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladrão";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladrão";
				mes "A versão ainda não desenvolvida dos outro besouros ladrões";
				mes "Mesmo como bebês, eles são muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Esporo";
				mes "Monstros como cogumelos que utilizam a reprodução micelial.";
				mes "Geralmente vivem em florestas ou masmorras.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Tarou";
				mes "Um pequeno rato branco.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "6. Plâncton";
				mes "Mesmo que pareçam insignificantemente pequeno, tenha cuidado para não pisar neles.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "7. Hydra";
				mes "Monstros Vegetais que vivem perto água ou no mar profundo.";
				mes "Ataque usando tentáculos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "8. Besouro-Ladrão Fêmea";
				mes "Grandes insetos marrons que são horrível para os olhos.";
				mes "São muitos veloses o devoram tudo pelo chão.";
				next;
				break;
				case 3:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladrão";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladrão";
				mes "A versão ainda não desenvolvida dos outro besouros ladrões";
				mes "Mesmo como bebês, eles são muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Besouro-Ladrão Fêmea";
				mes "Grandes insetos marrons que são horrível para os olhos.";
				mes "São muitos veloses o devoram tudo pelo chão.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Tarou";
				mes "Um pequeno rato branco.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "6. Poporing";
				mes "Um poring que emana uma luz verde, e muito mais forte que umporing comum.";
				next;
				break;
				case 4:
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "1. Ovo do Besouro-Ladrão";
				mes "Um ovo de besouro.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "2. Besouro-Ladrão";
				mes "A versão ainda não desenvolvida dos outro besouros ladrões";
				mes "Mesmo como bebês, eles são muitos nojentos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "3. Besouro-Ladrão Fêmea";
				mes "Grandes insetos marrons que são horrível para os olhos.";
				mes "São muitos veloses o devoram tudo pelo chão.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "4. Besouro-Ladrão Macho";
				mes "Um grande inseto azul, é consideravelmente poderoso.";
				mes "Eles também são muito agressivos para os seres humanos.";
				next;
				mes "^FF0000[Esgotos de Prontera]^000000";
				mes "5. Besouro-Ladrão Dourado";
				mes "Um besouro que brilha com uma luz dourada e itença.";
				mes "Muito bonito, mas muito poderoso, tenha cuidado se o avistar.";
				next;
				break;
				case 5:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 4:
		close;
	}
}

// ------------------------------------------------------------------
prt_in,172,102,4	script	MEnciclopédia#6pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclopédia]^000000";
	mes "Esta enciclopédia descreve monstros vivendo em calabouços e outros mapas especiais.";
	next;
	.@loop1 = 1;
	switch(select("Mina de Carvão","Caverna de Payon","Pirâmide","Cancelar")) {
		case 1:
		while(.@loop1) {
			switch(select("1º andar","2º andar","3º andar","Cancelar")) {
				case 1:
				mes "^FF0000[Mina de Carvão]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Dead Pit 1F Monsters]^000000";
				mes "2. Tarou";
				mes "Um pequeno rato branco.";
				next;
				mes "^FF0000[Dead Pit 1F Monsters]^000000";
				mes "3. Drainliar";
				mes "Um bastão vermelho sangue que é muito mais forte do que Familiar.";
				mes "Também tende a perseguir qualquer humano que encontra.";
				next;
				break;
				case 2:
				next;
				mes "^FF0000[Mina de Carvão]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Mina de Carvão]^000000";
				mes "2. Esqueleto Operário";
				mes "Um esqueleto reanimado de um mineiro que morreu, mas voltou para reclamar da sua apólice de seguro.";
				next;
				mes "^FF0000[Dead Pit 2F Monsters]^000000";
				mes "3. Névoa";
				mes "Um estranho monstro feito de névoa que mais parece um fantasma.";
				next;
				break;
				case 3:
				mes "^FF0000[Mina de Carvão]^000000";
				mes "1. Esqueleto Operário";
				mes "Um esqueleto reanimado de um mineiro que morreu, mas voltou para reclamar da sua apólice de seguro.";
				next;
				mes "^FF0000[Dead Pit 2F Monsters]^000000";
				mes "2. Névoa";
				mes "Um estranho monstro feito de névoa que mais parece um fantasma.";
				next;
				mes "^FF0000[Mina de Carvão]^000000";
				mes "3. Druida Maligno";
				mes "Um druida extravagantemente malvado.";
				mes "Sempre usando um livro de magia flutuante";
				mes "Que crepita com energia para causar miséria para os aventureiros.";
				next;
				break;
				case 4:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1º andar","2º andar","3º andar","4º andar","5º andar","Cancelar")) {
				case 1:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Esporo";
				mes "Monstro como um cogumelo.";
				mes "Geralmente encontrado em florestas ou masmorras.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Zumbi";
				mes "Nascido de um cadáver reanimado com magia negra.";
				next;
				break;
				case 2:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Eggyra";
				mes "Um estranho, robótico ovo olhando coisa que vagueia quando anda.";
				mes "Ninguém sabe do que essas coisas são feitas.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Magnólia";
				mes "Criaturas bonitas que aparecem como grandes frigideiras.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um ótimo espadachim.";
				next;
				break;
				case 3:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um ótimo espadachim.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Munak";
				mes "Um zumbi bonito que parece ser ligado a Bongun de alguma forma.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				break;
				case 4:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um ótimo espadachim.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Sohee";
				mes "Um fantasma feminino que guarda um profundo rancor.";
				mes "Embora ela geralmente chorar, ela pode se tornar feroz se encontrar com os vivos.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Horong";
				mes "Uma bola de fogo violenta e de aparência estranha.";
				mes "É inútil usar habilidades escondidas perto desse espírito vingativo.";
				next;
				break;
				case 5:
				mes "^FF0000[Caverna de Payon]^000000";
				mes "1. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um ótimo espadachim.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "2. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "3. Sohee";
				mes "Um fantasma feminino que guarda um profundo rancor.";
				mes "Embora ela geralmente chorar, ela pode se tornar feroz se encontrar com os vivos.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "4. Horong";
				mes "Uma bola de fogo violenta e de aparência estranha.";
				mes "É inútil usar habilidades escondidas perto desse espírito vingativo.";
				next;
				mes "^FF0000[Caverna de Payon]^000000";
				mes "5. Flor do Luar";
				mes "Uma garota selvagem e muito poderosa.";
				mes "Ela carrega um bastão com um sino.";
				mes "Dizem que esse sino pode trazer mortos devolta a vida.";
				next;
				break;
				case 6:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		while(.@loop1) {
			switch(select("1º andar","2º andar","3º andar","4º andar","5º andar","6º andar","Cancelar")) {
				case 1:
				mes "^FF0000[Pyramid 1F Monsters]^000000";
				mes "1. Familiar";
				mes "Um morcego cinzento que não é muito forte.";
				mes "Mas realmente irritante porque ataca muito rápido e persegue implacavelmente quem avista.";
				next;
				mes "^FF0000[Pyramid 1F Monsters]^000000";
				mes "2. Esporo";
				mes "Monstro como um cogumelo.";
				mes "Geralmente encontrado em florestas ou masmorras.";
				next;
				mes "^FF0000[Pyramid 1F Monsters]^000000";
				mes "3. Poporing";
				mes "A light green Poring with the";
				mes "Poison property. It's much stronger";
				mes "than Poring, but still moves by";
				mes "means of bouncing.";
				mes "^0099FFItem Drops^000000: Sticky Mucus, Garlet,";
				mes "Green Herb";
				next;
				break;
				case 2:
				mes "^FF0000[Pirâmide]^000000";
				mes "1. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "É muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "2. Drainliar";
				mes "Um bastão vermelho sangue que é muito mais forte do que Familiar.";
				mes "Também tende a perseguir qualquer humano que encontra.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "3. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um ótimo espadachim.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "4. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				break;
				case 3:
				mes "^FF0000[Pirâmide]^000000";
				mes "1. Drainliar";
				mes "Um bastão vermelho sangue que é muito mais forte do que Familiar.";
				mes "Também tende a perseguir qualquer humano que encontra.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "2. Esqueleto";
				mes "Um esqueleto soldado que maneja duas espadas ao mesmo tempo.";
				mes "Em vida, deveria ter siso um ótimo espadachim.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "3. Arqueiro Esqueleto";
				mes "Um excelente arqueiro Morto-vivo.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "4. Múmia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "5. Verit";
				mes "Um cão mumificado que vai pegar qualquer coisa que caia no chão.";
				mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
				next;
				break;
				case 4:
				mes "^FF0000[Pirâmide]^000000";
				mes "1. Múmia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "2. Verit";
				mes "Um cão mumificado que vai pegar qualquer coisa que caia no chão.";
				mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "3. Carniçal";
				mes "Semelhante a um Zumbi, mas os Carniçais são verde e muito mais fortes.";
				mes "Vomitam em tudo que passa ao seu redor.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "4. Isis";
				mes "Um monstro que é meia serpente e meia mulher.";
				next;
				break;
				case 5:
				mes "^FF0000[Pirâmide]^000000";
				mes "1. Múmia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "2. Carniçal";
				mes "Semelhante a um Zumbi, mas os Carniçais são verde e muito mais fortes.";
				mes "Vomitam em tudo que passa ao seu redor.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "4. Isis";
				mes "Um monstro que é meia serpente e meia mulher.";
				next;
				break;
				case 6:
				mes "^FF0000[Pirâmide]^000000";
				mes "1. Múmia";
				mes "Um monstro coberto de bandages velhas.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "2. Verit";
				mes "Um cão mumificado que vai pegar qualquer coisa que caia no chão.";
				mes "Embora seja um zumbi, parece feliz por estar vivo novamente.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "3. Carniçal";
				mes "Semelhante a um Zumbi, mas os Carniçais são verde e muito mais fortes.";
				mes "Vomitam em tudo que passa ao seu redor.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "4. Isis";
				mes "Um monstro que é meia serpente e meia mulher.";
				next;
				mes "^FF0000[Pirâmide]^000000";
				mes "5. Osiris";
				mes "O Rei incontestável das múmias.";
				mes "Ele usa uma coroa e apodrece que são decididamente reais de cor roxa.";
				next;
				break;
				case 7:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 4:
		close;
	}
}

// ------------------------------------------------------------------
prt_in,164,102,4	script	Enciclopédia#7pr	HIDDEN_NPC,{
	mes "^FF0000[Enciclopédia]^000000";
	mes "Esta é uma enciclopédia que descreve Monstros que vivem em cavernas.";
	next;
	.@loop1 = 1;
	switch(select("Navio Fantasma","Labirinto da Floresta")) {
		case 1:
		while(.@loop1) {
			switch(select("1º Nível","2º Nível","Cancelar")) {
				case 1:
				mes "^FF0000[Navio Fantasma]^000000";
				mes "1. Plâncton";
				mes "Mesmo que pareçam insignificantemente pequeno, tenha cuidado para não pisar neles.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "2. Kukre";
				mes "Kukre parece um Besouro-Ladrão por comer tudo pelo chão.";
				mes "Mas felizmente, eles não atacam em um grupo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "3. Hydra";
				mes "Monstros Vegetais que vivem perto água ou no mar profundo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "4. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "É muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "5. Esporo venenoso";
				mes "Um cogumelo coberto preto, ataca aventureiros com medo de serem comidos.";
				next;
				mes "^FF0000[Sunken Ship 1F Monstros]^000000";
				mes "6. Esqueleto Pirata";
				mes "Um pirata que fica pulando de um lado a outro usando suas meias roxas.";
				next;
				break;
				case 2:
				mes "^FF0000[Navio Fantasma]^000000";
				mes "1. Kukre";
				mes "Kukre parece um Besouro-Ladrão por comer tudo pelo chão.";
				mes "Mas felizmente, eles não atacam em um grupo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "2. Hydra";
				mes "Monstros Vegetais que vivem perto água ou no mar profundo.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "3. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "É muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "4. Sapo de Thara";
				mes "Sapos de cor vermelha, certamente mais fortes do que os Sapos de Roda.";
				mes "Dizem que existe um mistério no som irritante que ele produz.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "5. Sussurro";
				mes "Um pedaço de tecido que emite vibrações assustadoras.";
				mes "Às vezes, ele gosta de se tornar invisível ...";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "6. Megalodon";
				mes "Esqueleto de peixe bem assustador sem os olhos.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "7. Esqueleto Pirata";
				mes "Um pirata que fica pulando de um lado a outro usando suas meias roxas.";
				next;
				mes "^FF0000[Navio Fantasma]^000000";
				mes "8. Marionette";
				mes "Um monstro renascido como uma boneca amaldiçoada que está ligada a cordas presas a bastões de madeira.";
				next;
				mes "^FF0000[Sunken Ship 2F Monstros]^000000";
				mes "9. Drake";
				mes "Um pirata espectral e fantasmagórico, capitão que passa seu tempo livre atacando os humanos.";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 2:
		while(.@loop1) {
			switch(select("1º Nível","2º Nível","Cancelar")) {
				case 1:
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "1. Poring";
				mes "Pequenos monstros rosa que são feitos de uma substância gelatinosa viva.";
				mes "Eles são bonitos, e vivem saltando por todo lado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "2. Lunatico";
				mes "Monstro gordo e desgrenhado em forma um Coelho.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "3. Fabre";
				mes "A larva fraca e pequena de Creamy.";
				mes "Embora alguns dizem que é bonito, muitos discordam disso.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "4. Creamy";
				mes "Um monstro voador belo.";
				mes "Escapa sempre teletrasportando quando se sente ameaçado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "5. Pupa";
				mes "Monstro que é a fase pupal de Fabre.";
				mes "Não ataca, então é fácil para Aprendizes matar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "6. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "É muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "7. Rocker";
				mes "Um gafanhoto preguiçoso que adora tocar violino, assim como na fábula de Esopo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "8. Pé Grande";
				mes "Embora seu nome pode ser enganoso, é realmente um grande bera.";
				mes "Anda como se possui a floresta, e ele faz.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "9. Fumacento";
				mes "Um pequeno guaxinim gordinho que não ama nada melhor do que correr.";
				mes "É rumores de usar uma folha mágica para se tornar invisível!";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "10. Jibóia";
				mes "Cobra verde que vive no florestas e desertos, são venenosas, e suas mordidas doem.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "11. Lobo";
				mes "Lobos selvagens, roving com manes azuis.";
				mes "Eles tendem a atacar como um bando quando mesmo um deles é ameaçado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "12. Agriope";
				mes "Um monstro de tipo milípede, segmentado que vai atacar o transeunte com veneno.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "13. Agros";
				mes "Uma aranha monstruosa que vai atacar aventureiros à vista, é muito grande para os aventureiros esmagarem com seus pés.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "14. Chonchon";
				mes "Um monstro voador que se movem com grande velocidade, eles comem tudo que ver pelo chão.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "15. Besouro Chifre";
				mes "Embora pareça feroz, é realmente um inseto pacífico.";
				mes "Vagueia em torno de campos com um som de trituração.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "16. Mosca Caçadora";
				mes "Insetos alados cobertos de sangue de inocentes.";
				mes "É incrivelmente rápido, bem como também forte.";
				mes "Você deve fugir deste monstro em tudo custo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "17. Louva-a-Deus";
				mes "Vagueia sobre campos, acenando um um fã minúsculo, umas artes marciais inteiras é baseado nos movimentos de este inseto.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "18. Sorrateiro";
				mes "Uma cobra de cor escura que odeia humanos.";
				mes "Tenha cuidado e mate-os antes que eles possam te envenenar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "19. Yoyo";
				mes "Um macaco travesso que pega qualquer coisa do chão.";
				mes "Eles são muito rápidos e vão se juntar a você se você atacar apenas um deles.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "20. Caramelo";
				mes "Um adorável porco-espinho com minúsculos espinhos.";
				mes "No entanto, ele fica incrivelmente irritado quando tocado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "21. Chonchon de Aço";
				mes "Semelhante a Chonchon, mas é amarelo e verde.";
				mes "Pega tudo do chão, por isso tome cuidado para não deixar cair itens.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "22. Coco";
				mes "Um pequeno esquilo com olhos escuros e penetrantes.";
				mes "Sempre está segurando uma Acorn, e seria bonito se não tivesse sempre um olhar de desprezo total.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "23. Poeira";
				mes "Este monstro voador difícil de atingir com ataques normais.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "24. Selvagem";
				mes "Um javali que anda por aí, grunhido inquieto, seu áspero olhando presas tornam difícil acredito que era bonito como um bebê.";
				next;
				break;
				case 2:
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "1. Poring";
				mes "Pequenos monstros rosa que são feitos de uma substância gelatinosa viva.";
				mes "Eles são bonitos, e vivem saltando por todo lado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "2. Lunatico";
				mes "Monstro gordo e desgrenhado em forma um Coelho.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "3. Fabre";
				mes "A larva fraca e pequena de Creamy.";
				mes "Embora alguns dizem que é bonito, muitos discordam disso.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "4. Creamy";
				mes "Um monstro voador belo.";
				mes "Escapa sempre teletrasportando quando se sente ameaçado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "5. Pupa";
				mes "Monstro que é a fase pupal de Fabre.";
				mes "Não ataca, então é fácil para Aprendizes matar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "6. Poporing";
				mes "Um poring que emana uma luz verde de propiedade veneneno.";
				mes "É muito mais forte de Poring, mas ainda se move por significa saltar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "7. Rocker";
				mes "Um gafanhoto preguiçoso que adora tocar violino, assim como na fábula de Esopo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "8. Pé Grande";
				mes "Embora seu nome pode ser enganoso, é realmente um grande bera.";
				mes "Anda como se possui a floresta, e ele faz.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "9. Fumacento";
				mes "Um pequeno guaxinim gordinho que não ama nada melhor do que correr.";
				mes "É rumores de usar uma folha mágica para se tornar invisível!";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "10. Jibóia";
				mes "Cobra verde que vive no florestas e desertos, são venenosas, e suas mordidas doem.";
				next;
				mes "^FF0000[Prontera Maze 3F Monsters]^000000";
				mes "11. Lobo";
				mes "Lobos selvagens, roving com manes azuis.";
				mes "Eles tendem a atacar como um bando quando mesmo um deles é ameaçado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "12. Agriope";
				mes "Um monstro de tipo milípede, segmentado que vai atacar o transeunte com veneno.";
				next;
				mes "^FF0000[Prontera Maze 3F Monsters]^000000";
				mes "13. Agros";
				mes "A monstrous spider that will attack";
				mes "adventurers on sight. It's too big";
				mes "for adventurers to squish with";
				mes "their feet.";
				mes "^0099FFItem Drops^000000: Cobweb, Scell, Bug Leg,";
				mes "Green Herb, Yellow Herb";
				next;
				mes "^FF0000[Prontera Maze 3F Monsters]^000000";
				mes "14. Besouro Chifre";
				mes "Embora pareça feroz, é realmente um inseto pacífico.";
				mes "Vagueia em torno de campos com um som de trituração.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "15. Mosca Caçadora";
				mes "Insetos alados cobertos de sangue de inocentes.";
				mes "É incrivelmente rápido, bem como também forte.";
				mes "Você deve fugir deste monstro em tudo custo.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "16. Louva-a-Deus";
				mes "Vagueia sobre campos, acenando um um fã minúsculo, umas artes marciais inteiras é baseado nos movimentos de este inseto.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "18. Sorrateiro";
				mes "Uma cobra de cor escura que odeia humanos.";
				mes "Tenha cuidado e mate-os antes que eles possam te envenenar.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "19. Yoyo";
				mes "Um macaco travesso que pega qualquer coisa do chão.";
				mes "Eles são muito rápidos e vão se juntar a você se você atacar apenas um deles.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "20. Caramelo";
				mes "Um adorável porco-espinho com minúsculos espinhos.";
				mes "No entanto, ele fica incrivelmente irritado quando tocado.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "21. Chonchon de Aço";
				mes "Semelhante a Chonchon, mas é amarelo e verde.";
				mes "Pega tudo do chão, por isso tome cuidado para não deixar cair itens.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "22. Coco";
				mes "Um pequeno esquilo com olhos escuros e penetrantes.";
				mes "Sempre está segurando uma Acorn, e seria bonito se não tivesse sempre um olhar de desprezo total.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "23. Poeira";
				mes "Este monstro voador difícil de atingir com ataques normais.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "24. Selvagem";
				mes "Um javali que anda por aí, grunhido inquieto, seu áspero olhando presas tornam difícil acredito que era bonito como um bebê.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "26. Bebe Selvagem";
				mes "Pequena, rosa bebê Savage.";
				mes "É desanimador saber que cresce até ficar feio.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "27. Mastering";
				mes "Um Poring gigante raramente visto no";
				mes "Pode ser o Mestre";
				mes "de Porings, mas... Ainda é um Poring.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "28. Eclipse";
				mes "Senhor e Mestre de todos os Lunaticos.";
				mes "Seus ataques podem ser fracos, mas ele tem uma defesa considerável.";
				next;
				mes "^FF0000[Labirinto da Floresta]^000000";
				mes "29. Baphomet";
				mes "Uma besta com chifres parecida com uma cabra que empunha uma foice intimidante com incrível poder.";
				mes "Sem dúvida é um dos monstros mais temidos de toda Rune-Midgard.";
				next;
				break;
				case 3:
				close2;
				.@loop1 = 0;
				end;
			}
		}
		case 3:
		close;
	}
}