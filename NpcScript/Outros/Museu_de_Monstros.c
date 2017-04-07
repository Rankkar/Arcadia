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
| - Nota: Museu de Monstros em Juno                                 |
\*-----------------------------------------------------------------*/

yuno_in03,32,15,3	script	Guia do Museu#yuno	1_F_02,{
	mes "[Cenia]";
	mes "Bem-vindo ao Museu de Monstros.";
	next;
	switch(select("Museu de Monstros?","Dicas")) {
		case 1:
		mes "[Cenia]";
		mes "Neste museu, você pode ver cada criatura que habita Rune-Midgard, até mesmo criaturas que você nunca viu.";
		next;
		mes "[Cenia]";
		mes "Os tubos de vidro foram desenvolvidos com uma tecnologia atual que é parte do Projteto de Schwartzwald.";
		mes "Tenha cuidado.";
		close;
		case 2:
		mes "[Cenia]";
		mes "Por favor verifique na opção transparente da sua janela de Opções ALT + O, se você quiser visualizar mais monstros.";
		close;
	}
}

// ------------------------------------------------------------------
yuno_in03,36,21,3	script	Deviace#yuno	DEVIACE,{ end; }
yuno_in03,33,21,1	script	#DEVIACE	HIDDEN_NPC,{
	mes " ";
	mes "Nome Científico : Deviace";
	mes "Tamanho : Médio";
	mes "Elemento : Água";
	next;
	mes "Explicação :";
	mes "Este monstro habita no profundo mar e tem um corpo redondo, com um acetábulo do lado dorsal.";
	mes "Apesar de seus dentes afiados intimidarem, ele é muito pacífico.";
	next;
	mes "Portanto, ele nunca inicia um ataque ou ataca alguém a menos que ele seja atacado primeiro.";
	mes "No entando, se ele se irritar, poderá utilizar magias de grande nível.";
	mes "Então é melhor ter cuidado com esse monstro.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,36,27,3	script	Foca#yuno	FUR_SEAL,{ end; }
yuno_in03,33,27,1	script	#FUR_SEAL	HIDDEN_NPC,{
	mes " ";
	mes "Nome Científico : Foca";
	mes "Tamanho : Médio";
	mes "Elemento : Água";
	next;
	mes "Explicação :";
	mes "Quando olhar atenciosamente para esse monstro, você perceberá que ele não é apenas uma foca.";
	mes "Existe um monstro não indentificado dentro da pele de foca.";
	next;
	mes "Existem rumores de que o monstro se disfarça com a pele de foca para proteger sua delicada pele do clima.";
	mes "A pele de foca é um material muito resistente e necessário para pessoas que produzem casacos de inverno.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,36,33,3	script	Verme Sábio#yuno	SAGEWORM,{ end; }
yuno_in03,33,33,1	script	#SAGEWORM	HIDDEN_NPC,{
	mes " ";
	mes "Nome Científico : Verme Sábio";
	mes "Tamanho : Pequeno";
	mes "Elemento : Neutro";
	next;
	mes "Explicação :";
	mes "Um estranho monstro que possui a cabeça de um antigo professor com uma cauda de verme.";
	mes "Embora seja fisicamente fraco, ele possui uma inteligência que o ajuda e ajuda seus companheiros com habilidades mágicas.";
	next;
	mes "Sua aparência acadêmica indica que ele é visto geralmente próximo a livros e prateleiras de livros.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,39,39,3	script	Penomena#yuno	PENOMENA,{ end; }
yuno_in03,38,39,1	script	#PENOMANA	HIDDEN_NPC,{
	mes " ";
	mes "Nome Científico : Penomena";
	mes "Tamanho : Médio";
	mes "Elemento : Veneno";
	next;
	mes "Explicação :";
	mes "Esse monstro vive dentro das mais profundas cavernas onde exista bastante umidade para evitar que fique seco.";
	next;
	mes "Possui uma aparência semelhante a da criatura Hidra.";
	mes "Porém ela pode se mover para próximo de seu inimigo usando pequenos ganchos existentes no seu acetábulo.";
	next;
	mes "Os tentáculos longos e finos de seu corpo lançam um veneno mortal, que é o suficiente para derrotar de uma vez seu inimigo.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,39,44,3	script	Galapago#yuno	GALAPAGO,{ end; }
