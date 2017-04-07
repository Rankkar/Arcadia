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
| - Nota: Npcs comuns na cidade einbroch                            |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbroch,94,267,3	script	Funcionário#ein01	4_F_02,{
	mes "[Equipe do Aeroporto]";
	mes "Bem-vind"+(Sex?"o":"a")+" ao Aeroporto de Einbroch.";
	mes "Utilize essa porta para embarcar no digirível que te leva para Juno, Lighthalzen e Hugel na República de Schwarzwald.";
	next;
	mes "[Equipe do Aeroporto]";
	mes "Caso seja Einbroch o seu destino, desça as escadas e fale com nossa Equipe de Recepção para levá-lo até o terminal principal.";
	mes "Obrigado, e tenha um voo agradável.";
	close;
}

// ------------------------------------------------------------------
einbroch,259,326,3	script	Leslie#ein_1	4_F_EINOLD,{
	mes "[Leslie]";
	mes "Uma senhora velha como eu não pode respirar esse ar!";
	mes "Como é que as pessoas ainda vivem aqui, com essa fumaça?";
	mes "Claro, o ar de Einbech não não é puro, mas o ar aqui em Einbroch é muito pior!";
	next;
	mes "[Leslie]";
	mes "Eu odeio vir para cá as vezes!";
	mes "O ar é todo poluído e está cidade está cheia de presos idiota!";
	mes "Mas aqui vende-se coisas que eu não encontro em casa...";
	close;
}

// ------------------------------------------------------------------
einbroch,236,191,3	script	Tan#ein	4_M_EINMAN,{
	mes "[Tan]";
	mes "Todas as fábricas aqui em Einbroch estão causando sérios problemas de poluição do ar.";
	next;
	mes "[Tan]";
	mes "Eu sou engenheiro do Aeroporto e todo dia, o dia todo, lido com manchas de óleo e todo tipo de poluentes.";
	mes "Estou surpreso que ainda não fiquei doente.";
	next;
	mes "[Tan]";
	mes "Mesmo assim, eu tomo cuidado como posso.";
	mes "Aonde quer que eu vá nesta cidade, tem essa fumaça vermelha, eu sempre uso minha Máscara Cirúrgica.";
	mes "Se você for ficar por aqui um tempo, você deveria carregar uma também.";
	close;
}

// ------------------------------------------------------------------
einbroch,228,121,5	script	Pequeno Toby#ein-1	4_M_EINMAN,{
	mes "[Pequeno Toby]";
	mes "Me perdoe...";
	mes "Mas estou perdido!";
	mes "Eu não posso encontrar mamãe e papai!";
	next;
	mes "[Pequeno Toby]";
	mes "E-eu estou no Aeroporto?!";
	mes "Meus pais deveriam vir me buscar, mas eu ainda não encontrei eles!";
	mes "Nós acabamos de nos mudar, então não sei aonde ficam as coisas!";
	next;
	mes "[Pequeno Toby]";
	mes "E-espere!";
	mes "Aonde esta indo?!";
	mes "Não me deixe aqui, estou sozinho...!";
	close;
}

// ------------------------------------------------------------------
einbroch,40,116,1	script	Eng. do Aeroporto#ein-1	4_M_EINMAN,{
	mes "[Engenheiro do Aeroporto]";
	mes "E-Ei!";
	mes "Não toque em minha preciosa Burielle!";
	mes "Eu terminei os reparos dela e agora ela esta dormindo!";
	mes "A-afaste-se dela!";
	next;
	switch(select("Quem é Burielle?","Desculpe.")) {
		case 1:
		mes "[Engenheiro do Aeroporto]";
		mes "Burielle é o modelo de Aeronave mais bonito construido nos últimos dez anos!";
		mes "Ela pode estar no chão agora, mas com as minhas mãos curadores, ela conquistará os céus denovo!";
		next;
		switch(select("Ah!","Uh huh...")) {
			case 1:
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Entendo, então você esta trabalhando na restauração desta magnifica espécime de Aeronave.";
			next;
			mes "[Engenheiro do Aeroporto]";
			mes "Sim.";
			mes "Eu agradeço isso apenas se você tomar cuidado.";
			mes "Eu coloquei muito amor concerto de Burielle...";
			close;
			case 2:
			mes "["+strcharinfo(PC_NAME)+"]";
			mes "Uh huh...";
			mes "Certo.";
			mes "Por um segundo atrás, pensei que você estava falando de uma pessoa, mas agora percebi que não, você sabe, como um louco.";
			next;
			mes "["+strcharinfo(0)+"]";
			mes "Oh, você disse, \"modelo mais bonito\"?";
			mes "Todas as Aeronaves pra mim parecem iguais, essa aqui não é especial contudo.";
			mes "Você esta ficando maluco, pobre coitado.";
			next;
			emotion e_an;
			mes "[Airship Engineer]";
			mes "O-oSque...?!";
			close;
		}
		case 2:
		mes "[Engenheiro do Aeroporto]";
		mes "Bem, pelo menos você sabe o que fez de errado.";
		mes "Agora pare de perturbar ela e saia!";
		close;
	}
}

