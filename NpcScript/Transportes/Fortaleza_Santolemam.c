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
| - Por: Spell Master/eAthena/rAthena/Hercules                      |
| - Nota: Acesso aos campos de Comodo por Moc_Fild                  |
\*-----------------------------------------------------------------*/

moc_fild12,35,303,4	script	Serutero#mocf	1_M_ORIENT01,{
	mes "[Serutero]";
	mes "Eu sou responsável por guardar o portal para a Cidade-Fortaleza Santoleman.";
	mes "Meu nome é Serutero.";
	mes "Devo perguntar a você...";
	mes "É realmente seu desejo ir a Santoleman a Cidade-Fortaleza?";
	next;
	switch(select("Ir à Cidade-Fortaleza Santoleman!","O que é a Cidade-Fortaleza Santoleman?","Sair")) {
		case 1:
		mes "[Serutero]";
		mes "Então você está indo para a Cidade-Fortaleza Santoleman?!";
		mes "Espero que faça uma boa viagem.";
		mes "E tudo de bom para você!";
		mes ". . . . .";
		close2;
		warp "cmd_fild08",331,319;
		end;
		case 2:
		mes "[Serutero]";
		mes "Santoleman foi atacada por outras raças há muito tempo atrás.";
		mes "É um lugar feito de ravinas...";
		mes "Uma verdadeira fortaleza natural.";
		mes "O Farol de Fallas fica ao sul e quando eles detectam invasores.";
		next;
		mes "[Serutero]";
		mes "Eles enviam um sinal luminoso, para alertar as grandes cidades e iniciar os procedimentos defensivos.";
		mes "Nos quais Santoleman tinha uma partipação essencial.";
		mes "Aquela fortaleza é grande como uma cidade.";
		mes "Por isso é chamada ^3355FFCidade-Fortaleza Santoleman^000000.";
		next;
		mes "[Serutero]";
		mes "Mas depois que o reino foi unificado, e seu território continuou se expandindo para o oeste, até Comodo.";
		mes "A memória de Santoleman está se apagando...";
		mes "A fortaleza está se tornando apenas ruínas esquecidas...";
		next;
		mes "[Serutero]";
		mes "Não faz muito tempo atrás...";
		mes "A fortaleza foi tombada como monumento histórico pelo Ministério de Construções e Cultura.";
		mes "Infelizmente, agora ela está ocupada por monstros.";
		mes "Ninguém se atreve a se aproximar de lá.";
		next;
		mes "[Serutero]";
		mes "Se você quer ir ao...";
		mes "Farol de Fallas...";
		mes "Vá para sudoeste.";
		mes "É o melhor caminho...";
		close;
		case 3:
		mes "[Serutero]";
		mes "Se se sentir cansado...";
		mes "Vá até a cidade de ^3355FFComodo^000000...";
		mes "E descanse por lá.";
		mes "Você se sentirá renovado.";
		mes "Porque Comodo é o mais famoso balneário do mundo.";
		close;
	}
}