yuno_in03,37,44,3	script	#GALAPAGO	HIDDEN_NPC,{
	mes " ";
	mes "Nome Científico : Galapago";
	mes "Tamanho : Pequeno";
	mes "Elemento : Terra";
	next;
	mes "Explicação :";
	mes "É um tipo de ave, mas infelizmente seu corpo é muito pesado para voar.";
	mes "É muito sensível á luz solar por isso carrega uma garrafa de água e usa óculos escuros o tempo inteiro.";
	next;
	mes "Embora ambicioso, está sempre colaborando em ataques contra suas presas, assim como também seus predadores.";
	mes "Fora isso, Galapago geralmente é um monstro calmo.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,15,21,5	script	Raydric#yuno	RAYDRIC,{ end; }
yuno_in03,19,21,1	script	#RAYDRIC	HIDDEN_NPC,{
	mes " ";
	mes "Nome Científico : Raydric";
	mes "Tamanho : Grande";
	mes "Elemento : Sombrio";
	next;
	mes "Explicação :";
	mes "É uma 'armadura' controlada por um espírito guardião do castelo.";
	mes "O está vinculado a esta armadura através de uma poderosa maldição.";
	next;
	mes "Desde que o Raydric passou a ser usado pelo guardião do castelo, ele possui rápidos movimentos e um grande poder de ataque.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,15,27,5	script	Chepet#yuno	CHEPET,{ end; }
yuno_in03,19,27,1	script	#CHEPET	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Chepet";
	mes " Tamanho : Médio";
	mes " Elemento : Fogo";
	next;
	mes "Explicação :";
	mes "Uma criatura do mal por trás de uma linda marionete.";
	mes "Ela ataca com sua varinha que está localizada na mão da marionete.";
	mes "Um monstro muito raro que habita em poucos lugares.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,15,33,5	script	Violy#yuno	VIOLY,{ end; }
yuno_in03,19,33,1	script	#VIOLY	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Violy";
	mes " Tamanho : Médio";
	mes " Elemento : Neutro";
	next;
	mes "Explicação :";
	mes "Uma linda boneca com cabelos dourados.";
	mes "Como ela está frequentemente tocando seu violino e com seu rosto encoberto.";
	mes "As pessoas não percebem de início que ela é um monstro.";
	next;
	mes "Tenha cuidado ao se deparar com uma Violy.";
	mes "Caso contrário, ela irá arrancar sua alma com seu canto encantador.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,10,39,5	script	Alice#yuno	ALICE,{ end; }
yuno_in03,12,39,1	script	#ALICE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Alice";
	mes " Tamanho : Médio";
	mes " Elemento : Neutro";
	next;
	mes "Explicação :";
	mes "Alice é um robô criado para ser uma empregada doméstica.";
	mes "Ela é conhecida por permanecer trabalhar árduamente e de ter continuado com suas tarefas mesmo com o castelo sendo abandonado.";
	next;
	mes "Sem grande poder aparente, o fato dela se mover e operar é um mistério científico.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,10,45,5	script	Agressor#yuno	ASSULTER,{ end; }
yuno_in03,12,45,1	script	#ASSULTER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Agressor";
	mes " Tamanho : Médio";
	mes " Elemento : Vento";
	next;
	mes "Explicação :";
	mes "Ao contrário de outras tartarugas da Ilha das Tartarugas.";
	mes "Esta tartaruga caminha sobre duas pernas e também as utiliza em ataques, empunhando uma grande shuriken a sua volta.";
	next;
	mes "Curiosamente, ele cria um clone para causar mais danos a seus perigosos inimigos.";
	mes "Ele causa um dano muito poderoso utilizando essa shuriken.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,38,50,3	script	Ovo de Peco Peco#yuno	PECOPECO_EGG,{ end; }

// ------------------------------------------------------------------
yuno_in03,34,54,3	script	Ovo de Besouro-Ladrão#yuno	THIEF_BUG_EGG,{ end; }

