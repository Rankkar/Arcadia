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
| - Nota: Npcs comuns na Catedral de Prontera                       |
\*-----------------------------------------------------------------*/

prt_church,103,76,0	script	Garnet#pront	1_F_02,{
	mes "[Garnet]";
	mes "Olá! Sou a Garnet, pode me chamar de Garn...";
	mes "Mas então.";
	mes "Você gostaria de fazer o bem para os outros?";
	mes "As habilidades dos Sacerdotes são feitas para isso!";
	mes "Se você se interessa por esta vocação, de ajudar e dedicar sua vida ao bem estar alheio, você pode ser um de nós!";
	next;
	mes "[Garnet]";
	mes "Com os poderes divinos, podemos restaurar o corpo mais cansado ou acordar a força total de um aventureiro!";
	mes "Fique à vontade, me pergunte o que quiser, viu?";
	mes "Meu conhecimento está à sua disposição. Sobre qual habilidade você quer saber mais?";
	next;
	.@SkillChat = 1;
	while(.@SkillChat) {
		switch(select("Sobre 'Curar'.:Sobre 'Medicar'.:Sobre 'Aumentar Agilidade'.:Sobre 'Angelus'.:Sobre 'Benção'.:Sobre 'Portal'.:Não me interesso muito por sacerdotes...")) {
		case 1:
			mes "[Garnet]";
			mes "'Curar' é uma habilidade que restaura o HP do alvo.";
			mes "É uma das habilidades mais valiosas de um sacerdote, e vital para proteger e ajudar ao próximo.";
			mes "Os Sacerdotes têm uma evolução desta habilidade de nome 'Santuário', que possibilita curar mais de uma pessoa ao mesmo tempo.";
			next;
			mes "[Garnet]";
			mes "Mas deixe eu te contar um segredo...";
			mes "Se usada em monstros Malditos, como os mortos-vivos...Ela causa dano!";
			mes "Isso porque estes monstros são especialmente fracos contra poderes Sagrados.";
			mes "Só não se esqueça de apertar a tecla 'shift' ao 'curá-los'.";
			next;
			break;
		case 2:
			mes "[Garnet]";
			mes "'Medicar'é uma habilidade que pode retirar de um jogador algum estado especial, como Tontura ou Maldição.";
			mes "Para aprendê-la é necessário obter primeiro 'Curar' nível 2.";
			next;
			break;
		case 3:
			mes "[Garnet]";
			mes "Esta habilidade aumenta o número de pontos de Agilidade do jogador alvo beneficiando a velocidade dos ataques e a esquiva, além de fazer com que ele ande mais rápido.";
			mes "Ela favorece especialmente os Gatunos e Arqueiros, que costumam depender bastante da Agilidade nas batalhas.";
			mes "Para aprendê-la, é necessário primeiro ter 'Curar' em nível 3.";
			next;
			break;
		case 4:
			mes "[Garnet]";
			mes "Angelus é uma habilidade que aumenta a Defesa de um Grupo todo ao mesmo tempo, fazendo com que todos resistam melhor à ataques inimigos.";
			mes "Mas, lembre-se que ela aumentará a defesa proporcionalmente à Vitalidade de cada jogador, então os efeitos serão diferentes pra cada um.";
			next;
			mes "[Garnet]";
			mes "Para obter esta habilidade, o nível de Proteção Divina, uma habilidade que aumenta a Defesa do Sacerdote contra monstros Malditos, deve ser pelo menos 3.";
			mes "Tendo aprendido Angelus, você poderá obter uma habilidade muito valiosa quando se tornar um Sacerdote...";
			mes "Esta habilidade chama-se Kyrie Eleison, e protege o jogador alvo de qualquer dano por um determinado número de ataques.";
			next;
			break;
		case 5:
			mes "[Garnet]";
			mes "'Benção' aumenta temporariamente os pontos do jogador alvo em Força, Destreza e Inteligência.";
			mes "É uma das habilidades mais valiosas tanto para você quanto para seus companheiros!";
			next;
			mes "[Garnet]";
			mes "Assim como 'Angelus', para aprender 'Benção' é necessário ter algum nível em Proteção Divina (só que nível 5 e não 3).";
			mes "Não se esqueça, 'Benção' pode ser muito útil para o próprio Sacerdote, já que com mais Inteligência, habilidades como 'Curar' serão mais poderosos...";
			next;
			break;
		case 6:
			mes "[Garnet]";
			mes "Para aprender a abrir um 'Portal', você precisa primeiro aprender 'Teleporte'.";
			mes "Para aprender 'Teleporte' é necessário obter antes 'Revelação', que permite detectar monstros escondidos e tem apenas um nível de habilidade.";
			mes "'Portal' é uma habilidade muito útil.";
			mes "Vou te explicar melhor como funciona.";
			next;
			mes "[Garnet]";
			mes "Abrir um 'Portal' faz com que você possa se transportar entre locais muito, muito distantes num piscar de olhos.";
			mes "Você pode escolher até 4 lugares (no nível 4 da habilidade) para onde abrir um portal.";
			mes "Um destes lugares será obrigatoriamente onde você salvou seu Ponto de Início.";
			next;
			mes "[Garnet]";
			mes "Como se faz para 'marcar' um lugar como destino de um portal?";
			mes "É só digitar /memo no local que você desejar e ele será marcado.";
			mes "Lembre-se que não é possível marcar um portal dentro de um calabouço.";
			mes "E cuidado, pois esta habilidade gasta muito SP e dependendo da situação, isso pode te deixar em maus lençóis!";
			next;
			mes "[Garnet]";
			mes "Ah! E o mais importante!";
			mes "É necessário usar a energia de uma Gema Azul para abrir um portal.";
			mes "Se você não tiver uma Gema Azul para 'gastar', o portal simplesmente não abre!";
			next;
			break;
		case 7:
			mes "["+strcharinfo(0)+"]";
			mes "Independente do seu interesse, sempre estaremos aqui para ajuda-lo";
			close2;
			.@SkillChat = 0;
			break;
		}
	}
	end;
}

