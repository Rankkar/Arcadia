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
| - Nota: Npcs comuns na cidade Al de Baran                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
aldebaran,113,70,4	script	Ferreiro Munster#alde	1_M_02,{
	mes "[Munster]";
	mes "Minha família morava em Geffen.";
	mes "Então eu acho que era natural que estudássemos forja, e eventualmente nos tornássemos Ferreiros.";
	mes "Então, finalmente nos mudamos para essa cidade,";
	mes "Al De Baran.";
	next;
	if (select("Sobre ^3355FFRefinamento de Itens^000000","Sair") == 1) {
		mes "[Munster]";
		mes "Meu pai era um Ferreiro famoso em Geffen.";
		mes "Ele me ensinou muito sobre forjar equipamentos.";
		next;
		mes "[Munster]";
		mes "Uma das coisas fundamentais é que a probabilidade de sucesso ao refinar um item depende do nível da arma.";
		next;
		mes "[Munster]";
		mes "Para armas de nível 1, você pode refinar até +7 sem correr o risco de quebrá-la.";
		mes "Armas de nível 2 podem ser refinadas até +6, enquanto as de nível 3 podem ser refinadas até +5 sem correr risco.";
		next;
		mes "[Munster]";
		mes "Para armas de nível 4, você pode refinar até +4 sem muito risco.";
		mes "Para armaduras, você pode refinar até +4.";
		mes "Se o processo falhar, o equipamento será destruido!";
		close;
	}
	mes "[Munster]";
	mes "Hmm...";
	mes "Se puder, tente visitar a oficina do meu pai aqui em Al de Baran.";
	mes "Se me permite dizer, ele é um Ferreiro muito talentoso.";
	close;
}

// ------------------------------------------------------------------
aldebaran,64,104,4	script	Homem Forjando#alde	1_M_JOBTESTER,{
	mes "[Quatro]";
	mes "Você ouviu falar que aquele Ferreiro famoso se mudou de Geffen para cá?";
	next;
	if (select("Ferreiro Famoso?","Encerrar conversa") == 1) {
		mes "[Quatro]";
		mes "Pelo o que eu ouvi, ele é um daqueles Ferreiros que consegue refinar armas e armaduras.";
		mes "Quando uma arma é refinada o seu ataque é aumentado.";
		next;
		mes "[Quatro]";
		mes "Para cada nível de refinamento, a força de ataque é aumentada em 2 para armas de nível 1.";
		mes "Para armas de nível 2, a força de ataque aumenta em 3.";
		next;
		mes "[Quatro]";
		mes "Para armas de nível 3, são adicionados 5 na força de ataque para cada nível de refinamento.";
		mes "Para armas nível 4, são adicionados 7 na força de ataque.";
		close;
	}
	mes "[Quatro]";
	mes "Essa família de ferreiros vive aqui desde que a sua esposa ficou doente e fraca.";
	mes "Por causa dessa doença, ela precisa de ervas medicinais que crescem perto de Al De Baran.";
	next;
	mes "[Quatro]";
	mes "Eles também têm um filho prestativo que está sempre ajudando nos négocios da família.";
	mes "Tenho certeza que o menino vai se tornar um bom Ferreiro, assim como o Pai.";
	close;
}

// ------------------------------------------------------------------
aldebaran,49,93,4	script	Jovem#alde	4_M_01,{
	mes "[Miller]";
	mes "As armas de nível 4 não são legais?!";
	mes "Eu não consigo acreditar como armas";
	mes "tão poderosas existem!";
	next;
	mes "[Miller]";
	mes "Bem, elas raramente são vistas no mercado.";
	mes "Mas Monstros Chefes têm uma chance pequena de derrubar elas se você for capaz de matar um.";
	close;
}

// ------------------------------------------------------------------
aldebaran,81,61,4	script	Catadora de Conchas#ald	4W_F_01,{
	mes "[Joanne]";
	mes "Eu gosto de colecionar conchas do mar.";
	mes "É muito relaxante e divertido.";
	next;
	if (select("Catar Conchas?","Finalizar Conversa") == 1) {
		mes "[Joanne]";
		mes "Quando você ver bolhas saindo da areia, ou de poças de lama, tente cavar um pouco.";
		mes "Você provavelmente vai encontrar conchas enterradas!";
		next;
		mes "[Joanne]";
		mes "Você já ouviu falar de Ambernite?";
		mes "Aquela concha monstro é bem dura~";
		next;
		mes "[Joanne]";
		mes "É normalmente vista na praia perto da província à oeste de Prontera.";
		mes "Se você atacar uma sem estar preparado, você poderá estar em apuros.";
		next;
		mes "[Joanne]";
		mes "Ambernite é muito forte!";
		mes "Então tome cuidado!";
		close;
	}
	mes "[Joanne]";
	mes "Ambernite é muito forte!";
	mes "Então tome cuidado!";
	close;
}