// ------------------------------------------------------------------
yuno_in03,12,50,3	script	Ovo de Andre#yuno	ANT_EGG,{ end; }

// ------------------------------------------------------------------
yuno_in03,18,96,5	script	Andarilho#yuno	WANDER_MAN,{ end; }
yuno_in03,20,96,1	script	#WANDER_MAN	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Andarilho";
	mes " Tamanho : Médio";
	mes " Elemento : Vento";
	next;
	mes "Explicação :";
	mes "Guerreiro morto-vivo que voltou a vida através de uma maldição.";
	mes "Considerando sua habilidade técnica em esgrima, ele deve ter sido um honrado guerreiro enquanto vivia como humano.";
	next;
	mes "O Andarilho pode se mover surpreendentemente rápido e pode matar inímigos com um único golpe de sua espada quebrada.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,100,5	script	Lagarta#yuno	CATERPILLAR,{ end; }
yuno_in03,18,100,1	script	#CATERPILLAR	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Lagarta";
	mes " Tamanho : Pequeno";
	mes " Elemento : Terra";
	next;
	mes "Explicação :";
	mes "Embora os olhos desta criatura tenham atrofiado pelo fato dela viver sob a terra.";
	mes "Ele usa um tentáculo e um gancho em seu corpo para sentir os objetos em seu ambiente escuro.";
	next;
	mes "A larva é o antecessor da Creamy Ameaçadora, a Creamy Avançada.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,104,5	script	Besouro-Ladrão Macho#yuno	THIEF_BUG__,{ end; }
yuno_in03,18,104,1	script	#THIEF_BUG__	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Besouro-Ladrão";
	mes " Tamanho : Médio";
	mes " Elemento : Sombrio";
	next;
	mes "Explicação :";
	mes "Embora tenha um corpo azul, é rápido e voraz assim como os outros Besouros-Ladrões.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,108,5	script	Trilobita#yuno	TRI_JOINT,{ end; }
yuno_in03,18,108,1	script	#TRI_JOINT	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Trilobita";
	mes " Tamanho : Pequeno";
	mes " Elemento : Terra";
	next;
	mes "Explicação :";
	mes "Trilobita é um monstro pré-histórico que é coberto por uma casca dura, e utiliza um apalpador em vez de olhos assim ele pode viver em lugares sombrios.";
	next;
	mes "Recentemente, foram descobertas muitas Trilobitas descobertas dentro de cavernas.";
	mes "Sábios gostam muito de estudar e aprender sobre a evolução de monstros em Rune-Midgard.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,111,5	script	Arclouse#yuno	ARCLOUSE,{ end; }
yuno_in03,18,111,1	script	#ARCLOUSE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Arclouse";
	mes " Tamanho : Médio";
	mes " Elemento : Terra";
	next;
	mes "Explicação :";
	mes "É um monstro de casca dura que utiliza seu corpo para atacar seus oponentes.";
	mes "Arclouse tende a andar em grupos e elas são criaturas muito agressivas.";
	next;
	mes "Eles possuem uma velocidade de locomoção incrivelmente rápida.";
	mes "Ao contrário de outras criaturas parecidas, e muitas vezes sua velocidade é comparada a dos PecoPecos.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,16,117,5	script	Lavadeira#yuno	DRAGON_TAIL,{ end; }
yuno_in03,18,116,1	script	#DRAGON_TAIL	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Lavadeira";
	mes " Tamanho : Médio";
	mes " Elemento : Vento";
	next;
	mes "Explicação :";
	mes "Um inseto considerado como Libélula, ou Lavadeira.";
	mes "Ela usa sua poderosa cauda para sugar o sangue de seus inimigos, ou para puxá-los e adormecê-los com um veneno sonífero.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,46,96,3	script	Duque Coruja#yuno	OWL_DUKE,{ end; }
yuno_in03,44,96,1	script	#OWL_DUKE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Duque Coruja";
	mes " Tamanho : Grande";
	mes " Elemento : Neutro";
	next;
	mes "Explicação:";
	mes "Uma coruja que veste um traje elegante.";
	mes "Seu olhar é tão intimidante como a sombra, sua aparência é suave.";
	mes "O Duque Coruja não é exatamente uma coruja, mas sim um demônio com garras muito afiadas em seus grandes pés.";
	next;
	mes "É hábil em utilizar várias magias de luz.";
	mes "Quando vê-lo atacando um inimigo, você conhecerá o aristocráta Duque Coruja.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,100,3	script	Esfera Marinha#yuno	MARINE_SPHERE,{ end; }
