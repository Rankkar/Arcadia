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
| - Nota: Npcs comuns na cidade Juno (yuno)                         |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Ruas ] -
//-------------------------------------------------------------------
yuno,14,262,5	script	Funcionário#yun	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirigível que voa até Izlude dentro do Reino de Rune-Midgard.";
	mes "E para Rachel na República de Arunafeltz.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, desça as escadas e peça para a Equipe de Recepção levá-lo até o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,88,263,3	script	Funcionário#yun2	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Juno.";
	mes "Por favor, utilize esta porta para embarcar no dirigível que voa até Einbroch, Lighthalzen e Hugel na República de Schwaltzvalt.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Ou caso seu destino seja Juno, desça as escadas e peça para a Equipe de Recepção levá-lo até o terminal.";
	mes "Obrigado, e tenha uma boa viajem.";
	close;
}

//-------------------------------------------------------------------
yuno,184,173,4	script	Freidrich#yun	4_F_NOVICE,{
	if (rand(1,5) == 1) {
		mes "[Freidrich]";
		mes "^3355FFJuno^000000 é mantida no ar por uma força anciã misteriosa.";
		next;
		mes "[Freidrich]";
		mes "Dizem que este poder vem de uma relíquia de uma antiga civilização chamada ^3355FFJuperos^000000.";
		mes "Que existia aqui muito antes de Juno.";
		next;
		mes "[Freidrich]";
		mes "Uma investigação revelou que o poder de Juno vem dos ^3355FFPedaços do Coração de Ymir^000000.";
		mes "Ouvi dizer que esta fonte de poder é encontrada onde Juperos existia.";
		next;
		mes "[Freidrich]";
		mes "Desde que muitos estudiosos vieram a Juno para estudar e investigar esta fonte de poder.!";
		mes "Nossa cidade é basicamente uma capital dos estudiosos.";
		close;
	}
	else {
		mes "[Freidrich]";
		mes "A cidade dos sábios, ^3355FFJuno,^000000 é constituída por três ilhas.";
		next;
		mes "[Freidrich]";
		mes "São elas Solomon, a ilha da honra, Mineta, a ilha da prosperidade, e Snotora, a ilha do conhecimento.";
		next;
		mes "[Freidrich]";
		mes "Os locais destas ilhas são:";
		mes "Noroeste : Solomon";
		mes "Nordeste : Snotora";
		mes "Sul: Mineta.";
		close;
	}
}

//-------------------------------------------------------------------
yuno,337,227,4	script	Granny#yun	8_F_GRANDMOTHER,{
	mes "[Granny]";
	mes "Sou o Sábio Granny aquele que tudo prevê...";
	next;
	mes "[Granny]";
	mes "Você soube de um monstro chefe que está a muito tempo pelos arredores de Juno?";
	mes "É chamado de ^FF3355Senhor da Morte^000000.";
	next;
	mes "[Granny]";
	mes "Há rumores de que ele veio do mundo dos mortos.";
	mes "Ele traz vários monstros morto-vivos consigo";
	mes "Pretendendo liderar criaturas vivas em seu frio e gelado reino.";
	next;
	mes "[Granny]";
	mes "Você já deve ter escolhido se vai ou não enfentar o Senhor da Morte.";
	mes "Tudo que precisa fazer agora é saber porque você tomou essa decisão.";
	close;
}

//-------------------------------------------------------------------
yuno,328,239,4	script	Lutador#yun	4_M_JOB_HUNTER,{
	mes "[Sergiof]";
	mes "Meu nome é Sergiof, o lutador que serve Granny.";
	next;
	mes "[Sergiof]";
	mes "Vou te falar sobre o ^3355FFGrande Peco^000000 que é um Peco Peco de level alto.";
	mes "O Grande Peco é mais rápido que o Peco Peco e é bastante agressivo.";
	next;
	mes "[Sergiof]";
	mes "Ele ataca usando seu resistente bico e muitos Peco Peco o seguem.";
	mes "Há uma grande diferença entre o poder de um Peco Peco e do Grande Peco.";
	close;
}

//-------------------------------------------------------------------
yuno,343,68,4	script	Ninno#yun	4_M_JOB_ASSASSIN,{
	mes "[Ninno]";
	mes "Já ouviu falar em um rei Egípcio que acredita-se que é filho de um Deus?";
	mes "Seu nome é ^3355FFFaraó^000000.";
	next;
	mes "[Ninno]";
	mes "Há rumores de que ele é um grande feiticeiro que amaldiçoou inocentes.";
	mes "Dizem que ele ainda esta por aí, amaldiçoando pessoas.";
	next;
	mes "[Ninno]";
	mes "Como aventureiro, é possível que você o veja em suas viagens. Tenha cuidado...";
	close;
}

//-------------------------------------------------------------------
yuno,165,111,4	script	Sábio#yun	2_F_MAGICMASTER,,{
	mes "[Le Morpheus]";
	mes "^3355FFApocalypse^000000...";
	mes "É o nome do androide que costumava proteger Juno há muito tempo.";
	next;
	mes "[Le Morpheus]";
	mes "Devido sua inteligêngia artificial ter se corrompido com o passar do tempo";
	mes "Ele não pode mais distinguir inimigos de aliados.";
	mes "Infelizmente, este andróide não passa de um monstro estúpido agora.";
	close;
}

