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
| - Nota: Npcs comuns na cidade Geffen                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
geffen,59,143,0	script	Meera#gef	4_F_02,{
	mes "[Meera]";
	mes "Bem vind"+(Sex?"o":"a")+" a Geffen, a Cidade da Magia!";
	next;
	mes "[Meera]";
	mes "Você gosta de mel?";
	next;
	mes "[Meera]";
	mes "Isto é muiiiito doce e delicioso.";
	mes "Não tenho certeza se é um afrodiziaco, mas eu sei de um fato que vai alivia-lo da fadiga e recuperar sua saúde!";
	next;
	mes "[Meera]";
	mes "Os zangões vivem nos campos e passam a vida recolhendo o néctar sob comando da Abelha Rainha.";
	mes "O Mel é feito a partir do nectar que eles reúnem.";
	next;
	mes "[Meera]";
	mes "Mas isso não é tudo. Há um tipo especial de mel que é feito somente para as Abelhas Rainhas comerem:";
	mes "^CC6600Geléia Real^000000!";
	next;
	mes "[Meera]";
	mes "Nada se compara ao delicioso sabor da Geléia Real.";
	mes "E eu acho que é melhor pra você do que o mel comum!";
	close;
}

// ------------------------------------------------------------------
geffen,156,190,0	script	Orwalk	4_KID01,{
	mes "[Orwalk]";
	mes "...Interessante.";
	mes "Muito intrigante.";
	mes "Deixe-me lhe contar esta história maravilhosa.";
	next;
	mes "[Orwalk]";
	mes "Quando eu estava pesquisando magia, eu descobri este pergaminho misterioso.";
	mes "Ele descrevia esta árvore chamada Yggdrasil.";
	next;
	mes "[Orwalk]";
	mes "As folhas, sementes e frutos de Yggdrasil ligam todos os seres vivos deste mundo.";
	mes "De acordo com este pergaminho, Yggdrasil também está envolvido com a criação do mundo.";
	next;
	mes "[Orwalk]";
	mes "Falando nisso, também ouvi falar de um rumor sobre uma árvore em um terreno perto de Comodo.";
	mes "Eles devem ser ligados, tenho certeza disso!";
	close;
}

// ------------------------------------------------------------------
geffen_in,164,109,0	script	Bruxo Stanza#gef	1_M_WIZARD,{
	mes "[Stanza]";
	mes "Eu senti a presença de um espírito poderoso.";
	mes "Pode ser você...?";
	next;
	mes "[Stanza]";
	if (BaseJob == Job_Mage) {
		mes "Parece que você está treinado nas artes místicas.";
		mes "Magia... Seu poder é regido pelas leis da causa e efeito.";
	}
	else if (BaseJob == Job_Acolyte) {
		mes "Ah...";
		mes "Vejo que você exerce o poder santo, de uma forma ou de outra.";
		mes "Suponho que o Poder Santo pode ser considerado uma forma de energia mística.";
	}
	else if (Class == Job_Novice) {
		mes "Embora você não seja capaz de usar magia ou qualquer tipo de habilidades poderosas por agora.";
		mes "Este conhecimento pode lhe ser útil no futuro, jovem Noviço...";
	}
	else {
		mes "Embora você não seja formamelmente treinado no uso de magias.";
		mes "você usa as habilidades que atraem sob as energias do além, quer você saiba disso ou não...";
	}
	next;
	mes "[Stanza]";
	mes "Se você usa a energia mística pra prejudicar os outros ou para desafiar as regras da Mãe Natureza.";
	mes "O poder irá naturalmente se virar contra você. Lembre-se, você colhe o que planta.";
	next;
	mes "[Stanza]";
	mes "Mas há um item que pode lhe proteger do lançador de consequencia doente.";
	mes "Permitindo o uso seguro de certos mágicos.";
	mes "Estas são as brilhantes pedras místicas chamadas Pedras Preciosas.";
	next;
	mes "[Stanza]";
	mes "Pedra Preciosa...";
	mes "Se você deseja usar seus poderes ao máximo, lembre-se deste item.";
	close;
}

// ------------------------------------------------------------------
geffen,147,26,0	script	Ralphie#gef	4W_M_01,{
	mes "[Ralphie]";
	mes "Em algum lugar neste mundo...";
	mes "Há uma equipe rara que pode transformar energia psíquica em vigor físico.";
	mes "Dotando seu dono com ^990000poder destrutivo^000000...";
	next;
	mes "[Ralphie]";
	mes "Com isso, qualquer um poderia ser forte como Hercules...";
	mes "Mesmo um fracote como eu!";
	mes "Hahahahahah.";
	mes "Tenho que ter isso!";
	next;
	emotion (e_gasp);
	mes "[Ralphie]";
	mes "...Céus!";
	mes "Desde quando você estava ouvindo?";
	next;
	mes "[Ralphie]";
	mes "Por acaso você não ouviu nada disso?";
	mes "Muhwaha... ha. Ha.";
	next;
	mes "[Ralphie]";
	mes "Bem...";
	mes "Eu não disse nada.";
	mes "Mas se eu disse, esqueça tudo sobre isso, o que quer que fosse.";
	next;
	mes "[Ralphie]";
	mes "...Rapaz, isso é estranho.";
	close;
}