// ------------------------------------------------------------------
einbroch,294,312,3	script	Centzu#ein	4_M_EINMAN2,{
	mes "[Centzu]";
	mes "Eu ja vivi aqui a um bom tempo atrás e agora vejo que esta grande cidade continua crescendo a cada dia que passa.";
	next;
	mes "[Centzu]";
	mes "Como Einbroch cresceu tanto e tão rápido?";
	mes "Eu ainda não consigo acreditar que ela se desenvolveu tanto.";
	mes "Bem, eu acredito que não é da minha conta.";
	mes "Nada que eu fizer fará diferença... ";
	next;
	mes "[Centzu]";
	mes "Mesmo com uma industrialização rápida não pode ser boa para a natureza e para as pessoas, eu simplesmente me sento, e assisto o que acontece e aproveito a vida...";
	close;
}

// ------------------------------------------------------------------
einbroch,232,255,5	script	Khowropher#ein	4_M_EINOLD,{
	mes "[Khowropher]";
	mes "^666666*Tosse Tosse*^000000";
	mes "O ar aqui é tão grosso e sujo!";
	mes "E é pior para nós velhos com problemas respiratórios!";
	next;
	mes "[Khowropher]";
	mes "Eu não ligo se eles continuam contruindo mais e mais fábricas e casas nesta cidade.";
	mes "Assim, eu gostaria de passar o resto da minha vida em algum lugar quieto e com o ar limpo...";
	next;
	mes "[Khowropher]";
	mes "Então novamente, Einbroch é minha cidade natal, e eu não posso simplesmente sair.";
	mes "Creio que é meu destino sofrer com este ar até o dia que eu morrer.";
	mes "^666666*Sigh...*^000000";
	close;
}

// ------------------------------------------------------------------
einbroch,143,109,5	script	Khetine#ein	4_M_EINMAN,{
	mes "[Khetine]";
	mes "Ultimamente, temos conversado sobre este prédio vazio que foi convertido em algum tipo de instalação misteriosa.";
	next;
	mes "[Khetine]";
	mes "Tudo parece muito sombrio, mas eu acho que não é realmente o meu trabalho saber sobre isso.";
	mes "Quero dizer, se isso não me afeta, porque deveria me preocupar?";
	close;
}

// ------------------------------------------------------------------
einbroch,229,149,3	script	Sleik#ein	4_M_EINMAN2,{
	mes "[Sleik]";
	mes "Estranhamente, temos uma Estação de Trem que todo mundo tem chamado de uma vitória pra ciência.";
	mes "Eu digo, não deveriam estar mais impressionados com a Aeronave?";
	next;
	mes "[Sleik]";
	mes "Agora, se você quer saber aonde o trem atualmente vai, eu não saberei te dizer.";
	mes "Afinal, nunca andei nele.";
	mes "Mas eu continuo achando que ter uma Estação de Trem própria é muito bom.";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,113,211,3	script	Teinz#ein	4_M_REPAIR,{
	mes "[Teinz]";
	mes "Se você simplesmente me der dinheiro, serei seu escravo!";
	mes "Não tem nada que eu não faria. Tudo é um jogo justo.";
	mes "Inferno, eu ate ficaria nú se você me pagasse o suficiente.";
	next;
	mes "[Teinz]";
	mes "Se você me pagar o quanto preciso, eu trabalharei duro para você, em qualquer serviço.";
	mes "Claro, mineração é difícil, mas enquanto os zenys continuarem a vir, estarei feliz.";
	mes "Heh heh heh.";
	close;
}

// ------------------------------------------------------------------
ein_in01,48,220,5	script	Lowe#ein	4_M_REPAIR,{
	mes "[Lowe]";
	mes "...";
	mes "......";
	next;
	mes "[Lowe]";
	mes "...";
	mes "......";
	mes ".........";
	next;
	mes "[Lowe]";
	mes "Ei.";
	mes "Porque você esta olhando pra mim assim?";
	mes "Não temos tempo para conversar no trabalho.";
	mes "Se Canphotii capturar você provavelmente será punido...";
	next;
	mes "[Lowe]";
	mes "Oh espere...";
	mes "Você não trabalha aqui.";
	mes "Me desculpe, esse tipo de reação é um velho hábito pra mim.";
	close;
}