// ------------------------------------------------------------------
aldebaran,46,129,4	script	Cara dos Canais#alde	4W_M_01,{
	mes "[Panama]";
	mes "Al De Baran é conhecida mundialmente como a Cidade dos Canais.";
	mes "Os canais realmente dão um toque sofisticado e romântico a nossa cidade.";
	next;
	switch(select("Sobre os Canais","Finalizar Conversa")) {
		case 1:
		mes "[Panama]";
		mes "Bem, um canal é um lugar criado para a água passar normalmente usado para embarcações, ou irrigações.";
		next;
		mes "[Panama]";
		mes "Mas, os canais daqui são apenas para ver.";
		mes "Se nós precisamos transportar alguma coisa.";
		mes "Nós apenas usaríamos o serviço de teletransporte da Corporação Kafra!";
		close;
		case 2:
		mes "[Panama]";
		mes "Eu espero que você aprecie sua estadia em Al De Baran.";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,67,154,4	script	Homem da Floresta#alde	4W_M_02,{
	mes "[Isenberg]";
	mes "Mt. Mjolnir e Floresta de Payon.";
	mes "Ambos são lugares difíceis de atravessar.";
	next;
	switch(select("Mt.Mjolnir?","Floresta Payon...?","Finalizar Conversa")) {
		case 1:
		mes "[Isenberg]";
		mes "Para chegar aqui vindo de Prontera ou Geffen, você tem que atravessar as Montanhas Mjolnir.";
		next;
		mes "[Isenberg]";
		mes "Se você veio até aqui sem usar o serviço de teletransporte da Corporação Kafra, bom trabalho!";
		next;
		mes "[Isenberg]";
		mes "As Montanhas Mjolnir são realmente íngremes, e ela é cheia de monstros agressivos.";
		mes "Então sempre é um risco tentar andar por lá sozinho.";
		close;
		case 2:
		mes "[Isenberg]";
		mes "Se você deseja visitar Alberta ou a cidade de Payon.";
		mes "Você deve primeiro atravessar a Floresta de Payon.";
		next;
		mes "[Isenberg]";
		mes "A Floresta de Payon é um labirinto tortuoso e complexo onde é facil se perder.";
		mes "Ao menos que se concentre no seu caminho, você poderá ficar preso naquele lugar perigoso.";
		next;
		mes "[Isenberg]";
		mes "Payon, a vila dos aqueiros, foi construida dentro dessa floresta para se proteger de invasores.";
		mes "Eu achei uma boa idéia da parte deles.";
		close;
		case 3:
		mes "[Isenberg]";
		mes "As enormes montanhas cercando essa cidade impede que pessoas de fora venham para essa cidade.";
		mes "Talvez seja esse o motivo de termos sido capazes de manter esse canal bonito e limpo sem nenhuma influência de fora.";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,90,170,4	script	Epthiel#alde	1_M_01,{
	mes "[Epthiel]";
	mes "Algumas armas ou amaduras têm slots onde você pode inserir cartas obtidas de monstros.";
	next;
	switch(select("Sobre o número de slots","Relação entre cartas e slots","Finalizar a Conversa")) {
		case 1:
		mes "[Epthiel]";
		mes "Itens soltos por monstros possuem mais slots que armas ou armaduras comuns vendidas em Lojas de NPCs.";
		next;
		mes "[Epthiel]";
		mes "Eu acho que você pode deduzir que um item com mais Slots tem mais valor do que um mesmo item com menos slots.";
		close;
		case 2:
		mes "[Epthiel]";
		mes "Uma vez que uma carta é inserida num slot, é impossivel removê-la.";
		mes "Então tenha cuidado quando for inserir cartas em armas ou armaduras.";
		next;
		mes "[Epthiel]";
		mes "Além disso, quando você passar o mouse em cima de um equipamento na janela de itens, ou na janela de vendas.";
		mes "O nome do item será seguido do número de slots que ele possui em colchetes.";
		next;
		mes "[Epthiel]";
		mes "Por exemplo, um escudo com 1 slot, quando o cursor passar por cima, vai aparecer o nome 'Escudo [1].'";
		next;
		mes "[Epthiel]";
		mes "Você também pode clicar com o botão direito no item, e checar a janela de slots embaixo da descrição.";
		close;
		case 3:
		mes "[Epithiel]";
		mes "Você alguma vez já conseguiu uma carta de um monstro?";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,117,181,4	script	Joy#alde	1_M_02,{
	mes "[Joy]";
	mes "Armas de nível 1, que sãos as mais fracas, precisa de um metal chamado ^3355FFFracon^000000 para serem refinadas.";
	next;
	switch(select("Sobre Fracon:Conselho sobre Fracon:Finalizar Conversa")) {
		case 1:
		mes "[Joy]";
		mes "Fracon é um metal muito comum, e pode ser encontrado por todo o continente de Rune-Midgard.";
		next;
		mes "[Joy]";
		mes "Apesar de não ter a força dos outros metais, é facil de obter.";
		mes "Você pode conseguir matando monstros ou comprando em Lojas na cidade.";
		next;
		mes "[Joy]";
		mes "Quando você estiver usando armas de alto nível, e não precisar mais deles, você pode vender por alguns zeny!";
		close;
		case 2:
		mes "[Joy]";
		mes "Bem, eu ouvi falar que muitos monstros carregam Fracons e derrubam eles quando mortos.";
		mes "Por que você não vai caça-los?";
		next;
		mes "[Joy]";
		mes "Não deve ser muito difícil.";
		mes "Uma vez eu peguei um fracon depois de ter matado um Bebê Selvagem!";
		mes "Mas se você estiver desesperado, você sempre pode comprar na Loja de Forja.";
		close;
		case 3:
		mes "[Joy]";
		mes "Boa sorte em achar Fracons!";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,121,231,4	script	Alquimista#alde	1_M_03,{
	mes "[Chemirre]";
	mes "Alquimistas, uma das 2ª classes, são capazes de criar itens de diversos materiais utilizando o conhecimento da antiga era de Al De Baran.";
	next;
	switch(select("Sobre Alquimia em Payon","Definição de Alquimia",". . . . .","Finalizar Conversa")) {
		case 1:
		mes "[Chemirre]";
		mes "A Maioria das pessoas não sabe que existia uma forma oriental de alquimia desenvolvida em Payon.";
		next;
		mes "[Chemirre]";
		mes "Os Alquimistas de Payon eram capazes de criar Ouro de diferentes tipos de materiais.";
		mes "Apesar de a alquimia de Payon nunca se desenvolveu tanto como em Al De Baran.";
		next;
		mes "[Chemirre]";
		mes "Os materiais para a Alquimia de payon eram escassos.";
		mes "Então o interesse nesse campo eventualmente diminuiu.";
		mes "Agora, você apenas pode estudar Aqluimia aqui.";
		next;
		mes "[Chemirre]";
		mes "Ainda sim, Eu penso que aqueles segredos foram perdidos depois que a Alquimia de Payon desapareceu da face da terra...";
		close;
		case 2:
		mes "[Chemirre]";
		mes "Alquimistas se especializam em pesquisas químicas para criar itens úteis de várias outras coisas.";
		next;
		mes "[Chemirre]";
		mes "Eu também ouvi falar que eles podem criar vários tipos de Poções, e até podem sumonar alguns Monstros!";
		mes "Me parece que os estudos deles têm vários tipos de aplicações.";
		close;
		case 3:
		mes "[Chemirre]";
		mes "Você está entediado, não é??";
		mes "Ok então, Eu vou contar uma história sobre cartas de monstro e slots de itens.";
		mes "Como você já deve saber, se já conseguiu alguma uma carta antes,";
		next;
		mes "[Chemirre]";
		mes "você apenas pode inserir cartas em um item que satisfaça o local requerido pela carta.";
		mes "Por exemplo, vamos dizer que você obteve uma Carta Poring.";
		next;
		mes "[Chemirre]";
		mes "Quando você clicar com o botão direito na carta, você vai ver o bônus como SOR+2 e Esquiva Perfeita+1 e o tipo como 'Armadura'. ";
		next;
		mes "[Chemirre]";
		mes "Se você tentar inserir essa carta em uma adaga com vários slots, não vai funcionar porque a carta só pode ser inserida em armaduras.";
		next;
		mes "[Chemirre]";
		mes "A maioria das armaduras vendidas em lojas na cidade não possuem slots.";
		mes "Isso quer dizer, que você só pode obter Armaduras Slotadas caçando monstros.";
		next;
		mes "[Chemirre]";
		mes "Ah, deixe-me dizer como colocar uma carta em um equipamento.";
		mes "Se quiser inserir uma carta na sua armadura equipadar, você primeiro deve desequipá-la.";
		mes "E então, clicar duas vezes na carda que deseja usar.";
		mes "Então uma lista de armaduras, que você pode inserir cartas, vai aparecer.";
		next;
		mes "[Chemirre]";
		mes "Não é tão complicado, é?";
		close;
		case 4:
		mes "[Chemirre]";
		mes "Você não pode falar sobre Alquimia de Rune-Midgard sem falar sobre a Guilda dos Alquimistas de Al De Baran!";
		mes "Vida Longa aos Alquimistas!";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,86,228,4	script	Criança#alde	1_M_SIZ,{
	mes "[Bebe]";
	mes "Um tempo atrás quando eu sai para uma caminhada em direção ao Mt. Mjolnir com meu Bebê Selvagem chamado NukNuk,";
	mes "nós fomos atacados, felizmente não fomos feridos.";
	next;
	switch(select("Atacados?","Sobre Mt.Mjolnir","Finalizar Conversa")) {
		case 1:
		mes "[Bebe]";
		mes "Eu estava andando por um caminho estreiro e de repente, uma planta grande e feia começou a nos atacar!";
		next;
		mes "[Bebe]";
		mes "Fiquei tão assustado, começamos a correr.";
		mes "Eu joguei pedras nela, mas acho que não a machuquei.";
		next;
		mes "[Bebe]";
		mes "O que realmente me surpreendeu foi que a planta que me atacou era uma planta gigante com o rosto de uma pessoa!";
		mes "Então tome cuidado com essas, elas são perigosas!";
		close;
		case 2:
		mes "[Bebe]";
		mes "Apesar de que as pessoas são fascinadas pela beleza do Mt. Mjolnir, lá está cheio de monstros perigosos!";
		next;
		mes "[Bebe]";
		mes "Existem flores, insetos, abelhas, borboletas e mariposas que são grandes o suficiente para matar você se você não for cuidadoso!";
		next;
		mes "[Bebe]";
		mes "Então de novo, a maioria desses monstros não vai machucar você se você não atacá-los primeiro.";
		mes "Mas alguns deles vão atacar você uma vez que eles verem você!";
		close;
		case 3:
		mes "[Bebe]";
		mes "A propósito, onde está NukNuk...?";
		mes "NukNuk! Venha aqui!";
		close;
	}
}

// ------------------------------------------------------------------
aldebaran,159,242,4	script	Entomólogo#alde	2_M_SWORDMASTER,{
	mes "[Stromme]";
	mes "Até para um forte Espadachim, os insetos no Mt. Mjolnir podem ser considerados ameaças.";
	mes "Você deve conhecer seu inimigo antes de começar uma batalha!";
	next;
	if (select("Sobre Insetos","Finalizar Conversa") == 1) {
		mes "[Stromme]";
		mes "Abelhas, Borboletas e Mariposas parecem criaturas simples.";
		mes "Mas isso não significa que você pode subestimá-las.";
		next;
		mes "[Stromme]";
		mes "Esses insetos evoluiram através dos tempos, e podem contra-atacar ameaças como vocês Aventureiros!";
		next;
		mes "[Stromme]";
		mes "Também existem Insetos carnívoros, como Aranhas, Louva-a-Deus, e Argiopes.";
		next;
		mes "[Stromme]";
		mes "Esses monstros sofreram mutações e são muito fortes para pessoas em certos níveis.";
		mes "Você deve tomar cuidado com Argiopes principalmente.";
		next;
		mes "[Stromme]";
		mes "Felizmente, a visão deles é muito ruim, então eles não vão notar você se você andar a uma distância segura deles.";
		close;
	}
	mes "[Stromme]";
	mes "Não importa quanto inofensivo e bonito os insetos são, tenha cautela ao tocar neles.";
	mes "Eles são extremamente fortes ao contrário da sua aparência inocente.";
	mes "Não desmereça os seres do Mt. Mjolnit.";
	close;
}

// ------------------------------------------------------------------
aldebaran,60,70,4	script	Sylvia#alde	1_F_04,{
	mes "[Sylvia]";
	mes "Eu vim aqui de Prontera poque eu ouvi falar que o Escritório Principal Kafra é em algum lugar aqui em Al De Baran.";
	next;
	mes "[Sylvia]";
	mes "Não deve ser difícil achar, mas eu sou horrível com direções.";
	mes "Eu sempre me perco, não importa como!";
	next;
	mes "[Sylvia]";
	mes "Se isso não fosse ruim o suficiente, eu ainda deixei minhas Lupas em Prontera.";
	mes "Agora eu preciso achar alguém para me ajudar com essas armas que tenho que identificar!";
	next;
	if (select("Identificar?","Isso é bom.") == 1) {
		mes "[Sylvia]";
		mes "Equipamentos que são soltos por monstros não podem ser equipados imediatamente.";
		next;
		mes "[Sylvia]";
		mes "Se você clicar com o botão direito no item equipável, você vai ver que é necessário identificar o item.";
		mes "O que fazer?";
		next;
		mes "[Sylvia]";
		mes "Bom, nesse caso, você tem que usar uma ^3355FFLupa^000000!";
		next;
		mes "[Sylvia]";
		mes "Mesmo sem um Ferreiro, Alquimista ou Mercador no seu grupo, você pode identificar seu equipamento!";
		mes "Claro que uma Lupa é consumida cada vez que você usa...";
		close;
	}
	mes "[Sylvia]";
	mes "Hey...";
	mes "Isso foi um tom de sarcasmo na sua voz quando você falou?";
	close;
}

// ------------------------------------------------------------------
aldebaran,93,80,4	script	Issei#alde	1_M_02,{
	mes "[Issei]";
	mes "Al De Baran é um lugar maravilhoso com seus canais românticos e sua arquitetura clássica.";
	mes "Eu amo passear pela cidade com minha linda namorada.";
	next;
	if (select("Você tem uma Namorada?","Finalizar Conversa.") == 1) {
		mes "[Issei]";
		mes "Ei...";
		mes "É tão difícil de acreditar?!";
		mes "Pergunte pra qualquer um!";
		mes "Ela existe!";
		mes "Apesar de, algumas vezes, ela fica muita animada com armas e armaduras.";
		next;
		mes "[Issei]";
		mes "Quero dizer, ao invés de aproveitar um jantar romântico, ela começa a falar sobre como equipamentos soltos por monstros têm mais qualidade que aqueles vendidos em lojas...";
		next;
		mes "[Issei]";
		mes "por que devo me preocupar se equipamentos soltos por monstros tendem a ter mais slots?!";
		mes "Eu nem consigo matar um Poring!";
		next;
		mes "[Issei]";
		mes "Como você poder ver...";
		mes "Eu sou um amante, não um lutador.";
		close;
	}
	mes "[Issei]";
	mes "Então, não me ache estúpido, ok?";
	close;
}

// ------------------------------------------------------------------
aldebaran,180,46,4	script	Joo Jahk#alde	4_M_ORIENT01,{
	mes "[Joo Jahk]";
	mes "Eu sou um turista de Payon,";
	mes "A Cidade na Floresta.";
	next;
	mes "[Joo Jahk]";
	mes "A temperatura aqui em Al De Baran é bem fresca, provavelmente por causa dos canais.";
	mes "Você acha que podemos beber?";
	next;
	mes "[Joo Jahk]";
	mes "Bem, já é tarde para perguntar, eu já bebi um pouco.";
	mes "Ainda sim, Eu estou um pouco preocupado...";
	next;
	if (select("Continar.","Finalizar Conversa.") == 1) {
		mes "[Joo Jahk]";
		mes "Em uma das minhas viagens por Rune-Midgard.";
		mes "Ouvi de um Mago muito poderoso que ataques físicos ou magias de propriedade neutra não funcionam contra monstros da propriedade Fantasma.";
		next;
		mes "[Joo Jahk]";
		mes "Talvez esse conselho seja útil agora que você sabe.";
		mes "Sempre se lembre da importância das propriedades de suas Habilidades ou Armas, quando estiver lutando contra monstros.";
		close;
	}
	mes "[Joo Jahk]";
	mes "Por outro lado, a água que tomei era muito boa.";
	mes "Espero que não tivesse nada muito estranho dentro...";
	close;
}