yuno_in03,46,101,1	script	#MARINE_SPHERE	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Esfera Marinha";
	mes " Tamanho : Pequeno";
	mes " Elemento : Água";
	next;
	mes "Explicação :";
	mes "Uma estranha criatura que habita em mares profundos.";
	mes "Ela pode explodir e causar uma grande explosão quando tocada, ganhando o nome de 'A Bomba do Mar.'";
	next;
	mes "Se uma Esfera Marinha for atingida por uma outra explosão, uma explosão em cadeia será ocasionada, e pode levar a uma perigosa reação em cadeia.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,104,3	script	Mandrágora#yuno	MANDRAGORA,{ end; }
yuno_in03,46,105,1	script	#MANDRAGORA	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Mandrágora";
	mes " Tamanho : Médio";
	mes " Elemento : Terra";
	next;
	mes "Explicação :";
	mes "Um insetívoro que engole qualquer coisa que vive.";
	mes "Quando encontra sua presa, ela sempre ataca primeiro com seus longos tentáculos para paralizá-la.";
	next;
	mes "Uma vez paralizada, essa presa é presa pelos longos tentáculos e após é digerida lentamente.";
	mes "Embobra este tubo possua a marca de uma caveira, Mandrágora não possui nenhum veneno.";
	next;
	mes "Seu aparelho digestivo também é muito original, mas o seu cheiro irritante está longe de ser atrativo as presas.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,108,3	script	Planta Carnívora#yuno	GEOGRAPHER,{ end; }
yuno_in03,46,108,1	script	#GEOGRAPHER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Planta Carnívora";
	mes " Tamanho : Médio";
	mes " Elemento : Terra";
	next;
	mes "Explicação :";
	mes "Um insetívoro que aparenta ser um girassol.";
	mes "Ela a usa a sua pétala como tentáculo em torno de sua boca para atrair e prender sua presa.";
	next;
	mes "Ao contrário da Mandrágora, a Planta Carnívora não possui um aparelho digestível para guardar sua presa.";
	mes "Então, lentamente come sua presa, pouco a pouco.";
	next;
	mes "Embora a Planta Carnívora seja pequena e com raízes curtas.";
	mes "As raízes são resistentes e forte o suficiente para suportar o peso da parte superior de seu corpo.";
	next;
	mes "O nome Planta Carnívora surgiu após a planta alimentar-se de seu criador, por isso nunca tome sempre cuidado e nunca se esqueça...";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,112,3	script	Rafflesia#yuno	RAFFLESIA,{ end; }
yuno_in03,46,112,1	script	#RAFFLESIA	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Rafflesia";
	mes " Tamanho : Pequeno";
	mes " Elemento : Terra";
	next;
	mes "Explicação :";
	mes "Um monstro que está em extinção.";
	mes "Rafflesia é um monstro raro de Rune-Midgard e é protegido por lei.";
	next;
	mes "Devido a esta situação, a maioria dos Sábios estão tendo dificuldade a pesquisar a respeito desse monstro.";
	mes "Porém, alguns sábios atualmente encontraram métodos de cultivar e salvar as Rafflesias.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,48,116,3	script	Talo de Verme#yuno	STEM_WORM,{ end; }
yuno_in03,45,116,1	script	#STEM_WORM	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Talo de Verme";
	mes " Tamanho : Médio";
	mes " Elemento : Vento";
	next;
	mes "Explicação :";
	mes "Um Rabo-de-Verme mutado, possui corpo cinza acastanhado, com uma pequena cabeça.";
	mes "É coberta com escamas e tem uma longa cauda que utiliza como chicote em ataques.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,24,124,3	script	Labareda#yuno	BLAZZER,{ end; }
