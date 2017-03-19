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
| - Nota: Npcs comuns na cidade Jawaii                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
jawaii,188,218,7	script	Senhorita da Taberna#Jawaii	1_F_PUBGIRL,{
	mes "[Senhorita]";
	mes "Oh, querida pessoa!";
	mes "Você não está indo para taberna, certo?";
	next;
	if (select("Não, eu não estou.","Oh sim.") == 1) {
		mes "[Senhorita]";
		mes "Ufa!";
		mes "Graças a deus!";
		mes "É exatamente isso...";
		mes "A taberna provavelmente não é o melhor lugar para você se divertir.";
		next;
	}
	mes "[Senhorita]";
	mes "Mesmo que eu trabalhe lá, ainda não consigo acreditar que existe esse tipo de lugar.";
	mes "Pensei que o alcool fosse proibido no Reino de Rune-Midgard.";
	next;
	mes "[Senhorita]";
	mes "Eu não faço idéia do que os solteiros serão capazes de encontrar nesse lugar.";
	mes "Mas ouvi dizer que muitas pessoas diferentes vem aqui por razões diferentes.";
	next;
	mes "[Senhorita]";
	mes "Eu mesma vi pessoas que não são casadas vindo aqui somente para ficar bêbadas.";
	mes "Ah, e por algum motivo essas pessoas desaparecem da Taberna!";
	next;
	mes "[Senhorita]";
	mes "Então eu me pergunto, o que está acontecendo?";
	mes "Eu sou uma garçonete que trabalha lá, mas eu te digo para não ir lá...";
	close;
}

// ------------------------------------------------------------------
jawaii,220,235,3	script	Moradora de Jawaii#heart	4_F_07,{
	mes "[Jawa Jawa]";
	mes "Você sabe qual é o lugar mais bonito de Jawaii?";
	next;
	mes "[Jawa Jawa]";
	mes "É a 'Ilha de Coração' onde a localização é ao norte da Ilha.";
	mes "A água ao redor do coração da ilha não é profunda, então você pode atravessar.";
	next;
	mes "[Jawa Jawa]";
	mes "Esse é o melhor lugar para compartilhar o momento mais íntimo com a pessoa que ama.";
	mes "É um lugar isolado cercado por uma linda área.";
	next;
	mes "[Jawa Jawa]";
	mes "É claro, provavelmente não é uma boa idéia ir lá se você estiver só.";
	mes "Você ficaria com cara de um perdedor patético!";
	close;
}

// ------------------------------------------------------------------
jawaii,240,146,5	script	Moradora de Jawaii#desc1	4_F_07,{
	mes "[Waii Waii]";
	mes "Bem vind"+(Sex?"o":"a")+" a Jawaii!";
	next;
	mes "[Waii Waii]";
	mes "Aqui, você pode aproveitar sua lua de mel sem se preocupar com interrupções.";
	mes "Você não precisa se preocupar com as rotinas de um exército.";
	next;
	mes "[Waii Waii]";
	mes "Bem, ao redor existem alguns monstros, mas você ficará bem se não atacá-ls.";
	mes "Pense neles como habitantes originais da ilha, sendo uma visão a ser aprecidada.";
	close;
}

// ------------------------------------------------------------------
jawaii,168,247,5	script	Moradora de Jawaii#desc2	4_F_07,{
	mes "[Waja Waja]";
	mes "Ah, você deve ser um turista.";
	mes "Se você está perdido, dirija-se ao Oeste, onde estão as acomodações dos recém casados.";
	mes "Que estão localizadas na parte ocidental de Jawaii.";
	mes "As acomodações são incríveis.";
	next;
	mes "[Waja Waja]";
	mes "Existem quatro diferentes salas temáticas, assim você pode escolher uma de seu gosto.";
	mes "Também existe um guia se precisar pedir informações.";
	next;
	mes "[Waja Waja]";
	mes "Quando você quiser sair, por favor, dirija-se ao navio do noroeste para ir em Alberta.";
	mes "Se você deseja retornar a Izlude, existe um navio aguardando ao Sudeste.";
	close;
}

