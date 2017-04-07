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
| - Nota: Informativos em geral                                     |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
prontera,158,213,1	script	Direção#Signprt	HIDDEN_NPC,{
	mes "Castelo de Prontera para o Norte";
	mes "Aldebaran para o Norte";
	mes "Geffen para o Noroeste";
	mes "Campos de Prontera para o Leste";
	mes "Campos de Prontera para o Sul";
	mes "Alberta para o Sudeste";
	mes "Morroc para o Sudoeste";
	mes "Comodo para o Sudoeste";
	mes "Campos de Prontera para o Oeste";
	close;
}

prontera,156,197,1	script	Informativo#Signprt2	HIDDEN_NPC,{
	mes "Procura-se: Duas Presilhas";
	mes "Por favor, entre em contato...";
	mes "-O nome está um pouco apagado -";
	mes "Vende-se: Espada bastarda usada";
	mes "Aceito qualquer oferta!";
	mes "Entrar em contato com Abramulious";
	mes "Procura-se ajuda: Compra ou vende Peco Peco usado?";
	mes "Contado com Grasisium em Morroc agora!";
	close;
}

prontera,278,212,1	script	Informativo#Signprt3	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "Por favor, manter Prontera limpa.";
	close;
}

prontera,150,326,1	script	Informativo#Signprt4	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "Cidadões de Prontera são bem vindos ao castelo de Prontera.";
	close;
}

prontera,31,212,1	script	Informativo#Signprt5	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "PROCURADO";
	mes "iROGM01";
	mes "MORTO ou VIVO";
	mes "*Assasino e ladrão de Glast Heim*";
	mes "RECOMPENSA: 50,000 Zeny.";
	mes "Contato: iROGM02";
	close;
}

prontera,165,305,1	script	Informativo#Signprt6	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "Nós esperamos que você tenha uma ótima estadia em Prontera.";
	close;
}

prontera,145,304,1	script	Informativo#Signprt7	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Nota:";
	mes "Eu perdi meu carrinho de mão no Mt. Mjolnir, se alguem encontrar, por favor, me diga. Toda minha vida está nesse carrinho!";
	close;
}

// ------------------------------------------------------------------
morocc,144,84,1	script	Informativo#Signmoc	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Procura-se: Guarda costas para proteger minha loga contra assaltantes.";
	mes "Por favor, entre em contato com Bucher";
	close;
}

morocc,145,83,1	script	Informativo#Signmoc2	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Vendo, Peco Peco bem preparado!";
	mes "Esse é um belo exemplar que foi montado somente por mim, ele vem com uma sela, um arreio, e...";
	close;
}

morocc,32,174,1	script	Informativo#Signmoc3	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "^0099FFMulheres de Morroc revoltadas!^000000";
	mes "Um rescente estudo demonstrou que a maioria dos homens em";
	mes "Morroc preferem as mulheres de Geffen. Sendo que 90 dos 100 hemens em";
	mes "Morroc alegaram que tiveram relações com as mulheres";
	mes "de Geffen fora da região de Morroc.";
	next;
	mes "^993300- Continuação do comunicado -^000000";
	mes "-Eu prefiro a companhia delas, isso é tudo... disse um homem de Morroc.";
	mes "-não é que eu não goste das mulheres de Morroc, então não sei qual é o problema...";
	mes "Existem problemas emocionais que estressam no que diz respeito";
	mes "as atividades desses homens.";
	mes "Caçar parece ser a primeira prioridade deles,";
	mes "mais do que se relacionar com mulheres da região.";
	close;
}

morocc,168,264,1	script	Informativo#Signmoc4	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "^CC0033Guerreiro Leal!^000000";
	mes "Se você é alguem que gosta de uma batalha e sente que não pode ser parado, jogador contra jogador até a morte!";
	mes "Apresente-se em Prontera se acha que tem o que é necessário!";
	close;
}

morocc,298,211,1	script	Informativo#Signmoc5	HIDDEN_NPC,{
	mes "^993300- Avisos de Geffen -^000000";
	mes "Lembrem-se Bruxos... O que importa não são todas suas habilidades, mas é o mago que as usa que conta!";
	close;
}

// ------------------------------------------------------------------
geffen,116,58,1	script	Informativo#Signgef	HIDDEN_NPC,{
	mes "^993300- The Geffen Bulletin Reads -^000000";
	mes "Remember Wizard's...It's not how many skills you know, it's the magic that counts!";
	close;
}

geffen,113,104,1	script	Informativo#Signgef2	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Vende-se: Novo boneco de Chon Chon!";
	mes "Um ótimo presente para dar a pessoa amada, entre em contado comigo!";
	mes "- Nome parece estar borrado -";
	mes " ";
	mes "Compra-se: Manto!";
	mes "Eu estou congelando e não tenho zeny, por favor, me ajude!";
	mes "Contatar Edionyus";
	close;
}

geffen,119,190,1	script	Informativo#Signgef3	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Campos de Geffen ao Norte";
	mes "Aldebaram ao Nordeste";
	mes "Glast Heim ao Noroeste";
	mes "Campos de Geffen ao Leste";
	mes "Morroc ao Sul";
	mes "Prontera ao Sudeste";
	mes "Alberta ao Suceste";
	mes "Comodo ao Sudoeste";
	mes "Campos de Geffen ao Oeste";
	close;
}

// ------------------------------------------------------------------
aldebaran,181,172,1	script	Informativo#Signald	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Procura-se:";
	mes "Eu perdi meu Bongun de estimação, não tive culpa, ele simplesmente fugiu...";
	mes "Se você ver ele, por favor, me avise. Recompensa para quem encontrar ele!";
	close;
}

aldebaran,133,104,1	script	Informativo#Signald2	HIDDEN_NPC,{
	mes "^993300- Comunidado de Aldebaran -^000000";
	mes "''Aproveite sua estadia em Aldebaran''";
	close;
}

aldebaran,54,223,1	script	Informativo#Signald3	HIDDEN_NPC,{
	mes "^993300- Comunicado -^000000";
	mes "Preciso de ajuda:";
	mes "´Nós observamos os jovens, são fortes e atléticos que";
	mes "estão interessados em uma profissão estável com tempo integral para ferreiro. Se você está interessado, entre em contato com Altiregen";
	mes "em Geffen!";
	close;
}

aldebaran,217,222,1	script	Informativo#Signald4	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "E aí Papai Nel de Lutie!";
	mes "- Isso parece um rebisco -";
	close;
}

// ------------------------------------------------------------------
alberta,35,241,1	script	Informativo#Signalb	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Bem vindo para Alberta, paraiso dos Mercadores.";
	close;
}

alberta,37,39,1	script	Informativo#Signalb2	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Bem vindo.";
	close;
}

alberta,99,151,1	script	Informativo#Signalb3	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Ferramentas completas para carrinho de mão!";
	mes "Você precisa de ferramentas? Nós temos!";
	mes "Venha, nós nunca fechamos!";
	close;
}

alberta,196,152,1	script	Informativo#Signalb4	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Atracabem e envio de cargas. Para informações relativas";
	mes "ao envio e recebimento, por favor...";
	mes "- Você não pode ler o resto -";
	close;
}

alberta,149,54,1	script	Informativo#Signalb5	HIDDEN_NPC,{
	mes "^993300- Quadro de avisos -^000000";
	mes "Bem vindo.";
	close;
}