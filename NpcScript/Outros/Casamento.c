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
| - Script: Spell Master/ eAthena/ rAthena/ Hercules                |
| - Nota: Realiza casamento entre personagens                       |
\*-----------------------------------------------------------------*/

prt_church,97,100,4	script	Casamenteira#w	1_F_LIBRARYGIRL,{
	cutin "wedding_marry01",2;
	if (Upper == 2) {
		mes "[Casamenteira]";
		mes "Olá!";
		mes "Meu nome é Maria e eu estou aqui para munir você com informações relacionadas ao casamento.";
		mes "Agora, você tem alguma pergunta?";
		next;
		if (select("Eu quero me casar.","Eu não preciso de sua ajuda!") == 1) {
			mes "[Casamenteira]";
			mes "Oh, sinto muito, mas crianças não podem se casar.";
			mes "Por que você não desfruta os prazeres simples da infância?";
			cutin "",255;
			close2;
			end;
		}
		mes "[Casamenteira]";
		mes "Oh, claro não, você é uma criança pequena não pode se casar há muitas leis contra.";
		cutin "",255;
		close2;
		end;
	}
	mes "[Casamenteira]";
	mes "Casamento é a bela união de duas almas que tem escolhido estar juntas para sempre, para dividir suas alegrias e vida. ";
	mes "Há um alguém especial assim em sua vida?";
	next;
	switch(select("Sobre o Casamento","Sobre o Procedimento","Solicitar se casar","Nada")) {
		case 1:
		mes "[Casamenteira]";
		mes "O Sábio e benevolente Rei Tristam III administrava as cerimônias de casamento.";
		mes "Mas ele é não tem muito tempo hábil para fazer por causa dos seus deveres reais e horário com seus passos apressados freneticamente.";
		next;
		mes "[Casamenteira]";
		mes "O Bispo Vomars, o bispo do amor, é agora o oficializador das cerimônias de casamento.";
		next;
		mes "[Casamenteira]";
		mes "Quando você se casa com alguém, é para o resto de sua vida, então pense cuidadosamente antes de fazer ou aceitar uma proposta de casamento.";
		break;
		case 2:
		mes "[Casamenteira]";
		mes "A primeira parte do procedimento do casamento é canditatar-se por completo.";
		mes "Quando a noiva e o noivo terminarem de se candidatar, eles têm que formar um grupo de dois.";
		next;
		mes "[Casamenteira]";
		mes "Depois de formar um grupo dos dois, o casal deve então falar com o Bispo Vomars.";
		next;
		mes "[Casamenteira]";
		mes "O noivo tem que falar primeiro e deve dizer o nome exato de sua noiva ao Bispo.";
		next;
		mes "[Casamenteira]";
		mes "Depois, a noiva falará com o Bispo e lhe dirá o nome do noivo dela.";
		mes "Se estes nomes são ditos corretamente ao Bispo, eles poderão permutar os anéis.";
		next;
		mes "[Casamenteira]";
		mes "Quando os anéis de casamento são permutados, o casal está atado no matrimônio.";
		next;
		mes "[Casamenteira]";
		mes "É claro, antes deste ponto, há muitas chances para mudar de ideia, então...";
		next;
		mes "[Casamenteira]";
		mes "Se há muitos casais que querem se casar de uma vez.";
		mes "Por favor forme uma fila e falem com o Bispo Vomars na ordem de que só um casal possa se casar de cada vez.";
		next;
		mes "[Casamenteira]";
		mes "Finalmente, fale o nome exato de s"+(SEX_MALE?"ua":"eu")+" companheir"+(SEX_MALE?"a":"o")+" ao Bispo Vomars, sem desperdiçar muito tempo.";
		next;
		mes "[Casamenteira]";
		mes "Se você levar muito tempo, a cerimônia automaticamente será cancelada e você terá de começar de novo.";
		next;
		mes "[Casamenteira]";
		mes "As noivas precisam se lembrar que eles só têm 3 minutos para terminar de falar com Bispo Vomars depois que o noivo dela terminar de falar com ele.";
		next;
		if (select("Obrigado, isso ajuda muito!","Dizer o nome do companheiro?") == 1) {
			mes "[Casamenteira]";
			mes "Bem, eu estou aqui para ajudar os casamentos a proceder tão suavemente quanto possível.";
			next;
			mes "[Casamenteira]";
			mes "Se houver algo que você não entendeu, sinta à vontade para perguntar de novo.";
			cutin "",255;
			close2;
			end;
		}
		mes "[Casamenteira]";
		mes "O modo mais fácil para escrever o nome de seu companheiro para o bispo é enviar uma mensagem privada a seu companheiro.";
		mes "Então clique na seção de nome a esquerda que é partida do lembrete de conversa.";
		next;
		mes "[Casamenteira]";
		mes "Aperte o 'Ctrl' e 'C' do teclado para copiar o nome.";
		next;
		mes "[Casamenteira]";
		mes "Então, você pode colar o nome dentro do prompt apertando o 'Ctrl' e 'V' do teclado.";
		mes "Parece fácil, certo?";
		next;
		mes "[Casamenteira]";
		mes "Certo, agora deixe-me.";
		mes "Praticar dando o nome de seu companheiro usando o método que eu há pouco descrevi.";
		next;
		input .@partner$;
		mes "[Casamenteira]";
		mes "Certo, depois que você decidir se casar, volte a mim e submeta sua candidatura.";
		mes "Verei você depois aventureiro.";
		break;
		case 3:
		cutin "wedding_marry02",2;
		if (Sex == SEX_MALE) {
			mes "[Casamenteira]";
			mes "Então você gostaria de se casar?";
			mes "Como um noivo, você precisa preparar ^3377FF1Smoking^000000 e pagar ^3377FF1,300,000^000000 Zeny.";
			mes "Noivas têm que prover os próprios 3377FF1Vestidos de Noiva^000000 e pagar uma taxa de ^3377FF1,200,000^000000 Zeny.";
			mes "Noivos devem trazer um Smoking e pagar 1,300,000 Zeny para se casar.";
		}
		else {
			mes "[Casamenteira]";
			mes "Então você gostaria de se casar?";
			mes "Noivas têm que obter os próprios Vestidos de Noiva e pagar uma taxa de 1,200,000 Zeny.";
		}
		next;
		mes "[Casamenteira]";
		mes "Noivas e Noivos ambos precisam ter ^3377FF1 Anel de Diamante^000000 para ser trocado com seu companheiro.";
		next;
		mes "[Casamenteira]";
		mes "Você precisa de todos esses itens prontos quando você submete sua solicitação da cerimônia do casamento.";
		next;
		mes "[Casamenteira]";
		mes "A noiva esperada e o noivo devem ambos ter que completar o processo de solicitação antes que o casamento possa acontecer.";
		next;
		mes "[Casamenteira]";
		mes "Agora, você gostaria de candidatar-se ao matrimônio?";
		next;
		if (select("Sim:Não") == 1) {
			if (getpartnerid()) {
				cutin "wedding_marry02",2;
				mes "[Casamenteira]";
				mes "Eu sinto muito, mas você não pode soilicitar por outro casamento!";
				next;
				mes "[Casamenteira]";
				mes "Eu não posso permitir que traia sua esposa igual a isso, e por outro lado, poligamia não é legal aqui em Rune-Midgard.";
				break;
			}
			else if (wedding_sign == 1) {
				mes "[Casamenteira]";
				mes "Você já não completou a solicitação?";
				next;
				mes "[Casamenteira]";
				mes "Humm, tenha certeza que s"+(SEX_MALE?"ua":"eu")+" companheir"+(SEX_MALE?"o":"a")+" também terminou o processo de solicitação, e então fale com Bispo Vomars.";
				break;
			}
			else if (BaseLevel < 45) {
				mes "[Casamenteira]";
				mes "Humm, você precisa ser forte o bastante para proteger a pessoa que você ama antes de poder considerar o matrimônio.";
				cutin "",255;
				close2;
				end;
			}
			else if (countitem(Diamond_Ring) < 1) {
				mes "[Casamenteira]";
				mes "Hmm?";
				mes "Você esqueceu de trazer os Anéis de Diamante para trocar com seu companheiro durante a cerimônia de casamento.";
				cutin "",255;
				close2;
				end;
			}
			else if (Sex == SEX_MALE) {
				if (Zeny < 1300000) {
					mes "[Casamenteira]";
					mes "Sinto muito, mas você não tem os 1,300,000 Zeny que todos os noivos precisam pagar para a cerimônia de casamento.";
					cutin "",255;
					close2;
					end;
				}
				else if (countitem(Smoking) < 1) {
					mes "[Casamenteira]";
					mes "Onde está seu Smoking?";
					mes "Você absolutamente tem que usá-lo durante a cerimônia de casamento!";
					cutin "",255;
					close2;
					end;
				}
			}
			else if (Sex == SEX_FEMALE) {
				if (Zeny < 1200000) {
					mes "[Casamenteira]";
					mes "Sinto muito, mas todas as noivas precisam pagar a taxa de 1,200,000 Zeny para continuar com a cerimônia de casamento.";
					mes "Talvez você poderia pedir para seu companheiro te ajudar com o dinheiro?";
					cutin "",255;
					close2;
					end;
				}
				else if (countitem(Wedding_Dress) < 1) {
					mes "[Casamenteira]";
					mes "Oh querida, você esqueceu seu Vestido de Noiva?";
					mes "Corra e encontre-o, então traga-o para mim você precisa absolutamente dele para o casamento! ";
					cutin "",255;
					close2;
					end;
				}
			}
			mes "[Casamenteira]";
			mes "Bem, Parace que vocês tem tudo pronto.";
			next;
			mes "[Casamenteira]";
			mes "Embora eu não esteja certa de quem sua companheira seja.";
			mes "Deixe-me ser a primeira a dar meus parabéns para vocês em seu casamento a seguir!";
			next;
			mes "[Casamenteira]";
			mes "Agora, vamos começar a solicitação.";
			next;
			mes "[Casamenteira]";
			mes "Por favor escreva abaixo o seu nome correto aqui.";
			next;
			while(1) {
				input .@name$;
				if (.@name$ != strcharinfo(PC_NAME)) {
					mes "[Casamenteira]";
					mes "Hum, você tem que escrever abaixo o seu nome exatamente como está exibido.";
					mes "Talvez você precise copiar e colá-lo?";
					next;
				}
				else {
					break;
				}
			}
			mes "[Casamenteira]";
			mes "Ótimo, parece que nós terminamos sua solicitação.";
			mes "Lembre-se que você precisará falar com o Bispo Vomars o nome correto da sua companheira quando você falar com ele mais tarde, certo?";
			next;
			mes "[Casamenteira]";
			mes "Quando sua companheira termina com o processo de solicitação.";
			mes "Ambos precisaram falar com o Bispo para começar a cerimônia de casamento.";
			emotion e_lv;
			next;
			mes "[Casamenteira]";
			if (Sex == SEX_MALE) {
				mes "Desde que você seja o noivo, você precisa falar com o Bispo primeiro.";
				mes "Quando você tiver terminado, será a vez da sua noiva falar com o Bispo Vomars.";
				Zeny -= 1300000;
				delitem Smoking,1;
			}
			else {
				mes "Desde que você seja a noiva, você precisa esperar que o noivo fale com o Bispo Vomars primeiro.";
				mes "Quando ele tiver terminado, será sua vez de falar o Bispo Vomars.";
				Zeny -= 1200000;
				delitem Wedding_Dress,1;
			}
			delitem 2613,1;
			wedding_sign = 1;
			cutin "",255;
			close2;
			end;
		}
		mes "[Casamenteira]";
		mes "Não...?";
		mes "Bem, quando você estiver pronto para o matrimônio.";
		mes "Sinta-se livre para voltar a mim de forma que você possa aceitar, certo?";
		break;
		case 4:
		cutin "wedding_marry02",2;
		donpcevent "Exército de Solteiros#Pr::OnEnable";
		donpcevent "Exército de Solteiros#Gf::OnEnable";
		donpcevent "Exército de Solteiros#Mc::OnEnable";
		donpcevent "Exército de Solteiros#Pa::OnEnable";
		donpcevent "Exército de Solteiros#Am::OnEnable";
		donpcevent "Exército de Solteiros#Gn::OnEnable";
		emotion e_omg;
		mes "[Exército de Solteiros]";
		mes "^CC9933Você tem que aprimorar itens por si próprio para fazer um grande equipamento!^000000 ";
		donpcevent "Exército de Solteiros#Pr::OnEmote";
		next;
		mes "[Exército de Solteiros]";
		mes "^330099É uma perca de tempo formar grupos em cavernas!";
		mes "Eu posso fazer isso por si próprio!^000000 ";
		donpcevent "Exército de Solteiros#Gf::OnEmote";
		next;
		mes "[Exército de Solteiros]";
		mes "^666666Eu trenei tudo, por mim mesmo desde que nasci, e de todo modo para mudar meu trabalho!^000000 ";
		donpcevent "Exército de Solteiros#Mc::OnEmote";
		next;
		mes "[Exército de Solteiros]";
		mes "^666600Eu Escolhi passar o Natal sozinho, jogando solitariamente e fazendo encruzilhadas de palavras!^000000 ";
		donpcevent "Exército de Solteiros#Pa::OnEmote";
		next;
		mes "[Exército de Solteiros]";
		mes "^CC9966Mulheres podem quebrar meu espírito, mas elas nunca levarão... minha....";
		mes "LIBERDADE!^000000 ";
		donpcevent "Exército de Solteiros#Am::OnEmote";
		next;
		mes "[Exército de Solteiros]";
		mes "^669900...Nós somos livres!!!";
		mes "Nós somos o Invencível Exército de Solteiros!^000000 ";
		donpcevent "Exército de Solteiros#Gn::OnEmote";
		close2;
		cutin "wedding_marry01",255;
		emotion e_swt;
		donpcevent "Exército de Solteiros#Pr::OnInit";
		donpcevent "Exército de Solteiros#Gf::OnInit";
		donpcevent "Exército de Solteiros#Mc::OnInit";
		donpcevent "Exército de Solteiros#Pa::OnInit";
		donpcevent "Exército de Solteiros#Am::OnInit";
		donpcevent "Exército de Solteiros#Gn::OnInit";
		end;
	}
	close2;
	cutin "wedding_marry01",255;
	end;
}
// -------------------------------------------------------------------
// - [ Solteiros ] -
// -------------------------------------------------------------------
prt_church,97,102,0	script	Exército de Solteiros#Pr	8W_SOLDIER,{
	mes "[Exército de Solteiros]";
	mes "^CC9933Você tem que aprimorar itens por si próprio para fazer um grande equipamento!^000000 ";
	close;

	OnInit:
	disablenpc "Exército de Solteiros#Pr";
	end;

	OnEnable:
	enablenpc "Exército de Solteiros#Pr";
	emotion e_go;
	end;

	OnEmote:
	emotion e_rock;
	end;
}

