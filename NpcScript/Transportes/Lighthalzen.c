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
| - Nota: Acesso as áreas dos laboratórios em Lighthalzen           |
\*-----------------------------------------------------------------*/

lhz_in01,35,226,5	script	Guarda Rekenber#lhzpass	4_M_LGTGUARD2,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Guarda Rekenber]";
		mes "^3355FF(Uau, é um membro da diretoria!)^000000 Bom-dia!";
		close2;
		warp "lhz_in01",37,225;
		end;
	}
	mes "[Guarda Rekenber]";
	mes "Essa é uma área restrita!";
	mes "Indentifique-se imediatamente!";
	next;
	if (select("Identificar?","Cancelar") == 1) {
		mes "[Guarda Rekenber]";
		mes "Não sei como vocês, aventureiros, fazem as coisas em Rune-Midgards.";
		mes "Mas aqui nós temos leis sobre invasão!";
		close;
	}
	mes "[Guarda Rekenber]";
	mes "A não ser que você tenha autorização especial.";
	mes "Não pode entrar no Laboratório Subterrâneo, por razões de segurança.";
	close;
}

//-------------------------------------------------------------------
lhz_in01,23,132,3	script	Guarda Rekenber#lhzpass2	4_M_LGTGUARD2,5,5,{
	OnTouch:
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Guarda Rekenber]";
		mes "Mantenha os olhos abertos.";
		mes "Ouvi rumores de que aventureiros de Rune-Midgard estão tentando se infiltrar aqui!";
		mes "Sei que a segurança aqui é muito eficiente, mas mesmo assim...";
		close;
	}
	else {
		mes "Essa é uma área restrita ao público!";
		mes "Quem é você e como entrou?!";
		mes "Saia daqui imediatamente!";
		close2;
		warp "lhz_in01",33,224;
	}
	end;
}

//-------------------------------------------------------------------
lhz_in01,46,125,3	script	Guarda Rekenber#lhzpass3	4_M_LGTGUARD2,5,5,{
	OnTouch:
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Guarda Rekenber]";
		mes "......................";
		next;
		if (select("Belo dia, não?:Cancelar") == 1) {
			mes "[Guarda Rekenber]";
			mes "...";
			emotion e_an;
			close;
		}
		mes "[Guarda Rekenber]";
		mes "...";
		close;
	}
	mes "[Guarda Rekenber]";
	mes "...!";
	emotion e_gasp;
	close2;
	warp "lhz_in01",33,224;
	end;
}

//-------------------------------------------------------------------
lhz_in01,217,121,3	script	Mecânico#lhzpass	4_M_REPAIR,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Mecânico]";
		mes "Não é surpresa que esses aparelhos quembrem o tempo todo!";
		mes "Essas máquinas são abusadas totalmente!";
		mes "Ah, ninguém aprecia todo esse tipo de tecnologia conveniente!";
		next;
		mes "[Mecânico]";
		mes "Sim, todo esse equipamento de laboratório é muito sensível, e muito caro.";
		mes "Se você for mexer em algo, precisa tomar muito cuidado.";
		close;
	}
	else {
		mes "[Mecânico]";
		mes "Ei, você não trabalha...";
		mes "G-guardas! Corram!";
		mes "Tem alguém aqui!";
		emotion e_gasp;
		close2;
		warp "lhz_in01",33,224;
		end;
	}
}

//-------------------------------------------------------------------
lhz_in01,203,123,3	script	Cientista#lhzpass	4_M_ALCHE_C,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Cientista]";
		mes "Certo.";
		mes "Tirar um tubo de teste da máquina, repor esse outro tubo de teste que está aqui e depois limpar o primeiro tubo?";
		next;
		mes "[Cientista]";
		mes "Ou eu limpo o tubo de teste, coloco ele na máquina e depois reponho o outro?";
		mes "Estou tão confuso com esse procedimento!";
		mes "Se pelo menos eu não tivesse perdido as instruções...";
		close;
	}
	mes "[Cientista]";
	mes "Certo.";
	mes "Tirar um tubo de teste da máquina, repor esse out...ei.";
	mes "Você não é o Ralphie.";
	mes "Espera. Guardaaaaaas!";
	mes "Socorro, tem um estranho aqui!";
	emotion e_gasp;
	close2;
	warp "lhz_in01",33,224;
	end;
}

//-------------------------------------------------------------------
lhz_in01,199,137,3	script	Cientista#lhzpass2	4_LGTSCIENCE,{
	if (isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)) {
		mes "[Cientista]";
		mes "Por favor não toque em nada!";
		mes "Estou mexendo com substâncias voláteis aqui!";
		close;
	}
	mes "[Cientista]";
	mes "Guardas!";
	mes "Rápido, tem alguém aqui e acho que é um daqueles arruaceiros!";
	mes "Por que, por que eu?!";
	emotion e_gasp;
	close2;
	warp "lhz_in01",33,224;
	end;
}

//-------------------------------------------------------------------
lhz_in01,25,141,4	script	Guarda Regenschirm#lhzpass	4_M_LGTGUARD,{
	mes "[Guarda Regenschirm]";
	if(isequipped(Granpa_Beard) && isequipped(Spinning_Eyes)){
		mes "Você quer ir ao subterrâneo?";
		next;
		if(select("Sim:Não")==1){
			if(isequipped(Lab_Passport)){
				warp "lhz_dun01",150,288;
				end;
			}
			mes "[Guarda Regenschirm]";
			mes "Sinto muito mas não posso deixar ninguém passar sem utorização especial.";
			mes "Apenas membros com Passaportes para o Laboratório podem ir ao subterrâneo.";
			close;
		}
		mes "[Guarda Regenschirm]";
		mes "Obrigado e tenha um bom dia.";
		close;
	}
	mes "Essa área é restrita ao público!";
	mes "Quem é você e como entrou? Saia daqui imediatamente!";
	close2;
	warp "lhz_in01",34,224;
	end;

}