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
| - Por: Spell Master                                               |
| - Nota: Hoteis e estalagens                                       |
\*-----------------------------------------------------------------*/

-	script	InnHouse	FAKE_NPC,{
	mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
	mes "Bom dia, seja bem vind"+(Sex?"o":"a")+" a nossa estalagem.";
	mes "Em que posso ajudar?";
	next;
	switch(select("Salvar Retorno","Descançar -> 5000 zeny","Cancelar")) {
		case 1:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Seu Ponto de Retorno foi salvo.";
		mes "Curta sua estadia na cidade.";
		if (strnpcinfo(NPC_MAP) == "ein_in01") {
			savepoint "ein_in01",200,224;
		}
		close;
		case 2:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		if(Zeny < 5000){
			mes "Me desculpe mas a taxa para descanso é de 5.000 zenys.";
			close;
		}
		else {
			mes "Curta sua estadia.";
			mes "E aproveite seu descanso.";
			close2;
			Zeny -= 5000;
			percentheal 100,100;
			if (strnpcinfo(NPC_MAP) == "ein_in01") {
				warp "ein_in01",272,167;
			}
			end;
		}
		case 3:
		mes "["+strnpcinfo(NPC_NAME_VISIBLE)+"]";
		mes "Volte sempre.";
		close;
	}
}

ein_in01,206,224,3	duplicate(InnHouse)	Funcionário do Hotel#ein	4_M_EINMAN