// ------------------------------------------------------------------
jawaii,165,121,1	script	Moradora de Jawaii#desc3	4_F_07,{
	mes "[Iwa Iwa]";
	mes "Jawaii...";
	mes "Jawaii....";
	mes "É onde você pode encontrar a felicidade!";
	next;
	mes "[Iwa Iwa]";
	mes "Ahh, não é linda?";
	mes "Você não precisa fazer mais nada além de relaxar e respirar nessa atmosfera pacífica.";
	mes "Essa é uma das melhores coisas em Jawaii.";
	next;
	mes "[Iwa Iwa]";
	mes "Ahh!";
	mes "As vezes a gente espera algum concerto nesse palco.";
	mes "Se você é um bom cantor porque não sobe ao palco e canta para nós?";
	next;
	mes "[Iwa Iwa]";
	mes "Jawaii...";
	mes "Jawaii....";
	mes "É onde você pode encontrar a felicidade...";
	close;
}

// ------------------------------------------------------------------
jawaii,141,200,3	script	Funcionário#sroom	4_M_NFMAN,{
	mes "[Alowa]";
	mes "Essa é n-no-nossa sa-sala de doces.";
	mes "Nós, estamos li-limpando esta sa-sala para você é cla-claro.";
	next;
	mes "[Alowa]";
	mes "Para fi-ficar aqui é 1000 zeny po-por pessoa.";
	mes "Po-por favor, me pague a taxa e eu vou deixar você entrar... eu juro!";
	next;
	mes "[Alowa]";
	mes "E-eu também vou le-levar sua bagagem, ma-mas me pague primeiro.";
	mes "Ou meu pa-patrão vai ficar insatisfeito comigo...";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Alowa]";
		if (Zeny > 999) {
			mes "Mu-muito o-obrigado!";
			mes "De-deixe-me abrir os aposentos para você.";
			mes "Obriga-gado.";
			mes "Te-tenha um ótimo dia.";
			close2;
			Zeny -= 1000;
			warp "jawaii_in",116,64;
			end;
		}
		mes "Ah não! Ah não não não não.";
		mes "Se-seu dinheiro não é suficiente?";
		close;
	}
	mes "[Alowa]";
	mes "Ma-mas, eu prometo, es-se quarto é o mais bonito e li-limpo!";
	mes "Po-porfavor!";
	mes "Volte quando quiser!";
	emotion e_sob;
	close;
}

// ------------------------------------------------------------------
jawaii,108,199,5	script	Funcionária#antroom	1_F_MERCHANT_02,{
	mes "[Oran Pinheiro]";
	mes "Bem vindo ao aposento antigo.";
	next;
	mes "[Oran Pinheiro]";
	mes "Esse aposento proporcionará aos amantes uma atmosfera de elegância com pelúcia.";
	mes "Todo conforto será providenciado para o jovem casal nesse aposento.";
	next;
	mes "[Oran Pinheiro]";
	mes "Todos os quartos basicamente tem a mesma estrutura.";
	mes "Mas cada um tem um interior único para antender a gostos diferentes.";
	next;
	mes "[Oran Pinheiro]";
	mes "Se você gostar daqui, será cobrada uma taxa de 1.000 zeny por pessoa para entrar.";
	mes "Aqui você vai construir ótimas lembranças em sua lua de mel.";
	mes "Você deve ficar nesse belo quarto.";
	next;
	mes "[Oran Pinheiro]";
	mes "Não hesite em me deixar saber quando tiver escolhido esse Aposento Antigo.";
	mes "Uma vez que tenha feito a escolha eu leverei você nele.";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Oran Pinheiro]";
		if (Zeny > 999) {
			mes "Muito obrigado por usar nossos serviços.";
			mes "Por favor...";
			mes "Sinta-se confortável.";
			close2;
			Zeny -= 1000;
			warp "jawaii_in",129,110;
			end;
		}
		mes "Eu sinto muito, mas você não possui dinheiro.";
		close;
	}
	mes "[Oran Pinheiro]";
	mes "Por favor...";
	mes "Aproveite seu tempo.";
	mes "Você não deve ter pressa quando se trata de lazer.";
	close;
}