// ------------------------------------------------------------------
geffen,111,48,0	script	Stacey#gef	4W_F_01,{
	if (getequipid(1) == Viking_Helm) {
		mes "[Stacey]";
		mes "Oh...!";
		mes "É um Elmo de Orc que você está vestindo?!";
		mes "Isso é muito legal!";
		mes "Agora...";
		next;
		mes "[Stacey]";
		if (Sex == SEX_MALE) {
			mes "Você parece tão...";
			mes "Robusto e viril.";
		}
		else {
			mes "Oooh!";
			mes "Estou com tanta inveja!";
		}
		close;
	}
	else if (getequipid(1) == Orc_Hero_Helm) {
		mes "[Stacey]";
		mes "Oh...";
		next;
		mes "[Stacey]";
		mes "Isto...";
		mes "Isto é um capacete de orc Herói!";
		next;
		mes "[Stacey]";
		if (Sex == SEX_MALE) {
			mes "Isto...";
			mes "É como se você estivesse cercado por uma aurea masculina!";
			mes "Oooh! Você deve ser irresistível para todas as garotas!";
			next;
			emotion (e_lv);
			mes "[Stacey]";
			mes "E eu não sou exceção.";
		}
		else {
			mes "Nossa, você deve ser tão forte!";
			mes "Mas eu pensei que apenas membros da Tribo de Orcs usavam isso?";
		}
		close;
	}
	else {
		mes "[Stacey]";
		mes "Olá!";
		mes "Oh, você não é "+(Sex?"um aventureiro":"uma aventureira")+"?";
		next;
		mes "[Stacey]";
		mes "Você já viu alguns Orcs da tribo de Demi-Human?";
		mes "Se você descer para o sul a partir daqui, eu acho que você pode encontrar Orcs na floresta profunda.";
		next;
		mes "[Stacey]";
		mes "Eu ouvi que os Orcs possuem uma cultura e linguagem própria, supostamente apenas como nós humanos.";
		mes "Será que os Orcs vão a encontros...?";
		next;
		mes "[Stacey]";
		mes "Sabe, onde eles sussuram coisas bonitas e depois...";
		mes "Ah! Eu realmente queria saber!";
		close;
	}
}

// ------------------------------------------------------------------
// - [Casas] -
// ------------------------------------------------------------------
geffen_in,34,170,0	script	Theodoro#gef	1_M_01,{
	mes "[Theodoro]";
	mes "Olá!";
	mes "Não está um maravilhoso dia hoje?";
	next;
	mes "[Theodoro]";
	mes "Bem, eu não sei.";
	mes "Venho estudando duro para me tornar um Mago.";
	mes "Fico acordado a noite toda, agonizando sobre tudo que é mágico.";
	next;
	mes "[Theodoro]";
	mes "*Suspiro..*";
	mes "Eu me preocupo especialmente sobre todas as desvantagens de utilizar magia.";
	next;
	mes "[Theodoro]";
	mes "Foi realmente irritante quando um inimigo de longa data me encontrou na ultima vez que estava explorando.";
	mes "Esse monstro miserável interrompeu todos os meus feitiços!";
	mes "Não consegui atingir tudo!";
	next;
	mes "[Theodoro]";
	mes "Depois disso, eu percebi que precisava de algum tipo de arma para combater os ataques de longo alcance dos inimigos.";
	mes "Algo que posso atacar a longas distâncias...";
	next;
	mes "[Theodoro]";
	mes "Algum tipo de...";
	mes "Afiação, perfuração lançador de projétil, preferencialmente feito com madeira.";
	next;
	mes "[Theodoro]";
	mes "Mas onde eu poderia encontrar algo como isso?!";
	close;
}

