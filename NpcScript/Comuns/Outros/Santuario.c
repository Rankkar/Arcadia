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
| - Vers�o: Spell Master                                            |
| - Nota: Npcs comuns no Santu�rio de Rachel                        |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ ra_temple ] -
// ------------------------------------------------------------------
ra_temple,148,91,3	script	Disc�pulo#temple	4_F_MASK1,{
	mes "[Disc�pulo Akarna]";
	mes "Cheshrumnir...";
	mes "Dizem que um dia, nossa deusa Freya vai descer a este lugar no auge de sua gl�ria.";
	mes "Eu espero que eu viva pra ver isto.";
	close;
}

// ------------------------------------------------------------------
ra_temple,115,148,7	script	Disc�pulo#temple2	4_F_MASK1,{
	mes "[Disc�pulo Yakum]";
	mes "......";
	mes ".........";
	mes "............";
	next;
	mes "^3355FFEla est� completamente imersa em profunda, ora��o meditativa.";
	mes "Seria rude perturbar ela agora.^000000";
	close;
}

// ------------------------------------------------------------------
ra_temple,167,155,4	script	Crian�a#temple	4_F_CHILD,{
	mes "[Lewei]";
	mes "Shhh!";
	mes "Fique quieto.";
	next;
	mes "[Lewei]";
	mes "......";
	mes ".........";
	next;
	mes "[Lewei]";
	mes "V� embora! se algu�m ver voc�, eu vou ser pego, seu ignorante!";
	next;
	if (select("O que voc� est� fazendo?","Certo..") == 1) {
		mes "[Lewei]";
		mes "Aloooou?";
		mes "N�o est� vendo?";
		mes "Isto se chama esconde-esconde.";
		mes "R�pido, fuja!";
		close;
	}
	mes "[Lewei]";
	mes "Depressa, cai fora daqui!";
	close;
}

// ------------------------------------------------------------------
ra_temple,179,161,7	script	Crian�a#temple2	4_M_CHILD1,{
	mes "[Zhikka]";
	mes "Shh! Estou brincando de esconde-esconde.";
	mes "Voc� me deixaria sozinho, por favor?";
	mes "Eu n�o quero ser pego de novo!";
	mes "Talvez porque eu sempre uso o mesmo esconderijo...";
	close;
}

// ------------------------------------------------------------------
ra_temple,77,114,7	script	Crian�a#temple3	4_M_CHILD1,{
	mes "[Emmet]";
	mes "Ah minha Freya! Voc� me assustou!";
	mes "Pensei que voc� fosse uma das crian�as bricando de esconde-esconde!";
	mes "Argh!";
	mes "Saia daqui, saia daqui!";
	mes "N�o deixe me pegarem!";
	close;
}

// ------------------------------------------------------------------
ra_temple,172,113,5	script	Crian�a#temple4	4_M_CHILD1,{
	mes "[Harse]";
	mes "Onde est� voc������...";
	mes "Saia, saia onde quer que esteja.";
	next;
	mes "[Harse]";
	mes "Que � isso?!";
	mes "O que um adulto est� fazendo aqui?";
	mes "Voc� n�o v� que estou brincando de esconde-esconde?";
	close;
}

// ------------------------------------------------------------------
// - [ ra_temin ] -
// ------------------------------------------------------------------
ra_temin,287,88,7	script	Disc�pulo#temin	4_M_MASK1,{
	mes "[Disc�pulo Lekua]";
	mes "Veja estas flores.";
	mes "Elas n�o s�o t�o lindas?";
	mes "Eu passei muito tempo cultivando este jardim.";
	next;
	mes "[Disc�pulo Lekua]";
	mes "Eu acho que � o de Freya que vai nos trazer tanta beleza para o mundo quanto n�s pudemos.";
	mes "O que voc� acha disso?";
	close;
}

// ------------------------------------------------------------------
ra_temin,228,303,5	script	Disc�pulo#temin2	4_M_MASK1,{
	mes "[Disc�pulo de Freya]";
	mes "De novo, eu n�o tirei nenhuma soneca ontem...";
	mes "Eu estou orando t�o intensamente para a segunda visita de Freya.";
	mes "Estou exausto, mas me sinto muito bem sobre fazer este pequeno sacrif�cio.";
	close;
}

// ------------------------------------------------------------------
ra_temin,230,303,3	script	Disc�pulo#temin3	4_M_MASK1,{
	mes "[Disc�pulo de Freya]";
	mes "Voc� fez bem, meu irm�o.";
	mes "Estou certo que Freya ficaria orgulhosa de todos os seus esfor�os.";
	close;
}

// ------------------------------------------------------------------
ra_temin,138,64,5	script	Disc�pulo#temin4	4_M_CHILD1,{
	mes "[Pequeno Disc�pulo]";
	mes "N�o! Meu Mingming est� morto!";
	next;
	select("Mingming?");
	mes "[Pequeno Disc�pulo]";
	mes "Mingming � um p�ssaro doente.";
	mes "Eu o encontrei na rua, e eu realmente queria somente que ele descan�asse e ficasse saud�vel de novo mas ele morreu!";
	mes "Waaaaah!";
	emotion (e_sob);
	next;
	mes "[Pequeno Disc�pulo]";
	mes "Eu.. Eu vou tentar pedir � papisa!";
	mes "T-talvez ela possa trazer Mingming de volta a vida!";
	mes "Voc� sabe como eu posso encontrar a papisa?";
	close;
}

// ------------------------------------------------------------------
// - [ ra_san04 ] -
// ------------------------------------------------------------------
ra_san04,137,48,3	script	Loomin Secreto#san	HIDDEN_NPC,{
	mes "^3131FFLoomin, o garoto preso dentro da Caverna de Gelo.^000000";
	mes "Class: 1�";
	next;
	mes "^333333A papisa nasceu junto com um irm�o g�meo.";
	mes "Um garoto branco com pele p�lida e cabelos louros prateados.";
	mes "Isto nunca aconteceu antes e apresentou um problema �nico";
	next;
	mes "O Sumo-Sacerdote Niren agiu como a enfermeira da maternidade deles e veio para Rachel";
	mes "Onde os g�meos foram cuidados pelos padres.";
	mes "Eles todos discutiram sobre o destino final do garoto...";
	next;
	mes "Ningu�m duvidava que o menino era espiritualmente poderoso.";
	mes "Mas ele era um complemento sagrado a sua irm�";
	mes "Ou um grande mal que estava diretamente oposto a ela?";
	mes "Era um debate exaustivo";
	next;
	mes "No final, os Sumo-Sacerdotes decidiram que o garoto apresentava um grande risco para a sociedade.";
	mes "As pessoas podem n�o considerar o nascimento da papisa como divino se eles souberem que ela teve um irm�o g�meo.";
	next;
	mes "Entretanto, n�o querendo sentir a ira do deuses, os Sumo Sacerdotes n�o mataram o menino.";
	mes "Ao inv�s disso, eles o trancaram na Caverna de Gelo.";
	next;
	mes "Os Sumo-Sacerdotes fizeram um contrato com Ktullanux, um tem�vel monstro de gelo.";
	mes "Para guardar a pris�o do garoto, e para assegurar que ningu�m o faria.";
	close;
}