// ------------------------------------------------------------------
jawaii,107,189,5	script	Funcionária#horoom	4_F_04,{
	mes "[Sharkie Rania]";
	mes "Eu vou levar você para o Quarto de Mel.";
	mes "E vai custar ^0000FF1.000^000000 zenys.";
	next;
	mes "[Sharkie Rania]";
	mes "Então, você vai querer ir?";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Sharkie Rania]";
		if (Zeny > 999) {
			mes "Ehh, certo.";
			mes "Vamos indo.";
			close2;
			Zeny -= 1000;
			warp "jawaii_in",86,117;
			end;
		}
		mes "Você...";
		mes "Não tem dinheiro suficiente.";
		close;
	}
	mes "[Sharkie Rania]";
	mes "Sem problemas.";
	close;
}

// ------------------------------------------------------------------
jawaii,112,173,7	script	Funcionária#villroom	4_F_04,{
	mes "[Larks Rania]";
	mes "Olá querido como você está? Você está procurando por um quarto para ficar?";
	next;
	mes "[Larks Rania]";
	mes "Esse é chamado de Quarto Villa.";
	mes "Eu recomendo esse quarto para pessoas que preferem ficarm eum um lugar com um ambiente confortável e muito caseiro.";
	next;
	mes "[Larks Rania]";
	mes "Assim como todas as outras salas a estadia aqui vai custar 1.000 zeny.";
	mes "Eu posso guiar você até o Quarto Villa nesse momento, se você quiser.";
	mes "Será que você gostaria de ficar?";
	next;
	if (select("Pagar.","Cancelar.") == 1) {
		mes "[Larks Rania]";
		if (Zeny > 999) {
			mes "Muito obrigado.";
			mes "Aproveite sua estadia.";
			close2;
			Zeny -= 1000;
			warp "jawaii_in",87,75;
			end;
		}
		mes "Ah, que vergonha!";
		mes "Você parece não ter dinheiro suficiente...?";
		close;
	}
	mes "[Larks Rania]";
	mes "Sem problema.";
	mes "Se você quiser, vai poder ver o Quarto de Mel.";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