// ------------------------------------------------------------------
ein_in01,87,237,5	script	Dinje#ein	4_F_EINWOMAN,{
	mes "[Dinje]";
	mes "Você sabe porque uma senhora como eu trabalha em uma fábrica?";
	mes "Vou te dizer porque...";
	next;
	mes "[Dinje]";
	mes "Meu marido folgado, Gesin, esta deitado ali no chão.";
	mes "Então eu tenho que trabalhar para poder nos sustentar!";
	next;
	mes "[Dinje]";
	mes "Não podemos descançar nem mesmo um segundo se queremos juntar dinheiro suficiente para ficar ricos e saudáveis um dia.";
	mes "Você me entende?";
	next;
	mes "[Dinje]";
	mes "Bem, meu marido óbviamente não!";
	mes "Como ele pode não saber como o mundo real funciona?!";
	mes "Ei, chute ele pra mim se ele não acordar logo!";
	close;
}

// ------------------------------------------------------------------
ein_in01,84,218,3	script	Tsuen#ein	4_M_REPAIR,{
	mes "[Tsuen]";
	mes "Havia um tempo em que eu sonhava em ser um aventureiro assim como você.";
	mes "Mas isso foi a muito tempo atrás...";
	next;
	mes "[Tsuen]";
	mes "Agora, não sou nada além de um gerente da fábrica.";
	mes "Mesmo assim, não sendo o melhor trabalho, eu estou muito satisfeito.";
	mes "Eu tenho certeza que as pessoas gostam dos produtos que supervisiono...";
	next;
	mes "[Tsuen]";
	mes "Talvez minha vida estava destinada para ser dessa maneira, mesmo que não seja como eu tenha planejado.";
	mes "Mas o tempo virá quando entrar de férias e viajar pelo mundo todo assim que eu tiver uma chance!";
	next;
	mes "[Tsuen]";
	mes "Eu espero que esse dia chegue quando eu puder encontra-lo neste vasto mundo e comprimenta-lo como um grande amigo aventureiro!";
	close;
}

// ------------------------------------------------------------------
ein_in01,103,239,1	script	Gesin#ein	4_M_DIEMAN,{
	mes "[Gesin]";
	mes "Arrrgh!";
	mes "Isso esta me matando!";
	mes "Porque eu poderia ser rico?";
	mes "Qual o problema em viver como a vivemos?";
	next;
	mes "[Gesin]";
	mes "Eu tenho um problema com a minha atual forma de viver.";
	mes "Mas sempre a velha bola e as correntes não concordam.";
	mes "Porque ela é tão obsecada com riqueza e poder?";
	next;
	mes "[Gesin]";
	mes "Bem, no meu caso, eu gosto de ajuda-la, mas eu não posso levantar!";
	mes "Estou exausto e meu corpo esta sobrecarregado.";
	mes "Não tenho força contudo.";
	next;
	mes "[Gesin]";
	mes "Isso é horrível.";
	mes "Eu deveria estar descançando ao invés de me preocupando em fazer dinheiro...";
	close;
}

// ------------------------------------------------------------------
ein_in01,33,275,1	script	Pevtatin#ein	4_M_EINMINER,{
	mes "[Pevtatin]";
	mes "Meu bom Deus!";
	mes "Eu estou estressado!";
	mes "Isto tem sido sem parar desde que me mudei pra ca!";
	next;
	mes "[Pevtatin]";
	mes "O serviço é pesado e o chefe ja me odeia!";
	mes "Eu não me mudei pra ca para isso!";
	mes "Mas, o pagamento é decenete, então acho que vou ficar por aqui mais um pouco.";
	next;
	mes "[Pevtatin]";
	mes "Aqui vai...!";
	close;
}

// ------------------------------------------------------------------
ein_in01,36,204,3	script	Rombell#ein	4_M_REPAIR,{
	mes "[Rombell]";
	mes "É ótima que a fábrica está fazendo bons negócios e traçando um lote de lucros.";
	mes "Mas eu ainda tenho uma preocupação maior.";
	next;
	mes "[Rombell]";
	mes "O tamanho da poluição que este lugar vem causando é horrível!";
	mes "Nós temos estas máquinas cuspindo gases tóxicos o dia todo!";
	mes "O ar não vai se manter seguro por muito tempo...";
	next;
	mes "[Rombell]";
	mes "Eu digo, o ar que respiramos agora mesmo está muito sujo e as coisas só vão ficando pior.";
	mes "Como nós poderiamos solucionar este problema?";
	close;
}