// ------------------------------------------------------------------
geffen_in,27,134,5	script	Garçonete#gef	4_F_02,{
	mes "[Elenore]";
	mes "Esse lugar...";
	mes "Tem uma atmosfera diferente.";
	next;
	mes "[Elenore]";
	mes "Nós temos uma espécie de vidente que está sempre por aí.";
	mes "É um bêbado que passa o dia inteiro reclamando dos magos.";
	next;
	mes "[Elenore]";
	mes "Bem...";
	mes "O que posso fazer por você?";
	next;
	if (select("Posso beber algo?","Você tem novidades para me contar?") == 1) {
		mes "[Elenore]";
		mes "Bem...";
		mes "Se você quiser algo alcoólico, o Rei Tristam III proibiu a venda.";
		mes "Ouvi dizer que agora só podem serví-lo em determinados lugares.";
		next;
		mes "[Elenore]";
		mes "Mesmo assim as pessoas conseguem ficar bêbadas com os drinques sem álcool que servimos aqui.";
		mes "Acho que é psicológico.";
		next;
		mes "[Elenore]";
		mes "Eu realmentee queria poder visitar o lugar em que servem drinques de verdade.";
		mes "Ouvi dizer que é o paraíso!";
		close;
	}
	switch(rand(1,4)) {
		case 1:
		mes "[Elenore]";
		mes "Novidades...?";
		mes "Bem, ouvi dizer que estão abrindo um novo aeroporto em Juno!";
		next;
		mes "[Elenore]";
		mes "Ou pelo menos, estão planejando.";
		mes "O avião ainda não está pronto para decolar.";
		mes "Enquanto isso existe uma espécie de representante da corporação lá, oferecendo serviços de teletransporte.";
		next;
		mes "[Elenore]";
		mes "Parece que a Corporação Kafra finalmente tem concorrência!";
		mes "Mas não acho que existam muitas garotas atraentes como as garotas Kafra...";
		close;
		case 2:
		mes "[Elenore]";
		mes "Você não ouviu?";
		mes "Há uma nova moda no Reino de Rune-Midgard!";
		next;
		mes "[Elenore]";
		mes "As pessoas estão vindo, usando chapéus novos e bonitinhos!";
		mes "Vi um de ursinho, e teve uma garota que chegou usando orelhinhas de gato pretas...";
		next;
		mes "[Elenore]";
		mes "Claro, nem todo estilo popular me agrada.";
		mes "Porque sabe, eu vi um cara andando com um cogumelo na cabeça.";
		mes "E ouvi dizer que tem alguém fazendo chapéus de peixes!";
		next;
		mes "[Elenore]";
		mes "Acho que chapéus como esses são artísticos demais para o meu gosto.";
		close;
		case 3:
		mes "[Elenore]";
		mes "Novidades?";
		next;
		mes "[Elenore]";
		mes "Bem...";
		mes "Ouvi dizer que tem uma pessoa em Rune-Midgard...";
		next;
		mes "[Elenore]";
		mes "Você ouviu falar de "+strcharinfo(PC_NAME)+"?";
		if (Sex == SEX_MALE) {
			mes "Ele é supostamente o herói mais lindo da região!";
		}
		else {
			mes "Dizem que ela é uma das meninas mais bonitas de Rune-Midgard!";
		}
		close;
		case 4:
		switch(rand(1,2)) {
			case 1:
			mes "[Elenore]";
			mes "Novidades?";
			mes "E-espere...";
			next;
			mes "[Elenore]";
			mes "Ugh...";
			mes "Ooooh...";
			mes "Minha c-cabeça...";
			mes "Está doendo...";
			next;
			mes "[Espírito de William]";
			mes "^990000Saia de perto da minha filha, escória, antes que eu venda seus orgãos por zeny!";
			mes "Tá me ouvindo?!^000000";
			next;
			mes "[Elenore]";
			mes "*cof*";
			mes "Oh...!";
			mes "Desculpe por isso!";
			mes "Eu devo estar com um começo de gripe!";
			mes "...Ou algo do tipo.";
			next;
			mes "^3355FFEstranho...";
			mes "A voz dela tava realmente grossa por um minuto, ali...";
			close;
			case 2:
			mes "[Espírito de William]";
			mes "^990000Ei, seu maníaco sexual!!!";
			mes "Pare de olhar pra minha filha desse jeito.";
			mes "Antes que eu arranque seus olhos e os coma com macarrão!^000000";
			next;
			mes "["+strcharinfo(PC_NAME)+"]";
			if (Sex) {
				mes "Huh...?";
				mes "D-de novo?";
				next;
				mes "[Elenore]";
				mes "Huh...?";
				mes "Oh, papai deve ter me possuído de novo.";
				mes "Acontece comigo e minha irmã o tempo todo.";
				next;
				mes "["+strcharinfo(PC_NAME)+"]";
				mes "Sério?";
				mes "Huh.";
				mes "É uma chatice.";
				next;
				mes "[Elenore]";
				mes "É...";
				mes "Me fala disso.";
				close;
			}
			else {
				mes "E-espeeeeeera~";
				mes "Mas, mas eu sou uma garota!";
				next;
				mes "[Espírito de William]";
				mes "^990000Que parte do ^FF0000eu vou gritar onde você estiver^000000 ^990000você não entendeu?!";
				mes "Agora sai daqui, pervertido!^000000";
				next;
				mes "^3355FFAaaah!";
				mes "Como ela ficou tão assustadora?!^000000";
				close;
			}
		}
	}
}

// ------------------------------------------------------------------
geffen_in,70,67,3	script	Garçonete#gef2	4_F_01,{
	mes "[Elisa]";
	mes "Olá";
	mes "Posso te ajudar com alguma coisa?";
	next;
	if (select("Um drink, por favor!","Tem alguma fofoca interessante recentemente?") == 1) {
		mes "[Elisa]";
		mes "Um...";
		mes "Drink?";
		next;
		mes "[Elisa]";
		mes "Você sabe que nós não servimos mais álcool por aqui.";
		mes "Só temos esses drinks falsos que nem tem gosto nem efeito.";
		mes "É, eles são chatos...";
		next;
		mes "[Elisa]";
		mes "Só servimos praticamente água, aqui.";
		mes "Isso e umas imitações ruins de drinks alcóolicos.";
		next;
		mes "[Elisa]";
		mes "É horrível que o Rei Tristram III proibiu álcool no nosso reino!";
		mes "É provavelmente a única decisão ruim que ele tomou durante todo seu reinado!";
		close;
	}
	mes "[Elisa]";
	mes "Sabe o que é tão estranho?";
	next;
	mes "[Elisa]";
	mes "Fui pro santuário de Prontera e tenho certeza que vi um sacerdote casando com uma sacerdotisa!";
	next;
	mes "[Elisa]";
	mes "Eu não tinha ideia se sacerdotes poderiam se casar ou não.";
	mes "Mas até o Rei Tristram estava lá, então acho que está tudo bem!";
	close;
}