prt_church,98,102,0	script	Exército de Solteiros#Gf	4_M_GEF_SOLDIER,{
	mes "[Exército de Solteiros]";
	mes "^330099É uma perca de tempo formar grupos em cavernas!";
	mes "Eu posso fazer isso por si próprio!^000000 ";
	close;

	OnInit:
	disablenpc "Exército de Solteiros#Gf";
	end;

	OnEnable:
	enablenpc "Exército de Solteiros#Gf";
	emotion e_go;
	end;

	OnEmote:
	emotion e_rock;
	end;
}

prt_church,99,102,0	script	Exército de Solteiros#Mc	4_M_MOC_SOLDIER,{
	mes "[Exército de Solteiros]";
	mes "^666666Eu trenei tudo por mim mesmo desde que nasci, e de todo modo para mudar meu trabalho!^000000 ";
	close;

	OnInit:
	disablenpc "Exército de Solteiros#Mc";
	end;

	OnEnable:
	enablenpc "Exército de Solteiros#Mc";
	emotion e_go;
	end;

	OnEmote:
	emotion e_rock;
	end;
}

prt_church,100,102,0	script	Exército de Solteiros#Pa	4_M_PAY_SOLDIER,{
	mes "[Exército de Solteiros]";
	mes "^666600Eu Escolhi passar o Natal sozinho, jogando solitariamente e fazendo encruzilhadas de palavras!^000000 ";
	close;

	OnInit:
	disablenpc "Exército de Solteiros#Pa";
	end;

	OnEnable:
	enablenpc "Exército de Solteiros#Pa";
	emotion e_go;
	end;

	OnEmote:
	emotion e_rock;
	end;
}