// ------------------------------------------------------------------
ein_in01,64,271,3	script	Vonstein#ein	4_M_EINMAN,{
	mes "[Vonstein]";
	mes "Olhando para este metal liquido e quente borbulhando me dão uma sensação tão boa.";
	mes "É como se isso pudesse derreter qualquer coisa!";
	next;
	mes "[Vonstein]";
	mes "Imagine cobrindo uma rua inteira de pessoas com isso daqui!";
	mes "Oh, me desculpe se falava como louco!";
	mes "Estava só brincando.";
	close;
}

// ------------------------------------------------------------------
ein_in01,49,202,3	script	Dorf#ein	4_M_REPAIR,{
	mes "[Dorf]";
	mes "Máquinas são tão convenientes.";
	mes "Basta olhar para a corporação realizando facilmente as tarefas que seriam difíceis de fazer sozinhos.";
	next;
	mes "[Dorf]";
	mes "Agora sim é isso que eu chamo tecnologia!";
	mes "Claro, é preciso esforço e dinheiro pra fazer uma destas, mas do que me interessa?";
	next;
	mes "[Dorf]";
	mes "Eu não tenho problemas, desde que essa coisa louca mantenha o trabalho do modo que eu quero!";
	close;
}

// ------------------------------------------------------------------
ein_in01,68,209,5	script	Khashurantze#ein	4_M_EIN_SOLDIER,{
	mes "[Khashurantze]";
	mes "Me desculpe, mas você precisa de uma autorização especial para entrar.";
	mes "Terei que pedir que saia agora.";
	close2;
	warp ("einbroch",179,63);
	end;
}

// ------------------------------------------------------------------
ein_in01,85,261,3	script	Zherin#ein	4_M_REPAIR,{
	mes "[Zherin]";
	mes "Eu estou encarregado desta grande folhanlha que contém toda essa ebulição de magma.";
	next;
	mes "[Zherin]";
	mes "Mesmo que não precise de muito trabalho, esse trabalho é muito cansativo.";
	mes "Eu tenho que prestar muita atenção o tempo todo.";
	mes "É muito estressante.";
	next;
	mes "[Zherin]";
	mes "Ainda assim, estou orgulhoso do meu trabalho, uma vez que tenho responsabilidade de garantir a segurança dos trabalhadores.";
	mes "Contudo, não chegue muito perto da fornalha.";
	mes "Caso contrário poderá ser queimado por acidente!";
	close;
}

// ------------------------------------------------------------------
ein_in01,43,252,3	script	Canphotii#ein	4_M_EIN_SOLDIER,{
	mes "[Canphotii]";
	mes "Rápido, rápido!";
	mes "Entre logo no ritmo!";
	mes "Qualquer que trabalhar lento demais será punido!";
	next;
	mes "[Canphotii]";
	mes "Não consegue entender isso?!";
	mes "Agora volte para sua estação de trabalho!";
	mes "Espere, você não trabalha aqui não é?";
	mes "Se não, pare de zanzar por ae!";
	next;
	mes "[Canphotii]";
	mes "Você não poderia ter entrado aqui!";
	mes "Eu não acredito que deixaram você entrar!";
	mes "Isso requer uma medida disciplinar extrema!";
	close;
}

// ------------------------------------------------------------------
ein_in01,31,217,3	script	Cendadt#ein	4_M_REPAIR,{
	mes "[Cendadt]";
	mes "Esta fábrica tem um monte de coisas que precisam de conserto!";
	mes "É incrível que ela continue funcionando!";
	next;
	mes "[Cendadt]";
	mes "Sorte para nós, eu ouvi dizer alguns aventureiros altruístas tem doado materiais para ajudar a manter esta fábrica de cair aos pedaços... ou pior.";
	mes "Mas é apenas um boato.";
	next;
	mes "[Cendadt]";
	mes "^666666*Sigh*^000000";
	mes "Mesmo que isso for verdade, não há nada que se possa fazer.";
	mes "Ninguém tem coragem de desafiar o sistema, você sabe?";
	next;
	mes "[Cendadt]";
	mes "Eu...";
	mes "É melhor eu voltar ao trabalho antes que eu entre numa fria...";
	close;
}