// ------------------------------------------------------------------
aldebaran,212,122,4	script	Cidadão#alde	4W_M_01,{
	mes "[Gavin]";
	mes "Bem-vindo!";
	mes "A Cidade de Al De Baran dá as boas vindas a você!";
	next;
	mes "[Gavin]";
	mes "Bem, pode ser exagero.";
	mes "Afinal, sou apenas eu que estou dando as boas vindas a você.";
	next;
	if (select("Agora, me fale sobre monstros.","Finalizar Conversa.") == 1) {
		mes "[Gavin]";
		mes "Monstros...?";
		mes "Não estamos saindo do tema um pouco?";
		mes "Ah, você deve ser um daqueles aventureiros!";
		next;
		mes "[Gavin]";
		mes "Não consegue tirar a cabeça do trabalho, é?";
		mes "Certo, existe um monstro que eu vi recentemente...";
		next;
		mes "[Gavin]";
		mes "Ah, lembrei!";
		mes "Apenas a alguns dias, vi um monstro muito interessante!";
		mes "Era um Poring com asas de anjo!";
		next;
		mes "[Gavin]";
		mes "Eu juro!";
		mes "Ele estava pulando em volta de algum lugar perto do Mt. Mjolnir com alguns Porings.";
		mes "Eu acho que ele era o líder deles, algo do tipo.";
		close;
	}
	mes "[Gavin]";
	mes "Awww...";
	mes "Não fique desapontado só porque eu sou a única pessoa a te receber!";
	close;
}

