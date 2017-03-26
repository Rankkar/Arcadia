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
| - Nota: Npcs comuns localizados nos aeroplanos e Aeroportos       |
\*-----------------------------------------------------------------*/

//-------------------------------------------------------------------
// [airplane]
//-------------------------------------------------------------------
airplane,100,69,3	script	Passageiro#ein-1	4_M_EIN_SOLDIER,{
	mes "[Passageiro]";
	mes "Se já pousamos no seu destino e você gostaria de sair do Aeroplano, por favor use as escadas à frente.";
	mes "Obrigado por seu apoio.";
	close;
}

//-------------------------------------------------------------------
airplane,64,94,1	script	Criança de Umbala#ein_p	4_M_UMKID,{
	emotion e_swt2;
	mes "[Criança]";
	mes "Uau, mãe!";
	mes "V-veja isso!";
	mes "Nós estamos voando!";
	mes "N-nós estamos...";
	mes "Estamos conhecendo o céu!";
	close;
}

//-------------------------------------------------------------------
airplane,66,93,3	script	Senhora de Umbala#ein_p	4_F_UMWOMAN,{
	emotion e_dots;
	mes "[Senhora]";
	mes "Shush...";
	mes "Querido, comporte-se!";
	mes "Não se anime tanto enquanto não sairmos deste lugar público!";
	close;
}

//-------------------------------------------------------------------
airplane,71,91,7	script	Homem de Umbala#ein_p	4_M_UMSOLDIER,{
	mes "[Chrmlim]";
	mes "Ei você!";
	mes "Pela sua aparência, percebo que você consegue me entender.";
	mes "^333333*Legal...!*^000000";
	next;
	emotion e_pif;
	mes "[Chrmlim]";
	mes "Tenho ajudado a equipe do Aeroplano, auxiliando seus Tripulantes que têm medo de altura os levanto para pular de bungee jumping em Umbala.";
	mes "Legal, em?";
	next;
	mes "[Chrmlim]";
	mes "Mas...";
	mes "Alguns deles não podem superar seus medos.";
	mes "Devem participar de algumas experiências, ^333333em Nifflheim^000000.";
	close;
}

//-------------------------------------------------------------------
airplane,250,58,2	script	Funcionário#air	1_F_02,{
	mes "[Assistente do Aeroplano]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroplano.";
	mes "Como posso ajudá-l"+(Sex?"o?":"a?")+"";
	next;
	switch (select("Usando o Aeroplano:Cabine do Capitão:Instalações:Cancelar")) {
		case 1:
			mes "[Assistente do Aeroplano]";
			mes "Quando você ver uma mensagem anunciando que nós chegamos ao seu destino.";
			mes "Por favor, use uma das saídas localizadas ao Norte e ao Sul do aeroplano.";
			next;
			mes "[Assistente do Aeroplano]";
			mes "Se acontecer de você perder sua parada, não se preocupe.";
			mes "O Aeroplano está constantemente na rota e você terá outra chance de descer em seu destino.";
			close;
		case 2:
			mes "[Assistente do Aeroplano]";
			mes "A Cabine do Capitão fica na parte frontal do Aeroplano.";
			mes "Lá, você pode conhecer o capitão e o piloto do Aeroplano.";
			close;
		case 3:
			mes "[Assistente do Aeroplano]";
			mes "O Aeroplano possui vários mini-jogos para o entretenimento de todos os passageiros.";
			close;
		case 4:
			mes "[Assistente do Aeroplano]";
			mes "Bem, desejo-lhe uma boa estadia durante o vôo em nosso Aeroplano.";
			mes "Obrigado e tenha um bom dia.";
			close;
	}
}

//-------------------------------------------------------------------
airplane,80,71,2	script	Zerta#01airplane	4_M_BUDDHIST,{
	mes "[Zerta]";
	mes "Oh, olá Aventureir"+(Sex?"o?":"a?")+".";
	mes "Estou atualmente em uma Jornada Santa.";
	mes "Orando em propósito do continente de Rune-Midgard.";
	close;
}

//-------------------------------------------------------------------
airplane,65,63,4	script	Maelin#01airplane	4_F_06,{
	mes "[Maelin]";
	mes "Humm, este avião vai para Lutie, não?";
	mes "Estou esperando há muito tempo, mas até agora nada de anúncio sobre Lutie.";
	close;
}

//-------------------------------------------------------------------
airplane,72,34,6	script	Aanos#01airplane	4_F_GON,{
	mes "[Aanos]";
	mes "Oh wooow!";
	mes "O céu tem uma aparência tão diferente e adorável, visto daqui de cima!";
	close;
}