//-------------------------------------------------------------------
yuno,157,205,4	script	Artesão#yun	1_M_JOBGUIDER,{
	mes "[Artesão]";
	mes "*Resmungo resmungo...*";
	next;
	mes "[Artesão]";
	mes "Oh, como vai.";
	mes "Deixe me apresentar.";
	mes "Eu sou um artesão que está tentando continuar as tradições e os deveres dos artesões mestres daqui de Juno.";
	next;
	switch(select("Equipamentos Poderosos","Itens Únicos","Comidas Tradicionais","Finalizar Conversa")) {
		case 1:
		mes "[Artesão]";
		mes "Deixe-me sugerir o ^3355FFArauto Divino^000000 e a ^3355FFVingadora Sagrada^000000 que são itens especiais para Templários.";
		next;
		mes "[Artesão]";
		mes "Estes equipamentos são bem leves e têm muito potencial.";
		mes "Eles te fazem possuir o poder divino.";
		next;
		mes "[Artesão]";
		mes "Portanto, este equipamento é mais forte sobre alguns tipos de monstros, como fantasmas ou mortos-vivos.";
		next;
		mes "[Artesão]";
		mes "Entretanto, há rumores de que só alguns Templários escolhidos estão aptos a obter estes itens, devido a suas raridades.";
		close;
		case 2:
		mes "[Artesão]";
		mes "Parece que um pergaminho marcado com um pentagrama.";
		mes "Entretanto o ^FF3355Pergaminho Antigo^000000 é muito antigo, é procurado por muitos Sábios para fins de investigação.";
		next;
		mes "[Artesão]";
		mes "Parece que você pode usar este item quando conjurar uma magia de alto nível.";
		close;
		case 3:
		mes "[Artesão]";
		mes "^3355FFBolinho de Arroz^000000!";
		mes "Sim, é uma comida tradicional fornecida por várias pessoas.";
		mes "Há um monte de lembranças nostálgicas de antigos mercadores referente ao Bolinho de Arroz.";
		next;
		mes "[Artesão]";
		mes "Ahhh";
		mes "Eu queria poder comer um Bolinho de Arroz agora.";
		close;
		case 4:
		mes "[Artesão]";
		mes "Embora Juno seja conhecida como cidade dos sábios,espero que entenda que pessoas comuns vivem aqui também.";
		mes "Por favor, aproveite a atmosfera única que Juno tem a oferecer.";
		close;
	}
}

//-------------------------------------------------------------------
yuno,150,283,4	script	Soldado#yun	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Existe aqui perto um monstro chamado de Golem de Lava.";
	mes "Este Golem é feito de um coração de pedra cuja potência foi amplificada por magia.";
	next;
	mes "[Soldado de Juno]";
	mes "A lava que fica escorrendo de seu corpo é tão quente que pode derreter as armaduras e armas feitas de aço de alta qualidade.";
	next;
	mes "[Soldado de Juno]";
	mes "É melhor você tomar cuidado quando encontrar este monstro. Destruirá seus equipamentos em um piscar de olhos.";
	close;
}

//-------------------------------------------------------------------
yuno,165,283,4	script	Soldado#yun2	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Planta Carnívora...";
	mes "Este monstro parece uma flor brotando do chão.";
	next;
	mes "[Soldado de Juno]";
	mes "Estranhamente, ela pode estender seu corpo a longas distâncias.";
	mes "Mesmo se você estiver de longe, ela pode ser uma ameaça.";
	next;
	mes "[Soldado de Juno]";
	mes "O nome deste monstro, originou-se da história de um pobre geógrafo.";
	mes "Que infelizmente, foi devorado por este monstro enquanto ele estava concentrado nos estudos.";
	close;
}

//-------------------------------------------------------------------
yuno,227,292,4	script	Soldado#yun3	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Próximo a Juno, existe um falso anjo chamado 'Anjo Fajuto'.";
	mes "Ele finge ser inocente, parecendo abençoar aventureiros e então ele os ataca pelas costas, sem qualquer aviso.";
	next;
	mes "[Soldado de Juno]";
	mes "Não se engane pelas aparências ou você vai ter sérios problemas.";
	close;
}

//-------------------------------------------------------------------
yuno,165,228,4	script	Soldado#yun4	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "'Bode' é um monstro que foi um antílope e vive em montanhas altas, agora não passa de um monstro qualquer.";
	next;
	mes "[Soldado de Juno]";
	mes "Mesmo se você conseguir esquivar-se de seus chifres, ainda precisa tomar cuidado com suas poderosas pernas.";
	next;
	mes "[Soldado de Juno]";
	mes "As pernas do Bode são muito fortes, porque está sempre escalando penhascos quando não está matando inocentes.";
	close;
}

//-------------------------------------------------------------------
yuno,150,228,4	script	Soldado#yun5	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Você já viu";
	mes "um Jellopy Tamanho Família?";
	mes "Elas são enooormes!";
	next;
	mes "[Soldado de Juno]";
	mes "É difícil de acreditar mais é o maior e mais brilhante jellopy que existe!";
	close;
}

//-------------------------------------------------------------------
yuno,334,182,4	script	Soldado#yun6	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "Entre as armas dos Sábios, existe a 'Adaga Certeira'.";
	next;
	mes "[Soldado de Juno]";
	mes "Seu uso é restrito a Sábios, e aumenta a chance de inflingir ataques críticos.";
	mes "Assim, para os Sábios, esta adaga pode ser muito útil, bem como dar mais estilo a eles em batalhas.";
	close;
}

//-------------------------------------------------------------------
yuno,263,320,4	script	Soldado#yun7	4_M_EIN_SOLDIER,{
	mes "[Soldado de Juno]";
	mes "É um longo e estreito escudo com asas de anjo gravadas no centro da frente.";
	mes "É especialmente poderoso contra Demônios e Mortos-Vivos.";
	close;
}