// ------------------------------------------------------------------
aldebaran,146,124,4	script	Garota da Cidade#alde	4W_F_01,{
	mes "[Nastasia]";
	mes "Em algum lugar do mundo existe uma ^3355FFGuilda dos Mercenários^000000, onde eles ensinam pessoas a sutil arte do assassinato.";
	next;
	mes "[Nastasia]";
	mes "Mas matar não é ilegal?";
	mes "E eles ainda chamam aquilo de instutuição de ensino?";
	next;
	if (select("Continuar conversa.","Finalizar Conversa.") == 1) {
		mes "[Nastasia]";
		mes "Apesar de Assassinos se beneficiarem por serem muito rápidos e ter muita AGI.";
		mes "Eles ainda devem ter muita DES.";
		next;
		mes "[Nastasia]";
		mes "DES é especialmente importante se você quiser atacar monstros voadores.";
		mes "Aqueles monstros são rápidos ao se mover e ao atacar.";
		next;
		mes "[Nastasia]";
		mes "Em geral, se você quiser atacar monstros que são mais rápidos, você vai precisar de DES.";
		close;
	}
	mes "[Nastasia]";
	mes "Normalmente se diz que nesse mundo, nada é de graça.";
	mes "Ainda sim, se você não tiver que pagar para aprender a se tornar um Mercenário...";
	close;
}