jawaii_in,25,94,0	script	Funcionaria#jaw1	4_F_07,{
	mes "[Funcionária Tryteh]";
	mes "Bem vind"+(Sex?"o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		mes "Estou tão feliz com o casamento de vocês.";
		mes "Espero que vivam felizes para sempre~";
		next;
		mes "[Funcionária Tryteh]";
		mes "Tome cuidado com clientes rudes.";
		mes "Eles podem estar bêbados e comportarem-se mal.";
		mes "Sabe como é...";
		close;
	}
	else {
		mes "Espero que aproveite sua estadia aqui.";
		mes "Mas tente não beber muito.";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,96,0	script	Funcionaria#jaw2	4_F_07,{
	mes "[Funcionária Fey]";
	mes "Bem vind"+(Sex?"o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcionária Fey]";
		mes "Esperamos que aprecie sua estadia com a sua amada.";
		mes "Esse lugar não é aconchegante e com uma atmosfera romântica?";
		next;
		mes "[Funcionária Fey]";
		mes "Seria absolutamente perfeito se não fossem esses estranhos da 'Armada dos Solteiros Invencíveis'.";
		mes "Eles apareceram aqui por algum motivo.";
		mes "Que vão para o inferno!";
		close;
	}
	else {
		mes "Divirta-se!";
		mes "Mas por favor tente não atrapalhar os recém-casados daqui!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,98,0	script	Funcionaria#jaw3	4_F_07,{
	mes "[Funcionária Buffy]";
	if (getpartnerid()) {
		next;
		mes "[Funcionária Buffy]";
		mes "Oh!";
		mes "Olhe só...";
		if (Sex == SEX_MALE) {
			mes "Você é o par ideal para sua esposa.";
		}
		else {
			mes "Você é o par ideal para o seu marido.";
		}
		mes "Awwww, gostaria de me casar em breve!";
		close;
	}
	else {
		mes "Hmm...?";
		if (Sex == SEX_MALE) {
			next;
			mes "[Funcionária Buffy]";
			mes "Sou muito competente para cozinhar e limpar.";
			mes "Tenho um ^FF0000belo corpo^000000.";
			mes "O que você acha...?";
		}
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,25,100,0	script	Funcionaria#jaw4	4_F_07,{
	mes "[Funcionária Itere]";
	mes "Bem vind"+(Sex?"o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcionária Itere]";
		mes "Oh!";
		mes "Você parece tão feliz por estar aqui com a sua amada!";
		mes "Que beleza!";
		close;
	}
	else {
		mes "Espero que aproveite a sua est--";
		mes "Espere um pouco...!";
		next;
		mes "[Funcionária Itere]";
		mes "Você...";
		mes "É melhor que você não seja membro da Armada dos Solteiros Invencíveis!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,94,4	script	Funcionaria#jaw5	4_F_07,{
	mes "[Funcionária Tonia]";
	mes "Bem vind"+(Sex?"o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcionária Tonia]";
		mes "Parabéns à vocês dois!";
		next;
		mes "[Funcionária Tonia]";
		mes "^666666*Suspiro...*^000000";
		mes "^333333Espero que esses caras da Armada dos Solteiros não fiquem bêbados e façam besteiras de novo...";
		close;
	}
	else {
		mes "Espere. Você...!";
		next;
		mes "[Funcionária Tonia]";
		mes "Ei--!";
		mes "Você não é bem vindo aqui!";
		mes "P-pare de beber!";
		mes "Agora mesmo!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,96,4	script	Funcionaria#jaw6	4_F_07,{
	mes "[Funcionária Kay]";
	mes "Bem vind"+(Sex?"o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		next;
		mes "[Funcionária Kay]";
		mes "Ah Deus...!";
		mes "Ultimamente estou tendo que lidar com bêbados demais aqui!";
		mes "É difícil tomar conta de tudo...";
		close;
	}
	else {
		mes "Entendo que você queira relaxar, mas tome cuidado e não beba demais.";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,98,4	script	Funcionaria#jaw7	4_F_07,{
	mes "[Funcionária Amy]";
	mes "Bem vind"+(Sex?"o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		mes "Oh! Vocês são perfeitos juntos!";
		mes "Parecem, hum, uma arma e uma bala!";
		mes "Não...?";
		next;
		mes "[Funcionária Amy]";
		mes "Que tal...";
		mes "Leite e biscoitos?";
		mes "Gim e água tônica?";
		mes "Jackie Tucker e Chris Chan...?";
		mes "Hummmm....";
		close;
	}
	else {
		next;
		mes "[Funcionária Amy]";
		mes "Hmm, não acho que esse seja o lugar certo para você.";
		mes "Mas posso deixá-lo beber e se divertir, desde que não exagere.";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,30,100,4	script	Funcionaria#jaw8	4_F_07,{
	mes "[Funcionária Yasmine]";
	mes "Bem vind"+(Sex?"o":"a")+" a Taberna de Jawaii.";
	if (getpartnerid()) {
		mes "Assim como a lua e as estrelas, vocês são perfeitos juntos.";
		mes "Estou muito feliz por vocês!";
		close;
	}
	else {
		next;
		mes "[Funcionária Yasmine]";
		mes "Acho que aqui não é o lugar certo para você.";
		mes "Mas espero que encontre a sua alma gêmea algum dia. Divirta-se!";
		close;
	}
}

// ------------------------------------------------------------------
jawaii_in,43,115,0	script	Cliente#jaw_1	4W_M_01,{
	mes "[Buchi]";
	mes "Você parece feliz...";
	mes "Espero que consiga se sentir assim pra sempre...";
	mes " ";
	mes "^666666*Hiccup...!*^000000";
	close;
}

// ------------------------------------------------------------------
jawaii_in,41,106,3	script	Cliente#Cage	4W_M_02,{
	mes "[Cage]";
	mes "Somos livres...!";
	mes "Somos livres do inferno do casamento...!";
	mes "Somos solteiros sinceros e competentes...!";
	close;
}