yuno_in03,24,122,1	script	#BLAZZER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Labareda";
	mes " Tamanho : Médio";
	mes " Elemento : Fogo";
	next;
	mes "Explicação :";
	mes "É uma bola de fogo que surge em zonas vulcânicas.";
	mes "A causa repentina desse monstro é desconhecida.";
	mes "Sábios acreditam que eles surgiram após atividades vulcânicas ao redor de Juno.";
	next;
	mes "Labaredas expelem um gás tóxico que é prejudicial.";
	mes "Desconhece-se e não a forma de ataque e comunicação que as Labaredas utilizam.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,28,124,5	script	Rideword#yuno	RIDEWORD,{ end; }
yuno_in03,28,122,1	script	#RIDEWORD	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Rideword";
	mes " Tamanho : Pequeno";
	mes " Elemento : Neutro";
	next;
	mes "Explicação :";
	mes "É um livro amaldiçoado com dentes afiados.";
	mes "Ele ataca qualquer coisa viva ao redor.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,31,124,3	script	Megalodon#yuno	MEGALODON,{ end; }
yuno_in03,31,122,1	script	#MEGALODON	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Megalodon";
	mes " Tamanho : Médio";
	mes " Elemento : Morto-Vivo";
	next;
	mes "Explicação :";
	mes "Um peixe-esqueleto que renasceu através de uma maldição.";
	mes "Embora pareça muito ameaçadora é benigna e não ataca viajantes submarinos sem antes ser atacado.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,35,124,3	script	Rochoso#yuno	SLEEPER,{ end; }
yuno_in03,35,122,1	script	#SLEEPER	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Rochoso";
	mes " Tamanho : Médio";
	mes " Elemento : Sombrio";
	next;
	mes "Explicação :";
	mes "Uma criatura da areia não identificada.";
	mes "Normalmente, ela permanece sob a terra, mas quando os viajantes pisam sob a areia, ele pode abruptamente aparecer para atacar.";
	next;
	mes "É menor do que o Arenoso e causa ataques indiretos, ocasionando uma tempestade de areia.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,39,124,3	script	Múmia Anciã#yuno	ANCIENT_MUMMY,{ end; }
yuno_in03,39,122,1	script	#ANCIENT_MUMMY	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Múmia Anciã";
	mes " Tamanho : Médio";
	mes " Elemento : Morto-Vivo";
	next;
	mes "Explicação :";
	mes "Uma Múmia amaldiçoada com a vida eterna.";
	mes "Embora envolvida por faixas em decomposição, a Múmia Anciã também usa um enfeite de cabelo esplêndido preso com uma cobra.";
	next;
	mes "Este tipo de ornamento de cabeça indica que a antiga Múmia era uma importante pessoa enquanto vivia.";
	next;
	mes "A Múmia Anciã tem vagado pelo submundo faz bastante tempo, ela não tem qualquer consciência e vontade de atacar.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,18,122,5	script	Incubus#yuno	INCUBUS,{ end; }
yuno_in03,19,120,1	script	#INCUBUS	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Incubus";
	mes " Tamanho : Médio";
	mes " Elemento : Sombrio";
	next;
	mes "Explicação :";
	mes "Este demônio atrai humanos com sua belíssima aparência.";
	mes "Quando se depara com um homem humano, é chamado de Incubus.";
	mes "E com mulher, é chamada de Succubus.";
	next;
	mes "Esse demônio atinge seus alvos que possuem vulnerabilidade mental e quem podem eventualmente serem levados ao inferno.";
	close;
}

// ------------------------------------------------------------------
yuno_in03,44,120,3	script	Succubus#yuno	SUCCUBUS,{ end; }
yuno_in03,42,120,1	script	#SUCCUBUS	HIDDEN_NPC,{
	mes " ";
	mes " Nome Científico : Succubus";
	mes " Tamanho : Médio";
	mes " Elemento : Sombrio";
	next;
	mes "Explicação :";
	mes "Este demônio atrai humanos com sua belíssima aparência.";
	mes "Quando se depara com uma mulher humana, é chamada de Succubus.";
	mes "E com homens, é chamado de Incubus.";
	next;
	mes "Esse demônio atinge seus alvos que possuem vulnerabilidade mental e quem podem eventualmente serem levados ao inferno.";
	close;
}