// ------------------------------------------------------------------
aldebaran,143,136,4	script	Sineiro#A	4_M_ORIENT02,{
	mes "[Sineiro]";
	mes "Eu fui ordenado pelo Comitê do 'Céu na Terra' a guardar esse entrada da Torre do Relógio.";
	next;
	if (select("Sobre Torre do Relógio.","Sair.") == 1) {
		mes "[Sineiro]";
		mes "Cada andar dessa torre é conectado ao outro por um dispositivo que chamamos de 'Engrenagem de Portais.'";
		next;
		mes "[Sineiro]";
		mes "Apesar de exitir portais se conectando por todo o lugar na Torre do Relógio, cuidado com 'Portais Sem Rumo.'";
		next;
		mes "[Sineiro]";
		mes "Os 'Portais Sem Rumo' vão transportar você para um lugar desconhecido do mapa.";
		mes "Esteja atento se não quiser se separar do seu grupo..";
		next;
		mes "[Sineiro]";
		mes "Lembre-se, 'Portais Sem Rumo' serão mostrados em verde no mini-mapa.";
		mes "Então fique com seus olhos abertos, bem como para aqueles perigosos Relógios.";
		close;
	}
	mes "[Sineiro]";
	mes "Tome cuidado com essa Torre, ela está repleta de monstros perigosos.";
	close;
}

// ------------------------------------------------------------------
// - [Casas] -
// ------------------------------------------------------------------
aldeba_in,232,241,4	script	RS125#alde	1_M_02,{
	mes "[RS125]";
	mes "Eu posso soar muito robótico.";
	mes "Mas, eu espero que você não tenha medo de mim.";
	mes "Eu sou tão humano quanto você.";
	next;
	mes "[RS125]";
	mes "Eu posso ter um coração mecânico e posso incomodar você com barulhos vindos dele.";
	mes "Isso nunca vai me impedir de correr pelo Futuro de Al De Baran.";
	next;
	if (select("Ouvir a História.","Finalizar Conversa") == 1) {
		mes "[RS125]";
		mes "Já faz 3 anos.";
		mes "Meu irmão 996 costumava ser um atleta de metros rasos no time de Al De Baran.";
		mes "Naquela época, as pessoas deram um apelido a ele:";
		mes "O Peco Peco de Al De Baran', por suas pernas incrivelmente rápidas...";
		next;
		mes "[RS125]";
		mes "Ele se tornou tão popular por suas corridas.";
		mes "Que toda vez que a 'Turbo Track' acontecia de 4 em 4 anos.";
		mes "Muitas pessoas de todo o continente viam a essa cidade apenas para ver meu irmão.";
		mes "Eu era o empresário dele na época, eu me estressava muito por causa dos Fãs.";
		next;
		mes "[RS125]";
		mes "Mas, nada é para sempre...";
		mes "Um dia, uma garota de Payon ganhou do meu irmão numa corrida.";
		next;
		mes "[RS125]";
		mes "Meu irmão não aceitava o fato de que tinha perdido então ele treinou muito e teve uma séria parada cardíaca.";
		mes "Ele ainda está de cama.";
		next;
		mes "[RS125]";
		mes "Eu sou a única esperança do meu irmão e do Futuro de Al De Baran!";
		mes "Me deseje sorte, eu vou ganhar dela, 'Breezy Havana' de Payon!";
		close;
	}
	mes "[RS125]";
	mes "Eu quero viajar pelo mundo em um dia dessess.";
	mes "Se eu puder ver o oceano do porto de Alberta, deve ser tão maravilhoso.";
	mes "Depois da próxima competição, Eu vou com meu irmão em um tour ao redor do mundo.";
	close;
}

// ------------------------------------------------------------------
aldeba_in,223,121,4	script	Homem Ameaçador	1_M_SMITH,{
	mes "[Homem Ameaçador]";
	mes "Ei, não se deve entrar na casa de alguem sem permissão.";
	mes "Isso é ridiculo!";
	mes "Como ousa entrar na minha casa e falar comigo como se fosse uma coisa normal?";
	next;
	mes "[Homem Ameaçador]";
	mes "Hahahaha..., eu apenas estava brincando.";
	next;
	if (select("Continuar:Sair") == 1) {
		mes "[Homem Ameaçador]";
		mes "Você já deve saber disso, mas nós temos um sistema chamado 'O Sistema de Assistentes'.";
		mes "Sim, Eu sou um Soldado Assistente.";
		next;
		mes "[Homem Ameaçador]";
		mes "É simples, você paga para alguém o ajudar na batalha.";
		mes "Se quiser Soldados Assistentes melhores você deve pagar mais, sabe?";
		next;
		mes "[Homem Ameaçador]";
		mes "Vamos parar de falar coisas chatas.";
		mes "Eu vou te ensinar como escolher um bom Assistente.";
		next;
		mes "[Homem Ameaçador]";
		mes "Cheque o nariz, veja se está limpo e úmido.";
		mes "Um bom Assistente deve ter o nariz úmido.";
		mes "Isso mostra que o Assistente está em suas melhores condições.";
		mes "Se o nariz está seco, significa que ele pegou um resfriado.";
		next;
		mes "[Homem Ameaçador]";
		mes "e não esqueça de checar o tornozelo.";
		mes "Os melhores assistentes têm o tornozelo magro e pescoço branco!";
		mes "Se ele tiver cabelo comprido, é melhor!";
		mes "Se ele tiver cabelo encaracolado, é perfeito!";
		next;
		mes "[Homem Ameaçador]";
		mes "Por último, você deve checar se ele está pronto para servir você!";
		mes "Quero dizer, ele deve fazer o melhor ao ajudar você numa luta!";
		close;
	}
	mes "[Homem Ameaçador]";
	mes "Saia daqui, agora!";
	mes "Se você é um policial, me mostre um mandato,";
	mes "se você é da família, prove com sua marca de nascença!";
	close;
}

