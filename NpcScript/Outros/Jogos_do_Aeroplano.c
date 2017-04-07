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
| - Nota: Mini jogos no aeroplano                                   |
| - OBS.: Foi detectado alguns erros que podem comprometer o        |
|         funcionamento dos npc (Revisar, corrigir ou refazer)      |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// - [ Desagio de Digitação ] -
//-------------------------------------------------------------------
airplane_01,32,61,4	script	Nils#ein	1_M_03,1,1,{
	mes "[Nils]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao ^ff0000Desafio de Escrita^000000.";
	mes "Você gostaria de jogar um rápido jogo de escrita?";
	next;
	switch (select("Jogar ^ff0000Desafio de Escrita^000000","Informações","Ver recordes","Cancelar")) {
		case 1:
		mes "[Nils]";
		mes "Ok, nós temos um novo desafiante!";
		mes "Digite o seguinte texto o mais rápido que puder sem cometer nenhum erro!";
		mes "Vamos começar!";
		setarray (.@line1_1$[0],"^3cbcbccallipygian salacius lascivious^000000","^3cbcbcBy the power of^000000","^0000ffthkelfkskeldmsiejdlslehfndkelsheidl^000000","^3cbcbcburrdingdingdingdilidingdingdingphoohudaamb^000000","^3cbcbcCoboman no chikara-yumei na^000000","^3cbcbcEu sou o rei dos esquisitos! Agora^000000","^3cbcbcVocê não me deu escolha. Eu aposto que^000000");
		setarray (.@line1_2$[0],"^3cbcbclicentious prurient concupiscent^000000","^3cbcbcp-po-poi-po-poi-poin-poing^000000","^3cbcbcskemd^000000","^3cbcbcandoorabambarambambambambamburanbamding^000000","^3cbcbcchikara-daiookii na chikara da ze!^000000","^3cbcbcvocê conhece meu verdadeiro poder. Obey!^000000","^3cbcbchora de revelar meu segredo...^000000");
		setarray (.@line1_3$[0],"","^3cbcbcDEUS-POING. EU NUNCA PERCO!^000000","","","^3cbcbcCOBO LIGADO^000000","","");
		setarray (.@word1$[0],"callipygian salacius lascivious licentious prurient concupiscent","By the power of p-po-poi-po-poi-poin-poing GOD-POING. I NEVER LOSE!","thkelfkskeldmsiejdlslehfndkelsheidlskemd","burrdingdingdingdilidingdingdingphoohudaambandoorabambarambambambambamburanbamding","Coboman no chikara-yumei na chikara-daiookii na chikara da ze! COBO ON","Eu sou o rei dos esquisitos! Agora você conhece meu verdadeiro poder. Obey~!","Você não me deu escolha. Eu aposto que é hora de revelar meu poder...");
		setarray (.@line2_1$[0],"^3cbcbciMpertuBáVEl AmÁVel SeCreTo E^000000","^ff1493VeLoCiDaDe Da LuZ ViRaR a EsQuErDa^000000","^ff1493hfjdkeldjsieldjshfjdjeiskdlefvbd^000000","^ff1493burapaphuralanderamduanbatuhiwooi^000000","^ff1493acreditar na sorte do amor suar careta correr^000000","^800080abriR, Abrir!abr1r.abrirAbrirAbr1rAbRir4brir^000000","^3cbcbclIberDadE êxtAse JoRnAlIsMo ArMplt^000000");
		setarray (.@line2_2$[0],"^3cbcbcboLiChe cOnTrA O kArmA JoVem^000000","^ff1493CeRtO QuEiMe VeRdAdEiRo GaNgSteR bEijo^000000","","^ff1493kabamturubamdingding^000000","^ff1493folktale rodimus optimus bumblebee^000000","^800080`abrir'4Brir abrir? abrir!111ABRAMESMO^000000","^3cbcbcDesCobrir dOr de CaBeça RaiosLunArES jUsTiçA^000000");
		setarray (.@word2$[0],"iMpertuBáVEl AmÁvEl SeGrEdOs E boLiCHE cONtra o kArmA dos JoVeMs","VeLoCiDaDe Da LuZ ViRaR a EsQuErDa QuEiMe VeRdAdEiRo GaNgSteR bEijo","hfjdkeldjsieldjshfjdjeiskdlefvbd","burapaphuralanderamduanbatuhiwooikabamturubamdingding","acreditar na sorte do amor suar careta correr conto-de-fadas rodimus optimus bumblebee","abriR, Abrir!abr1r.abrirAbrirAbr1rAbRir4brir`abrir'4Brir abrir? abrir!111ABRAMESMO","lIberDadE êxtAse JoRnAlIsMo AxIla DesCobrir dOr de CaBeça RaiosLunArES jUsTiçA");
		setarray (.@letters[0],1300,1250,1180,1380,1740,1440,1450);
		.@wordtest = rand(7);
		next;
		mes "[Nils]";
		mes .@line1_1$[.@wordtest];
		mes .@line1_2$[.@wordtest];
		mes .@line1_3$[.@wordtest];
		.@start_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		next;
		input (.@save1$);
		.@end_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		.@total_time = .@end_time - .@start_time;
		mes "[Nils]";
		mes .@line2_1$[.@wordtest];
		mes .@line2_2$[.@wordtest];
		.@start_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		next;
		input (.@save2$);
		.@end_time = gettime(GETTIME_HOUR)*60*60+gettime(GETTIME_MINUTE)*60+gettime(GETTIME_SECOND);
		.@total_time = .@total_time+(.@start_time - .@end_time);
		.@tasoo = (.@letters[.@wordtest] / .@total_time) * 6;
		if ((.@save1$ == .@word1$[.@wordtest]) && (.@save2$ == .@word2$[.@wordtest])) {
			mes "[Nils]";
			mes "Seu recorde é ^ff0000"+.@total_time+" segundos^000000 e o total de letras são "+.@tasoo+".";
			next;
			if (.@tasoo >= 1300) {
				mes "[Nils]";
				mes "Humm, não é possível humanamente falando, a menos que copie e cole toda a sentença.";
				mes "Por favor, jogue novamente.";
				close;
			}
			if (.@tasoo >= $050320_ein_typing) {
				mes "[Nils]";
				mes "O recorde anterior foi feito por ^0000ff"+$050320_minus1_typing$+"^000000 com o total de ^0000ff"+$050320_ein_typing+"^000000 letras.";
				mes "Porém, ^ff0000"+strcharinfo(PC_NAME)+"^000000, você o novo top record desta vez. Parabéns!";
				$050320_minus1_typing$ = strcharinfo(PC_NAME);
				$050320_ein_typing = .@tasoo;
				close;
			}
			else {
				mes "[Nils]";
				mes "^0000ff"+$050320_minus1_typing$+"^000000 esse é o recorde atual conquistado com um total de ^0000ff"+$050320_ein_typing+"^000000 caracteres.";
				mes "Tente bater esse record na próxima vez~";
				close;
			}
		}
		else {
			mes "[Nils]";
			mes "Oooh...";
			mes "Me desculpe, mas você digitou o texto incorreto...";
			close;
		}
		case 2:
		mes "[Nils]";
		mes "O ^ff0000Desafio de Escrita^000000";
		mes "é um jogo onde você deve digitar o texto exibido o mais rápido que você puder.";
		mes "O nome do jogador que possuir o recorde será gravado nos registros.";
		mes "Se você procura fama, essa é sua chance!";
		next;
		mes "[Nils]";
		mes "Eu apenas gostaria de dizer que você deve digitar todo o texto em uma simples linha que será apresentada a você.";
		mes "Então não pressione uma tecla, apenas clique em 'OK.'";
		close;
		case 3:
		mes "[Nils]";
		mes "^0000ff"+$050320_minus1_typing$+"^000000 esse é o recorde atual conquistado com um total de ^0000ff"+$050320_ein_typing+"^000000 caracteres.";
		mes "Tente bater esse record na próxima vez.";
		close;
		case 4:
		mes "[Nils]";
		mes "Sinta-se livre para voltar quando quiser e jogar o ^ff0000Desafio de Escrita^000000";
		mes "Até logo.";
		close;
	}
}