//-------------------------------------------------------------------
airplane,221,158,2	script	Piloto#air	4_M_EIN_SOLDIER,{
	switch (rand(1,4)) {
		case 1:
			mes "[Piloto]";
			mes "Faz bastante tempo desde que eu experimentei um bom e gelado álcool.";
			mes "Mas a profissão requer que eu esteja sempre sóbrio!";
			next;
			mes "[Piloto]";
			mes "Sempre beba com responsabilidade!";
			mes "Ainda sim, não lembro a última vez que entrei de férias.";
			mes "Sim, uma bebida, uma TV e tudo ficará ótimo.";
			emotion e_sob;
			close;
		case 2:
			mes "[Piloto]";
			mes "Cara, o clima está ótimo hoje.";
			mes "Brilho, o céu está aberto com uma boa visibilidade e segurança, um vôo despreocupado.";
			close;
		case 3:
			mes "[Piloto]";
			mes "Você sabe, seu capitão é um homem respeitado.";
			mes "Ele e seu irmão são atualmente os mais conhecidos na indústria aérea.";
			mes "Quem diría que nos tornariamos capitães de vôo tão bons?";
			next;
			mes "[Piloto]";
			mes "Apenas entre nós...";
			mes "Tenho que dizer a você o Papai Noel foi para algum lugar com renas e elfos que trabalham para ele.";
			mes "Aquele cara é um gênio!";
			close;
		case 4:
			mes "[Piloto]";
			mes "Você sabe, toda essa coisa de pilotar no ar, é algo bastante recente, você sabe não é?";
			mes "Sim, temos um Aeroplano voando a uma incrível velocidade.";
			next;
			emotion e_omg;
			mes "[Piloto]";
			mes "Ainda assim, há sempre algo sério, realmente acontecendo.";
			mes "Quer dizer, estávamos treinando enquanto o Aeroplano estava sendo inventado.";
			mes "Não é uma loucura?!";
			close;
	}
}

//-------------------------------------------------------------------
airplane,238,54,7	script	Aventureiro#air	1_M_ORIENT01,{
	mes "[Aventureiro]";
	mes "Você sabe, uma das sacerdotisas do templo em Rachel parecia estar encrencada por alguma razão.";
	mes "Eu deveria perguntar o que estava incomodando ela, e oferecer a minha ajuda.";
	close;
}

//-------------------------------------------------------------------
// Placa de saída
airplane,240,64,5	script	Saída#air1a::ExitAirplane	4_BOARD3,{
	end;
}
airplane,247,64,5	duplicate(ExitAirplane)	Saída#air1b	4_BOARD3
airplane,240,40,1	duplicate(ExitAirplane)	Saída#air2a	4_BOARD3
airplane,247,40,1	duplicate(ExitAirplane)	Saída#air2b	4_BOARD3

//-------------------------------------------------------------------
// - [airplane01] -
//-------------------------------------------------------------------
airplane_01,250,58,2	script	Funcionário#air01	1_F_02,{
	mes "[Equipe do Aeroplano]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroplano.";
	mes "Como posso ajudá-l"+(Sex?"o?":"a?")+"";
	next;
	switch (select("Usando o Aeroplano:Cabine do Capitão:Instalações:Cancelar")) {
		case 1:
			mes "[Assistente do Aeroplano]";
			mes "Quando você ver o aviso anunciando que chegamos no seu destino desejado.";
			mes "Por favor, use uma das saídas localizadas nas partes norte e sul do Aeroplano.";
			next;
			mes "[Assistente do Aeroplano]";
			mes "Se acontecer de você perder sua parada, não se preocupe.";
			mes "O Aeroplano está constantemente na rota e você terá outra chance para chegar ao seu destino pretendido.";
			close;
		case 2:
			mes "[Assistente do Aeroplano]";
			mes "A Cabine do Capitão fica na parte frontal do Aeroplano.";
			mes "Lá, você pode conhecer o capitão e o piloto do Aeroplano.";
			close;
		case 3:
			mes "[Assistente do Aeroplano]";
			mes "O Aeroplano possui vários mini-games para o entretenimento de todos os passageiros.";
			close;
		case 4:
			mes "[Assistente do Aeroplano]";
			mes "Bem, desejo-lhe uma boa estadia durante o vôo em nosso Aeroplano.";
			mes "Obrigado e tenha um bom dia.";
			close;
	}
}

