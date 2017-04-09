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
| - Desenvolvido por: Spell Master 08/04/2017                       |
| - Nota: Campo de Treinamento para Aprendizes.                     |
| - Observação:                                                     |
|   * Script desenvolvido com base no script  oficial do            |
|     bRO (Brasil Ragnarok Online)                                  |
|   * Provém de adaptações para o servidor.                         |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Primeira Parte ]
// ------------------------------------------------------------------
new_1-1,53,114,4	script	Sprakki#new	4_F_01,{
	if (!new_quest) {
		mes "[Sprakki]";
		mes "Bem-vind"+(Sex?"o":a)+" ao mundo de Ragnarök Online.";
		mes "Meu nome é Sprakki e eu estou encarregada de dar a você o guia básico do jogo.";
		next;
		mes "[Sprakki]";
		mes "Clique no botão [Próximo] ou pressione [Enter] para continuar com a conversa.";
		next;
		mes "[Sprakki]";
		mes "Eu vou dar a você a informação sobre os controles básicos.";
		mes "Todos os ^4a4affmovimentos básicos e a escolha de um item e ataque^000000.";
		mes "São realizados ao ^4a4affclicar com o botão esquerdo do mouse^000000.";
		next;
		cutin ("tutorial01",3);
		mes "-! Informação !-";
		mes "Clique no chão para mover o personagem.";
		mes "Para atacar monstros e conversar com NPCs, basta clicar neles.";
		next;
		cutin ("",255);
		mes "[Sprakki]";
		mes "Antes de mais nada, vamos tentar andar um pouco.";
		mes "Vê aquela ponte de madeira à direita?";
		next;
		mes "[Sprakki]";
		mes "Atravesse aquela ponte, ao final você verá um portal no chão.";
		mes "Entre nele e chegará há um castelo usado como Centro de Treinamento.";
		next;
		mes "[Sprakki]";
		mes "Esperarei por você dentro daquele Castelo.";
		mes "Chegue lá por sua conta própria.";
		new_quest = 1;
		setquest (7117);
		next;
		cutin ("tutorial02",3);
		mes "-! Informação !-";
		mes "Você tem uma missão dada por Sprakki";
		mes "Você pode ver o conteúdo dela na Janela de Informação de Missões.";
		next;
		mes "[Sprakki]";
		mes "Eu vou esperar dentro do Centro de treinamento, do outro lado da ponte.";
		next;
		mes "-! Informação !-";
		mes "Você pode abrir a Janela de Informação de Missões pressionando as teclas ^4a4afdALT + U^000000.";
		next;
		cutin ("",255);
		mes "[Sprakki]";
		mes "Você já viu a Janela de Informação de Missões?";
		mes "Eu vou esperar você no campo de treinamento, do outro lado da ponte.";
		close;
	}
	else if (new_quest == 1) {
		mes "[Sprakki]";
		mes "Eu vou esperar você no campo de treinamento, do outro lado da ponte.";
		close;
	}
	else {
		warp ("new_1-2",100,9);
		savepoint ("new_1-2",100,9);
		new_quest = 1;
		end;
	}
}

// ------------------------------------------------------------------
new_1-1,66,114,4	script	Informação#new	HIDDEN_NPC,{
	mes "^ff0000=================================";
	mes "Campo de Treinamento de Aprendizes.";
	mes "=================================^000000";
	next;
	if (select("Etapas do Treinamento","Cancelar") == 1) {
		mes "=================================";
		mes "1º Parte";
		mes "[Inscrição e Comandos Básicos]";
		mes "=================================";
		next;
		mes "Fale com Sprakki";
		mes "Após dirija-se ao centro de treinamento.";
		mes "Fale novamente com Sprakki no castelo para fazer sua inscrição.";
		next;
		mes "=================================";
		mes "2º Parte:";
		mes "[Equipamentos, Itens, Habilidades]";
		mes "=================================";
		next;
		mes "Fale com o Instrutor Brade, e equipe os itens que ele lhe der.";
		mes "Não se preocupe será instruíd"+(Sex?"o":"a")+" como fazer.";
		next;
		mes "Fale com com a Instrutora Jinha";
		mes "Ela lhe dará instruções como utilizar-se de habilidades.";
		next;
		mes "Após então siga para próxima sala ao oeste da que estará.";
		next;
		mes "=================================";
		mes "3º Parte:";
		mes "[Conhecendo Npcs]";
		mes "=================================";
		next;
		mes "Nesta parte você terá que simplesmente conversar com os npcs da sala.";
		mes "Conhecendo-os então você poderá seguir para próxima parte.";
		next;
		mes "=================================";
		mes "4º Parte:";
		mes "[Treinamento de Combate]";
		mes "=================================";
		mes "Última parte do treinamento.";
		mes "O objetivo é simples!";
		next;
		mes "Você deverá lutar contra monstros no mapa.";
		mes "Não se preocupe, eles não são fortes, e haverá intrutores no local para lhe auxiliar.";
		next;
		mes "Assim que atingir o Level 10 de sua classe, e suas habilidades básicas, estiverem maximizadas no Nível 10";
		mes "Poderá solicitar ao instrutor Brade que "+(Sex?"o":"a")+" leve para o Reino de Rune-Midgard.";
		next;
		mes "Também poderá solicitar no local que os representantes das associações.";
		mes "Que "+(Sex?"o":"a")+" levem até suas guildas para enfim fazer o teste de mudança de classe.";
		next;
		mes "Tenha um bom treinamento, lhe desejamos boa sorte em sua jornada.";
		close;
	}
	close;
}