//-------------------------------------------------------------------
// - [ Apostas de maçã ] -
//-------------------------------------------------------------------
airplane_01,33,68,4	script	Clarice	1_F_MERCHANT_02,{
	mes "[Clarice]";
	mes "Oi, eu sou Clarice.";
	mes "Você gostaria de apostar algumas maçãs no amigável jogo dos Dados?";
	next;
	switch (select("Jogar","Regras do Jogo","Cancelar")) {
		case 3:
		mes "[Clarice]";
		mes "Eu estou pronta para jogar o jogo dos dados quando você quiser.";
		mes "Quando quiser jogar basta falar comigo, Ok?";
		close;
		case 2:
		mes "[Clarice]";
		mes "As regras do Jogo dos Dados são bastante simples.";
		mes "Primeiro, você deve saber que as apostas são Maçãs.";
		mes "Você pode apostar no máximo 50 Maçãs por vez.";
		mes "Para que tudo ocorra bem, eu aceito apenas Maçãs.";
		next;
		mes "[Clarice]";
		mes "Mas ei, se você possuir tantos zenys que já não cabem mais em seus bolsos.";
		mes "Tire-os e você pode comprar quantas maçãs quiser no Vendedor de Maçãs.";
		next;
		mes "[Clarice]";
		mes "Agora, nós iremos começar rolando dois dados de 6 lados.";
		mes "Enquanto for seu turno, você poderá rolar dois dados de 6 lados.";
		mes "Após isso, nós teremos a opção de rolar um terceiro dado.";
		next;
		mes "[Clarice]";
		mes "Agora aqui é a parte importante.";
		mes "Se ao total nos dados você atingir 12, você irá a falência e irá perder.";
		mes "Caso contrário, a a pessoa com a maior pontuação irá vencer.";
		mes "O que acha?";
		next;
		mes "[Clarice]";
		mes "Agora, primeiro você deve decidir se quer jogar o terceiro dado ou não.";
		mes "Então, dependendo do seu resultado, eu irei rolar meu terceiro dado...";
		mes "Ou talvez não.";
		next;
		mes "[Clarice]";
		mes "Enquanto você ganhar, você irá receber o dobro de Maçãs que você apostou.";
		mes "Mas se por acaso você empatar, você irá receber de volta apenas as Maçãs que você apostou.";
		mes "Justo, certo?";
		close;
		case 1:
		break;
	}
	mes "[Clarice]";
	mes "Ah, Então você quer jogar comigo?";
	mes "Ótimo!";
	mes "Quantas Maçãs você deseja apostar?";
	mes "Lembre-se, seu limite são 50 Maçãs.";
	mes "Se você deseja cancelar, por favor digite '0'.";
	next;
	while(1) {
		input .@amount;
		if (.@amount == 0) {
			mes "[Clarice]";
			mes "Mudou de idéia?";
			mes "Eu entendo.";
			mes "Bem então, espero que possamos jogar depois.";
			close;
		}
		else if (.@amount < 1 || .@amount > 50) {
			mes "[Clarice]";
			mes "Você não pode apostar mais do que 50 Maçãs.";
			mes "Lembre-se, precisamos manter as apostas razoáveis.";
			mes "Por favor digite um valor não superior a 50.";
			next;
			continue;
		}
		mes "[Clarice]";
		mes "Então você estará apostando ^FF0000"+.@amount+"^000000 Maçãs.";
		mes "Certo?";
		next;
		if (select("Sim","Não") == 2) {
			mes "[Clarice]";
			mes "Hum, cometi um erro?";
			mes "Certo, por favor digite o número de Maçãs que você deseja apostar.";
			next;
			continue;
		}
		if (countitem(Apple) <.@amount) {
			mes "Me desculpe, mas você não parecem ter Maçãs suficientes para essa aposta...";
			mes "Você não pode apostar se não tem a aposta, você sabe.";
			next;
			continue;
		}
		delitem (Apple,.@amount);
		mes "[Clarice]";
		mes "Bom!";
		mes "Agora podemos começar este jogo!";
		mes "Irei rolar primeiro.";
		break;
	}
	mes "^3355FF*Rolando e caindo*^000000";
	next;
	.@giveapple = .@amount*2;
	.@table1 = rand(1,6);
	.@table2 = rand(1,6);
	.@tablesub = .@table1+.@table2;
	.@tabletotal = .@tablesub;
	mes "[Clarice]";
	mes "Eu tenho um ^0000FF"+.@table1+"^000000 e um ^0000FF"+.@table2+"^000000.";
	mes "Isso é um total de ^0000FF"+.@tablesub+"^000000.";
	mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, agora é sua vez.";
	next;
	select("Lançar Dado.");
	mes "^3355FF*Rolando e caindo*^000000";
	.@player1 = rand(1,6);
	.@player2 = rand(1,6);
	.@playersub = .@player1+.@player2;
	if (.@playersub > 9 && .@amount > 39) {
		.@player1 = rand(1,6);
		.@player2 = rand(1,6);
		.@playersub = .@player1+.@player2;
	}
	.@playertotal = .@playersub;
	next;
	mes "[Clarice]";
	mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, você tem ^FF0000"+.@player1+"^000000 e ^FF0000"+.@player2+"^000000.";
	mes "O total é ^FF0000"+.@playersub+"^000000 .";
	next;
	mes "[Clarice]";
	if(.@playersub == .@tablesub) {
		mes "Atualmente meu total é ^0000FF"+.@tablesub+"^000000 e ^FF0000"+strcharinfo(PC_NAME)+"^000000, seu total é ^FF0000"+.@playersub+"^000000.";
		mes "Estamos empatados, gostaria de lançar o dado novamente?";
	}
	else if (.@playersub > .@tablesub) {
		mes "Atualmente meu total é ^0000FF"+.@tablesub+"^000000 e ^FF0000"+strcharinfo(PC_NAME)+"^000000, seu total é ^FF0000"+.@playersub+"^000000.";
		mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, atualmente você está ganhando o jogo, gostaria de lançar o dado novamente?";
	}
	else if(.@tablesub > .@playersub) {
		mes "Atualmente meu total é ^0000FF"+.@tablesub+"^000000 e ^FF0000"+strcharinfo(PC_NAME)+"^000000, seu total é ^FF0000"+.@playersub+"^000000.";
		mes "Estou vencendo o jogo.";
		mes "Gostaria de lançar o dado novamente?";
	}
	next;
	switch (select("Lançar Dado.:Cancelar.")) {
		case 1:
		mes "^3355FF*Rolando e caindo*^000000";
		.@player3 = rand(1,6);
		.@playertotal += .@player3;
		next;
		mes "[Clarice]";
		if (.@playertotal > 12) {
			mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, você possui ^FF0000"+.@player3+"^000000 e o total agora é ^FF0000"+.@playertotal+"^000000.";
			mes "Você perdeu o jogo.";
			mes "Me desculpe mas, por favor tente novamente.";
			close;
		}
		else if (.@playertotal < .@tablesub) {
			mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, você possui ^FF0000"+.@player3+"^000000 e o total agora é ^FF0000"+.@playertotal+"^000000.";
			mes "Mesmo que você lance o dado novamente, seu total ainda será menor do que o meu.";
			mes "Você perdeu o jogo. Sinto muito e por favor tente novamente.";
			close;
		}
		else if (.@playertotal == .@tablesub) {
			if (.@tablesub > 8) {
				mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, você possui ^FF0000"+.@player3+"^000000 e o total agora é ^FF0000"+.@playertotal+"^000000.";
				mes "Eu não quero correr nenhum risco, vamos acabar este jogo num empate.";
				mes "Vamos jogar de novo outra hora.";
				close2;
				getitem (Apple,.@amount);
				end;
			}
		}
		else {
			mes "^FF0000"+strcharinfo(PC_NAME)+"^000000, você possui ^FF0000"+.@player3+"^000000 e o total agora é ^FF0000"+.@playertotal+"^000000.";
			mes "Agora é minha vez.";
		}
		break;
		case 2:
		mes "[Clarice]";
		if (.@playersub > .@tablesub) {
			mes "Entendo, você não quer correr risco de perder o jogo.";
			mes "Ok, deixe-me lançar os dados novamente.";
		}
		else if (.@playersub == .@tablesub) {
			if (.@tablesub > 8) {
				mes "Entendo, você não quer correr risco de perder este jogo.";
				mes "Nem eu, vamos acabar este jogo em um empate.";
				mes "Vamos jogar novamente outra hora.";
				close2;
				getitem (Apple,.@amount);
				end;
			}
			mes "Certo.";
			mes "Vamos rolar os dados novamente.";
		}
		else {
			mes "Não faria mal tentar.";
			mes "Bem, eu venci dessa vez.";
			mes "Sinto muito, vamos tentar jogar novamente algum dia.";
			close;
		}
		break;
	}
	next;
	mes "^3355FF*Rolando e caindo*^000000";
	.@table3 = rand(1,6);
	.@tabletotal += .@table3;
	next;
	mes "[Clarice]";
	if (.@tabletotal > 12) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora é ^0000FF"+.@tabletotal+"^000000.";
		mes "Perdi o jogo por que meu total excedeu 12.";
		mes "Deixe-me dar-lhe minhas maçãs.";
		mes "Parabéns, foi um grande jogo.";
		close2;
		getitem (Apple,.@giveapple);
		end;
	}
	else if (.@playertotal > .@tabletotal) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora é ^0000FF"+.@tabletotal+"^000000.";
		mes "Com o total de ^FF0000"+.@playertotal+"^000000 você ganhou este jogo, ^FF0000"+strcharinfo(PC_NAME)+"^000000.";
		mes "Deixe-me dar-lhe minhas maçãs.";
		mes "Foi um grande jogo e espero que possamos jogar novamente em outro momento.";
		close2;
		getitem (Apple,.@giveapple);
		end;
	}
	else if (.@playertotal == .@tabletotal) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora é ^0000FF"+.@tabletotal+"^000000.";
		mes "Com o total de ^FF0000"+.@playertotal+"^000000 este jogo acabou em empate, ^FF0000"+strcharinfo(PC_NAME)+"^000000.";
		mes "Deixe-me dar-lhe suas maçãs de volta.";
		mes "Foi um grande jogo e espero que possamos jogar novamente em outro momento.";
		close2;
		getitem (Apple,.@amount);
		end;
	}
	else if (.@playertotal < .@tabletotal) {
		mes "Tenho ^0000FF"+.@table3+"^000000 e o total agora é ^0000FF"+.@tabletotal+"^000000.";
		mes "Com o total de ^FF0000"+.@playertotal+"^000000 você perdeu o jogo, ^FF0000"+strcharinfo(PC_NAME)+"^000000.";
		mes "Lamento, mas por favor, tente novamente.";
		close;
	}
}