// ------------------------------------------------------------------
aldeba_in,219,61,4	script	Homem Amigável#ald	4_M_MANAGER,{
	mes "[Homem Amigável]";
	mes "Você não precisa escutar o cara ao lado do meu quarto.";
	mes "Dois anos atrás, ele estava num centro de treinamento de Assistentes quando ele caiu de uma árvore tentando pegar uma noz.";
	next;
	mes "[Homem Amigável]";
	mes "Agora ele continua falanto alto para si. Isso me dar dor de cabeça...";
	mes "Meu Deus!";
	close;
}

// ------------------------------------------------------------------
aldeba_in,152,47,4	script	Homem Inquieto#alde	4W_M_01,{
	mes "[Homem Inquieto]";
	mes "Aaaaarrrggghhh...ESTOU COM PROBLEMAS!";
	mes "Minha pequena galinha me deixou!";
	mes "Ó Meu Deus!";
	mes "Ó Meu Deus!";
	next;
	if (select("Como você chama ela?",". . . . .") == 1) {
		mes "[Homem Inquieto]";
		mes "Eu costumava chamar de 'Incrível Picky'...";
		mes "*Sob* O que eu faço!";
		mes "Como isso aconteceu comigo!";
		mes "Por favor, me ajude a encontrar miha pequena picky!";
		next;
		if (select("O quê? Que nome ridículo!",". . . . .") == 1) {
			mes "[Homem Inquieto]";
			mes "Não seja ridículo!";
			mes "'Incrível Picky' é o melhor e mais exclusivo nome nesse mundo, e minha galinha merece ele!";
			close;
		}
		mes "[Homem Inquieto]";
		mes "Você não se importa, não é?";
		mes "Eu sou filho único, então eu sempre pensei nela como uma irmã!";
		mes "Eu quero ela de volta...*Sob*";
		close;
	}
	mes "[Homem Inquieto]";
	mes "Você não se importa, não é?";
	mes "Eu sou filho único, então eu sempre pensei nela como uma irmã!";
	mes "Eu quero ela de volta...*Sob*";
	close;
}

// ------------------------------------------------------------------
aldeba_in,156,179,4	script	Chefe#alde	1_M_PUBMASTER,{
	mes "[Chefe]";
	mes "A matriz da Corporação Kafra é localizada aqui em Al De Baran.";
	mes "Você sabe o que isso significa?";
	next;
	mes "[Chefe]";
	mes "Isso significa que aquelas Kafras vêm aqui na hora do almoço! Isso não é legal?!";
	next;
	mes "[Chefe]";
	mes "Certo, então!";
	mes "Hora do Quiz!";
	mes "Quem é sua garota Kafra favorita?";
	next;
	if (Sex == SEX_FEMALE) {
		mes "[Master]";
		mes "Ah, não se preocupe.";
		mes "Eu sei que garotas têm um tipo de opinião sobre como as outras garotas são bonitas.";
		next;
	}
	if (select("Legal!:Não, não sou um pervetido.") == 1) {
		mes "[Chefe]";
		mes "Certo, aqui vai!";
		mes "Escolha sua Kafra Favorita!";
		next;
		mes "[Chefe]";
		mes "A mascote original Kafra, a kafra de cabelo azul, nossa Candidata número 1:";
		mes "^3355FFPavianne^000000!";
		next;
		mes "[Chefe]";
		mes "Seu gracioso rabo de cavalo faz é de tirar o fôlego dos homens!";
		mes "Cadidata Número 2: ^5533FFBlossom^000000!";
		next;
		mes "[Chefe]";
		mes "Seu longo e liso cabelo, como seda do Leste é seu charme.";
		mes "Direto de Payon, Cadidata Número 3:";
		mes "^555555Jasmine^000000!";
		next;
		mes "[Chefe]";
		mes "Uma garota com cabelo curto e laranja brilhante.";
		mes "Candidata Número 4: ^1133DDRoxie^000000!";
		next;
		mes "[Chefe]";
		mes "Inteligente, sofisticada e nunca é vista sem seus óculos luxuosos.";
		mes "É a Candidata Número 5: ^33FF55Leilah^000000!";
		next;
		mes "[Chefe]";
		mes "Bonita e graciosa. Apesar de parecer jovem e imatura, ela é a melhor funcionária.!";
		mes "Candidata Número 6: ^AAAA00Curly Sue^000000 !!";
		next;
		switch(select("(1) Pavianne","(2) Blossom","(3) Jasmine","(4) Roxie","(5) Leilah","(6) Curly Sue")) {
			case 1:
			mes "[Chefe]";
			mes "Oh";
			mes "Então você é amante dos clássicos.";
			mes "Eu respeito isso.";
			next;
			mes "[Chefe]";
			mes "Acho que você tende a gostar de Filmes originais mais do que sequências, e odeia imitações ruins.";
			mes "Estou certo?";
			close;
			case 2:
			mes "[Chefe]";
			mes "Hmmm...";
			mes "Blossom me parece o tipo vizinha.";
			mes "Então eu acho que esse é o tipo de garota que atrai você, não é?";
			close;
			case 3:
			mes "[Chefe]";
			mes "Então...";
			mes "Cabelo longo e luxuoso é importante para você, hmm?";
			mes "Eu acho que esse tipo de cabelo deixam uma mulher elegante.";
			close;
			case 4:
			mes "[Chefe]";
			mes "Ah, então você gosta do tipo espontâneo e ativo.";
			mes "Eu entendo isso...";
			next;
			mes "[Chefe]";
			mes "Já que Roxie não é exatamente do tipo Dona de Casa, você provavelmente tem uma mente aberta quando se trata de definir feminilidade, certo?";
			close;
			case 5:
			mes "[Chefe]";
			mes "Ah, então você gosta do tipo intelectual.";
			mes "Isso é bom.";
			next;
			mes "[Chefe]";
			mes "Ainda sim, Leilah pode ser fria como pedra as vezes.";
			mes "Eu ja vi ela ignorar muitos homens e despedaçar ainda mais corações!";
			close;
			case 6:
			mes "[Chefe]";
			mes "Como ééé?!";
			mes "Ela é muito nova!";
			close;
		}
	}
	mes "[Chefe]";
	mes "Mas eu trabalhei tanto nessa pesquisa!";
	mes "Vamos, leve na esportiva! Admirar uma garota bonita é como apreciar uma peça de arte.";
	close;
}