//-------------------------------------------------------------------
prt_church,103,71,0	script	Henson#pront	2_M_PHARMACIST,{
	mes "[Henson]";
	mes "É muito bom poder ajudar ao próximo...";
	mes "No entanto, não é só disso que vive um servo do Senhor.";
	mes "Nossa missão também é a de proteger o mundo dos amaldiçoados e dos demônios.";
	mes "Os Sacerdotes devem ser capazes de lutar contra as legiões Malditas em nome do Senhor!";
	mes "Por isso, temos habilidades que nos favorecem contra os servos do Mal.";
	mes "Quer saber mais sobre alguma delas?";
	next;
	.@SkillChat = 1;
	while(.@SkillChat) {
		switch(select("Sobre 'Proteção Divina'.:Sobre 'Flagelo do Mal'.:Sobre 'Diminuir Agilidade'.:Sobre 'Signum Crusis'.:Sobre 'Escudo Sagrado'.:Sobre 'Revelação'.:Sobre 'Teleporte'.:Na verdade, não.")) {
		case 1:
			mes "[Henson]";
			mes "Para aumentar sua resistência aos ataques Malditos e de Dêmonios você precisa desta habilidade.";
			mes "Esta é uma habilidade passiva, e portanto sem limite de tempo ou gasto de SP.";
			next;
			mes "[Henson]";
			mes "Subindo o nível da habilidade até 3, você pode aprender 'Flagelo do Mal', que aumenta o ataque contra os monstros Malditos e Dêmonios.";
			mes "'Angelus' também pode ser usada para aumentar a defesa e 'Benção' para aumentar sua Força, Destreza e Inteligência temporariamente.";
			mes "Como você pode ver, temos muitas armas contra o mal...Hehehe.";
			next;
			break;
		case 2:
			mes "[Henson]";
			mes "'Flagelo do Mal' aumenta o dano de ataques contra os monstros Malditos e Dêmonios.";
			mes "Ele requer 'Proteção Divina' nível 3, e assim como esta, é uma habilidade passiva e sem gasto de SP.";
			next;
			mes "[Henson]";
			mes "Com nível 3 em 'Flagelo do Mal' você pode aprender 'Signum Crusis', que diminui a defesa destes monstros.";
			next;
			break;
		case 3:
			mes "[Henson]";
			mes "Esta habilidade diminui a Agilidade dos inimigos, e com isso, diminui também a velocidade de ataque e esquiva deles.";
			mes "Para aprendê-la é necessário pelo menos um ponto de habilidade em 'Aumentar Agilidade'.";
			next;
			break;
		case 4:
			mes "[Henson]";
			mes "Esta habilidade diminui a Defesa de monstros de propriedade Maldita ou de Escuridão...";
			mes "Ela funciona numa área de alcance bem grande, quase todo o espaço da tela!";
			mes "Porém, a chance de sucesso dela é pequena e costuma falhar bastante.  Lembre-se disso!";
			next;
			mes "[Henson]";
			mes "Para usar esta habilidade, é necessário ter 'Flagelo do Mal' em nível 3.";
			next;
			break;
		case 5:
			mes "[Henson]";
			mes "Tendo maximizado 'Portal', você poderá aprender esa habilidade.";
			mes "Ela permite que você crie um escudo protetor contra ataques de projéteis como flechas, pedras ou balas.";
			next;
			break;
		case 6:
			mes "[Henson]";
			mes "Esta habilidade permite detectar monstros (e jogadores) escondidos.";
			mes "Quando revelados, eles sofrerão um ataque de propriedade Sagrada.";
			mes "Este ataque varia em poder de acordo com a Inteligência do Padre.";
			mes "É um pré-requisito para aprender 'Teleporte' e 'Portal'.";
			next;
			break;
		case 7:
			mes "[Henson]";
			mes "'Teleporte' é aprendida após obter-se 1 nível em 'Revelação'.";
			mes "Em nível 1 ela permite que você se teleporte para um lugar qualquer dentro do mapa em que você se encontra.";
			mes "Cuidado para não cair em algum lugar perigoso!";
			mes "No nível 2, 'Teleporte' permite mandar o personagem de volta ao Ponto de Início, onde ele salvou.";
			next;
			mes "[Henson]";
			mes "Depois de 'Teleporte', você pode aprender 'Portal' que permite teleportar outros personagens também, para áreas à sua escolha.";
			next;
			break;
		case 8:
			mes "[Henson]";
			mes "Eu sempre estarei disposto a ajuda-lo.";
			close2;
			.@SkillChat = 0;
			break;
		}
	}
	end;
}