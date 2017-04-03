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
| - Nota: Npcs comuns na cidade Umbala                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
umbala,70,106,3	script	Criança Utan#umb	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes "[???]";
		mes "Huh?";
		mes "Você não é um de nós, é?";
		next;
		mes "[???]";
		mes "Heh! Oi!";
		mes "Meu nome é Haatan.";
		emotion e_heh;
		next;
		mes "[Haatan]";
		mes "...*Suspiro*";
		mes "Me desculpe, mas eu não posso jogar com você agora.";
		mes "A casa dos meus pais foi atingida por um raio ontem e ele queimou o nosso telhado...";
		emotion e_sob;
		next;
		mes "[Haatan]";
		mes " . . . !";
		next;
		mes "[Haatan]";
		mes "Ah sim! Você pode me ajudar?";
		mes "Você parece muito bem...";
		mes "Você pode doar algum dinheiro para a reconstrução da casa dos meus pais?";
		mes "Vocês de Rune-Midgard são todos mais ricos do que os Utans!";
		mes "Eu imploro!";
		emotion e_heh;
		next;
		if (select("Acenar com a cabeça","Negar com a cabeça") == 1) {
			mes "[Haatan]";
			mes "Whoaaaa!!";
			mes "Muito obrigado, yay!";
			emotion e_swt2;
			next;
			mes "[Haatan]";
			mes "Muito obrigado!";
			emotion e_heh;
			close;
		}
		mes "[Haatan]";
		mes ".............*Sob*...";
		emotion e_sob;
		close;
	}
	else {
		mes "[???]";
		mes "Umbah?";
		mes "Umbala umbabah umbah?";
		next;
		mes "[???]";
		mes "Umbah! Umbaumbah!";
		mes "Umbahumbah Haatan babah.";
		emotion e_sob;
		next;
		mes "[Haatan]";
		mes "........umbah,";
		mes "Umbah umbah umbaumbumbah umbah umbah";
		mes "Babaum babahum woombah umbah umbabah";
		mes "Umbah umbah";
		mes "..Umbah umbabah umbah...";
		emotion e_heh;
		next;
		mes "[Haatan]";
		mes " . . . !";
		next;
		mes "[Haatan]";
		mes "Umbah!";
		mes "Umbah umbah? Umbah umbahbah";
		mes "abaum babahum woombah!";
		mes "Umbahumbah umbabahumbaumhumbah! Umbah!";
		emotion e_heh;
		close;
	}
}

// ------------------------------------------------------------------
umbala,59,243,5	script	Criança Utan#umb2	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Kotan]";
		mes "............";
		mes ".........poop!";
		mes ".....eu gosto de carne.";
		mes "....me dê uma carne.";
		emotion e_rock;
		next;
		if (select("Dar-lhe carne.","Recusar.") == 1) {
			if (countitem(Meat) > 0) {
				mes "[Kotan]";
				mes "Whoa, você realmente está me dando";
				mes "carne? Obrigado!";
				delitem Meat,1;
				emotion e_scissors;
				close;
			}
			mes "[Kotan]";
			mes "Hah! Você não tem carne,";
			mes "mas vai fingir que tem?!";
			mes "Eu odeio pessoas que mentem para mim!!";
			percentheal -20,0;
			emotion e_an;
			close;
		}
		mes "[Kotan]";
		mes ".........";
		mes ".....hungwee.";
		mes ".....Eu quero carne.";
		percentheal -1,0;
		emotion e_sob;
		close;
	}
	else {
		mes "[???]";
		mes "............";
		mes "........umbah.";
		mes ".......umbabah.";
		mes "......humbah.";
		emotion e_rock;
		close;
	}
}

