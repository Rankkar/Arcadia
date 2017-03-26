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
| - Nota: Npcs comuns no Santuário de Rachel                        |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ ra_temple ] -
// ------------------------------------------------------------------
ra_temple,148,91,3	script	Discípulo#temple	4_F_MASK1,{
	mes "[Discípulo Akarna]";
	mes "Cheshrumnir...";
	mes "Dizem que um dia, nossa deusa Freya vai descer a este lugar no auge de sua glória.";
	mes "Eu espero que eu viva pra ver isto.";
	close;
}

// ------------------------------------------------------------------
ra_temple,115,148,7	script	Discípulo#temple2	4_F_MASK1,{
	mes "[Discípulo Yakum]";
	mes "......";
	mes ".........";
	mes "............";
	next;
	mes "^3355FFEla está completamente imersa em profunda, oração meditativa.";
	mes "Seria rude perturbar ela agora.^000000";
	close;
}

// ------------------------------------------------------------------
ra_temple,167,155,4	script	Criança#temple	4_F_CHILD,{
	mes "[Lewei]";
	mes "Shhh!";
	mes "Fique quieto.";
	next;
	mes "[Lewei]";
	mes "......";
	mes ".........";
	next;
	mes "[Lewei]";
	mes "Vá embora! se alguém ver você, eu vou ser pego, seu ignorante!";
	next;
	if (select("O que você está fazendo?","Certo..") == 1) {
		mes "[Lewei]";
		mes "Aloooou?";
		mes "Não está vendo?";
		mes "Isto se chama esconde-esconde.";
		mes "Rápido, fuja!";
		close;
	}
	mes "[Lewei]";
	mes "Depressa, cai fora daqui!";
	close;
}

// ------------------------------------------------------------------
ra_temple,179,161,7	script	Criança#temple2	4_M_CHILD1,{
	mes "[Zhikka]";
	mes "Shh! Estou brincando de esconde-esconde.";
	mes "Você me deixaria sozinho, por favor?";
	mes "Eu não quero ser pego de novo!";
	mes "Talvez porque eu sempre uso o mesmo esconderijo...";
	close;
}

// ------------------------------------------------------------------
ra_temple,77,114,7	script	Criança#temple3	4_M_CHILD1,{
	mes "[Emmet]";
	mes "Ah minha Freya! Você me assustou!";
	mes "Pensei que você fosse uma das crianças bricando de esconde-esconde!";
	mes "Argh!";
	mes "Saia daqui, saia daqui!";
	mes "Não deixe me pegarem!";
	close;
}

// ------------------------------------------------------------------
ra_temple,172,113,5	script	Criança#temple4	4_M_CHILD1,{
	mes "[Harse]";
	mes "Onde está vocêêêêêê...";
	mes "Saia, saia onde quer que esteja.";
	next;
	mes "[Harse]";
	mes "Que é isso?!";
	mes "O que um adulto está fazendo aqui?";
	mes "Você não vê que estou brincando de esconde-esconde?";
	close;
}

// ------------------------------------------------------------------
// - [ ra_temin ] -
// ------------------------------------------------------------------
ra_temin,287,88,7	script	Discípulo#temin	4_M_MASK1,{
	mes "[Discípulo Lekua]";
	mes "Veja estas flores.";
	mes "Elas não são tão lindas?";
	mes "Eu passei muito tempo cultivando este jardim.";
	next;
	mes "[Discípulo Lekua]";
	mes "Eu acho que é o de Freya que vai nos trazer tanta beleza para o mundo quanto nós pudemos.";
	mes "O que você acha disso?";
	close;
}

// ------------------------------------------------------------------
ra_temin,228,303,5	script	Discípulo#temin2	4_M_MASK1,{
	mes "[Discípulo de Freya]";
	mes "De novo, eu não tirei nenhuma soneca ontem...";
	mes "Eu estou orando tão intensamente para a segunda visita de Freya.";
	mes "Estou exausto, mas me sinto muito bem sobre fazer este pequeno sacrifício.";
	close;
}

// ------------------------------------------------------------------
ra_temin,230,303,3	script	Discípulo#temin3	4_M_MASK1,{
	mes "[Discípulo de Freya]";
	mes "Você fez bem, meu irmão.";
	mes "Estou certo que Freya ficaria orgulhosa de todos os seus esforços.";
	close;
}

// ------------------------------------------------------------------
ra_temin,138,64,5	script	Discípulo#temin4	4_M_CHILD1,{
	mes "[Pequeno Discípulo]";
	mes "Não! Meu Mingming está morto!";
	next;
	select("Mingming?");
	mes "[Pequeno Discípulo]";
	mes "Mingming é um pássaro doente.";
	mes "Eu o encontrei na rua, e eu realmente queria somente que ele descançasse e ficasse saudável de novo mas ele morreu!";
	mes "Waaaaah!";
	emotion e_sob;
	next;
	mes "[Pequeno Discípulo]";
	mes "Eu.. Eu vou tentar pedir à papisa!";
	mes "T-talvez ela possa trazer Mingming de volta a vida!";
	mes "Você sabe como eu posso encontrar a papisa?";
	close;
}

// ------------------------------------------------------------------
// - [ ra_san04 ] -
// ------------------------------------------------------------------
ra_san04,137,48,3	script	Loomin Secreto#san	HIDDEN_NPC,{
	mes "^3131FFLoomin, o garoto preso dentro da Caverna de Gelo.^000000";
	mes "Class: 1ª";
	next;
	mes "^333333A papisa nasceu junto com um irmão gêmeo.";
	mes "Um garoto branco com pele pálida e cabelos louros prateados.";
	mes "Isto nunca aconteceu antes e apresentou um problema único";
	next;
	mes "O Sumo-Sacerdote Niren agiu como a enfermeira da maternidade deles e veio para Rachel";
	mes "Onde os gêmeos foram cuidados pelos padres.";
	mes "Eles todos discutiram sobre o destino final do garoto...";
	next;
	mes "Ninguém duvidava que o menino era espiritualmente poderoso.";
	mes "Mas ele era um complemento sagrado a sua irmã";
	mes "Ou um grande mal que estava diretamente oposto a ela?";
	mes "Era um debate exaustivo";
	next;
	mes "No final, os Sumo-Sacerdotes decidiram que o garoto apresentava um grande risco para a sociedade.";
	mes "As pessoas podem não considerar o nascimento da papisa como divino se eles souberem que ela teve um irmão gêmeo.";
	next;
	mes "Entretanto, não querendo sentir a ira do deuses, os Sumo Sacerdotes não mataram o menino.";
	mes "Ao invés disso, eles o trancaram na Caverna de Gelo.";
	next;
	mes "Os Sumo-Sacerdotes fizeram um contrato com Ktullanux, um temível monstro de gelo.";
	mes "Para guardar a prisão do garoto, e para assegurar que ninguém o faria.";
	close;
}