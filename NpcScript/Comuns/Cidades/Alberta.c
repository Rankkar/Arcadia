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
| - Nota: Npcs comuns na cidade Alberta                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
alberta,97,51,0	script	Fabian#alb	4_M_02,{
	mes "[Fabian]";
	mes "Quando você viaja para muitos lugares como eu faço, você fica sabendo de muitos rumores.";
	mes "Um dos rumores que eu ouvi é realmente interessante.";
	next;
	mes "[Fabian]";
	mes "Aparentemente existem cartas que selam o poder de certos monstros dentro delas.";
	mes "Se alguém conseguir obter uma dessas cartas, ele irá obter o poder do monstro...";
	next;
	mes "[Fabian]";
	mes "Ah! Eu não acredito nisso.";
	close;
}

// ------------------------------------------------------------------
alberta,53,39,0	script	Steiner#alb	4W_SAILOR,{
	mes "[Steiner]";
	mes "Oh, você parece ser de fora da cidade.";
	mes "Seja bem vind"+(Sex? "o":"a")+" à Alberta.";
	emotion e_gasp;
	next;
	mes "[Steiner]";
	mes "Eu estava apenas pensando em algumas idéias que eu tenho para o meu negócio.";
	next;
	mes "[Steiner]"; 
	mes "Olha só, eu ouvi falar que tem uma loja em Geffen que vende armaduras raras, resistentes a ataques mágicos."; 
	mes "Se eu de alguma forma pudesse comprá-las por um preço baixo e vendê-las pro pessoal em outras cidades...";
	emotion e_cash;
	close;
}

// ------------------------------------------------------------------
alberta,20,183,0	script	Chad#alb	1_M_03,{
	mes "[Chad]";
	mes "As pessoas dizem que a lendária arma Gungnir nunca erra seu alvo.";
	mes "Eu me pergunto se isso é verdade...";
	next;
	mes "[Chad]";
	mes "As pessoas também dizem que as cegonhas é que trazem os bebês depois do parto.";
	mes "Que Papai Noel existe!";
	mes "Mas só em Lutie.";
	next;
	mes "[Chad]";
	mes "Eu me pergunto...";
	mes "Se qualquer uma dessas pessoas realmente acredita que isso seja verdade...";
	close;
}

// ------------------------------------------------------------------
alberta,131,139,2	script	Velho Bêbado#alb	1_M_JOBGUIDER,{
	mes "[Velho Bêbado]";
	mes "^666666*Hiccup*^000000";
	mes "O quqquê você está olhando?";
	mes "Sai fora!!";
	next;
	switch(select("Não, vou ficar aqui mesmo.","Tah tah! Seu velho bêbado.")) {
		case 1:
		mes "[Velho Bêbado]";
		mes "Hahahaha ^666666*hiccup*^000000...";
		mes "Então você tem nervos.";
		mes "Heh... eu posso parecer um lixo agora.";
		mes "Mas voltando no tempo, eu era um belo marinheiro à bordo do 'Going Mary.'";
		next;
		switch(select("Isso é um navio?.","Sério? Não brinca!")) {
			case 1:
			mes "[Velho Bêbado]";
			mes "O quê?! Nunca ouviu falar dele?";
			mes "Todo mundo conhece o notável navio pirata 'Going Mary!'";
			mes "^666666*Hiccup*^000000";
			next;
			mes "[Velho Bêbado]";
			mes "Ah bons dias ... mas... se nós não tivéssemos entrado naquela TEMPESTADE...";
			mes "^666666*hiccup*^000000";
			next;
			mes "[Velho Bêbado]";
			mes "AH Capitão.";
			mes "Sinto falta do nosso capitão mais do que tudo....";
			mes "Nenhum monstro sobrevivia ao golpe da espada do capitão."; 
			mes "CAPITÃO!!! (HICCUP) Ele usava sua espada ASSIM!...";
			mes "Depois ASSIM... e ASSIM...!!!"; 
			next; 
			mes "[Velho Bêbado]"; 
			mes "O inimigo e tudo ao redor dele ardiam em chamas!";
			mes "Agora quando penso nisso, a espada devia ter algum tipo de poder misterioso."; 
			next; 
			mes "[Velho Bêbado]"; 
			mes "(sigh!) (sob, sob)... Desu, como eu sinto falta de todos...";
			mes "Agora me deprimi.";
			mes "Vá embora e me deixe sozinho....."; 
			emotion e_sob; 
			close; 
			case 2:
			mes "[Velho Bêbado]";
			mes "Está certo! (HICCUP)!";
			close;
		}
		case 2:
		mes "[Velho Bêbado]";
		mes "É isso mesmo!";
		mes "Vá EMBORA!"; 
		emotion e_awsm; 
		close;
	}
}