// ------------------------------------------------------------------
umbala,149,165,4	script	Criança Utan#umb3	4_F_UMGIRL,{
	if (event_umbala >= 3) {
		mes "[Klumatan]";
		mes "É realmente assustador, cair de um lugar tão alto...";
		mes "Mas eu acho que você tem que, fazer isso, caso contrário não vão considerar você um adulto.";
		next;
		mes "[Klumatan]";
		mes "Eu acho que eu não quero ser adulto imediatamente.";
		mes "Mas algumas crianças da minha idade tem uma pressa muito grande para não serem mais crianças.";
		close;
	}
	else {
		mes "[???]";
		mes "Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,194,104,4	script	Criança Utan#umb4	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Boorkatan]";
		mes "Huh? Você é de Rune-Midgard, não é?";
		mes "Você já foi em um bungee jump?";
		next;
		if (select("Sim","Não") == 1) {
			mes "[Boorkatan]";
			mes "Wow, que surpresa!";
			mes "Eu nunca falei com alguém de fora que que já tivesse feito isso.";
			mes "Ok, vou tomar a palavra para lhe dar as boas vindas à nossa aldeia.";
			close;
		}
		mes "[Boorkatan]";
		mes "Er, Eu vejo...";
		mes "Faz parte da cerimonia de idade adulta, todos os Utans tem que fazer um salto de bungee jump.";
		mes "Quando eu crescer eu vou fazer também e provar para todos que sou um homem!";
		close;
	}
	else {
		mes "[???]";
		mes "Er, Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}


// ------------------------------------------------------------------
umbala,139,205,4	script	Criança Utan#umb5	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Jooltan]";
		mes "Faz muito tempo desde a última vez que eu vi alguém de Rune-Midgard!";
		next;
		mes "[Jooltan]";
		mes "Nós Utans usamos estes lugar para bungee jumping.";
		mes "Muitos jovens Utans tem demonstrado sua bravura, ganhando seu auto-respeito, e se tornanado adultos neste lugar.";
		next;
		mes "[Jooltan]";
		mes "Oh... certo.";
		mes "Algumas pessoas azaradas há pouco caíram e morreram depois de realizar o salto.";
		mes "E algumas tiveram ataques cardíacos enquanto saltavam...";
		next;
		mes "[Jooltan]";
		mes "Então...";
		mes "Tome cuidado quando andar por ai, você não vai querer cair.";
		mes "E se você quiser experimentar o bungee jump, você deve estar pronto.";
		next;
		mes "[Jooltan]";
		mes "Oh...certo. Supostamente, há uma criatura não identificada vivendo na água...";
		mes "Então se você se molhar, saia de lá!";
		close;
	}
	else {
		mes "[???]";
		mes "Umbah umbah!";
		mes "Umbaumbah bababah umbah.";
		mes "Babaumm Utan umbah umbabah";
		mes "Umbaba hum.";
		mes "Umumhumbah umbaumbah umbabah.";
		next;
		mes "[???]";
		mes "Umbaum mahbababh umba,";
		mes "Umbabatan umbaumbah.";
		mes "Ba, umbaumbaumumbabaumm.";
		mes "Umbabah umbaumumum.";
		mes "Umbaumbaubahum.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,177,153,3	script	Pasto#umb	4W_M_01,{
	mes "[Pasto]";
	emotion e_gasp;
	mes "Oh! Finalmente, outra pessoa de Rune-Midgard!";
	mes "Eu nunca vi ninguém de casa neste lugar antes!";
	mes "Prazer em conhecê-lo, meu nome é Pasto!";
	next;
	mes "[Pasto]";
	mes "Este lugar é chamado de Umbala.";
	mes "As pessoas locais nesta vila construíram uma cultura que é completamente diferente dos outros lugares que eu fui.";
	next;
	mes "[Pasto]";
	mes "Eu acho que é porque este local foi isolado de outras regiões devido as suas características geográficas.";
	next;
	mes "[Pasto]";
	mes "Eles parecem diferente de nós, e utilizam uma linguagem que ainda é muito confusa para mim.";
	mes "Fiquei confuso também com suas expressões faciais.";
	next;
	mes "[Pasto]";
	mes "Claro, existem algumas semelhanças.";
	mes "Porém, você tem que ter cuidado com certas questões.";
	next;
	mes "[Pasto]";
	mes "Às vezes, algo que você diz ou faz pode ser interpretado com o sentido totalmente oposto.";
	next;
	mes "[Pasto]";
	mes "Eu desejo poder falar seu idioma...";
	mes "*Suspiro*";
	mes "...Ou conhecer aqui mais pessoas que falem meu idioma...";
	mes "Eu... Eu estou...";
	mes "Tão sozinho...*Sob*";
	emotion e_sob;
	close;
}