prt_church,101,102,0	script	Exército de Solteiros#Am	8_M_JPNSOLDIER,{
	mes "[Exército de Solteiros]";
	mes "^CC9966Mulheres podem quebrar meu espírito, mas elas nunca levarão... minha...";
	mes "LIBERDADE!^000000 ";
	close;

	OnInit:
	disablenpc "Exército de Solteiros#Am";
	end;

	OnEnable:
	enablenpc "Exército de Solteiros#Am";
	emotion e_go;
	end;

	OnEmote:
	emotion e_rock;
	end;
}

prt_church,102,102,0	script	Exército de Solteiros#Gn	8_M_TWSOLDIER,{
	mes "[Exército de Solteiros]";
	mes "^669900...Nós somos livres!!!";
	mes "Nós somos o Invencível Exército de Solteiros!^000000 ";
	close;

	OnInit:
	disablenpc "Exército de Solteiros#Gn";
	end;

	OnEnable:
	enablenpc "Exército de Solteiros#Gn";
	emotion e_go;
	end;

	OnEmote:
	emotion e_rock;
	end;
}

// ---------------------------------------------------------------------------------
// - [ Bispo ] -
// ---------------------------------------------------------------------------------
prt_church,100,128,4	script	Bispo#w	1_M_PASTOR,{
	cutin "wedding_bomars01",2;
	if (Upper == 2) {
		mes "[Vomars]";
		mes "Saudações, criança você está perdido?";
		mes "Hum.";
		mes "Você sabe onde sua mamãe e seu papai estão?";
		close2;
		cutin "wedding_bomars01",255;
		end;
	}
	if (!getpartnerid()) {
		if (!$wedding) {
			if (wedding_sign == 1) {
				getpartymember(getcharid(CHAR_ID_PARTY));
				.@partymembercount = $@partymembercount;
				if (.@partymembercount == 2) {
					if (Sex == SEX_MALE) {
						$wedding = 1;
						initnpctimer;
						mes "[Vomars]";
						mes "Jovens Apaixonados, por favor lembrem-se desde momento pelo resto de suas vidas.";
						next;
						mes "[Vomars]";
						mes "Que o futuro de vocês seja abençoado com paz e alegria.";
						next;
						mes "[Vomars]";
						mes "Que o amor de vocês possa crescer mais a cada dia que passa.";
						next;
						mapannounce strnpcinfo(NPC_MAP),"É o pedido de matrimônio do noivo, Senhor "+strcharinfo(PC_NAME)+"...",bc_map;
						mes "[Vomars]";
						mes "Até o fim do mundo, você deve ficar ao lado daquela que você realmente ama, para apoiá-la e protegê-la.";
						next;
						mes "[Vomars]";
						mes "Agora, deixe eu saber o nome da sua noiva?";
						next;
						input $wed_bride$;
						mes "[Vomars]";
						mes "Senhor "+strcharinfo(PC_NAME)+"...";
						mes "Você jura pela sua vida que para sempre você vai amá-la e tomará conta da sua noiva, Senhorita "+$wed_bride$+"?";
						next;
						select("Eu aceito.");
						$wed_groom$ = strcharinfo(PC_NAME);
						mes "[Vomars]";
						mes "Agora, é a vez da sua noiva fazer seu voto de casamento.";
						mes "Que ela venha aqui na frente...";
						close2;
						mapannounce strnpcinfo(NPC_MAP),"O noivo, Senhor "+strcharinfo(PC_NAME)+", fez seus votos para a Senhorita "+$wed_bride$+"...",bc_map;
						cutin "",255;
						end;
					}
					mes "[Vomars]";
					mes "Sinto muito, mas o noivo precisa falar comigo primeiro nessa ordem para começar o casamento.";
					mes "É um antigo protocolo formado.";
					mes "Mas eu admito que ele mantém que as coisas corram suavemente.";
					cutin "",255;
					close2;
					end;
				}
				mes "[Vomars]";
				mes "Antes que você possa estar casado, primeiro você precisar fazer um grupo de dois com sua companheira.";
				cutin "",255;
				close2;
				end;
			}
			mes "[Vomars]";
			mes "Vocês precisam acertar o matrimônio com a casamenteira antes que vocês consigam casar.";
			next;
			mes "[Vomars]";
			mes "A Casamenteira dirá o que vocês precisam fazer para preparar o matrimônio.";
			cutin "",255;
			close2;
			end;
		}
		else if ($wedding == 1) {
			if (wedding_sign == 1) {
				getpartymember(getcharid(CHAR_ID_PARTY));
				.@partymembercount = $@partymembercount;
				if (.@partymembercount == 2) {
					if (Sex == SEX_FEMALE) {
						if (strcharinfo(PC_NAME) == $wed_bride$) {
							mes "[Vomars]";
							mes "Jovens Apaixonados, por favor lembrem se desde momento pelo resto das suas vidas.";
							next;
							mes "[Vomars]";
							mes "Que o futuro de vocês seja abençoado com paz e alegria.";
							next;
							mes "[Vomars]";
							mes "Que o amor de vocês possa crescer mais a cada dia que passa.";
							next;
							mapannounce strnpcinfo(NPC_MAP),"Vamos ouvir o que a noiva, Senhorita "+$wed_bride$+", tem a dizer...",bc_map;
							mes "[Vomars]";
							mes "Senhorita "+$wed_bride$+"...";
							mes "Você jura ficar verdadeiramente com "+$wed_groom$+", estar ao seu lado, não importa o quanto perigoso possa ser?";
							next;
							if (select("^FF0000Não.^000000","Eu aceito.") == 1) {
								cutin "wedding_bomars03",2;
								mapannounce strnpcinfo(NPC_MAP),"Próximo casal, por favor prossiga...",bc_map;
								mes "[Vomars]";
								mes "Então "+$wed_groom$+" não é o que queria casar?";
								mes "Hum.";
								mes "Eu sinto profudamente por este mal entendido...";
								$wedding = 0;
								close2;
								stopnpctimer;
								cutin "",255;
								end;
							}
							mes "[Vomars]";
							mes "Você jura verdadeiramente fidelidade e paciência?";
							mes "Você casará com "+$wed_groom$+"?";
							next;
							if (select("Sim, Eu caso.","^FF0000Não.^000000") == 1) {
								if (isloggedin(getcharid(CHAR_ID_ACCOUNT,$wed_groom$))) {
									if (marriage($wed_groom$)) {
										wedding;
										sc_start SC_WEDDING,3600000,1;
										getitem Bride_Ring,1;
										attachrid(getcharid(CHAR_ID_ACCOUNT,$wed_groom$));
										sc_start SC_WEDDING,3600000,1;
										getitem Bridegroom_Ring,1;
										detachrid;
										attachrid(getcharid(CHAR_ID_ACCOUNT,$wed_bride$));
										cutin "wedding_bomars02",2;
										mapannounce strnpcinfo(NPC_MAP),"Agora Eu os declaro, "+$wed_groom$+" e "+$wed_bride$+", Marido e Mulher.",bc_map;
										mes "[Vomars]";
										mes "Pelo poderes a mim concebidos como Bispo Real do Reino de Rune-Midgard, agora eu os declaro marido e mulher.";
										next;
										mes "[Vomars]";
										mes "Que o futuro de vocês seja abençoado com muitas alegrias.";
										next;
										mes "[Vomars]";
										mes "E por último...";
										mes "Sempre sejam";
										mes "felizes, querida";
										mes $wed_bride$+"...";
										$wed_groom$ = "";
										$wed_bride$ = "";
										$wedding = 0;
										close2;
										stopnpctimer;
										cutin "",255;
										detachrid;
										end;
									}
								}
								cutin "wedding_bomars03",2;
								mes "[Vomars]";
								mes "Parece que seu noivo saiu antes da cerimônia termina.";
								next;
								mes "[Vomars]";
								mes "Por favor tente novamente assim que ele retornar.";
								cutin "",255;
								close2;
								end;
							}
							else {
								cutin "wedding_bomars03",2;
								mapannounce strnpcinfo(NPC_MAP),"Escutem! "+$wed_bride$+" Rejeitou o pedido de casamento de "+$wed_groom$+"!",bc_map;
								mes "[Vomars]";
								mes "Hum. Parece que você mudou de ideia.";
								next;
								mes "[Vomars]";
								mes "Embora eu sinto muito pelo o noivo, você deve fazer o que o seu coração falar que é correto.";
							}
							$wed_groom$ = "";
							$wed_bride$ = "";
							$wedding = 0;
							close2;
							stopnpctimer;
							cutin "",255;
							end;
						}
						callsub S_Busy;
					}
					callsub S_Busy;
				}
				callsub S_Busy;
			}
			if (strcharinfo(PC_NAME) == $wed_bride$) {
				mes "[Vomars]";
				mes "Hum? Parece que a Casamenteira ainda não recebeu sua solitação de matrimônio.";
				next;
				mes "[Vomars]";
				mes "Por favor fale com ela assim nós poderemos começar a cerimônia de casamento.";
				cutin "",255;
				close2;
				end;
			}
			callsub S_Busy;
		}
		callsub S_Busy;
	}
	mes "[Vomars]";
	mes "Eu desejo a vocês felicidades eternas.";
	next;
	mes "[Vomars]";
	mes "Não importa como escuro o presente possa ser, sempre fique ao lado de sua amada e olhe para o futuro com esperança.";

	S_Busy:
	if ($wed_groom$ != "" && $wed_bride$ != "") {
		mes "[Vomars]";
		mes "O casamento da Senhorita "+$wed_bride$+" e do Senhor "+$wed_groom$+" está em andamento.";
		mes "Por favor controle sua voz.";
		cutin "",255;
		close2;
		end;
	}
	mes "[Vomars]";
	mes "^FFFFFFEstou conduzindo um casamento para outro casal agora, então por favor espere pacientimente por sua vez.";
	mes "Obrigado pela compreensão...^000000 ";
	cutin "",255;
	close2;
	end;

	OnInit:
	$wedding = 0;
	end;

	OnStop:
	stopnpctimer;
	end;

	OnReset:
	$wed_groom$ = "";
	$wed_bride$ = "";
	$wedding = 0;
	end;

	OnTimer180000:
	mapannounce strnpcinfo(NPC_MAP),"Você respondeu tarde demais... Próximo casal, por favor prossiga.",bc_map;
	$wed_groom$ = "";
	$wed_bride$ = "";
	$wedding = 0;
	stopnpctimer;
	end;
}