// ------------------------------------------------------------------
geffen_in,79,76,2	script	Mercador Daven#gef	2_M_PHARMACIST,{
	mes "[Mercador Daven]";
	mes "Eu lembro de Geffen quando ainda era chata. ";
	next;
	mes "[Mercador Daven]";
	mes "Mas agora tem Magos e Bruxos e uma economia próspera nessa cidade!";
	next;
	switch(select("Magos...?","Economia?","Quem é você?")) {
		case 1:
		if (BaseJob == Job_Mage) {
			mes "[Mercador Daven]";
			mes "Magos são os manejadores de magia.";
			mes "Mas você vai saber mais sobre esse tópico agora, né?";
		}
		else {
			mes "[Mercador Daven]";
			mes "Magos e Bruxos estão sempre carregando livros e estudando magia.";
			mes "É assim que eles são.";
			next;
			mes "[Mercador Daven]";
			mes "Tem uma escola de magia no noroeste da cidade, para aprendizes interessados em se tornar Magos.";
			mes "Lá, eles podem aprender o básico de magia.";
			next;
			mes "[Mercador Daven]";
			mes "Depois de se tornar experiente no uso de magia, Magos podem se qualificar para se tornar Bruxos.";
			next;
			mes "[Mercador Daven]";
			mes "Bruxos tem acesso a magias mais poderosas e destrutivas do que os Magos.";
			mes "Magos podem aplicar para se tornar Bruxos no topo da Torre de Geffen.";
		}
		break;
		case 2:
		if (Class == Job_Blacksmith) {
			mes "[Mercador Daven]";
			mes "A economia...?";
			mes "Isso é tudo graças aos Ferreiros!";
			mes "Mas você já deve saber disso, não é mesmo?";
		}
		else {
			mes "[Mercador Daven]";
			mes "Bem, acho que você pode agradecer aos Ferreiros pela economia aqui em Geffen.";
			mes "Com certeza, eles sempre sujos, suados, fedendo e falam meio rude...";
			next;
			mes "[Mercador Daven]";
			mes "Mas são pessoas que trabalham duro.";
			mes "E também, os minérios que eles refinam e as armas que criam tem alta demanda.";
			next;
			mes "[Mercador Daven]";
			mes "Aventureiros pagam aos Ferreiros um monte do seus suados zenys por armas de alta qualidade que somente eles podem criar.";
		}
		break;
		case 3:
		mes "[Mercador Daven]";
		mes "Eu? Eu sou o vendedor de rua mais lindo do mundo.";
		next;
		select("...^EE0000Impacto Explosivo^000000!");
		if (Class == Job_Swordman) {
			mes "[Mercador Daven]";
			mes "Opa, opa!";
			mes "Era só uma piada!";
			mes "Me desculpe!";
		}
		else {
			mes "[Mercador Daven]";
			mes "Impacto Explosivo?";
			mes "Mas você nem sabe fazer isso, sabe?";
		}
		break;
	}
	close;
}

// ------------------------------------------------------------------
geffen_in,114,73,5	script	Hadenheim#gef	4_M_SEAMAN,{
	mes "[Hans Hadenheim]";
	mes "Cara, o continente de Rune-Midgard é tão grande!";
	mes "Como vai você, jovem?";
	next;
	mes "[Hans Hadenheim]";
	mes "Essa Geffen é estranha.";
	mes "Mas valeu a pena viajar da República de Schubaltzwald até aqui.";
	next;
	if (select("República de Schubaltzwald?","Então, por que você está viajando?") == 1) {
		mes "[Hans Hadenheim]";
		mes "Você...";
		mes "Não conhece a República de Schubaltzwald?";
		next;
		mes "[Hans Hadenheim]";
		mes "Voce sabe, aliado do reino de Rune-Midgarts.";
		mes "Um... Nossa cidade capital é Juno?";
		next;
		mes "[Hans Hadenheim]";
		mes "Você realmente deveria se atualizar nos eventos globais!";
		close;
	}
	mes "[Hans Hadenheim]";
	mes "Ah, estou viajando a negócios.";
	mes "Parece que o comércio estrangeiro dá muito dinheiro.";
	next;
	mes "[Hans Hadenheim]";
	mes "Todas essas cidades que estão sendo descobertas por exploradores.";
	mes "Estão fazendo as importações e exportações explodirem!";
	next;
	mes "[Hans Handenheim]";
	mes "Enfim...";
	next;
	mes "[Hans Hadenheim]";
	mes "Você foi a alguma das terras novas?";
	mes "Elas são muito interessantes, e você pode aprender muito com a cultura estrangeira.";
	next;
	mes "[Hans Hadenheim]";
	mes "Mas se você quiser apreciar uma bela vista.";
	mes "Sugiro que visita minha cidade natal, Juno.";
	mes "É muito bonita, sabe.";
	close;
}