// ------------------------------------------------------------------
umbala,80,146,4	script	Yuwooki#umb	4_M_MONK,{
	mes "[Yuwooki]";
	mes "Umbah umbah woogawoo...";
	mes "Opa, desculpa! eu estou tão acostumado falar em Utan agora.";
	mes "É um prazer conhecê-lo.";
	next;
	mes "[Yuwooki]";
	mes "Eu nunca imaginei que eu fosse conhecer uma pessoa da minha terra natal nesta aldeia.";
	mes "Hahahahah!";
	next;
	mes "[Yuwooki]";
	mes "Eu vim em busca de um povo forte para me ajudar a melhorar minhas habilidades de luta.";
	mes "Mas logo fiquei um pouco frustrada porque levei um tempo para aprender a língua...";
	next;
	mes "[Yuwooki]";
	mes "Bem, agora eu estou acostumada com as circunstancias.";
	mes "Embora isso tenha levada um tempo para me acostumar com a Cultura Utan.";
	mes "Hahahaha!";
	next;
	mes "[Yuwooki]";
	mes "Mas você sabe a coisa mais estranha que eu descobri sobre a cultura Utan?";
	mes "No princípio os homens Utan pareciam ter, digamos, um instinto de preservação de espécies fortes.";
	next;
	mes "[Yuwooki]";
	mes "Há muitos playboys Utan nesta aldeia.";
	mes "Alguns podem pensar que os Utans são primitivos neste respeito, mas...";
	next;
	mes "[Yuwooki]";
	mes "Como eu aprendi mais sobre eles, eu finalmente percebi.";
	mes "Que o seu ritual de namoro é realmente o mais avançado do que qualquer outra coisa que Rune-Midgard tem a oferecer.";
	next;
	mes "[Yuwooki]";
	mes "É realmente muito fascinante.";
	mes "Eu estou aprendendo de fato bastante sobre os playboys Utans e os seus métodos temerosos.";
	close;
}

