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
| - Nota: Npcs comuns nos Campos de Comodo                          |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
cmd_fild04,188,74,4	script	Menina das Algas#cmd	4_F_04,{
	mes "[Menina das Algas]";
	mes "Oi! Oi!";
	mes "Eu vivo aqui, mergulhando no mar...";
	mes "Juntando conchas e algas...";
	mes "Para vender e ganhar a vida...";
	mes "Eu sou a Garota Marinha,";
	mes "Menina das Algas!";
	next;
	mes "[Menina das Algas]";
	mes "É bom viver em um lugar cercado por natureza...";
	mes "E sempre comer frutos do mar frescos também não é ruim...";
	mes "Mas uma garota como eu...";
	mes "Sente falta da vida de uma cidade grande...";
	mes "Muita falta...";
	next;
	mes "[Menina das Algas]";
	mes "Eu tento conseguir muitas algas, para conseguir dinheiro para me mudar...";
	mes "Eu sei que eu vou conseguir!";
	close;
}

// ------------------------------------------------------------------
cmd_fild04,248,86,4	script	Marinheiro Ziyaol#cmd	4_M_SEAMAN,{
	mes "[Ziyaol]";
	mes "Não entendo...";
	mes "Por que você me olha assim?";
	mes "Eu sou um Marinheiro de verdade!";
	mes "Estou descansando agora.";
	mes "Tive um dia de trabalho muito duro hoje...";
	mes "Estou cansado...";
	next;
	mes "[Ziyaol]";
	mes "Mas o que me deixa desanimado";
	mes "É que minha filha ali...";
	mes "Só fala em se mudar para uma cidade.";
	mes "Eu não entendo...";
	mes "Aqui nós temos ar puro, água limpa e um ambiente agradável.";
	mes "Eu queria que ela ficasse comigo.";
	next;
	mes "[Ziyaol]";
	mes "Minha criança cresceu!";
	mes "E quer fugir de mim...";
	mes "Meu Deus!";
	close;
}

// ------------------------------------------------------------------
cmd_fild04,267,137,4	script	Menina da Praia#cmd	4_F_KID2,{
	mes "[Daeguro]";
	mes "Eu adoro brincar com a areia!";
	mes "A areia da praia é tão limpa e fofa.";
	mes "E tem cheiro de mar...";
	mes "Um dia, eu vou entrar...";
	mes "No barco para Alberta...";
	mes "E velejar até a cidade!";
	close;
}

// ------------------------------------------------------------------
cmd_fild07,192,58,4	script	Rahasu#cmd	4W_SAILOR,{
	mes "[Rahasu]";
	mes "Olá? O meu trabalho";
	mes "é mostrar o ^3355FFFarol de Pharos^000000 às pessoas...";
	mes "Ramadi, o Guarda do Farol... e guia de Pharos.";
	next;
	if (select("Farol de Pharos?","Cancelar") == 1) {
		mes "[Rahasu]";
		mes "A ilha do Farol de Pharos, consiste em dois antigos faróis.";
		mes "Construídos para alertar contra a entrada de invasores.";
		mes "Agora se tornou a cidade portuária do sul do reino, e está ficando famosa pelo comércio.";
		next;
		mes "[Rahasu]";
		mes "Como o farol está sendo reformado...";
		mes "Não é permitida a entrada de visitantes...";
		mes "Existem muitas pinturas lindas lá dentro.";
		mes "Muitas!";
		close;
	}
	mes "[Rahasu]";
	mes "Que pena!";
	mes "Perder a chance de conhecer um monumento antigo.";
	mes "Você deveria voltar em outra oportunidade...";
	mes "Você voltará?";
	close;
}

// ------------------------------------------------------------------
cmd_fild07,52,280,4	script	Hallosu#cmd	4W_SAILOR,{
	mes "[Hallosu]";
	mes "Certo! Este é um dos...";
	mes "Faróis de Pharos!";
	mes "Como está sendo reformado a entrada não é permitida!";
	mes "Até que as obras tenham terminado.";
	next;
	mes "[Hallosu]";
	mes "E for organizada a reinauguração.";
	mes "Aí sim, você poderá vir visitar...";
	mes "Obrigado!!";
	mes "^3355FFO guarda está ficando inquieto...^000000";
	close;
}