// ------------------------------------------------------------------
geffen_in,39,127,2	script	Vidente#gef	4_M_BIBI,{
	mes "[Vidente]";
	mes "Ah...";
	mes "Não diga!";
	mes "Você veio saber seu futuro, não? Eu sei...";
	mes "Eu sei...";
	mes "Posso prever o futuro!";
	mes "Então, sobre o que você quer saber?";
	next;
	switch(select("Vida!","Amor!","Dinheiro!","Notas!","Futuro!","Moda!")) {
		case 1:
		mes "[Vidente]";
		switch(rand(1,5)) {
			case 1:
			mes "Vida...?";
			mes "Nossa, é uma categoria ampla.";
			mes "Mas vou entrar em contato com alguns espíritos e verei o que posso fazer.";
			next;
			mes "[Vidente]";
			mes "Hmmm...";
			mes "Certo, consegui algo.";
			mes "Hmmm você viverá até uma idade avançada.";
			mes "Até quando?";
			next;
			mes "[Vidente]";
			mes "^333333*cof!*^000000enta e nove anos.";
			mes "Isso não é ótimo?";
			mes "É uma idade avançada, e você ainda tem muitos anos abençoados para aproveitar.";
			next;
			mes "[Vidente]";
			mes "E você também terá sucesso sempre.";
			mes "Você terá sucesso em obter vitórias e derrotas!";
			next;
			mes "[Vidente]";
			mes "Você talvez não entenda esse pedaço de sabedoria agora.";
			mes "Mas quando souber mais sobre esse mundo maluco, ele fará sentido.";
			next;
			break;
			case 2:
			mes "Hmm...";
			mes "O que posso te contar sobre a vida?";
			mes "Vou entrar em contato com o mundo dos espíritos~";
			next;
			mes "[Vidente]";
			mes "Certo, entendi!";
			mes "Seus sonhos se tornarão realidade!";
			next;
			mes "[Vidente]";
			mes "Claro, não sei bem quais sonhos.";
			mes "Mas espero que sejam os agradáveis que se tornarão realidade, e não aqueles seus pesadelos estranhos.";
			next;
			mes "[Vidente]";
			mes "Qual sonhos exatamente?";
			mes "Bem, os espíritos estão meio reticentes hoje.";
			mes "Eles não estão com humor para falar.";
			mes "Eles também têm vida, sabe.";
			mes "Espere, isso não faz sentido.";
			next;
			break;
			case 3:
			mes "Sinto que você está prestes a tomar uma decisão que talvez se arrependa.";
			mes "Aconselho que você espere e reflita.";
			next;
			mes "[Vidente]";
			mes "Embora a pressão seja grande, lembre-se de que as decisões tomadas impulsivamente são normalmente ruins.";
			mes "Respire fundo e relaxe.";
			next;
			mes "[Vidente]";
			mes "Mesmo se você estiver sem tempo.";
			mes "É melhor planejar tudo cuidadosamente para não desperdiçar esforços ou cometer erros.";
			next;
			mes "[Vidente]";
			mes "Lembre-se de que calma e paciência são as chaves para resolver qualquer crise.";
			next;
			break;
			case 4:
			mes "Hmmm... Sinto que você está passando por uma fase difícil.";
			mes "Você deveria priorizar segurança ou felicidade?";
			next;
			mes "[Vidente]";
			mes "Sugiro que você pense cuidadosamente antes de decidir o seu caminho.";
			mes "E lembre-se, você apenas aprenderá quando cometer erros.";
			next;
			mes "[Vidente]";
			mes "Se você planejar cuidadosamente e realizar ações positivas, você pode ter tudo!";
			next;
			break;
			case 5:
			mes "Hmm...";
			mes "Sinto que você brigou com alguém próximo a você Alguém com quem você se importa muito.";
			next;
			mes "[Vidente]";
			mes "Você precisa tomar a iniciativa!";
			mes "Resolva esse problema sem se deixar abalar por suas emoções.";
			next;
			mes "[Vidente]";
			mes "Tente consertar seus erros, engula seu orgulho e peça desculpas sinceramente se precisar.";
			mes "Uma amizade vale isso? Eu acho que sim.";
			next;
		}
		mes "[Vidente]";
		mes "Bem, espero ter sanado todas as suas dúvidas sobre o futuro.";
		mes "Afinal, meu trabalho é ser um consultor psíquico. Volte quando quiser~";
		close;
		case 2:
		mes "[Vidente]";
		switch(rand(1,4)) {
			case 1:
			mes "Quer saber seu futuro no amor?";
			mes "Oh ho Então você gosta de alguém!";
			mes "Vamos, pode me contar!";
			next;
			mes "[Vidente]";
			mes "Certo...";
			mes "Sinto uma forte energia amorosa emanando da sua alma.";
			mes "É intimidadora, e afasta os fracos.";
			next;
			mes "[Vidente]";
			mes "Então basicamente, prevejo que você logo atrairá pessoas realmente fortes.";
			mes "Atletas, fisiculturistas, pedreiros, gente desse tipo.";
			next;
			mes "[Vidente]";
			mes "Então se é isso que você quer, parabéns!";
			mes "A sorte lhe sorri hoje.";
			next;
			mes "[Vidente]";
			mes "Mas se você quer o oposto, sinto muito.";
			mes "A sorte sorri sarcasticamente hoje.";
			mes "Mas não é tarde demais para mudar o destino!";
			next;
			break;
			case 2:
			mes "Amoooor, então?";
			mes "Deixe-me entrar em contato com os espíritos rapidamente.";
			next;
			mes "[Vidente]";
			mes "Ah! Uma velha chama se reacenderá!";
			mes "Não sei se a pessoa se apaixonará por você de novo.";
			mes "Se pedirá dinheiro ou se está de volta para se vingar...";
			next;
			mes "[Vidente]";
			mes "Mas um velho amor voltará à sua vida.";
			mes "De alguma forma.";
			mes "Então, se isso for uma boa notícia, parabéns!";
			mes "Mas se for uma notícia ruim, tome cuidado!";
			next;
			break;
			case 3:
			mes "Um...";
			if (Sex == SEX_MALE) {
				mes "A menina com quem você está saindo agora é ideal para você!";
			}
			else {
				mes "O menino com quem você está saindo agora é ideal para você!";
			}
			next;
			switch(select("Como você sabe?","Você está errado!","Estou solteiro!")) {
				case 1:
				mes "[Vidente]";
				mes "Bem...";
				mes "Nós que temos poderes psíquicos somos muito bons nesse tipo de coisa.";
				mes "E é tão bom ver que você está feliz com a pessoa que você gosta!";
				close;
				case 2:
				mes "[Vidente]";
				mes "Você não me deixou terminar a frase.";
				next;
				mes "[Vidente]";
				if (Sex == SEX_MALE) {
					mes "A menina com quem você está saindo agora é ideal para você.";
				}
				else {
					mes "O menino com quem você está saindo agora é ideal para você.";
				}
				mes "Se você quiser passar o resto da vida infeliz!";
				next;
				mes "[Vidente]";
				mes "Mas se você for terminar, faça isso logo e tente manter a amizade.";
				next;
				mes "[Vidente]";
				mes "Isso fará com que vocês dois se tornem melhores.";
				mes "Pelo menos é o que eu acho.";
				close;
				case 3:
				mes "[Vidente]";
				mes "Oh...";
				mes "Bem, me desculpe.";
				mes "As vezes eu misturo o presente e o futuro.";
				mes "Você entende não é, já que estou sempre prevendo o futuro...";
				next;
				mes "[Vidente]";
				if (Sex == SEX_MALE) {
					mes "O que eu quis dizer na verdade foi que ^3355FFvocê encontrará a mulher perfeita em breve^000000.";
				}
				else {
					mes "O que eu quis dizer na verdade foi que ^3355FFvocê encontrará o homem perfeito em breve^000000.";
				}
				close;
			}
			break;
			case 4:
			mes "Querendo um romance, eh?";
			mes "Sempre bom ter novas emoções.";
			next;
			mes "[Vidente]";
			mes "Estranho, eu vejo um triângulo amoroso em seu futuro.";
			mes "Não, espere!";
			mes "Na verdade...";
			mes "Um decágono amoroso?";
			next;
			mes "[Vidente]";
			mes "Qual o polígono com onze lados?";
			mes "Ah, você não pode esperar que eu saiba qual é.";
			mes "Sou um vidente, não um matemático.";
			next;
		}
		mes "[Vidente]";
		mes "O amor é sempre divertido!";
		mes "Mesmo nesse mundo sombrio, o amor nos rodeia com seu brilho convidativo.";
		mes "Cuide de quem for especial para você, e volte para outra leitura!";
		close;
		case 3:
		mes "[Vidente]";
		switch(rand(1,3)) {
			case 1:
			mes "Dinheiro?";
			mes "Bem, aposto que você tem mais sorte com isso do que eu.";
			mes "Afinal, eu fico sentado aqui o dia inteiro, fazendo consultas de graça!";
			next;
			mes "[Vidente]";
			mes "Bem...";
			mes "Os espíritos me dizem que você talvez não ganhe na loteria.";
			mes "Não importa quantos tíquetes você compre. Me desculpe, mas é verdade.";
			next;
			mes "[Vidente]";
			mes "Mas eu impedi você de continuar perdendo dinheiro com isso!";
			mes "Se você comprasse tíquetes de loteria durante toda a vida, gastaria quase uma fortuna!";
			next;
			break;
			case 2:
			mes "Ah sim.";
			mes "Entrarei em contato com os espíritos.";
			mes "Eles normalmentes dão bons conselhos financeiros, mesmo não tendo nenhum tipo de economia lá.";
			next;
			mes "[Vidente]";
			mes "Primeiro, controle seu dinheiro e só gaste o que puder.";
			mes "Quer uma dica?";
			mes "De cada dez zenys que você ganhar, guarde um para investir ou deixar de reserva.";
			next;
			mes "[Vidente]";
			mes "E, não importa o que você faça, não seja um vidente em Rune-Midgard.";
			mes "Parece que o que dá dinheiro mesmo é descobrir novas terras.";
			mes "Por que eu não fiz isso?";
			next;
			break;
			case 3:
			mes "Então você quer saber sobre dinheiro.";
			mes "Vou entrar em contato com os espíritos...";
			next;
			mes "[Vidente]";
			mes "Ah, sim.";
			mes "Eles estão me dizendo que é melhor ser sempre cauteloso.";
			mes "Certamente você deve saber que exploradores nunca gastam mais do que a verba destinada a eles.";
			next;
			mes "[Vidente]";
			mes "E você também deve evitar apostar com seu dinheiro.";
			mes "Quero dizer que você deve guardar e investir cuidadosamente.";
			mes "Não se deixe cair na tentação de entrar em esquemas do tipo fique-rico-rápido!";
			next;
			mes "[Vidente]";
			mes "Mas por outro lado, esquemas desse tipo podem ser bons, se você souber o que está fazendo.";
			mes "Estou certo, não?";
			next;
		}
		mes "[Vidente]";
		mes "Bem, precisamos de dinheiro para viver, mas ter dinheiro não significa ter uma vida plena.";
		mes "Não esqueça que existem outras coisas que são importantes também.";
		mes "E tente não ficar muito nervoso, certo?";
		close;
		case 4:
		mes "[Vidente]";
		switch(rand(1,4)) {
			case 1:
			mes "Suas notas? Você ainda está na escola?";
			mes "Estou impressionado!";
			mes "Seus olhos me dizem que você é muito maduro para a sua idade.";
			mes "Certo, vou consultar os espíritos...";
			next;
			mes "[Vidente]";
			mes "Hm? Tudo que eles disseram foi 'Você estuda?'";
			mes "Bem, acho que acabei respondendo sua pergunta com outra pergunta!";
			next;
			break;
			case 2:
			mes "Você está me perguntando sobre as suas notas?";
			mes "Que estranho.";
			mes "Digo, você está querendo saber sobre o seu boletim?";
			next;
			mes "[Vidente]";
			mes "A educação é muito importante, mas não desanime se suas notas não são tão boas quanto você gostaria.";
			next;
			mes "[Vidente]";
			mes "Talvez o seu estilo de aprendizado não seja condizente com o método da sua escola.";
			mes "Ou talvez você não esteja muito interessado nos assuntos que ensinam lá.";
			mes "É compreensível.";
			next;
			mes "[Vidente]";
			mes "Os espíritos me dizem que você deve tentar diferentes estilos de aprendizagem.";
			mes "Para garantir que obtenha as notas que quer.";
			next;
			mes "[Vidente]";
			mes "Sim...";
			mes "Os espíritos estão incrivelmente preguiçosos hoje.";
			next;
			break;
			case 3:
			mes "[Vidente]";
			mes "Hmm. Os espíritos estão rudes hoje.";
			mes "Eles estão dizendo 'Se você está tão preocupado com suas notas.";
			mes "Por que não vai falar com seu professor?'";
			next;
			mes "[Vidente]";
			mes "Agora que estou pensando nisso, eles tem razão.";
			mes "Por que você não vai falar com seu professor para ver se há algum problema?";
			next;
			mes "[Vidente]";
			mes "Eles são pagos para te ajudar.";
			mes "E minha consulta é de graça.";
			mes "Então...";
			next;
			break;
			case 4:
			mes "Ah, legal!";
			mes "Sinto que você logo vai tirar um Dez...";
			mes "Em Esforço!";
			next;
			mes "[Vidente]";
			mes "Não posso te dizer quais as suas notas.";
			mes "Talvez você esteja destinado a tirar dez em todas as matérias, mas se eu falar isso...";
			next;
			mes "[Vidente]";
			mes "Você provavelmente relaxaria, pararia de estudar, reprovaria e causaria um paradoxo no tempo.";
			mes "Porque eu realmente preciso ir para o futuro para ver o que vai acontecer, entende?";
			next;
			mes "[Vidente]";
			mes "Ao invés de se preocupar com paradoxos no tempo, por que você não faz o seu próprio destino?";
			next;
		}
		mes "[Vidente]";
		mes "De qualquer forma, é difícil se concentrar nos estudos, mas pode compensar.";
		mes "Espero que você se dê bem no que você decida fazer.";
		close;
		case 5:
		mes "[Vidente]";
		mes "O futuro?";
		mes "Achei que estava implícito que tudo que eu falar será sobre o futuro, de qualquer tema que você escolha.";
		next;
		mes "[Vidente]";
		mes "Acho que você quer saber sobre o futuro em geral.";
		mes "Vou consultar os espíritos, e veremos o que eles têm a dizer, ok?";
		next;
		mes "[Vidente]";
		switch(rand(1,4)) {
			case 1:
			mes "Hmm...";
			mes "No futuro, Sexo, Violência e Rock and Roll serão abolidos.";
			mes "A humanidade viverá numa era de paz e chatice.";
			next;
			mes "[Vidente]";
			mes "Não sei quando isso vai acontecer, mas espero que demore bastante!";
			next;
			break;
			case 2:
			mes "No futuro a Terra será protegida por um único robô:";
			mes "Plutonium Overdrive Ignition Negatron G, ou POING.";
			next;
			mes "[Vidente]";
			mes "POING expulsou os invasores Kylorianos por muito tempo, até ser derrotado pelo Nyxltron 47, feito pelo Dr. Hubris.";
			next;
			mes "[Vidente]";
			mes "Mas felizmente o doutor Pyeus finalizou bem a tempo o Dispostivo de Desconhecimento de Gravidade para o POING.";
			next;
			mes "[Vidente]";
			mes "Então POING levantou-se novamente, renascido como o Herói Automático: GOD-POING.";
			mes "Que obviamente destruiu o Nyxltron 47.";
			next;
			mes "[Vidente]";
			mes "Essa é provavelmente a coisa mais importante que posso te contar sobre o futuro.";
			mes "O resto é muito sem graça.";
			next;
			break;
			case 3:
			mes "No futuro, acredite ou não, a internet será substituída por um grande cérebro.";
			mes "Não sei como, mas acredite, o cérebro é enorme.";
			next;
			mes "[Vidente]";
			mes "Graças ao grande número de blogs, o cérebro se torna pacífico, e decide não dominar o mundo.";
			mes "Como tinha planejado antes.";
			next;
			mes "[Vidente]";
			mes "Sim...";
			mes "Esse cérebro se torna uma fonte do bem, um benfeitor da raça humana.";
			mes "Pelo menos enquanto as pessoas continuarem a escrever assuntos pessoais na internet.";
			next;
			break;
			case 4:
			mes "No futuro, muitas plantas serão modificadas geneticamente.";
			mes "Existirão muitos tipos diferentes!";
			mes "É bem estranho!";
			next;
			mes "[Vidente]";
			mes "Eventualmente surgirão árvores que ao invés de frutos, originam clones de celebridades.";
			mes "Hoje, isso parece um milagre da ciência, e uma ameaça às estrelas de Hollywood.";
			next;
			mes "[Vidente]";
			mes "Mas as pessoas que compram essas árvores são as mesmas que usam aquelas camisetas estranhas...";
			next;
			mes "[Vidente]";
			mes "Sabe, que tem um senso de humor tosco, com a palavra 'Gatostrófico' e o desenho de um gatinho vestido como um cientista maluco ou algo do gênero.";
			next;
		}
		mes "[Vidente]";
		mes "Bem...";
		mes "Essa é a minha predição.";
		mes "Você pode argumentar com a sabedoria do mundo dos espíritos?";
		close;
		case 6:
		mes "[Vidente]";
		mes "Moda...?";
		mes "O que isso tem a ver com o sobrenatural?";
		mes "Bem, entrarei em contato com os espíritos.";
		mes "Lá vamos nós...";
		next;
		mes "[Vidente]";
		switch(rand(1,5)) {
			case 1:
			mes "...";
			next;
			mes "[Vidente]";
			mes "...";
			mes "......";
			next;
			mes "[Vidente]";
			mes "Estou vendo algo...";
			mes "Parece, com...";
			next;
			mes "[Vidente]";
			mes "Um...";
			mes "Um... Peixe?";
			mes "Na cabeça de alguém?";
			next;
			mes "[Vidente]";
			mes "...";
			mes "Que visão horrível!";
			next;
			break;
			case 2:
			mes "É bom usar elmos valiosos!";
			mes "E também é bom usar roupas bonitas!";
			mes "Mas lembre-se...";
			next;
			mes "[Vidente]";
			mes "Não importa o quanto você gastou no seu guarda-roupa, você ainda vai parecer bobo se não usar peças que combinem.";
			next;
			mes "[Vidente]";
			mes "Vou te dar um exemplo de gente que não sabe se vestir.";
			mes "Imagine um Crusader usando uma coroa, orelhas de elfo e um Iron Cain.";
			next;
			mes "[Vidente]";
			mes "Ele não ia parecer na moda, ia parecer o Príncipe da Breguice.";
			next;
			break;
			case 3:
			mes "Eu vejo...";
			mes "Que chapéus de caubói serão muito populares entre garotas Super Novices em breve!";
			next;
			mes "[Vidente]";
			mes "Você não concorda?";
			mes "Chapéus de caubói ficam ótimos em Super Novices!";
			next;
			break;
			case 4:
			mes "Pode ser uma boa idéia seguir um tema.";
			mes "Por exemplo, você pode usar Asas de Anjo e Orelhas de Anjo ao mesmo tempo.";
			next;
			mes "[Vidente]";
			mes "Claro que isso pode ser caro demais para a maioria das pessoas, mas você entendeu.";
			next;
			break;
			case 5:
			mes "Eu prevejo que sombreros se tornarão muito populares quando um grande grupo de Bardos formarem uma guild na qual os membros só usarão sombreros.";
			next;
			mes "[Vidente]";
			mes "Ou será que é o Boina Alada que estourará em popularidade?";
			mes "Os dois chapéus são muito estilosos, principamente em bardos...";
			next;
		}
		mes "[Vidente]";
		mes "Bem...";
		mes "Nós, videntes, não sabemos muito sobre moda, mas eu espero ter ajudado.";
		close;
	}
}