// ------------------------------------------------------------------
umbala,140,157,6	script	Homem Utan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Jertan]";
		mes "Bungee jumping pode ser perigoso, e você arriscar sua vida fazendo isso.";
		mes "Nós Utans consideramos o bungee jumping uma importante parte da cerimonia de se tornar adulto.";
		close;
	}
	else {
		mes "[???]";
		mes "Umbaumbah humba.";
		mes "Woo umbaumbaumbabah woo humbah";
		mes "Umbababah umba umba.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,146,157,4	script	Homem Utan#umb2	4_M_UMDANCEKID,{
	if (event_umbala >= 3) {
		mes "[Arotan]";
		mes "Completar o bungee jump é muito difícil.";
		mes "Hoje, nós estamos em celebração ao povo que realizou e tem demonstrado a sua coragem.";
		close;
	}
	else {
		mes "[???]";
		mes "Woo umbaumbaumbabah woo humbah";
		mes "Umbababah umba umba.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,193,208,6	script	Homem Utan#umb3	4_M_UMSOLDIER,{
	if (event_umbala >= 3) {
		mes "[Weitan]";
		mes "Eu também pratiquei bungee jump quando eu era jovem.";
		mes "Lembro-me bem... Foi minha primeira vez, e o chão queria me conhecer...";
		mes "Por um momento, eu pensei que eu fosse me suicidar...";
		next;
		mes "[Weitan]";
		mes "Mas depois que fiz isso, eu tive tanto orgulho de mim.";
		mes "Alguns Utans podem não concordar.";
		mes "Mas eu acho que o bungee jumping é um parte importante da cerimonia da vida adulta.";
		close;
	}
	else {
		mes "[???]";
		mes "Umbahumba umumbah.";
		mes "Umbahumbah umbabah.";
		mes "Umbahumhumbabahum.";
		close;
	}
}

// ------------------------------------------------------------------
umbala,92,159,4	script	Bertan#umb	4_M_UMDANCEKID2,{
	if (event_umbala >= 3) {
		mes "[Bertan]";
		mes "E aí, perdedor!";
		next;
		mes "[Bertan]";
		mes "Qual é o assunto grande Rune-Midgardiano?!?!";
		mes "Eu te chamei de 'perdedor'!";
		mes "Eu acho que você é muito estúpido para entender!!";
		mes "Hahahahahahaahahhahaha~!";
		next;
		mes "[Bertan]";
		mes "...";
		mes "Uh...oh!";
		next;
		mes "[Bertan]";
		mes "Parece que você pode me entender--!";
		mes "Bom trabalho, bom trabalho!";
		mes "Muito bem, por meio de desculpas, quer ouvir uma piada?";
		next;
		mes "[Bertan]";
		mes "Ok, tudo bem.";
		mes "Aqui vamos nós.";
		mes "Ummmm...";
		mes "Ok, eu tenho uma.";
		next;
		switch(rand(1,6)) {
			case 1:
			mes "[Bertan]";
			mes "O que o Rune-Midgardiano disse ao Selvagem?";
			mes "...";
			next;
			mes "[Bertan]";
			mes "Eu não sei...";
			mes "Mas eles não tem qualquer dificuldade para entender uns aos outros!!!";
			mes "HAHAHA!";
			mes "Pegou essa?";
			mes "'Primo, como, eles são ambos porcos!'";
			next;
			mes "[Bertan]";
			mes "Não tem graça, né?";
			mes "Oh bem.";
			mes "Acho que o meu senso de humor é apenas muito sofisticado.";
			close;
			case 2:
			mes "[Bertan]";
			mes "Ok... qual é a melhor forma de domar uma Senhora Orc?";
			mes "Se rende..?";
			next;
			mes "[Bertan]";
			mes "Com um anel de casamento!";
			mes "HAHAHAHAHAHAHHA!";
			mes "Oh Deus!";
			mes "Eu sou hilário!!";
			next;
			mes "[Bertan]";
			mes "...";
			mes "...Espere.";
			mes "Espere um minuto...";
			next;
			mes "[Bertan]";
			mes "Não é mesmo engraçado...";
			mes "Apenas incrível...";
			mes "Assustadora...";
			mes "Brrr--!";
			mes "Ela é horrível!!";
			close;
			case 3:
			mes "[Bertan]";
			mes "De fato... esqueça.";
			next;
			mes "[Bertan]";
			mes "Eu ia dizer uma piada sobre a Ásis, mas decidi que que este tipo de humor é muito sujo.";
			mes "...Zing!";
			close;
			case 4:
			mes "[Bertan]";
			mes "Porque são Rune-Midgardianos";
			mes "SOOoOOoo...";
			mes "Um, hmmmmm.";
			mes "Talvez esta piada não seja tão boa para esta situação, sim?";
			close;
			case 5:
			mes "[Bertan]";
			mes "Ok, porque é que os GMs preferem não serem vistos...?";
			mes "Desiste?";
			next;
			mes "[Bertan]";
			mes "PORQUE ESSES CARAS USAM VESTIDO!";
			mes "HAHAHA!";
			mes "OH CARA, EU FIZ UMA ENGRAÇADA!";
			next;
			mes "[Bertan]";
			mes "*Whew* Yowza";
			mes "Oh, cara.";
			mes "Absolutamente clássica.";
			close;
			case 6:
			mes "[Bertan]";
			mes "Um Templário, um Alquimista e um Aprendiz entram em um bar.";
			next;
			mes "[Bertan]";
			mes "Dentro, eles veem um cartaz que diz:";
			mes "'^CC0000Agência de Ajuda aos Monstros:'";
			mes "SOMENTE SENHORAS.^000000'";
			next;
			mes "[Bertan]";
			mes "'^000099Oh!^000000' diz o Templário.";
			mes "'^000099É ótimo nós sermos todas senhoras.^000000'";
			mes "Ela se levanta e diz '^000099Dê-me uma montaria.^000000'";
			mes "Pense numa montaria de Templário, mas de qualquer jeito...";
			next;
			mes "[Bertan]";
			mes "Do nada, este Grand Peco Peco aparece e diz '^CC0000Eu lhe darei uma carona, baby.";
			mes "Cuidado, esta estrada pode ser acidentaaaaaada.^000000'";
			mes "E então eles vão.";
			next;
			mes "[Bertan]";
			mes "Depois vem o Alquimista e ela gosta '^330099Eu preciso de ajuda para matar Zumbis^000000' e então esta Esfera Marinha aparece do nada e isto é tudo...";
			next;
			mes "[Bertan]";
			mes "'^CC0000Eu peguei seu fogo.";
			mes "Cuidado baby, toque-me na parte errada e eu só me exploooodo.";
			mes "^000000'Então eles estão desligados em sua alegre forma demasiada.";
			next;
			mes "[Bertan]";
			mes "Finalmente, o Aprendiz aparece e diz:";
			mes "'^006633Eu preciso de alguém para um grupo.^000000'";
			next;
			mes "[Bertan]";
			mes "Do nada, um Hode aparece e diz...";
			next;
			mes "[Bertan]";
			mes "'^CC0000Eu conheço algumas pessoas mas deixei de conferir meu Rolodex.";
			mes "HODE on!^000000'";
			mes "....";
			next;
			mes "[Bertan]";
			mes ".....";
			mes "..........";
			mes "Não vai?";
			next;
			mes "[Bertan]";
			mes "Bem, vamos lá!";
			mes "Não pode ser divertido todo o tempo, você sabe?";
			close;
		}
	}
	else {
		mes "[????]";
		mes "Umbaumba Umbaumbah";
		next;
		mes "[????]";
		mes "Bwahbwah hahbrah!";
		mes "Umbaumba Umbaumbah";
		mes "Umbaumba Umbaumbah";
		next;
		mes "[????]";
		mes "Umbaumba Umbaumbah woo~";
		emotion e_ho;
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
um_in,158,71,3	script	Criança Utan#umb6	4_M_UMKID,{
	if (event_umbala >= 3) {
		mes "[Mutakutan]";
		mes "Umbala tem muitas árvores!";
		mes "Eu, Mutakutan, gosto muito de árvores.";
		mes "Heh heh";
		next;
		mes "[Mutakutan]";
		mes "Há uma árvore especial que eu gosto mais!";
		mes "É a mais antiga e a maior árvore em Umbala!";
		mes "Não espere, eu acho que é a mais velha e grande do mundo...";
		mes "Eu tenho certeza que é!";
		next;
		mes "[Mutakutan]";
		mes "É realmente muito grande e velha!";
		mes "É tão alto que eu nunca vi o topo dessa árvore ainda.";
		mes "Eu tentei escalar ela antes, mas eu poderia nunca chegar ao topo...";
		mes "Apesar de eu ser um grande escalador de árvores.";
		next;
		mes "[Mutakutan]";
		mes "Oh, o fruto da árvore também é muito saboroso!";
		mes "Aposto que eles são os mais deliciosos frutos do mundo.";
		mes "Doce e amargo...";
		mes "Comendo ele faz você se sentir refrescado e revigorado!";
		next;
		mes "[Mutakutan]";
		mes "Há um incrível história sobre este fruto.";
		mes "Um velho homem na aldeia estava sofrendo de uma doença mortal...";
		mes "Nada parecia ajudar...";
		next;
		mes "[Mutakutan]";
		mes "Mas depois que ele tomou o medicamento feito a partir das folhas da árvore, ele ficou bom e saúdavel novamente!";
		mes "Eu acho que Deus nos enviou a árvore para nos abençoar.";
		next;
		mes "[Mutakutan]";
		mes "É ao norte da minha aldeia.";
		mes "Por que você não vai ver a grandeza dessa árvore você mesmo?";
		close;
	}
	else {
		mes "[??????]";
		mes "Umbaumbah umbahbah woomhah!";
		mes "Umbah umbah umbabah umbah";
		mes "Umbah umbah umbah";
		mes "Umbabah umbah umbabbah";
		next;
		mes "[??????]";
		mes "....";
		mes "......";
		mes "Umbah balooooga?";
		mes "Umbah balooooooooga?";
		next;
		mes "[??????]";
		mes "...";
		mes "Moogahaloo schluloo.";
		close;
	}
}