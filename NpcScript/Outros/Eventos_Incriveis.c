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
| - Desenvolvido por: Spell Master 29/03/2017                       |
| - Nota: Funcionárias da Corporação Eventos Incríveis              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Script Base ] -
// ------------------------------------------------------------------
-	script	ZondaStaff	FAKE_NPC,{
	cutin "zonda_01",2;
	if (getskilllv(NV_BASIC) < 6) {
		mes "[Funcionária]";
		mes "Me desculpe mas você deve pelo menos ter suas ^777777Habilidades Básicas^000000.";
		mes "Ampliadas até o Nível 6 para usar nossos serviços.";
		close2; cutin "",255; end;
	}
	mes "[Funcionária]";
	mes "Bem-vind"+(SEX_MALE?"o":"a")+" à Corporação Eventos Incríveis.";
	mes "Nossa equipe está sempre trabalhando para auxiliar a Corporação Kafra em seus serviços prestados.";
	mes "Como posso ajudá-l"+(Sex?"o":"a")+" hoje?";
	switch(select("Salvar","Usar Armazém","Alugar um Carrinho","Senha no Armazém","Cancelar")) {
		case 1: // Salvar
		if (strnpcinfo(NPC_MAP) == "lighthalzen") { savepoint strnpcinfo(NPC_MAP),94,240; }
		if (strnpcinfo(NPC_MAP) == "hugel") { savepoint strnpcinfo(NPC_MAP),96,155; }
		if (strnpcinfo(NPC_MAP) == "rachel") { savepoint strnpcinfo(NPC_MAP),113,137; }
		if (strnpcinfo(NPC_MAP) == "veins") { savepoint strnpcinfo(NPC_MAP),204,103; }
		mes "[Funcionária]";
		mes "Seu ponto de retorno foi salvo.";
		next;
		mes "[Funcionária]";
		mes "Agradecemos por você utilizar nossos serviços.";
		close2; cutin "",255; end;
		case 2: // Usar Armazém
		if (Zeny < 40) {
			mes "[Funcionária]";
			mes "Me desculpe mas você deve possuir pelo menos 40 Zenys.";
			mes "Para pagar a taxa de uso do Armazém.";
			close2; cutin "",255; end;
		}
		else if (#kafra_code) {
			mes "[Funcionária]";
			mes "Digite a senha do seu armazém";
			input .@storagecode;
			next;
			if (.@storagecode != #kafra_code) {
				mes "[Funcionária]";
				mes "Você não digitou a senha corretamente.";
				close2; cutin "",255; end;
			}
			else {
				mes "[Funcionária]";
				mes "Agradecemos por você utilizar nossos serviços.";
				Zeny -= 40;
				close2;
				openstorage;
				cutin "",255; end;
			}
		}
		else {
			mes "[Funcionária]";
			mes "Agradecemos por você utilizar nossos serviços.";
			Zeny -= 40;
			close2;
			openstorage;
			cutin "",255; end;
		}
		case 3: // Alugar um Carrinho
		if (BaseClass != Job_Merchant) {
			mes "[Funcionária]";
			mes "O serviço de Aluguel de Carrinhos só está disponível para mercadores e evoluções.";
			close2; cutin "",255; end;
		}
		else if (getskilllv(MC_PUSHCART) == 0) {
			mes "[Funcionária]";
			mes "Desculpe, mas para alugar um carrinho, você primeiro deve aprender a habilidade ^777777Usar Carrinho^000000.";
			close2; cutin "",255; end;
		}
		else if (checkcart() == 1) {
			mes "[Funcionária]";
			mes "Vejo que você já possui um carrinho.";
			mes "Assim não pode ter outro, o serviço somente está disponível em um carrinho para cada cliente.";
			close2; cutin "",255; end;
		}
		else {
			if (Zeny < 1200) {
				mes "[Funcionária]";
				mes "Me desculpe mas você deve possuir pelo menos 1.200 Zenys.";
				mes "Para pagar o aluguel do carrinho.";
				close2; cutin "",255; end;
			}
			else {
				Zeny -= 1200;
				mes "[Funcionária]";
				mes "Agradecemos por você utilizar nossos serviços.";
				close2;
				setcart;
				cutin "",255; end;
			}
		}
		case 4: // Senha no Armazém
		mes "[Funcionária]";
		if (#kafra_code) {
			mes "O que deseja fazer com sua senha do armazém?";
			next;
			switch(select("Modificar > 5.000 Zenys","Remover > 1000 Zenys")) {
				case 1:
				mes "[Funcionária]";
				if (Zeny < 5000) {
					mes "Me desculpe mas você deve possuir pelo menos 5.000 Zenys.";
					mes "Para poder modificar sua senha do armazém.";
					close2; cutin "",255; end;
				}
				mes "Por favor digite sua senha atual para verificação.";
				input .@storagecode;
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcionária]";
					mes "Você não digitou a senha corretamente.";
					close2; cutin "",255; end;
				}
				else {
					mes "[Funcionária]";
					mes "Certo agora podemos prosseguir.";
					mes "Por favor digite sua nova senha.";
					mes "Sua senha deve ser maior que ^0000bb1000^000000 e menor que ^7777779999^000000.";
					input .@newstoragecode;
					next;
					if (.@newstoragecode == #kafra_code) {
						mes "[Funcionária]";
						mes "Você deve digitar uma senha diferente.";
						close2; cutin "",255; end;
					}
					else if ((.@newstoragecode < 1000) || (.@newstoragecode > 9999)) {
						mes "[Funcionária]";
						mes "A senha digitada é inválida!";
						close2; cutin "",255; end;
					}
					else {
						mes "[Funcionária]";
						mes "Sua senha foi modificada.";
						mes "Use-a na próxima vez que for usar o armazém.";
						Zeny -= 5000;
						#kafra_code = .@newstoragecode;
						next;
						mes "[Funcionária]";
						mes "Agradecemos por você utilizar nossos serviços.";
						close2; cutin "",255; end;
					}
				}
				case 2: // Remover a senha
				mes "[Funcionária]";
				if (Zeny < 1000) {
					mes "Me desculpe mas você deve possuir pelo menos 1.000 Zenys.";
					mes "Para poder remover sua senha do armazém.";
					close2; cutin "",255; end;
				}
				mes "Por favor digite sua senha atual para verificação.";
				input .@storagecode;
				next;
				if (.@storagecode != #kafra_code) {
					mes "[Funcionária]";
					mes "Você não digitou a senha corretamente.";
					close2; cutin "",255; end;
				}
				else {
					mes "[Funcionária]";
					mes "Você quer realmenter remover sua senha?!";
					mes "Não se preocupe, a qualquer momento poderá solicitar outra.";
					next;
					if (select("Sim remover a senha","Manter minha senha") == 1) {
						mes "[Funcionária]";
						mes "Sua senha do armazém foi removida.";
						Zeny -= 1000;
							#kafra_code = 0;
						next;
						mes "[Funcionária Kafra]";
						mes "Agradecemos por você utilizar nossos serviços.";
						close2; cutin "",255; end;
					}
					mes "[Funcionária]";
					mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
					close2; cutin "",255; end;
				}
			}
		}
		else {
			mes "No momento seu armazém não possui senha.";
			mes "Deseja adicionar a senha?";
			next;
			switch(select("Adicionar Senha > 1.000 Zenys","Cancelar")) {
				case 1:
				while (1) {
					mes "[Funcionária]";
					mes "Por favor digite a senha para seu armazém.";
					mes "Ela deve ser maior que ^0000bb1000^000000 e menor que ^7777779999^000000.";
					input .@storagecode;
					next;
					if ((.@storagecode < 1000) || (.@storagecode > 9999)) {
						mes "[Funcionária]";
						mes "A senha digitada é inválida!";
						close2; cutin "",255; end;
					}
					else {
						mes "[Funcionária]";
						mes "Você tem certeza que deseja adicionar a senha ao seu armazém?";
						mes "Poderá remover-la ou modificar-la quando quiser.";
						mes "Mas será necessário digitar a senha que adicionou para confirmação.";
						next;
						switch(select("Adicionar Senha","Mais Informações","Digitar a senha novamente","Cancelar")) {
							case 1:
							Zeny -= 1000;
							#kafra_code = .@storagecode;
							next;
							mes "[Funcionária]";
							mes "Agradecemos por você utilizar nossos serviços.";
							close2; cutin "",255; end;
							case 2:
							mes "^bb0000O serviço de proteção do armazém com senha visa impedir que invasores.";
							mes "Tenham acesso aos itens em seu armazém.";
							mes "Por isso ao tentar acessar o armazém, modificar a senha ou remover-la.";
							mes "Será necessário digitar a senha atual antes.^000000";
							next;
							mes "Caso esqueça de sua senha poderá recuperar-la pelo painel de controle do servidor.";
							mes "Inserindo os dados pessoais de sua conta.";
							next;
							if (select("Voltar a digitar a senha","Cancelar") == 2) {
								mes "[Funcionária]";
								mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
								close2; cutin "",255; end;
							}
							break;
							case 3:
							break;
							case 4:
							mes "[Funcionária]";
							mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
							close2; cutin "",255; end;
						}
					}
				}
				case 2:
				mes "[Funcionária]";
				mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
				close2; cutin "",255; end;
			}
		}
		case 5: // Cancelar
		mes "[Funcionária]";
		mes "Estaremos sempre ao seu dispor para servir-l"+(SEX_MALE?"o":"a")+".";
		close2; cutin "",255; end;
	}
}

// ------------------------------------------------------------------
// - [ Duplificações ] -
// ------------------------------------------------------------------
lighthalzen,94,248,4	duplicate(ZondaStaff)	Eventos Incríveis#ZondaLhz	4_M_ZONDAMAN
hugel,88,168,4	duplicate(ZondaStaff)	Eventos Incríveis#ZondaHug	4_M_ZONDAMAN
rachel,109,138,5	duplicate(ZondaStaff)	Eventos Incríveis#ZondaRac	4_M_ZONDAMAN
veins,208,128,5	duplicate(ZondaStaff)	Eventos Incríveis#ZondaVein	4_M_ZONDAMAN