//-------------------------------------------------------------------
airplane_01,221,158,2	script	Piloto#air_01	4_M_EIN_SOLDIER,{
	switch (rand(1,4)) {
		case 1:
			mes "[Piloto]";
			mes "Longitude, 131 graus leste.";
			mes "Latitude, 37 graus norte.";
			mes "Estamos no curso certo, capitão.";
			close;
		case 2:
			mes "[Piloto]";
			mes "Parece ser realmente um dia nublado.";
			mes "Sempre é difícil navegar quando os céus não estão limpos.";
			mes "Acho que nós vamos precisar amplificar o radar.";
			close;
		case 3:
			mes "[Piloto]";
			mes "O Capitão é um bom homem e eu não consigo pensar em uma pessoa mais fina para comandar este Aeroplano.";
			mes "Ainda assim, ele é muito duro, um verdadeiro motorista servo.";
			next;
			mes "[^ff0000Tarlock^000000]";
			mes "^ff0000Ei...!^000000";
			mes "^ff0000Menos bate-papo^000000";
			mes "^ff0000e mais pilotagem!^000000";
			next;
			mes "[Piloto]";
			mes "C-certo, senhor!";
			mes "(Viu o que eu quero dizer?)";
			close;
		default:
			mes "[Piloto]";
			mes "Este uniforme é bem elegante, mas é muito chamativo para usar pelo Aeroplano.";
			next;
			mes "[Piloto]";
			mes "...";
			mes "......";
			mes "Realmente ninguém nunca entra neste quarto.";
			mes "E o capitão é uma rena.";
			mes "Eu podia tirar a minha cueca.";
			next;
			emotion e_omg;
			mes "[Piloto]";
			mes "Oh...! Olá!";
			mes "E-e-está aproveitando o vôo?!";
			close;
	}
}

//-------------------------------------------------------------------
airplane_01,69,63,2	script	Mendel#01airplane_01	1_M_JOBTESTER,{
	mes "[Mendel]";
	mes "Como eu esperava, as comidas do vôo são de qualidade 3 estrelas no melhor.";
	mes "*Harrrumph*";
	mes "Eu realmente deveria ter trazido meu cozinheiro";
	mes "Eu desfrutaria de uma verdadeira refeição.";
	close;
}

//-------------------------------------------------------------------
airplane_01,83,61,2	script	Dianne#01airplane_01	1_F_MARIA,2,2,{
	mes "[Dianne]";
	mes "É tão estranho!";
	mes "Eu venho visitar o Capitão do Aeroplano e tudo que vejo é esse alce estranho.";
	mes "Oh! Não esperava por essa...";
	close;

	OnTouch:
	emotion e_sob;
	end;
}

//-------------------------------------------------------------------
airplane_01,71,31,2	script	Swordsman Shimizu#air_01	1_M_MOC_LORD,{
	mes "[Espadachim Shimizu]";
	mes "Finalmente, depois de cinco anos esperando...";
	mes "Terei minha vingança!";
	next;
	mes "[Espadachim Shimizu]";
	mes "Eu só...";
	mes "Tenho que me certificar de que não perderei minhaparada.";
	mes "Mas logo, muito breve, terei minha vingança.";
	close;
}

//-------------------------------------------------------------------
// Placa de saída
airplane_01,240,64,5	script	Saída#air_011a::ExitAirplane01	4_BOARD3,{
	end;
}
airplane_01,247,64,5	duplicate(ExitAirplane01)	Saída#air_011b	4_BOARD3
airplane_01,240,40,1	duplicate(ExitAirplane01)	Saída#air_012a	4_BOARD3
airplane_01,247,40,1	duplicate(ExitAirplane01)	Saída#air_012b	4_BOARD3

//-------------------------------------------------------------------
// - [airport] -
//-------------------------------------------------------------------
airport,174,41,6	script	Jovem#air	4W_M_03,{
	mes "[Runnan]";
	mes "...E esse é o porque de eu viajar ao redor do mundo.";
	mes "Meus chefes tem um olho bom para as melhores e exoticas mercadorias, então eu compro elas e faço as entregas.";
	next;
	mes "[Runnan]";
	mes "Não teve uma vez que eles me fizeram coletar Jellopy, embora seja comum coletar essas coisas hoje em dia.";
	mes "Agora que eu pensei sobre, porque eles precisam de tantas coisas?";
	close;
}

//-------------------------------------------------------------------
airport,176,41,4	script	Velho#air	4_M_ORIENT01,{
	mes "[Zhen Lan]";
	mes "Agora, fiquei sabendo que os monstrons que vivem aqui por perto carregam metais que brilham com uma sublime e linda luz.";
	mes "Elegante, huh?";
	next;
	mes "[Zhen Lan]";
	mes "Estes metais são muito bons para se fabricar vasos de flores.";
	mes "Meu amigo, que é um bom fazedor de bonecos, me disse isso.";
	mes "Ele faz bonecos utilizando todo tipo de materiais.";
	next;
	mes "[Zhen Lan]";
	mes "Ele os faz fashion com couro bem curtido, e coisas como pena de aves, e usa Cyfar e Zargon para fazer os olhos.";
	mes "Ele até usa Jellopy nos pés para balancear a boneca.";
	next;
	mes "[Zhen Lan]";
	mes "Eu acho que isto mostra que estas coisas que parecem inuteis possa a ser util para alguém.";
	mes "Então não se preocupe em carregar muitas coisas.";
	mes "Cedo ou tarde, elas podem servir para alguém.";
	close;
}