// ------------------------------------------------------------------
alberta,58,80,2	script	Shakir#alb	4W_M_03,{
	switch(rand(2)) {
		case 1:
		mes "[Shakir]";
		mes "Nós, mercadores muitas vezes colocamos o pé na estrada para fazer bons negócio";
		next;
		mes "[Shakir]";
		mes "Com a habilidade de desconto, podemos comprar produtos mais baratos das lojas das cidades e carregá-los em nosso carrinho alugado.";
		next;
		mes "[Shakir]";
		mes "Então, depois disso, podemos viajar para qualquer lugar, e re-vender esses itens para lucrar um pouco!";
		next;
		mes "[Shakir]";
		mes "Desta forma, o negócio é mais conveniente e seguro....";
		mes "EI NÃO DURMA!.";
		close;
		case 2:
		mes "[Shakir]";
		mes "Nós mercadores podemos fazer nosso comércio em qualquer lugar.";
		mes "Com o ^0000ffDesconto^000000 nós podemos comprar tudo na loja com preço mais baixo..";
		next;
		mes "[Shakir]";
		mes "É mais do que apenas sair gritando 'Você tem que me dar mais dinheiro por favor!'";
		mes "Você precisa ter carisma e retórica de mestre!";
		next;
		mes "[Shakir]";
		mes "A porcentagem máxima que conseguimos tirar a mais nos itens que vendemos aos NPCs é de 24%.";
		mes "Mas precisa de trabalho duro e treino para conseguir essa habilidade!!";
	}
}

// ------------------------------------------------------------------
alberta,62,156,2	script	Sonya#alb	8_F,{
	switch(rand(3)){
		case 0:
		mes "[Sonya]";
		mes "Uns dias atrás, eu estava andando na floresta e vi um longo, fino pedaço de grama verde saindo direto do chão.";
		next;
		mes "[Sonya]";
		mes "Ele era tãããão bonitinho, que me deu vontade de tocá-lo.";
		mes "Quando eu encostei nele, sabe o que aconteceu?";
		mes "A grama deu uma chicotada na minha mão!";
		next;
		mes "[Sonya]";
		mes "Achei aquilo estranho, e recuei por um momento.";
		mes "Foi então que eu vi, não era grama, mas sim uma pequena criatura.";
		next;
		mes "[Sonya]";
		mes "Até os montros mais calmos podem ser muito perigosos quando se sentem ameaçados.";
		mes "Então não se engane com eles.";
		close;
		case 1:
		mes "[Sonya]";
		mes "Sabe aqueles ursos com cara de bobo que vivem na floresta que liga Alberta à Payon??";
		mes "Claro que sabe...";
		mes "aqueles que ficam brincando com as abelhas que voam nos seus narizes";
		next;
		mes "[Sonya]";
		mes "Então, outro dia eu joguei um galho em um deles apenas por diversão.";
		mes "De repente, ELE VEIO CORRENDO NA MINHA DIREÇÃO!";
		next;
		mes "[Sonya]";
		mes "Eu fiquei TÃÃÃO assustada!!";
		mes "Eu rapidinho pulei pro lado pra desviar dele.";
		mes "Então BAMB!!!";
		mes "Ele acertou uma gigantesca árvore e a deixou em pedacinhos.";
		emotion e_wah;
		next;
		mes "[Sonya]";
		mes "Aquele dia eu aprendi uma lição.";
		mes "NUNCA provoque nenhuma criatura pois se ela ficar nervosa, você estará em sérios apuros!";
		close;
		case 2:
		mes "[Sonya]";
		mes "Uma vez eu vi um bando de lobos pegarem um daqueles enormes, ursos preguiçosos!";
		next;
		mes "[Sonya]";
		mes "Você sabia? Lobos são mais cooperativos do que aparentam.";
		mes "Se um deles é atacado, os outros vêm ajudá-lo.";
		next;
		mes "[Sonya]";
		mes "Então tome muito cuidado se você decidir lutar com um!";
		close;
	}
}

// ------------------------------------------------------------------
alberta,93,174,2	script	Vovó Alma#alb	8_F_GRANDMOTHER,{
	mes "[Vovó Alma]";
	mes "Algum tempo atrás, um navio à deriva foi trazido pelo mar ao porto de Alberta.";
	next;
	mes "[Vovó Alma]";
	mes "Alguns jovens da cidade entraram no navio em busca de sobreviventes.";
	mes "Mas depois de alguns momentos todos correram pra fora horrorizados.";
	mes "Disseram que viram CADÁVERES andando pelo navio!";
	next;
	mes "[Vovó Alma]";
	mes "O navio também estava lotado de monstros marinhos nunca vistos, que impediam as pessoas de entrar.";
	next;
	mes "[Vovó Alma]";
	mes "Nós nunca fomos capazes de fazer algo sobre esse estranho navio, então apenas o deixamos lá, esperando que um dia ele afundasse ou fosse embora.";
	next;
	mes "[Vovó Alma]";
	mes "Assim, pode ser uma boa experiência para um jovem aventureiro como você.";
	mes "Mas, ainda não vale a pena arriscar sua vida se você não é forte o suficiente.";
	close;
}