// ------------------------------------------------------------------
geffen_in,109,72,2	script	Professor de Monstros#gef	4_F_01,{
	mes "[Estheres]";
	mes "Olá, sou o especialista em Monstros daqui de Geffen. Você gostaria de saber alguma coisa?";
	next;
	switch(select("Area de Monstros.","Notícias Recentes.:Era dos Monstros:Teoria do Jellopy.")) {
		case 1:
		mes "[Estheres]";
		mes "Bem, como você talvez saiba, já que Mages e Wizards treinam em Geffen.";
		mes "Os monstros não chegam muito perto da cidade. Então aventureiros fatigados podem descansar aqui.";
		next;
		mes "[Estheres]";
		mes "Mas se você quiser caçar monstros fortes, pode cruzar a ponte a oeste e lutar com Kobolds.";
		next;
		mes "[Estheres]";
		if (BaseLevel > 40) {
			mes "Você parece forte o suficiente para ir até lá.";
			mes "Mas se vir alguém com menos experiência atravessando a ponte, poderia avisá-lo do perigo.";
		}
		else {
			mes "Mas se você está planejando ir lá, melhor não ir sozinho.";
			mes "Recomendo que você vá preparado se quiser lutar com esse tipo de monstros.";
		}
		break;
		case 2:
		mes "[Estheres]";
		mes "Novidades?";
		mes "Bem, o Museu de Monstros de Juno está aberto ao público.";
		mes "Há uma exposição fascinante, e vários monstros estão a mostra.";
		next;
		mes "[Estheres]";
		mes "Eu li sobre todos os tipos de monstros nas livrarias de Juno e de Prontera, e cacei alguns.";
		mes "Mas agora tenho a chance de ver monstros muito fortes pessoalmente!";
		next;
		mes "[Estheres]";
		mes "E os aventureiros de Rune-Midgarts fizeram descobertas fantásticas em suas explorações.";
		next;
		mes "[Estheres]";
		mes "Quando uma nova terra é encontrada, normalmente existem lá monstros desconhecidos.";
		next;
		mes "[Estheres]";
		mes "Então estamos descobrindo monstros novos o tempo todo!";
		mes "A variedade de criaturas que povoam o planeta é impressionante.";
		break;
		case 3:
		mes "[Estheres]";
		mes "A verdade é que os monstros existem desde tempos antigos.";
		mes "A Era dos Monstros ocorreu quando o poder deles estava no auge.";
		next;
		mes "[Estheres]";
		mes "Eles oprimiram os humanos por muito tempo.";
		mes "Mas foram aniquilados numa guerra entre os monstros e a humanidade.";
		next;
		mes "[Estheres]";
		mes "Entretanto, o equilíbrio da natureza mudou, e os monstros retornaram.";
		mes "Poucas pessoas sabem disso, mas os monstros já foram criaturas gentis.";
		mes "É triste...";
		break;
		case 4:
		mes "[Estheres]";
		mes "Ah sim, Jellopy.";
		mes "Parece que todos os monstros daqui são compostos de Jellopy.";
		mes "Mas isso é apenas uma cristalização formada por alguns monstros...";
		mes "Ou é mais que isso?";
		next;
		mes "[Estheres]";
		mes "Nossas pesquisas sobre monstros antigos e estudos feitos com monstros descobertos recentemente mostram que nenhum traço de Jellopy é encontrado em monstros fortes.";
		next;
		mes "[Estheres]";
		mes "Mas mesmo assim, muitos acreditam numa relação entre Jellopys e monstros.";
		mes "Apesar de ser difícil de acreditar nisso.";
		next;
		mes "[Estheres]";
		mes "É possível que as Jellopys estejam relacionadas com a personalidade e a força dos monstros.";
		mes "Então, se você misturar Jellopy com alguma coisa, poderia criar um monstro mais forte.";
		next;
		mes "[Estheres]";
		mes "Mas fazer esse tipo de experimento pode ser perigoso.";
		mes "Você pode acabar soltando monstros assustadores no mundo...";
		break;
	}
	close;
}

// ------------------------------------------------------------------
geffen,203,146,5	script	Cidadão#gef	4W_M_01,{
	mes "[Cidadão]";
	mes "Havia um hábil criador de armas em Al De Baran, e ele tinha 4 filhos.";
	mes "Infelizmente, ele perdeu todos enquanto desenvolvia uma arma poderosa.";
	mes "Somente ele sobreviveu à tragédia.";
	next;
	mes "[Cidadão]";
	mes "Como deve ter sido triste para ele...";
	mes "Graças ao incidente, o criador de armas se aposentou e foi embora, viver em outro lugar.";
	mes "Depois disso, ninguém nunca pôde ver a arma que eles estavam desenvolvendo.";
	next;
	mes "[Cidadão]";
	mes "Não acho que os filhos dele foram para o céu com a ansiedade.";
	close;
}