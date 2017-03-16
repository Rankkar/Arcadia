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
| - Por: Spell Master 16/03/2017                                    |
| - Nota: Faz refine/Aprimoramento de equipamentos.                 |
\*-----------------------------------------------------------------*/

-	script	Refiner	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME)+"]";
	mes "Olá meu nome é "+strnpcinfo(NPC_NAME)+", sou um expecialista em realizar aprimoramento em equipamentos.";
	mes "Me diga, existe algum dos seus equipamentos de deseja aprimorar?";
	next;
	switch(select("Cabeça","Vestimenta","Capa","Calçado","Mão Esquerda","Mão Direita","Nada Obrigado")) {
		case 1: .@menuSelect = EQI_HEAD_TOP; break;
		case 2: .@menuSelect = EQI_ARMOR;    break;
		case 3: .@menuSelect = EQI_GARMENT;  break;
		case 4: .@menuSelect = EQI_SHOES;    break;
		case 5: .@menuSelect = EQI_HAND_L;   break;
		case 6: .@menuSelect = EQI_HAND_R;   break;
		case 7:
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Certo, mas sempre que precisar refinar/aprimorar seus equipamentos.";
		mes "Pode me procurar que irei lhe atender com maior prazer.";
		close;
	}
	// Verifica se o item está equipado
	if (!getequipisequiped(.@menuSelect)) {
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Mas você não está equipado com o equipamento para refinar.";
		emotion e_an;
		close;
	}
	// Verifica se é posível refinar o item
	// Ver database de item: Refine: true/false
	else if (!getequipisenableref(.@menuSelect)) {
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Hunnn...? Esse equipamento não pode ser aprimorado.";
		emotion e_what;
		close;
	}
	// Verifica se o item já não está refinado até +10
	else if (getequiprefinerycnt(.@menuSelect) >= 10) {
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Esse equipamento já está refinado em seu limite!";
		mes "Sinto muito mas, não consigo mais trabalhar esse item.";
		emotion e_gasp;
		close;
	}
	else {
		/* Rack para evitar trapacear o NPC */
		// Guardar os dados do item equipado em uma var
		.@RackItem = getequipid(.@menuSelect);
		// Guardar os dados do refinamento atual do item em uma var
		.@RackRefine = getequiprefinerycnt(.@menuSelect);

		// Atribuir itens e valores de acordo com o nível do equipamento
		switch(getequipweaponlv(.@menuSelect)) {
			case 0: .@requirement = 985;  .@value = 2000;  break; // Armaduras, Capas, Calçados
			case 1: .@requirement = 1010; .@value = 50;    break; // Level 1
			case 2: .@requirement = 1011; .@value = 200;   break; // Level 2
			case 3: .@requirement = 984;  .@value = 5000;  break; // Level 3
			case 4: .@requirement = 984;  .@value = 20000; break; // Level 4
		}
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Para realizar o aprimoramento nesse equipamento eu vou precisar de:";
		mes "De 1 "+getitemname(.@requirement)+" que é necessário para o processo.";
		mes "E vou combrar pela taxa de serviço "+.@value+" Zenys.";
		next;
		mes "["+strnpcinfo(NPC_NAME)+"]";
		mes "Posso aprimorar o equipamento?";
		next;
		switch(select("Sim prossiga","Não")) {
			case 1:
			if (Zeny < .@value) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Mas você não possui Zenys o suficiente.";
				close;
			}
			else if (countitem(.@requirement) < 1) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Vou precisar de pelo menos 1 "+getitemname(.@requirement)+" para fazer o aprimoramento.";
				mes "Volte quando tiver o necessário.";
				close;
			}
			else if (getequipisequiped(.@menuSelect) == 0) {
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Mas você removeu o item.";
				emotion e_dots;
				close;
			}
			else {
				if (getequippercentrefinery(.@menuSelect) < 100) {
					mes "["+strnpcinfo(NPC_NAME)+"]";
					mes "^ff0000Esse item já foi refinado no máximo de segurança.";
					mes "Se tentar aprimora-lo novamente ele pode ser destruído, e perdido para sempre!";
					mes "Junto com cartas e quaisquer elementos adicionados a ele!^000000";
					next;
				}
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Tem ceteza que deseja que eu renine/aprimore esse equipamento?";
				next;
				if (select("Sim","Não") == 1) {
					if (getequiprefinerycnt(.@menuSelect) != .@RackRefine || getequipid(.@menuSelect) != .@RackItem) {
						mes "["+strnpcinfo(NPC_NAME)+"]";
						mes "Mas você não estava equipado agora a pouco?";
						emotion e_what;
						close;
					}
					else if (getequippercentrefinery(.@menuSelect) <= rand(100)) {
						Zeny -= .@value;
						delitem .@requirement,1;
						failedrefitem .@menuSelect;
						emotion e_omg;
						mes "["+strnpcinfo(NPC_NAME)+"]";
						mes "AHHHHHHHHHH!!....";
						mes "^bb0000Seu equipamento de despedaçou enquanto eu estava refinando^000000.";
						next;
						mes "["+strnpcinfo(NPC_NAME)+"]";
						mes "Mas eu te avisei que ele podia ser destruído.";
						mes "É tudo questão de sorte.";
						close;
					}
					else {
						Zeny -= .@value;
						delitem .@requirement,1;
						successrefitem .@menuSelect;
						emotion e_heh;
						mes "["+strnpcinfo(NPC_NAME)+"]";
						mes "^009900Que beleza!";
						mes "Mais um aprimoramento bem suscedido!";
						close;
					}
				}
				mes "["+strnpcinfo(NPC_NAME)+"]";
				mes "Tudo bem volte quando quiser fazer algum aprimoramento.";
				close;
			}
			case 2:
			mes "["+strnpcinfo(NPC_NAME)+"]";
			mes "Tudo bem volte quando quiser fazer algum aprimoramento.";
			close;
		}
	}
}

prt_in,63,60,0	duplicate(Refiner)	Hollgrehenn	4_M_03
morocc_in,73,38,6	duplicate(Refiner)	Aragham	4W_M_03
payon,144,173,5	duplicate(Refiner)	Antonio	4_M_ORIENT01
alberta_in,28,58,0	duplicate(Refiner)	Fredrik	4_M_03
yuno_in01,171,21,4	duplicate(Refiner)	Lambert	4_M_ORIENT01
ein_in01,24,87,5	duplicate(Refiner)	Manthasman	4_M_DWARF
lhz_in02,282,20,7	duplicate(Refiner)	Fulerr	4_M_LGTMAN