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
| - Nota: Npcs comuns na cidade Kunlun                              |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Ruas ] -
// ------------------------------------------------------------------
gonryun,200,82,3	script	SungSon Gam#gon	4_M_TWBOY,{
	mes "[SungSon Gam]";
	mes "Festas são sempre divertidas.";
	mes "É por isso que eu amo essa cidade.";
	mes "Essa cidade me faz sentir como se eu vivesse em uma grande festa.";
	close;
}

// ------------------------------------------------------------------
gonryun,268,88,3	script	JoonPo Lyang#gon	4_M_TWMIDMAN,{
	mes "[JoonPo Lyang]";
	mes "Somos uma nação independente e orgulhosa.";
	mes "Sempre lutamos bravamente contra os invasores que tentaram tomar essa terra abençoada.";
	mes "E vencemos todas as batalhas por nossa terra até hoje.";
	next;
	mes "[JoonPo Lyang]";
	mes "Nós acreditamos na canção da Vitória Triunfal!";
	mes "Ela representa o espírito de nossa nação!";
	close;
}

// ------------------------------------------------------------------
gonryun,118,111,5	script	WonSuk Chen#gon	4_M_ORIENT02,{
	mes "[WonSuk Chen]";
	mes "O governador dessa cidade é um homem de grande coração.";
	mes "Mas já ouvi falar de alguns que não confiam em seu caráter.";
	mes "Estranho...";
	next;
	mes "[Wonsuk Chen]";
	mes "Bom, eu gosto de nossa cidade.";
	mes "Os esforços de nosso governador fazem daqui um bom lugar.";
	mes "Eu realmente espero que alguns ingratos não atrapalhem seu bom trabalho.";
	close;
}

// ------------------------------------------------------------------
gonryun,181,161,3	script	MoonJin Chung#gon	4_F_TWMIDWOMAN,{
	mes "[MoonJin Chung]";
	mes "Os homens daqui são chamados de KunLuns, e são homens bravos e enérgicos.";
	mes "Mas há uma dificuldade muita grande para se casarem atualmente...";
	next;
	mes "[MoonJin Chung]";
	mes "Isso porque existem hoje muito mais homens que mulheres.";
	mes "Nem certeza se meu filho conseguirá se casar eu tenho. Hmm...";
	close;
}

// ------------------------------------------------------------------
gonryun,113,135,6	script	Guardião#gon	8_M_TWSOLDIER,{
	mes "[Guardião]";
	mes "Bem vindo! Sou um humilde servidor de SaYumMoon, o governador dessa cidade.";
	next;
	mes "[Guardião]";
	mes "Acredito que não vá acontecer mas, se você agir de maneira suspeita, serei obrigado a te prender.";
	next;
	mes "[Guardião]";
	mes "Mas não se preocupe.";
	mes "Não acredito que isso vá acontecer.";
	mes "Aproveite sua estada!";
	close;
}

// ------------------------------------------------------------------
gonryun,113,127,6	script	Guardião#gon2	8_M_TWSOLDIER,{
	mes "[Guardião]";
	mes "Bem vind"+(Sex?"o":"a")+"!";
	mes "Sou um humilde servidor de SaYumMoon, o governador dessa cidade.";
	next;
	mes "[Guardião]";
	mes "Acredito que não vá acontecer.";
	mes "Mas se você agir de maneira suspeita, serei obrigado a te prender.";
	next;
	mes "[Guardião]";
	mes "Mas não se preocupe.";
	mes "Não acredito que isso vá acontecer.";
	mes "Aproveite sua estada!";
	close;
}

// ------------------------------------------------------------------
gonryun,166,196,3	script	Soldado#gon	8_M_TWSOLDIER,{
	mes "[WaGuo]";
	mes "Você sabia que esse local foi um santuário?";
	mes "Há muito tempo atrás, depois que foi abandonado pelos monges que buscavam o reino dos céus.";
	mes "Ele se tornou a morada de vários monstros.";
	next;
	mes "[WaGuo]";
	mes "A cidade está se preparando para o festival.";
	mes "Mas esses preparativos estão tomando muito tempo...";
	mes "Isso nunca aconteceu antes.";
	close;
}

// ------------------------------------------------------------------
gonryun,169,71,3	script	Guia#gon	4_F_TWGIRL,{
	mes "[LeeHee Min]";
	mes "Bem vind"+(Sex?"o":"a")+"!";
	mes "Você gostou da paisagem no seu caminho para cá?";
	mes "O que achou daquelas pequenas construções no caminho?";
	next;
	mes "[LeeHee Min]";
	mes "São miniaturas das cidades do reino de Rune-Midgard.";
	mes "Você pode olhar para todas as cidades de uma só vez.";
	mes "Foi um trabalho muito difícil.";
	mes "Mas não é uma obra de arte?";
	next;
	mes "[LeeHee Min]";
	mes "Se você souber apreciar, você verá muitas paisagens bonitas pela cidade.";
	close;
}

// ------------------------------------------------------------------
gonryun,153,64,7	script	Anunciante de Kunlun#gon4	4_M_TWMIDMAN,{
	mes "[Jangchungryong]";
	mes "Quando desejar terminar sua visita a Kunlun.";
	mes "Eu irei leva-lo para o porto.";
	next;
	if (select("Retornar ao porto.","Cancelar.") == 1) {
		mes "[Jangchungryong]";
		mes "Eu espero que você tenha se divertido conosco.";
		mes "Vamos indo então?";
		close2;
		warp ("gon_fild01",258,82);
		end;
	}
	mes "[Jangchungryong]";
	mes "Demore o tempo que quiser aqui.";
	mes "Existem muitos lugares misteriosos em Kunlun pra você visitar.";
	close;
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
gon_in,73,82,5	script	SungChul Ki#gon	4_M_TWTEAMAN,{
	mes "Meu nome é SungChul Ki.";
	mes "Meu trabalho é fazer chá.";
	mes "Eu me dedico, dia e noite, em fazer o melhor chá de toda a cidade.";
	next;
	mes "[SungChul Ki]";
	mes "Hmm, mas ultimamente, tem sido difícil atingir a perfeição do chá.";
	mes "Eu preciso de alguns ingredientes especiais...";
	next;
	mes "[SungChul Ki]";
	mes "Eu ouvi rumores que, com uma certa serpente.";
	mes "É possível conseguir um ingrediente que faria o chá mais saboroso já feito.";
	mes "Mas onde eu acho e como eu capturo uma dessas?";
	mes "Eu não sei...";
	close;
}

// ------------------------------------------------------------------
gon_in,173,27,3	script	KuHa Woo#gon	4_M_TWBOY,{
	mes "[KuHa Woo]";
	mes "É claro que ninguém vende bebidas alcoólicas para uma criança como eu.";
	mes "Mas os adultos parecem gostar.";
	mes "Como será o gosto?";
	next;
	mes "[KuHa Woo]";
	mes "Mas isso é bobagem! Crianças não devem beber álcool. O que eu gosto mesmo é do delicioso chá que é produzido aqui na minha cidade. Só de pensar eu já fico com água na boca.";
	close;
}