// ------------------------------------------------------------------
aldeba_in,83,245,4	script	Funcionária Kafra#alde	4_F_KAFRA2,{
	cutin "kafra_02",2;
	mes "[Kafra Blossom]";
	mes "Bem-vindo a Corporação Kafra.";
	mes "As Funcionárias Kafras estarão sempre aqui para servir você.";
	next;
	mes "[Kafra Blossom]";
	mes "Nós apreciamos o seu contínuo uso do Serviço Kafra.";
	mes "Por favor se sinta livre para perguntar se tiver alguma dúvida.";
	next;
	switch(select("Como o Armazém Kafra funciona?","Como você teletransporta as pessoas?")) {
		case 1:
		mes "[Kafra Blossom]";
		mes "Bom, Aventureiros como você pode colocar itens no Armazém Kafra, assim você não vai precisar ficar levando todas as suas coisas.";
		next;
		mes "[Kafra Blossom]";
		mes "A janela do Armazém Kafra é separada em 3 abas onde os itens são separados automaticamente.";
		next;
		mes "[Kafra Blossom]";
		mes "As ^3355FFItem^000000, ^3355FFEquip^000000, e ^3355FFEtc^000000 abas funcionam do mesmo jeito que as abas no inventário dos itens.";
		next;
		mes "[Kafra Blossom]";
		mes "Múltiplos itens do mesmo tipo vão apenas ocupar um Slot em Item ou em Etc.";
		mes "Por exemplo, 324 Jellopies vão apenas ocupar um Slot, e 22 Poções Vermelhas vão ocupar outro Slot.";
		next;
		mes "[Kafra Blossom]";
		mes "Mas, na aba Equip, cada equipamento ocupa seu próprio Slot.";
		mes "Eu acho que é porque cada equipamento pode ser aprimorado com cartas ou refinamento.";
		next;
		mes "[Kafra Blossom]";
		mes "Exite um total de 300 Slots para todas as categorias de itens no Armazém Kafra, é bom se lembrar disso.";
		close;
		case 2:
		mes "[Kafra Blossom]";
		mes "Oh, todos me fazem essa pergunta.";
		mes "'^CC0066Oh Blossom, como você faz isso?^000000'";
		mes "Bem...";
		next;
		mes "[Kafra Blossom]";
		mes "Eu não posso entrar em muito detalhes, claro.";
		mes "Isso é informação confidencial.";
		mes "Mas eu posso dizer que nosso teletransporte funciona com uma mistura de mágica e tecnologia.";
		next;
		mes "[Kafra Blossom]";
		mes "Também, as Funcionárias Kafras sozinhas não podem teletransportar os clientes.";
		mes "Nós apenas recebemos e processamos seu pedido de Teletransporte.";
		next;
		mes "[Kafra Blossom]";
		mes "Atrás dos panos, profissionais habilidosos estão trabalhando 24 horas por dia para assegurar que você chegue rápido e seguro no seu destido.";
		close;
	}
	mes "[Kafra Blossom]";
	mes "Em todo caso, espero que você goste da visita à Sede da Corporação Kafra.";
	if (rand(1,11) == 9) {
		next;
		mes "[Kafra Blossom]";
		mes "...";
		next;
		mes "[Kafra Blossom]";
		mes "...";
		mes "......";
		next;
		mes "[Kafra Blossom]";
		mes "Oh Mansoo...";
	}
	close2;
	cutin "",255;
	end;
}

// ------------------------------------------------------------------
aldeba_in,24,245,4	script	Funcionária Kafra#2alde	4_F_KAFRA3,{
	cutin "kafra_03",2;
	mes "[Kafra Jasmine]";
	mes "Bem-vindo!";
	mes "O Serviço Kafra está sempre ao seu lado.";
	next;
	mes "[Kafra Jasmine]";
	mes "Obrigada por vir nos visitar na Sede da Corporação Kafra aqui em Al De Baran!";
	next;
	mes "[Kafra Jasmine]";
	mes "O Serviço Kafra tem uma reputação com os clientes que foi formada por mais de cinco mil e oitocentos anos...";
	next;
	switch(select("O quê?! Não acredito!","Ahh Cale a boca!","Seus Serviços são ótimos!")) {
		case 1:
		mes "["+ strcharinfo(0) +"]";
		mes "O quê?!";
		mes "Não acredito nisso!";
		next;
		mes "["+ strcharinfo(0) +"]";
		mes "CINCO MIL E OITOCENTOS ANOS?! VOCÊ ESTÁ LOUCA?!";
		next;
		mes "[Kafra Jasmine]";
		mes "Eu levei uma semana para memorizar tudo isso!";
		mes "Minha memória não é tão boa quanto a das outras Funcionárias Kafra...!";
		next;
		mes "[Kafra Jasmine]";
		mes "Agora, err...";
		mes "Como eu estava dizendo, a Corporação Kafra foi fundada há oito mil e quinhentos anos atrás por Emilio Alexander Kafra...";
		mes "Criador da Palavra 'Kafra?'";
		next;
		mes "[Kafra Jasmine]";
		mes "Ele...";
		mes "Ele era um bom homem.";
		mes "Ele...Grr!";
		mes "Não consigo lembrar!";
		next;
		mes "[Kafra Jasmine]";
		mes "Ah não...!";
		mes "Essa não pode ser a história certa!";
		mes "Cinco mil e oitocentos...?!";
		mes "É impossivel!";
		close;
		case 2:
		mes "[Kafra Jasmine]";
		mes "Escuta...";
		mes "Cara.";
		next;
		mes "[Kafra Jasmine]";
		mes "Eu era uma membra das Tropas Kafra antes de entrar no Time do Serviço Kafra.";
		mes "Minha especialidade era ^990000Impacto Explosivo^000000, então se você sabe o que é bom para você.";
		mes "Não mexa comigo.";
		next;
		mes "[Kafra Jasmine]";
		mes "Eu tento ao máximo viver tão feminina e quieta que eu puder.";
		mes "Então não me faça quebrar seus ossos! Entendeu?!";
		close;
		case 3:
		mes "[Kafra Jasmine]";
		mes "Oraa!";
		mes "Boas notícias para ouvir.";
		mes "Nós sempre estamos trabalhando duro para satisfazer nossos clientes com os serviços que nós oferecemos.";
		close;
	}
	close2;
	cutin "",255;
	end;
}