// ------------------------------------------------------------------
new_1-1,144,116,2	script	Guarda#new	8W_SOLDIER,{
	if (!new_quest) {
		mes "[Guarda do Treinamento]";
		mes "Se tentar atravessar o portal e não conseguir.";
		mes "É porque você ainda não falou com ^0000ffSprakki^000000.";
		mes "Volte pela ponte a inicie seu treinamento com ela.";
		close;
	}
	mes "[Guarda do Treinamento]";
	mes "É meu dever desejar-lhe as boas vindas ao Campo de Treinamento de Aprendizes!";
	mes "Atravesse o portal para poder começar seu treinamento básico.";
	close;
}
new_1-1,144,107,2	duplicate(Guarda#new)	Guarda#new2	8W_SOLDIER

// ------------------------------------------------------------------
new_1-1,148,112,0	script	newWarp1#new	WARPNPC,2,2,{
	if (!new_quest) { end; }
	else {
		warp ("new_1-2",100,9);
		savepoint ("new_1-2",100,9);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Segunda parte ] -
// ------------------------------------------------------------------
new_1-2,100,29,4	script	Sprakki#new2	4_F_01,{
	if (new_quest == 1) {
		mes "[Sprakki]";
		mes "Ótimo!";
		mes "Conseguiu chegar até aqui, e isso é um bom.";
		next;
		mes "[Sprakki]";
		mes "Mas seu treinamento ainda não começou.";
		mes "Primiro vamos a sua inscrição oficial.";
		next;
		mes "[Sprakki]";
		mes "Por favor me diga seu nome.";
		mes "Você deve digitar corretamente, letras maiúlulas e mínusculs se tiver.";
	}
	else if (new_quest == 2) {
		mes "[Sprakki]";
		mes "Tente digitar seu nome novamente.";
	}
	else if (new_quest > 2) {
		savepoint (strnpcinfo(NPC_MAP),100,100);
		warp (strnpcinfo(NPC_MAP),100,100);
		new_quest = 3;
		end;
	}
	input (.@charname$);
	next;
	if (.@charname$ != strcharinfo(PC_NAME)) {
		mes "[Sprakki]";
		mes "Acho que você digitou seu nome errado não foi?";
		if (new_quest !=2) { new_quest = 2; }
		close;
	}
	else {
		mes "[Sprakki]";
		mes "Deixe-me preencher esses papéis para sua inscrição.";
		next;
		mes "[Sprakki]";
		mes ".....";
		next;
		mes "[Sprakki]";
		mes "Certo! Tudo pronto.";
		mes "Seja bem vindo ao treinamento de Aprendizes ^4a4aff"+.@charname$+"^000000.";
		next;
		mes "Te levarei a próxima sala fala com o instrutor ^bb0000Brade^000000.";
		mes "Ele continuará seu treinamento.";
		mes "Boa sorte!";
		close2;
		new_quest = 3;
		getexp (100,5);
		changequest (7117,7118);
		savepoint (strnpcinfo(NPC_MAP),100,100);
		warp (strnpcinfo(NPC_MAP),100,100);
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,100,113,4	script	Brade#new	4_M_JOB_KNIGHT1,{
	if (new_quest == 3) {
		if (questprogress(7118)) {
			completequest (7118);
			getexp (300,10);
		}
		mes "[Instrutor Brade]";
		mes "Muito bom!";
		mes "O fato de você ter chegado a mim quer dizer que tem ido bem em seu treinamento.";
		next;
		mes "[Instrutor Brade]";
		mes "Notou a experiência que ganhou ao complear a missão?";
		mes "Esses pontos podem ser obtidos de diversas formas.";
		mes "Mas a principal maneira de obter pontos de experiência.";
		mes "É derrotando monstros.";
		next;
		mes "[Instrutor Brade]";
		mes "Existem dois tipos de Level.";
		mes "Base: Que mede seu poder em geral.";
		mes "Classe: Que mede o poder de sua classe.";
		next;
		mes "[Instrutor Brade]";
		mes "Pressionando as teclas ^4a4afdALT + V^000000.";
		mes "Você verá duas barras de experiência, cada uma representa os pontos de cada level.";
		next;
		mes "[Instrutor Brade]";
		mes "Toda vez que uma barra dessa chegar ao 100%, você subirá de level correspondente a barra maximizada.";
		mes "Então receberá pontos para poder ampliar seus poderes.";
		next;
		mes "[Instrutor Brade]";
		mes "Mas seu poder em geral não é só medido pelo Level!";
		mes "Itens e equipamentos podem ampliar seus poderes consideravelmente!";
		next;
		cutin ("tutorial03",3);
		mes "[Instrutor Brade]";
		mes "Pressionando as teclas ^4a4afdALT + E^000000.";
		mes "Você verá os itens que está carregando em seu iventário.";
		next;
		mes "[Instrutor Brade]";
		mes "Pressionando as teclas ^4a4afdALT + Q^000000.";
		mes "Você verá os itens que esteja equipados.";
		next;
		mes "[Instrutor Brade]";
		mes "Para equipar um item, ou usar-lo clique duas vezes com o botão esquerdo do mouse.";
		mes "Sobre o item em seu inventário.";
		mes "Ou para equipar abra a janela de equipamentos.";
		mes "Segure o item com o botão direito do mouse, arraste-o e solte na janela de equipamentos.";
		next;
		cutin ("",255);
		mes "[Instrutor Brade]";
		mes "Agora, pegue esses itens!";
		mes "Quero que você os use, depois fale comigo novamente.";
		getitem (Novice_Plate,1);
		getitem (Novice_Hood,1);
		getitem (Novice_Boots,1);
		getitem (Novice_Egg_Cap,1);
		getitem (Novice_Knife,1);
		getitem (Novice_Guard,1);
		getitem (Novice_Potion,300);
		setquest (7119);
		new_quest = 4;
		close;
	}
	else if (new_quest == 4) {
		if (!isequipped(Novice_Plate) || !isequipped(Novice_Hood) || !isequipped(Novice_Boots) || !isequipped(Novice_Egg_Cap) || !isequipped(Novice_Guard)) {
			mes "[Instrutor Brade]";
			mes "Equipe os 6 dos equipamentos que eu te dei.";
			mes "Coloque os sapatos, vista as roupas, e se arme com arma.";
			close;
		}
		else {
			mes "[Instrutor Brade]";
			mes "Bom.... Muito bom!";
			mes "Vejo que você é uma pessoa experta!";
			next;
			mes "[Instrutor Brade]";
			mes "Existe mais algumas coisas que preciso lhe instruir.";
			mes "Você pode clicar com o botão direito do mouse sobre um item.";
			mes "Para obter informações detalhadas sobre ele.";
			next;
			cutin ("tutorial04",3);
			mes "[Instrutor Brade]";
			mes "Essa mesma ação pode ser usada para interagir com outras pessoas.";
			next;
			mes "[Instrutor Brade]";
			mes "Muitas dessas interações vai depender de seu level de classe e habilidades.";
			next;
			mes "[Instrutor Brade]";
			mes "Você poderá regitrar amigos, se juntar a grupos e Clãs dentre outros.";
			next;
			cutin ("",255);
			mes "[Instrutor Brade]";
			mes "Como isso depende de habilidades.";
			mes "Quero que você procure pela ^4d4dffInstrutora Jinha^000000.";
			next;
			mes "[Instrutor Brade]";
			mes "Para aprender como utilizar Habilidades.";
			mes "Depois venha falar comigo novamente.";
			if (questprogress(7118)) {
				changequest (7119,7120);
				getexp (600,20);
			}
			new_quest = 5;
			close;
		}
	}
	else if (new_quest == 5) {
		mes "[Instrutor Brade]";
		mes "Eu disse para você ir aprender a usar habilidades com a ^4d4dffInstrutora Jinha^000000.";
		mes "Sei que vai conseguir encontra-la.";
		close;
	}
	else if (new_quest == 6) {
		mes "[Instrutor Brade]";
		mes "Exelente você aprendeu sobre as habilidades.";
		mes "Muitas outras habilidades podem ser aprendidas.";
		next;
		mes "[Instrutor Brade]";
		mes "Cada classe possui suas habilidades.";
		mes "E como as habilidades tem seu requisito próprio, deve-se ter muita cautela ao escolher qual melhorar.";
		next;
		mes "[Instrutor Brade]";
		mes "Bem, não há mais nada para você aprender aqui.";
		mes "Siga para o oeste dessa sala você vai verá um portal.";
		mes "Atravessando-o fale com as pessoas da sala elas vão lhe ajudar.";
		next;
		mes "[Instrutor Brade]";
		mes "É muito simples elas simplesmente vão lhe informar sobre os principais serviços.";
		mes "Que poderá encontrar quando completar seu treinamento.";
		next;
		mes "[Instrutor Brade]";
		mes "Depois então nos veremos novamente em seu treinamento de combate.";
		mes "Até lá pegue esse itens, pode lhe ser útil no futuro.";
		getitem (N_Adventurers_Suit,1);
		getitem (N_Fly_Wing,50);
		getitem (N_Butterfly_Wing,20);
		new_quest = 7;
		if (questprogress(7120)) {
			changequest (7120,7121);
			getexp (1000,20);
		}
		close;
	}
	else if (new_quest == 7) {
		mes "[Instrutor Brade]";
		mes "Atravesse o portal ao oeste dessa sala.";
		mes "Fale com as pessoas de lá para continuar seu treinamento.";
		close;
	}
	else {
		warp (strnpcinfo(NPC_MAP),41,172);
		savepoint (strnpcinfo(NPC_MAP),41,172);
		new_quest = 7;
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,116,115,4	script	Jinha#new	1_M_ORIENT01,{
	if (new_quest < 5) {
		mes "[Instrutora Jinha]";
		mes "Me parece que está perdid"+(Sex?"o":"a")+", não é.";
		mes "Porque não procura pelo";
		mes "^4d4dffInstrutor Brade^000000.";
		mes "Talvez ele possa lhe ajudar.";
		close;
	}
	else if (new_quest == 5) {
		mes "[Instrutora Jinha]";
		mes "Me parece que está perdid"+(Sex?"o":"a")+", não é.";
		mes "Porque não procura pelo";
		mes "^4d4dffInstrutor Brade^000000.";
		mes "Talvez ele possa lhe ajudar.";
		next;
		select ("Não! Ele me mandou te procurar");
		mes "[Instrutora Jinha]";
		mes "Então me desculpe.";
		mes "Mas o que ele pediu?";
		next;
		select ("Ele disse para aprender sobre habilidades");
		mes "[Instrutora Jinha]";
		mes "Ah sim!";
		mes "Habilidades é algo simples.";
		next;
		mes "[Instrutora Jinha]";
		mes "Você já deve ter aprendido sobre experiência não é?";
		mes "Então toda vez que você ganha um level de sua classe.";
		mes "Também ganhará 1 ponto de habilidade.";
		next;
		mes "[Instrutora Jinha]";
		mes "Esses pontos podem ser usados para ampliar suas habilidades.";
		next;
		mes "[Instrutora Jinha]";
		mes "Pressionando as teclas ^4a4afdALT + S^000000.";
		mes "Você verá suas habilidades e a arvore de requisitos.";
		mes "Cada habilidade tem seu pré requisito para poder utilizar.";
		next;
		mes "[Instrutora Jinha]";
		mes "Exitem diversos tipos de habilidades.";
		next;
		mes "[Instrutora Jinha]";
		mes "Passivas: Seu efeito é constante a todo momento, não é preciso usar-las.";
		next;
		mes "[Instrutora Jinha]";
		mes "Suporte: Podem ser usada em si próprio.";
		mes "Muitas dessas habilidades podem ser usadas em outras pessoas.";
		mes "E até em monstros, basta que segure a tecla ^4a4afdShift^000000.";
		next;
		mes "[Instrutora Jinha]";
		mes "Ofensivas: Essas habilidades unicamente podem ser usadas contra inimigos em combate.";
		next;
		mes "[Instrutora Jinha]";
		mes "Area: Esses tipos de habilidades acertão o chão.";
		mes "E tudo que tiver ao alcance da área de impacto será atingido.";
		mes "Dentro desse tipo de habilidades estão as passivas, suporte e ofensivas.";
		next;
		mes "[Instrutora Jinha]";
		mes "Para utilizar uma habilidade primiro abra a janela de habilidades.";
		mes "E dê dois cliques sobre a habilidade que deseja usar.";
		next;
		cutin ("tutorial05",3);
		mes "[Instrutora Jinha]";
		mes "Uma forma mais fácil de usar não só habilidades como também itens.";
		mes "É se favorecer das teclas de atalho que são da tecla ^4a4afdF1^000000 a tecla ^4a4afdF9^000000.";
		next;
		mes "[Instrutora Jinha]";
		mes "Precionando a tecla ^4a4afdF12^000000 você pode abir os compatimentos de atalhos.";
		mes "Esses mesmos compartimentos podem ser configurados por você no";
		mes "[^4a4afdMenu de Configurações^000000].";
		next;
		mes "[Instrutora Jinha]";
		mes "Basta que segure a Habilidade ou Item com o botão esquerdo do mouse.";
		mes "E coloque em um dos compartimentos para habilitar a tecla de atalho.";
		next;
		cutin ("",255);
		if (!getskilllv("NV_FIRSTAID")) {
			mes "[Instrutora Jinha]";
			mes "Para começar vou te ensinar uma habilidade.";
			mes "Ela se chama ^ff0000Primeros Socorros^000000.";
			mes "Para que aprenda como utilizar habilidades.";
			next;
			mes "[Instrutora Jinha]";
			mes "Feche seus olhos agora.";
			mes ".....";
			next;
			mes "[Instrutora Jinha]";
			mes "......";
			specialeffect2 (EF_BEGINSPELL6);
			next;
			specialeffect2 (EF_SPELLBREAKER);
			skill ("NV_FIRSTAID",1,0);
			new_quest = 6;
			mes "[Instrutora Jinha]";
			mes "Olhe na sua janela de habilidades, para visualizar-la.";
			next;
			mes "[Instrutora Jinha]";
			mes "É uma habilidade de suporte muito simples.";
			mes "Que lhe permitirar cura-se em um momento difícil.";
			next;
			mes "[Instrutora Jinha]";
			mes "Bom isso é tudo que tenho a lhe ensinar.";
			close;
		}
		// Coloquei isso aqui mas é impossível conseguir a habilidade sem ser pelo npc
		// Execto pelo comando @allskill
		else { new_quest = 6; close; }
		close;
	}
	else if (new_quest == 6) {
		mes "[Instrutora Jinha]";
		mes "Tudo que eu sabia já lhe ensinei.";
		mes "Acho que o ^4d4dffInstrutor Brade^000000 poderá lhe ajudar.";
		close;
	}
	else {
		warp (strnpcinfo(NPC_MAP),41,172);
		savepoint (strnpcinfo(NPC_MAP),41,172);
		new_quest = 7;
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,73,106,0	script	newWarp2#new	WARPNPC,2,2,{
	if (new_quest != 7) { end; }
	else {
		warp (strnpcinfo(NPC_MAP),41,172);
		savepoint (strnpcinfo(NPC_MAP),41,172);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Terceira Parte ] -
// ------------------------------------------------------------------
// new_1-2,28,185,5	script	Chocolati#new	4W_KID,{} // Seria o oficial mas não adicionei

// ------------------------------------------------------------------
new_1-2,38,182,4	script	Corporação Kafra#new	4_F_KAFRA1,{
	if ((new_quest > 6) && (new_quest < 11)) {
		cutin ("kafra_01",2);
		mes "[Funcionária Kafra]";
		mes "Fui designada pelo Escritório Central Kafra a cuidar de Aprendizes como você.";
		mes "A Corporação Kafra é a maior empresa de todas.";
		next;
		mes "[Funcionária Kafra]";
		mes "Com uma antiga e distinta história no continente de Rune-Midgard.";
		mes "É importante que os aventureiros estejam próximos de nós.";
		next;
		mes "[Funcionária Kafra]";
		mes "Eu vou informar você sobre os Serviços Kafra que usará com uma frequência maior:";
		next;
		mes "[Funcionária Kafra]";
		mes "Salvar Ponto de Retorno";
		mes "Usar Armazém";
		mes "Serviço de Teletransporte.";
		next;
		mes "[Funcionária Kafra]";
		mes "Quando você falar com uma Funcionária Kafra e pedir pelo serviço de Salvar Ponto de Retorno";
		next;
		mes "[Funcionária Kafra]";
		mes "O local aonde você retornará depois de ser derrotado em uma batalha será alterado.";
		next;
		mes "[Funcionária Kafra]";
		mes "Seu Ponto de Retorno será sempre o último lugar em que você salvou.";
		mes "Usar uma Asa de Borboleta levará você de volta para o lugar em que você salvou.";
		next;
		mes "[Funcionária Kafra]";
		mes "Este serviço é gratuito, então sinta-se livre para usar o Serviço de Salvamento sempre que quiser.";
		next;
		if (new_quest == 8) {
			mes "[Funcionária Kafra]";
			mes "^ff0000Além da Corporação Kafra, outra empresa presta esses tipos de serviços^000000.";
			next;
			mes "[Funcionária Kafra]";
			mes "^ff0000A Corporação de Eventos Incríveis.";
			mes "Nesta sala há uma representante.";
			mes "Vá falar com ela para conhecê-la^000000.";
			next;
		}
		else if (new_quest == 9) {
			mes "[Funcionária Kafra]";
			mes "^ff0000Em praticalmente todas as cidades exitem guias.";
			mes "Que podem lhe orientar onde ficam os principais locais^000000.";
			next;
			mes "[Funcionária Kafra]";
			mes "^ff0000Nesta sala há um representante.";
			mes "Porque não vai conversar com ele para conhecer-lo?^000000";
			next;
		}
		else if (new_quest == 10) {
			mes "[Funcionária Kafra]";
			mes "Não há mais nada para fazer aqui.";
			mes "Atravesse o portal e vá falar com o ^4a4afdInstrutor Brade^000000.";
			mes "Para começar a última etapa do seu treinamento.";
			close;
		}
		else if (new_quest == 7 ) {
			getitem Cargo_Free_Ticket,40;
			getitem Warp_Free_Ticket,60;
			new_quest = 8;
		}
		while (true) {
			switch (select("Salvamento","Uso do Armazém","Uso do teletransporte","Cancelar")) {
				case 1:
				mes "[Funcionária Kafra]";
				mes "Quando você morre em uma batalha, pode ressuscitar no lugar que você salvou com esse serviço.";
				next;
				mes "[Funcionária Kafra]";
				mes "Se você salvar em uma Kafra em cada cidade.";
				mes "Poderá ressuscitar na última cidade em que salvou.";
				next;
				mes "[Funcionária Kafra]";
				mes "O local salvo é sempre onde você salvou na última vez e, usando a Asa de Borboleta.";
				next;
				mes "[Funcionária Kafra]";
				mes "Você pode se teletransportar diretamente para o ponto salvo.";
				mes "Então, sinta-se à vontade para usar esse serviço.";
				next; break;
				case 2:
				mes "[Funcionária Kafra]";
				mes "Você pode armazenar e retirar seus itens do armazém quando quiser.";
				next;
				mes "[Funcionária Kafra]";
				mes "Não tem sentido carregar todos os seus itens com você.";
				next;
				mes "[Funcionária Kafra]";
				mes "Já que você não precisa de todos ao mesmo tempo.";
				mes "Por favor, use o nosso Armazém e mantenha os seus itens seguros e a salvo.";
				next;
				mes "[Funcionária Kafra]";
				mes "Nosso conveniente Serviço de Armazenagem é fornecido aos nosso clientes.";
				mes "Por uma pequena taxa de 40 Zenys.";
				next;
				mes "[Funcionária Kafra]";
				mes "Porém, você precisa ter pelo menos o ^4A4AFFNível 6 de Habilidades Básicas^000000 para usar o Armazém.";
				next;
				mes "[Funcionária Kafra]";
				mes "Existem 7 seções de itens diferentes no Armazém em quais os itens são organizados em:";
				next;
				mes "[Funcionária Kafra]";
				mes "Consumíveis, Kafra (Itens de Cash), Armaduras, Armas, Munição, Cartas, e Miscelânia.";
				next;
				mes "[Funcionária Kafra]";
				mes "Este Armazém é compartilhado por cada personagem em sua conta.";
				mes "Então não se esqueça disso quando estiver usando nossos serviços de armazém.";
				next;
				mes "[Funcionária Kafra]";
				mes "Qualquer um de seus personagens terá acesso aos itens no armazém.";
				next; break;
				case 3:
				mes "[Funcionária Kafra]";
				mes "Nós também diponibilizamos um Serviço de Teletransporte";
				mes "Para fazer suas viagens facilmente quando é uma longa distância.";
				next;
				mes "[Funcionária Kafra]";
				mes "Com nossa avançada habilidade de teletransporte, sua viagem será mais segura e confortável.";
				next;
				mes "[Funcionária Kafra]";
				mes "Ah e lembre-se que os lugares para onde você pode teletransportar variam de cidade para cidade.";
				next;
				mes "[Funcionária Kafra]";
				mes "Tudo isto é para sempre apoiar você.";
				mes "Nós estamos trabalhando muito para pagar nossa dívida com nossos clientes.";
				next; break;
				case 4:
				mes "[Funcionária Kafra]";
				mes "Conte sempre com a Corporação Kafra quando precisar.";
				close2; cutin ("",255); end;
			}
		}
	}
	else if (new_quest > 10) {
		new_quest = 11;
		warp ("new_1-3",102,27);
		savepoint ("new_1-3",102,27);
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,17,182,5	script	Eventos Incríveis#new	4_M_ZONDAMAN,{
	if (new_quest == 7) {
		mes "[Eventos Incríveis]";
		mes "Você já conversou com a funcionária kafra?";
		close;
	}
	else if (new_quest == 8) {
		cutin ("zonda_01",2);
		mes "[Eventos Incríveis]";
		mes "Basicamente nossa empresa presta suporte a Corporação Kafra.";
		mes "Em locais mais longincos.";
		next;
		mes "[Eventos Incríveis]";
		mes "Os únicos serviços que nós não prestamos são:";
		mes "Aluguel de Carrinhos e Teletransporte.";
		next;
		mes "[Eventos Incríveis]";
		mes "Sobre os demais serviços, acredito que não preciso mais lhe dizer.";
		mes "Porque a funcionária kafra já lhe explicou tudo.";
		close2;
		cutin ("",255);
		new_quest = 9;
		end;
	}
	else if (new_quest == 9) {
		mes "[Eventos Incríveis]";
		mes "^ff0000Em praticalmente todas as cidades exitem guias.";
		mes "Que podem lhe orientar onde ficam os principais locais^000000.";
		next;
		mes "[Eventos Incríveis]";
		mes "^ff0000Nesta sala há um representante.";
		mes "Porque não vai conversar com ele para conhecer-lo?^000000";
		close;
	}
	else if (new_quest == 10) {
		mes "[Eventos Incríveis]";
		mes "Não há mais nada para fazer aqui.";
		mes "Atravesse o portal e vá falar com o ^4a4afdInstrutor Brade^000000.";
		mes "Para começar a última etapa do seu treinamento.";
		close;
	}
	else {
		new_quest = 11;
		warp ("new_1-3",102,27);
		savepoint ("new_1-3",102,27);
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,28,185,4	script	Guia#new	8W_SOLDIER,{
	if (new_quest == 7) {
		mes "[Guia]";
		mes "Você já conversou com a funcionária kafra?";
		close;
	}
	else if (new_quest == 8) {
		mes "[Guia]";
		mes "Na minha esquerda, jeva uma funcionária da Corporação Eventos Incríveis.";
		mes "Você já conversou com ela?";
		close;
	}
	else if (new_quest == 9) {
		cutin ("prt_soldier",2);
		mes "[Guia]";
		mes "Os Guias estão em cada cidade para guiar você para lugares úteis.";
		mes "Pergunte-nos onde você quer ir e nós vamos marcar o local em seu mini-mapa com uma ^4a4aff+^000000.";
		next;
		mes "[Guia]";
		mes "Não hesite em fazer perguntas, sempre que quiser saber a localização de algo.";
		close2;
		new_quest = 10;
		completequest (7121);
		cutin ("",255);
		end;
	}
	else if (new_quest == 10) {
		mes "[Guia]";
		mes "Não há mais nada para fazer aqui.";
		mes "Atravesse o portal e vá falar com o ^4a4afdInstrutor Brade^000000.";
		mes "Para começar a última etapa do seu treinamento.";
		close;
	}
	else {
		warp ("prontera",273,354);
		savepoint ("prontera",273,354);
		new_quest = 0;
		end;
	}
}

// ------------------------------------------------------------------
new_1-2,23,190,0	script	newWarp3#new	WARPNPC,2,2,{
	if (new_quest != 10) { end; }
	else {
		new_quest = 11;
		warp ("new_1-3",102,27);
		savepoint ("new_1-3",102,27);
		end;
	}
}

// ------------------------------------------------------------------
// - [ Terceira Parte ] -
// ------------------------------------------------------------------
new_1-3,96,30,1	script	Brade#new2	4_M_JOB_KNIGHT1,{
	if (new_quest == 11) {
		mes "[Instrutor Brade]";
		mes "Olha quem está aqui?!";
		next;
		mes "[Instrutor Brade]";
		mes "Preparado mapa começar a última parte do seu treinamento?";
		mes "Para começar vou lhe dar uma tarefa simples e fácil";
		next;
		mes "[Instrutor Brade]";
		mes "Quero que você encontre um monstro ^ff0000Poring^000000 e o derrote!";
		next;
		mes "[Instrutor Brade]";
		mes "Sei que vai conseguir, boa sorte!";
		new_quest = 12;
		getitem (Novice_Potion,100);
		setquest (7122);
		close;
	}
	else if ((new_quest >= 12) && (new_quest < 17)) {
		if (questprogress(7122,HUNTING) == 2) {
			completequest (7122);
			getexp (3000,0);
			getitem (N_Cutter,1);
			getitem (Novice_Potion,500);
			npcskill ("AL_HEAL",11,99,99);
			new_quest = 17;
			mes "[Instrutor Brade]";
			mes "Muito bom!";
			mes "Não disse que seria uma tarefa muito fácil!";
			next;
			if (getskilllv("NV_BASIC") < 9) {
				mes "[Instrutor Brade]";
				mes "A partir de agora seu único objetivo aqui.";
				mes "É conseguir deixar suas ^4a4affHabilidades Básicas^000000 no Nível 9";
				next;
				mes "[Instrutor Brade]";
				mes "Quando conseguir venha falar comigo novamente.";
				mes "Que lhe enviarei a uma cidade de sua escolha no Reino de Rune-Midgard.";
				next;
				mes "[Instrutor Brade]";
				mes "Assim poderá começar sua jornada de aventuras.";
				next;
				mes "[Instrutor Brade]";
				mes "Se desejar mais algumas missões.";
				mes "Ou saber mais sobre cada classe.";
				mes "Fale com os representantes das Guildas atrás de mim.";
				next;
				mes "[Instrutor Brade]";
				mes "Caso queira eles também podem lhe levar direto para o local.";
				mes "Onde poderá fazer o teste de mudança de classe.";
				next;
				mes "[Instrutor Brade]";
				mes "Contudo podemos dizer que você completou seu treinamento.";
				close;
			}
			else {
				mes "[Instrutor Brade]";
				mes "Quando quiser deixar o campo de treinamento.";
				mes "Fale comigo novamente.";
				mes "Que lhe enviarei a uma cidade de sua escolha no Reino de Rune-Midgard.";
				next;
				mes "[Instrutor Brade]";
				mes "Assim poderá começar sua jornada de aventuras.";
				next;
				mes "[Instrutor Brade]";
				mes "Se desejar mais algumas missões.";
				mes "Ou saber mais sobre cada classe.";
				mes "Fale com os representantes das Guildas atrás de mim.";
				next;
				mes "[Instrutor Brade]";
				mes "Caso queira, eles também podem lhe levar direto para o local.";
				mes "Onde poderá fazer o teste de mudança de classe.";
				next;
				mes "[Instrutor Brade]";
				mes "Contudo podemos dizer que você completou seu treinamento.";
				close;
			}
		}
		else {
			mes "[Instrutor Brade]";
			mes "Ainda não derrou o Poring?";
			mes "Vamos lá! Sei que você consegue!";
			// Um bloqueio para ficar impedindo que o usuário usufrua da cura para upar (Max. Uso 3X)!
			if (new_quest <= 15) {
				new_quest ++;
				npcskill ("AL_HEAL",11,99,99);
			}
			close;
		}
	}
	else {
		if (getskilllv("NV_BASIC") < 9) {
			mes "[Instrutor Brade]";
			mes "A partir de agora seu único objetivo aqui.";
			mes "É conseguir deixar suas ^4a4affHabilidades Básicas^000000 no Nível 9";
			next;
			mes "[Instrutor Brade]";
			mes "Quando conseguir venha falar comigo novamente.";
			mes "Que lhe enviarei a uma cidade de sua escolha no Reino de Rune-Midgard.";
			next;
			mes "[Instrutor Brade]";
			mes "Assim poderá começar sua jornada de aventuras.";
			next;
			mes "[Instrutor Brade]";
			mes "Se desejar mais algumas missões.";
			mes "Ou saber mais sobre cada classe.";
			mes "Fale com os representantes das Guildas atrás de mim.";
			next;
			mes "[Instrutor Brade]";
			mes "Caso queira eles também podem lhe levar direto para o local.";
			mes "Onde poderá fazer o teste de mudança de classe.";
			next;
			mes "[Instrutor Brade]";
			mes "Contudo podemos dizer que você completou seu treinamento.";
			close;
		}
		else {
			mes "[Instrutor Brade]";
			mes "É parece que você não tem mais nada para fazer aqui.";
			mes "Mas poderá ficar o tempo que quiser.";
			next;
			mes "[Instrutor Brade]";
			mes "Posso lhe enviar agora para uma cidade no Reino de Rune-Midgard.";
			mes "Depois que sair não vai poder voltar mais aqui.";
			next;
			mes "[Instrutor Brade]";
			mes "Se preferir fale com os representantes das guildas!";
			mes "Eles podem lhe levar diretamente para os locais.";
			next;
			mes "[Instrutor Brade]";
			mes "Onde poderá realizar o Teste de Mudança de Classe.";
			next;
			if (select("Quero ir para as cidades","Vou falar com eles então.") == 1) {
				next;
				mes "[Instrutor Brade]";
				mes "A decisão é sua, a partir de agora um mundo infinito de possibilidades "+(Sex?"o":"a")+" espera!";
				mes "Me diga para onde quer ir?";
				next;
				switch (select("Prontera","Morroc","Payon","Alberta","Geffen","Ficar mais tempo aqui")) {
					case 1:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Prontera a capital de Rune-Midgard.";
					close2;
					savepoint ("prontera",117,72);
					warp ("prontera",150,50);
					end;
					case 2:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Morroc a cidade no deserto.";
					close2;
					savepoint ("morocc",150,99);
					warp ("morocc",155,110);
					end;
					case 3:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Payon a cidade nas Montanhas.";
					savepoint ("payon",70,100);
					warp ("payon",166,67);
					close2;
					end;
					case 4:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Alberta a cidade portuária.";
					savepoint ("alberta",30,232);
					warp ("alberta",114,58);
					close2;
					end;
					case 5:
					callfunc ("F_NewDel");
					mes "[Instrutor Brade]";
					mes "Geffen a cidade da magia.";
					savepoint ("geffen",119,37);
					warp ("geffen",122,65);
					close2;
					end;
					case 6:
					mes "[Instrutor Brade]";
					mes "Fique o tempo que achar necessário.";
					close;
				}
			}
			mes "[Instrutor Brade]";
			mes "Boa escolha.";
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,100,19,1	script	Espadachim#new	4_F_JOB_KNIGHT,{
	if (new_quest < 17) {
		mes "[Espadachim]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	}
	else {
		mes "[Espadachim]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Espadachins","Pode me dar alguma Missão?","Quero ser Espadachim","Nada")) {
			case 1:
			mes "[Espadachim]";
			mes "Como o próprio nome diz.";
			mes "Os Espadachins são expecializados no uso da espada.";
			mes "Mas podem equipar quase todo tipo de arma, execto arcos e cajados.";
			next;
			mes "[Espadachim]";
			mes "A principal vantagem do espadachim é seu HP muito maior que a das outras classes.";
			mes "E seu poder de ataque físico também muito superior as outras classes.";
			next;
			mes "[Espadachim]";
			mes "Suas desvantagens são em enfrentar inimigos que acertam de longa distância.";
			mes "E muito vunerável a ataques mágicos.";
			next;
			mes "[Espadachim]";
			mes "Em um grupo o espadachim assume a postura de \"Tanque\".";
			mes "Um tanque é aquele que suporta ataques dos oponetes para proteger as outros mais fracos.";
			next;
			mes "[Espadachim]";
			mes "O espadachim quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffCavaleiro^000000 ou ^0000ffTemplário^000000";
			next;
			while (true) {
				mes "[Espadachim]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Cavaleiros","Sobre os Templários","Experimentar Habilidades do Espadachim","Cancelar")) {
					case 1:
					mes "[Espadachim]";
					mes "Muitos podem pensar que o cavaleiro é um espadachim com maior poder.";
					mes "Mas não é bem assim.";
					mes "Cavaleiros são mestres no uso de Espadas, principalmente espadas de duas mãos.";
					mes "Não só espadas como lanças também.";
					mes "O que os fazem bons combatentes até mesmo contra enimigos que atacam a longa distância.";
					next;
					mes "[Espadachim]";
					mes "Possui um poder de ataque descomunal.";
					mes "Mas em infelismente são extremamente vulneráveis a ataques mágicos.";
					next; break;
					case 2:
					mes "[Espadachim]";
					mes "Templários assim como são conhecidos são os guerreiros de Deus.";
					mes "Possuem uma Fé inabalável, o que lhe permitem ter um HP de longe o maior diante as outras classes.";
					next;
					mes "[Espadachim]";
					mes "Grandes mestres no uso da Espada junto a um Escudo.";
					mes "E até mesmo o escudo ele utiliza como arma para lutar.";
					mes "O que também não os tornam menos eficientes no uso de lanças, principalmente se ela for de duas mãos.";
					next;
					mes "[Espadachim]";
					mes "Muito resistente contra qualquer tipo de ataque faz o templário, ser uma verdadeira fortaleza!";
					mes "Infelismente toda essa defesa, faz seu ataque não ser um dos melhores.";
					next; break;
					case 3:
					mes "[Espadachim]";
					if (!countitem(Swordman_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade típica dos espadachins.";
						getitem (Swordman_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade típica dos espadachins.";
					close;
					case 4:
					mes "[Espadachim]";
					mes "Estarei aqui caso precise saber algo sobre os Espadachins.";
					close;
				}
			}
			case 2:
			mes "[Espadachim]";
			if (!questprogress(7123)) {
				mes "Você quer uma missão?!";
				mes "Então veremos... Encontre 2 Picky's e os derrote";
				next;
				mes "[Espadachim]";
				mes "Estarei esperando seu regreço.";
				setquest (7123);
				close;
			}
			else if (questprogress(7123) == 2) {
				mes "Eu não tenho mais missões para você.";
				close;
			}
			else {
				if (questprogress(7123,HUNTING) == 2) {
					mes "Muito bem!";
					mes "Sabia que você seria "+(Sex?"um ótimo":"uma ótima")+" espadachim!";
					next;
					mes "[Espadachim]";
					mes "Está aqui sua recompensa.";
					completequest (7123);
					getitem (Novice_Potion,200);
					getexp (5000,100);
					close;
				}
				else {
					mes "Ainda estou esperando você derrotar os 2 Picky's que lhe falei.";
					close;
				}
			}
			case 3:
			mes "[Espadachim]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Espadachins.";
				mes "Você deve ter suas Habilidades Básicas no Nível 9";
				next;
				mes "[Espadachim]";
				mes "Só aí então venha falar comigo, caso ainda queira ser tornar espadachim.";
				close;
			}
			else {
				mes "Então teremos "+(Sex?"um candidato":"uma candidata")+" a ser tornar espadachim.";
				mes "Nada mau, mas é realmente isso que deseja?";
				mes "Se sair não vai mais poder voltar a esse lugar.";
				next;
				mes "[Espadachim]";
				mes "Deseja ir agora a Guilda dos Espadachins na Cidade Izlude?";
				next;
				if (select("Sim quero ser espadachim","Não vou ficar mais um pouco") == 1) {
					mes "[Espadachim]";
					mes "Certo espero que faça um bom teste para se tornar espadachim.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("izlude",94,103);
					warp ("izlude_in",74,167);
					end;
				}
				mes "[Espadachim]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar espadachim.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,102,19,1	script	Mago#new	2_F_MAGICMASTER,{
	if (new_quest < 17) {
		mes "[Mago]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	}
	else {
		mes "[Mago]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Magos","Pode me dar alguma Missão?","Quero ser Mago","Nada")) {
			case 1:
			mes "[Mago]";
			mes "Um mago como já deve perceber, é aquele que se utiliza de magia.";
			mes "Tanto para ataque e defesa.";
			next;
			mes "[Mago]";
			mes "A principal vantagem do Mago é seu SP muito maior que a das outras classes.";
			mes "E seu poder de ataque mágico é muito superior as outras classes.";
			next;
			mes "[Mago]";
			mes "Suas desvantagens são em enfrentar inimigos que acertam a curta distância.";
			mes "E muito frágeis a ataques físicos diretos.";
			next;
			mes "[Mago]";
			mes "Em um grupo o Mago é aquele que vai cudar dos oponetes mais fortes.";
			mes "Pois com um único ataque mágico o mago pode eliminar enimigos muito mais poderosos do que ele mesmo.";
			next;
			mes "[Mago]";
			mes "O Mago quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffBruxo^000000 ou ^0000ffSábio^000000";
			next;
			while (true) {
				mes "[Mago]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Bruxos","Sobre os Sábios","Experimentar Habilidades do Mago","Cancelar")) {
					case 1:
					mes "[Mago]";
					mes "O Bruxo é aquele mago que ultrapassou os limites da magia.";
					mes "Eles podem conjurar ataques mágicos muito poderosos.";
					mes "Seu poder de ataque mágico é inigualável.";
					next;
					mes "[Mago]";
					mes "Bruxos provém de habilidades de area imprecionantes que podem eliminar dezenas de inimigos de uma só vez.";
					mes "Por outro lado são muito fracos a qualquer tipo de ataque.";
					mes "Pois suas magias por serem tão poderosas precisam de alto poder de concentração para lançar.";
					mes "E nesse momento o bruxo estará completamente vunerável, podendo ser também derrotado com um único ataque.";
					next; break;
					case 2:
					mes "[Mago]";
					mes "Os sábios são aqueles que buscam o conhecimento e entendimento maior sobre como usar a magia.";
					mes "Por esse motivo, são muito eficientes contra qualquer tipo de enimigo.";
					next;
					mes "[Mago]";
					mes "Sábios não possuem grande poder de ataque mágico.";
					mes "E seus poucos ataques mágicos vem dos que eles aprenderam quando ainda eram magos.";
					next;
					mes "[Mago]";
					mes "As suas principais habilidades são voltadas para a defesa.";
					mes "Sendo praticalmente impossível atingir um sábio com ataques físicos ou diretos.";
					next; break;
					case 3:
					mes "[Mago]";
					if (!countitem(Mage_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade típica dos magos.";
						getitem (Mage_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade típica dos magos.";
					close;
					case 4:
					mes "[Mago]";
					mes "Estarei aqui caso precise saber algo sobre os Magos.";
					close;
				}
			}
			case 2:
			mes "[Mago]";
			if (!questprogress(7124)) {
				mes "Você quer uma missão?!";
				mes "Então veremos... Encontre 5 Lunáticos e os derrote";
				next;
				mes "[Mago]";
				mes "Estarei esperando seu regreço.";
				setquest (7124);
				close;
			}
			else if (questprogress(7124) == 2) {
				mes "Eu não tenho mais missões para você.";
				close;
			}
			else {
				if (questprogress(7124,HUNTING) == 2) {
					mes "Muito bem!";
					mes "Sabia que você seria "+(Sex?"um ótimo Mago":"uma ótima Maga")+"!";
					next;
					mes "[Mago]";
					mes "Está aqui sua recompensa.";
					completequest (7124);
					getitem (N_Butterfly_Wing,60);
					getexp (5000,100);
					close;
				}
				else {
					mes "Ainda estou esperando você derrotar os 2 Picky's que lhe falei.";
					close;
				}
			}
			case 3:
			mes "[Mago]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Magos.";
				mes "Você deve ter suas Habilidades Básicas no Nível 9";
				next;
				mes "[Mago]";
				mes "Só aí então venha falar comigo, caso ainda queira ser tornar Mago.";
				close;
			}
			else {
				mes "Então teremos "+(Sex?"um candidato":"uma candidata")+" a ser tornar Mago.";
				mes "Nada mau, mas é realmente isso que deseja?";
				mes "Se sair não vai mais poder voltar a esse lugar.";
				next;
				mes "[Mago]";
				mes "Deseja ir agora a Guilda dos Magos na Cidade Geffen?";
				next;
				if (select("Sim quero ser Mago","Não vou ficar mais um pouco") == 1) {
					mes "[Mago]";
					mes "Certo espero que faça um bom teste para se tornar Mago.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("geffen",119,38);
					warp ("geffen_in",163,98);
					end;
				}
				mes "[Mago]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Mago.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,104,19,1	script	Mercador#new	4W_M_01,{
	if (new_quest < 17) {
		mes "[Mercador]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	}
	else {
		mes "[Mercador]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Mercadores","Pode me dar alguma Missão?","Quero ser Mercador","Nada")) {
			case 1:
			mes "[Mercador]";
			mes "Mercadores são simplesmente comerciantes.";
			mes "Não são habilidosos em combate.";
			mes "Não possuem nada que os favoreçam em derrotar enimigos.";
			next;
			mes "[Mercador]";
			mes "Mas possuem a facilidade em aculumar riquesas.";
			mes "Podem comprar itens por um valor muito inferior ao preço real.";
			mes "E também vender itens pelo preço muito maior do que o normal.";
			next;
			mes "[Mercador]";
			mes "O mercador é o único que é certificado para abrir uma loja e vender.";
			mes "Isso mesmo, mercadores podem abrir uma loja e vender seus itens a outras pessoas.";
			next;
			mes "[Mercador]";
			mes "O Mercador quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffAlquimista^000000 ou ^0000ffFerreiro^000000";
			next;
			while (true) {
				mes "[Mercador]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Alquimistas","Sobre os Ferreiros","Experimentar Habilidades do Mercador","Cancelar")) {
					case 1:
					mes "[Mercador]";
					mes "Alquimistas como o nome já diz, são expecializados em alquimia.";
					mes "Podem produzir diversos tipos de poções.";
					mes "Algumas usadas para cura outras como literalmente uma bomba, arremessando-as contra inimigos.";
					next;
					mes "[Mercador]";
					mes "Eles não possuem nenhum tipo de poder de combate!";
					mes "Para isso podem gerar um ser vivo híbrido, conhecido como \"Homunculo\" para lutar em seu lugar.";
					next; break;
					case 2:
					mes "[Mercador]";
					mes "Os Ferreiros, são mestres em combate.";
					mes "Devido a sua grande habilidade no manuseio de diversos tipos de armas.";
					mes "São capazes de produzir uma infinidade de armas diferentes.";
					next;
					mes "[Mercador]";
					mes "Seu ataque descomunal pois junta uma alta velocidade de ataque com muito poder de ataque.";
					mes "Porém apesar de luterem muito bem corpo a corpo não são resistentes.";
					next; break;
					case 3:
					mes "[Mercador]";
					if (!countitem(Merchant_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade típica dos Mercadores.";
						getitem (Merchant_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade típica dos Mercadores.";
					close;
					case 4:
					mes "[Mercador]";
					mes "Estarei aqui caso precise saber algo sobre os Mercadores.";
					close;
				}
			}
			case 2:
			mes "[Mercador]";
			if (!questprogress(7126)) {
				mes "Você quer uma missão?!";
				mes "Então veremos... Colete itens dos monstros e os venda-os";
				mes "Quando conseguir acumular 300 Zenys, volte aqui.";
				next;
				mes "[Mercador]";
				mes "Estarei esperando seu regreço.";
				setquest (7126);
				close;
			}
			else if (questprogress(7126) == 2) {
				mes "Eu não tenho mais missões para você.";
				close;
			}
			else {
				if (Zeny >= 300) {
					mes "Muito bem!";
					mes "Sabia que você seria "+(Sex?"um ótimo Mercador":"uma ótima Mercadora")+"!";
					next;
					mes "[Mercador]";
					mes "Está aqui sua recompensa.";
					completequest (7126);
					getitem (Novice_Potion,500);
					getexp (5000,100);
					close;
				}
				else {
					mes "Ainda estou esperando você acumular os 300 Zenys.";
					close;
				}
			}
			case 3:
			mes "[Mercador]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Mercadors.";
				mes "Você deve ter suas Habilidades Básicas no Nível 9";
				next;
				mes "[Mercador]";
				mes "Só aí então venha falar comigo, caso ainda queira ser tornar Mercador.";
				close;
			}
			else {
				mes "Então teremos "+(Sex?"um candidato":"uma candidata")+" a ser tornar Mercador.";
				mes "Nada mau, mas é realmente isso que deseja?";
				mes "Se sair não vai mais poder voltar a esse lugar.";
				next;
				mes "[Mercador]";
				mes "Deseja ir agora a Guilda dos Mercadores na Cidade Alberta?";
				next;
				if (select("Sim quero ser Mercador","Não vou ficar mais um pouco") == 1) {
					mes "[Mercador]";
					mes "Certo espero que faça um bom teste para se tornar Mercador.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("alberta",29,231);
					warp ("alberta_in",62,44);
					end;
				}
				mes "[Mercador]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Mercador.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,106,19,1	script	Gaturno#new	2_M_THIEFMASTER,{
	if (new_quest < 17) {
		mes "[Gaturno]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	}
	else {
		mes "[Gaturno]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Gaturnos","Pode me dar alguma Missão?","Quero ser Gaturno","Nada")) {
			case 1:
			mes "[Gaturno]";
			mes "Gaturnos não são meros ladrões.";
			mes "Apesar que somos ótimos nisso, podemos roubar zenys e itens de monstros com facilidade.";
			next;
			mes "[Gaturno]";
			mes "A principal vantagem do Gaturno é sua velocidade de ataque e esquiva muito.";
			mes "Cujo as outras classes nem chegam perto.";
			mes "Tornando o gaturno muito habilidoso no combate corpo a corpo.";
			next;
			mes "[Gaturno]";
			mes "O gaturno pode-se desviar facilidade de todos tipos de ataque se escondendo dentro do chão.";
			mes "Mas em compensação suas defesas são péssimas.";
			mes "Um único ataque seja lá qual for já pode ser o bastante para nos derrubar.";
			next;
			mes "[Gaturno]";
			mes "Não somos muito eficientes para um grupo, pois nossos ataques mesmo velozes são muito fracos.";
			mes "O que não nos impede como disse de ser muito perigosos no combate corpo a corpo.";
			mes "Também não possuímos um HP auto nem desesa, mas com nossa esquiva difícilmente somos atingidos.";
			next;
			mes "[Gaturno]";
			mes "O Gaturno quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffArruaceiro^000000 ou ^0000ffMercenário^000000";
			next;
			while (true) {
				mes "[Gaturno]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre os Arruaceiros","Sobre os Mercenários","Experimentar Habilidades do Gaturno","Cancelar")) {
					case 1:
					mes "[Gaturno]";
					mes "Os Arruaceiros suprem as falhas em HP e defesa que tinha quando eram gaturnos.";
					mes "Possuem ótima defesa e um HP até considerável.";
					next;
					mes "[Gaturno]";
					mes "Incrivelmente habilidosos com armas do tipo adaga.";
					mes "Pode lutar tranquilamente corpo a corpo com enimigos muito mais poderosos que eles mesmos.";
					next; break;
					case 2:
					mes "[Gaturno]";
					mes "Mercenários são combatentes silênciosos.";
					mes "Eles vagam por aí invisíveis e eliminam eminigos sem mesmo que eles percebam o que os atingiram.";
					next;
					mes "[Gaturno]";
					mes "São os únicos com maestria para utilizar a arma do Tipo Katar.";
					mes "Por isso também podem usar duas adagas ou espadas simultâneamente.";
					next; break;
					case 3:
					mes "[Gaturno]";
					if (!countitem(Thief_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade típica dos Gaturnos.";
						getitem (Thief_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade típica dos Gaturnos.";
					close;
					case 4:
					mes "[Gaturno]";
					mes "Estarei aqui caso precise saber algo sobre os Gaturnos.";
					close;
				}
			}
			case 2:
			mes "[Gaturno]";
			if (!questprogress(7127)) {
				mes "Você quer uma missão?!";
				mes "Então veremos... Encontre 5 Salgueiros e os derrote";
				next;
				mes "[Gaturno]";
				mes "Estarei esperando seu regreço.";
				setquest (7127);
				close;
			}
			else if (questprogress(7127) == 2) {
				mes "[Gaturno]";
				mes "Eu não tenho mais missões para você.";
				close;
			}
			else {
				if (questprogress(7127,HUNTING) == 2) {
					mes "Muito bem!";
					mes "Sabia que você seria "+(Sex?"um ótimo Gaturno":"uma ótima Gaturna")+"!";
					next;
					mes "[Gaturno]";
					mes "Está aqui sua recompensa.";
					completequest (7127);
					getitem (N_Fly_Wing,100);
					getexp (5000,100);
					close;
				}
				else {
					mes "Ainda estou esperando você derrotar os 2 Picky's que lhe falei.";
					close;
				}
			}
			case 3:
			mes "[Gaturno]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Gaturnos.";
				mes "Você deve ter suas Habilidades Básicas no Nível 9";
				next;
				mes "[Gaturno]";
				mes "Só aí então venha falar comigo, caso ainda queira ser tornar Gaturno.";
				close;
			}
			else {
				mes "Então teremos "+(Sex?"um candidato":"uma candidata")+" a ser tornar Gaturno.";
				mes "Nada mau, mas é realmente isso que deseja?";
				mes "Se sair não vai mais poder voltar a esse lugar.";
				next;
				mes "[Gaturno]";
				mes "Deseja ir agora a Guilda dos Gaturnos na Pirâmide próxima a Cidade Morroc?";
				next;
				if (select("Sim quero ser Gaturno","Não vou ficar mais um pouco") == 1) {
					mes "[Gaturno]";
					mes "Certo espero que faça um bom teste para se tornar Gaturno.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("morocc",150,100);
					warp ("moc_prydb1",99,185);
					end;
				}
				mes "[Gaturno]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Gaturno.";
				mes "Fale comigo novamente.";
				close;
			}
			case 4:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,108,19,1	script	Arqueiro#new	4_F_JOB_HUNTER,{
	if (new_quest < 17) {
		mes "[Arqueiro]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	}
	else {
		mes "[Arqueiro]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Arqueiros","Quero ser Arqueiro","Nada")) {
			case 1:
			if (Sex == SEX_MALE) { .@jobsex$ = "Bardo"; } else { .@jobsex$ = "Odalisca"; }
			mes "[Arqueiro]";
			mes "Arqueiros são expecializados em combate a distância.";
			mes "Muito eficientes nisso podem eliminar seus oponentes antes mesmos que eles consigam chegar perto.";
			next;
			mes "[Arqueiro]";
			mes "Um arqueiro deve sempre está atento e evitar que os enimigos se aproximem.";
			mes "Pois ele não possui resistência alguma.";
			mes "Assim sendo em um combate direto corpo a corpo ele será facilmente derrotado.";
			next;
			mes "[Arqueiro]";
			mes "O Arqueiro quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffCaçador^000000 ou ^0000ff"+.@jobsex$+"^000000";
			next;
			while (true) {
				mes "[Arqueiro]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre Caçador","Sobre "+.@jobsex$,"Experimentar Habilidades do Arqueiro","Cancelar")) {
					case 1:
					mes "[Arqueiro]";
					mes "Caçadores como o próprio nome diz são mestre na caça, devido alto grau de habilidade com Arco e Flecha.";
					mes "Ninigualavel quando o assunto for derrotar enimigos.";
					mes "Geralmente quando o caçador ataca sua vítima ele o elimina em poucos segundos, com ataques avassaladores a longa distância.";
					next;
					mes "[Arqueiro]";
					mes "Podem domesticar um falcão para lhe ajudar em batalha.";
					mes "Mesmo com toda sua vantagem da longa distância, continua a ser altamente vunerável a qualquer tipo de ataque!";
					next; break;
					case 2:
					mes "[Arqueiro]";
					if (.@jobsex$ == "Bardo") {
						mes "Bardos não bons em combate.";
						mes "No que eles são bons são em tocar canções";
						next;
						mes "[Arqueiro]";
						mes "Mas não se engane, que são simples músicas.";
						mes "Essas mesmas canções podem almentar os poderes dele mesmo e de aliados.";
						mes "Ao mesmo tempo de pode resuzir drasticamente as forças dos enimigos.";
						next;
						mes "[Arqueiro]";
						mes "Principalmente se a canção for tocada em \"Dueto com as Odaliscas\"!";
					}
					else {
						mes "Odaliscas não boas em combate.";
						mes "No que eles são bons são em dançar";
						next;
						mes "[Arqueiro]";
						mes "Mas não se engane, que são simples danças.";
						mes "Essas mesmas danças podem almentar os poderes dela mesma e de aliados.";
						mes "Ao mesmo tempo de pode resuzir drasticamente as forças dos enimigos.";
						next;
						mes "[Arqueiro]";
						mes "Principalmente se for dança estiver em \"Dueto com os Bardos\"!";
					}
					next; break;
					case 3:
					mes "[Arqueiro]";
					if (!countitem(Archer_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade típica dos Arqueiros.";
						getitem (Archer_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade típica dos Arqueiros.";
					close;
					case 4:
					mes "[Arqueiro]";
					mes "Estarei aqui caso precise saber algo sobre os Arqueiros.";
					close;
				}
			}
			case 2:
			mes "[Arqueiro]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Arqueiros.";
				mes "Você deve ter suas Habilidades Básicas no Nível 9";
				next;
				mes "[Arqueiro]";
				mes "Só aí então venha falar comigo, caso ainda queira ser tornar Arqueiro.";
				close;
			}
			else {
				mes "Então teremos "+(Sex?"um candidato":"uma candidata")+" a ser tornar Arqueiro.";
				mes "Nada mau, mas é realmente isso que deseja?";
				mes "Se sair não vai mais poder voltar a esse lugar.";
				next;
				mes "[Arqueiro]";
				mes "Deseja ir agora a para a Guilda dos Arqueiros próxima a cidade Payon?";
				next;
				if (select("Sim quero ser Arqueiro","Não vou ficar mais um pouco") == 1) {
					mes "[Arqueiro]";
					mes "Certo espero que faça um bom teste para se tornar Arqueiro.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("payon",256,242);
					warp ("payon_in02",64,65);
					end;
				}
				mes "[Arqueiro]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Arqueiro.";
				mes "Fale comigo novamente.";
				close;
			}
			case 3:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,110,19,1	script	Noviço#new	4_F_SISTER,{
	if (new_quest < 17) {
		mes "[Noviço]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	}
	else {
		mes "[Noviço]";
		mes "Em que posso ajudar?";
		next;
		switch (select("Fale-me sobre os Noviços","Quero ser Noviço","Nada")) {
			case 1:
			mes "[Noviço]";
			mes "Noviços são eficiencia em combate.";
			mes "Pelo contrário eles possuem habilidades para auxiliar outras pessoas nessa tarefa.";
			next;
			mes "[Noviço]";
			mes "Um Noviço sempre é bem vindo em um grupo.";
			mes "Pois eles podem curar e ampliar tanto ataque físico, mágico ou defesa de seus aliados.";
			next;
			mes "[Noviço]";
			mes "O Noviço quando atinge o Level 50 de classe ele pode ser tornar:";
			mes "^0000ffSacerdote^000000 ou ^0000ffMonge^000000";
			next;
			while (true) {
				mes "[Noviço]";
				mes "Algo mais que queira saber?";
				next;
				switch (select("Sobre o Sacerdote","Sobre o Monge","Experimentar Habilidades do Noviço","Cancelar")) {
					case 1:
					mes "[Noviço]";
					mes "O sacerdote é aquele noviço que ampliou suas hablidades de suporte.";
					mes "É muito resistente, dificilmente será derrotado por um enimigo.";
					next;
					mes "[Noviço]";
					mes "Mas continuam obsoletos no ataque, execto se o enimigo for dos tipos sombrios.";
					mes "Pois ele possui muitas habilidades para enfrentar-los.";
					next; break;
					case 2:
					mes "[Noviço]";
					mes "Monges, deixaram de lado o recato, e desenvolveram habilidade de combate corpo a corpo.";
					mes "São ótimos lutadores e possuem habilidades que podem vencer oponentes facilmente.";
					mes "Até os mais poderosos e resistentes enimigos, ele pode derrotar-los com um único golpe!";
					next;
					mes "[Noviço]";
					mes "Também possuem boa resitência física.";
					mes "Mas mesmo assim suas defesas nem seu HP são o suficientes para um combate longo.";
					mes "Principalmente se for contra vários enimigos.";
					next; break;
					case 3:
					mes "[Noviço]";
					if (!countitem(Acolyte_Manual)) {
						mes "Pegue esse manual e o equipe para experimentar uma habilidade típica dos Noviços.";
						getitem (Acolyte_Manual,1);
						close;
					}
					mes "Equipe o manual que eu lhe dei para experimentar uma habilidade típica dos Noviços.";
					close;
					case 4:
					mes "[Noviço]";
					mes "Estarei aqui caso precise saber algo sobre os Noviços.";
					close;
				}
			}
			case 2:
			mes "[Noviço]";
			if (getskilllv("NV_BASIC") < 9) {
				mes "Antes que eu possa lhe mandar para a Guilda dos Noviços.";
				mes "Você deve ter suas Habilidades Básicas no Nível 9";
				next;
				mes "[Noviço]";
				mes "Só aí então venha falar comigo, caso ainda queira ser tornar Noviço.";
				close;
			}
			else {
				mes "Então teremos "+(Sex?"um candidato":"uma candidata")+" a ser tornar Noviço.";
				mes "Nada mau, mas é realmente isso que deseja?";
				mes "Se sair não vai mais poder voltar a esse lugar.";
				next;
				mes "[Noviço]";
				mes "Deseja ir agora a Catedral de Prontera?";
				next;
				if (select("Sim quero ser Noviço","Não vou ficar mais um pouco") == 1) {
					mes "[Noviço]";
					mes "Certo espero que faça um bom teste para se tornar Noviço.";
					close2;
					callfunc ("F_NewDel");
					savepoint ("prontera",117,72);
					warp ("prt_church",172,19);
					end;
				}
				mes "[Noviço]";
				mes "Fique o tempo que desejar, se ainda quiser ser tornar Noviço.";
				mes "Fale comigo novamente.";
				close;
			}
			case 3:
			close;
		}
	}
}

// ------------------------------------------------------------------
new_1-3,112,19,1	script	Bruce#new	1_M_LIBRARYMASTER,{
	if (new_quest < 17) {
		mes "[Bruce]";
		mes "Primeiro termine seu treinamento.";
		mes "Fale com o ^0000ffInstrutor Brade^000000.";
		mes "Ele pode lhe instruir melhor sobre isso.";
		close;
	}
	else {
		mes "[Bruce]";
		mes "Além das Classes dos representantes daqui existem outras.";
		mes "As quais são adicionais.";
		mes "Também conhecidas como:";
		mes "^4a4afdClasses Expandidas^000000.";
		next;
		while (true) {
			mes "[Bruce]";
			mes "Quer saber mais alguma coisa?";
			next;
			switch (select("Taekwon","Super-Aprendiz","Ninja","Justiceiro","Cancelar")) {
				case 1:
				mes "[Bruce]";
				mes "É uma classe que normalmente usa muitas habilidades com chutes";
				mes "Que se espalhou de um país da Ásia para toda a Ásia.";
				mes "Pertence a uma classe especial e depois você pode mudar e se tornar ^0000ffMestre Taekwon^000000.";
				mes "E ampliar ainda mais os poderes da classe Taekwon normal.";
				next;
				mes "[Bruce]";
				mes "Ou também pode se tornar um ^0000ffEspiritualista^000000.";
				mes "Uma classe que pode receber várias almas e oferecer ajuda aos outros.";
				next; break;
				case 2:
				mes "[Bruce]";
				mes "O Super-Aprendiz é aquele que decidil ser um eterno aprendiz.";
				mes "Pode aprender praticalmente quase todas habilidades das classes aqui representadas.";
				next;
				mes "[Bruce]";
				mes "Porém ele não poderá nunca mais deixar de ser um aprendiz.";
				mes "E mesmo que atinja um Level de classe que nehuma outra alcança.";
				mes "Seus poderes são bem limitados.";
				next; break;
				case 3:
				mes "[Bruce]";
				mes "Ninja é uma classe bem versátil tanto no uso de armas quanto no uso de magia.";
				next;
				mes "[Bruce]";
				mes "Dominam muito bem o combate a distância com arremeços e magias.";
				mes "No corpo a corpo possuem habilidades que além de desviar de ataques enganam os oponentes.";
				next; break;
				case 4:
				mes "[Bruce]";
				mes "Justiceiro é única classe que tem habilidade o suficiente para usar armas de fogo.";
				mes "Ótimos em combates a distância, pois usam revolver, espingarda e lança granadas.";
				next;
				mes "[Bruce]";
				mes "São mestres em enfrentar mútiplos enimigos de uma só vez!";
				next; break;
				case 5:
				mes "[Bruce]";
				mes "Estarei aqui caso precise saber algo sobre as Classes Expandidas.";
				close;
			}
		}

	}
}

// ------------------------------------------------------------------
// - [ Apagar todos dados do treinamento ] -
// ------------------------------------------------------------------
function	script	F_NewDel	{
	new_quest = 0;
	if (questprogress(7123)) { erasequest(7123); }
	if (questprogress(7124)) { erasequest(7124); }
	if (questprogress(7126)) { erasequest(7126); }
	if (questprogress(7127)) { erasequest(7127); }
	if (countitem(Swordman_Manual)) { delitem(Swordman_Manual,1); }
	if (countitem(Mage_Manual)) { delitem(Mage_Manual,1); }
	if (countitem(Merchant_Manual)) { delitem(Merchant_Manual,1); }
	if (countitem(Thief_Manual)) { delitem(Thief_Manual,1); }
	if (countitem(Archer_Manual)) { delitem(Archer_Manual,1); }
	if (countitem(Acolyte_Manual)) { delitem(Acolyte_Manual,1); }
	return;
}