// ------------------------------------------------------------------
aldeba_in,142,238,4	script	Funcionária Kafra#3alde	4_F_KAFRA4,{
	cutin "kafra_04",2;
	mes "[Kafra Roxie]";
	mes "Bem-vind"+(Sex? "o":"a")+"!";
	mes "A Corporação Kafra sempre ajudará os aventureiros de Rune-Midgard com os nossos excelentes serviços.";
	next;
	mes "[Kafra Roxie]";
	mes "Meu nome é Roxie!";
	mes "Eu espero que você goste da sua visita a Sede da Corporação Kafra.";
	next;
	mes "[Kafra Roxie]";
	mes "Estou aqui para responder qualquer uma das suas dúvidas em relação a Política da Corporação Kafra, assim como registrar qualquer opinião.";
	next;
	switch(select("Política Kafra","Eu amo a Kafra!")) {
		case 1:
		mes "[Kafra Roxie]";
		mes "Então, você gostaria de mais detalhes sobre nossa política e a elegibilidade dos nossos serviços?";
		mes "O que você gostaria de saber mais sobre?";
		next;
		switch(select("Armazém Kafra","Aluguel de Carrinho","Na verdade, nem importa.")) {
			case 1:
			mes "[Kafra Roxie]";
			mes "Como você já sabe, nossos clientes devem ter pelo menos nível 6 em Habilidades Básicas para poder usar o Armazém Kafra.";
			next;
			mes "[Kafra Roxie]";
			mes "A razão para essa política é que nós tivemos problemas com jovens Aprendizes, que colocariam tudo o quê tem dentro do Armazém.";
			next;
			mes "[Kafra Roxie]";
			mes "Lembre-se dos dias de Aprendiz.";
			mes "Tudo era novo e excitante, mas o zeny era escasso.";
			mes "Bem, muitos Aprendizes colocariam até mesmo suas armas e armaduras no Armazém.";
			next;
			mes "[Kafra Roxie]";
			mes "Mas, nessa altura, eles já gastaram aquele pouco zeny que tinham para abrir o Armazém.";
			mes "E então eles não vão ter dinheiro para acessar de novo!";
			next;
			mes "[Kafra Roxie]";
			mes "Então, esse Aprendiz sem arma e sem armadura vai lutar contra monstros até conseguir zeny suficiente para abrir o Armazém de novo!";
			next;
			mes "[Kafra Roxie]";
			mes "É um pequeno erro, na verdade, nós aqui da Corporação Kafra valorizamos a vida humana.";
			mes "Então decidimos que nível 6 em Habilidades Básicas é um requerimento para prevenir esse tipo de problema.";
			close2; cutin "",255; end;
			case 2:
			mes "[Kafra Roxie]";
			mes "Como você sabe, a Corporação Kafra tem uma relação especial com a Guilda dos Mercadores.";
			mes "Assim como a Guilda dos Ferreiros e dos Alquimistas.";
			next;
			mes "[Kafra Roxie]";
			mes "A Corporação Kafra apenas aluga Carrinhos para Mercadores, Ferreiros e Alquimistas.";
			mes "Já que essas classes têm um contrato especial conosco.";
			next;
			mes "[Kafra Roxie]";
			mes "Mas também, não teria sentido vender carrinhos para pessoas que não possam vender mercadorias.";
			next;
			mes "[Kafra Roxie]";
			mes "Para os Super Aprendizes, bem, não devemos alugar carrinhos para eles já que a Sociedade dos Super Aprendizes não tem contrato conosco.";
			next;
			mes "[Kafra Roxie]";
			mes "Se uma Funcionária Kafra alugar um carro para um Super Aprendiz, ela provavelmente vai arrumar problemas com Leilah...";
			close2; cutin "",255; end;
			case 3:
			mes "[Kafra Roxie]";
			mes "Oh, Ok!";
			mes "Se tiver qualquer pergunta, por favor me diga!";
			close2; cutin "",255; end;
		}
		case 2:
		mes "[Kafra Roxie]";
		mes "Obrigada!";
		mes "É sempre bom saber que somos apreciadas por nossos clientes!";
		mes "Todas nós trabalhamos duro para assegurar que o nosso serviço esteja ao seus padrões de excelência~";
		close2; cutin "",255; end;
	}
}

// ------------------------------------------------------------------
aldeba_in,91,244,4	script	Funcionária Kafra#4alde	4_F_KAFRA6,{
	cutin "kafra_06",2;
	mes "[Kafra Curly Sue]";
	mes "Olá, Olá!!";
	mes "Eu sou Curly Sue, a mais nova membra das Funcionárias Kafra!";
	next;
	mes "[Kafra Curly Sue]";
	mes "Eu posso ainda precisar aprender mais sobre como servir nossos clientes.";
	mes "Mas eu estou sempre me esforçando!";
	next;
	if (select("Cadê sua mãe, criança?:Finalizar Conversa.") == 1) {
		mes "[Kafra Curly Sue]";
		mes "Waaaaaaah!";
		mes "Eu não sou uma criança!";
		close2; cutin "",255; end;
	}
	mes "[Kafra Curly Sue]";
	mes "Aqui na Corporação Kafra, nós estamos sempre fazendo o melhor para oferecer o excelente serviço que você espera de nós.";
	close2; cutin "",255; end;
}