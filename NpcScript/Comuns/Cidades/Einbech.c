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
| - Nota: Npcs comuns na cidade Einbech                             |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [Ruas] -
// ------------------------------------------------------------------
einbech,172,113,4	script	Nemuk#ein	4_M_EINMAN,{
	mes "[Nemuk]";
	mes "Você parece ser um forasteiro, então deixe-me perguntar algo.";
	mes "O que você acha de Einbech?";
	next;
	switch(select("É legal.","Parece dificil de viver aqui.")) {
		case 1:
		mes "[Nemuk]";
		mes "Huh...?";
		mes "Eu não estou certo do que você tenha visto.";
		mes "Mas eu estou surpreso de ouvir você dizer algo assim.";
		next;
		mes "[Nemuk]";
		mes "Faz dez anos desde que eu começei a pensar em me mudar.";
		mes "Porém, Eu ainda estou pensando sobre isso.";
		mes "Agora, se eu fosse rico...";
		mes "Partiria num instante, mas isso é dificil enquanto eu junto dinheiro para me mudar.";
		next;
		mes "[Nemuk]";
		mes "^333333*Sigh...*^000000";
		mes "Talvez se eu tivesse sido um aventureiro quando eu era mais jovem.";
		mes "Eu não teria esses problemas hoje...";
		close;
		case 2:
		mes "[Nemuk]";
		mes "Eu penso assim.";
		mes "Bem, Me desculpe se eu coloquei você em uma situação dificil.";
		next;
		mes "[Nemuk]";
		mes "Todo mundo aqui tem passado por tempos duros vivendo dia após dia para contar o que eu possa me lembrar.";
		mes "Parece que as coisas nunca ficam melhoram não importa o que nós fazemos.";
		next;
		mes "[Nemuk]";
		mes "Eu realmente quero partir, mas é apenas um desejo tolo.";
		mes "Meu corpo esta preso aqui enquanto me coração deseja uma vida muito melhor.";
		mes "^333333*Sigh*^000000";
		mes "Esta desesperado?";
		mes "O que eu posso fazer?";
		close;
	}
}

// ------------------------------------------------------------------
einbech,197,139,4	script	Jovem#air2	4_M_EINMAN,{
	mes "[Heinz]";
	mes "Uau...";
	mes "Um aventureiro de Rune-Midgard, certo?";
	mes "O que o traz aqui?";
	next;
	mes "[Heinz]";
	mes "Einbech não oferece muito em termos de vista.";
	mes "Mas você veio ver a mina?";
	mes "Agora mesmo, há muitos monstros e nós não podemos cavar nenhum minério porque é muito perigoso.";
	next;
	mes "[Heinz]";
	mes "Agora, se alguns aventureiros fossem bastante generosos para caçar essas criaturas.";
	mes "Mas nós poderiamos minerar novamente e eles receberiam alguns zeny.";
	mes "É como matar dois pássaros com uma pedrada só. Hahaha!";
	next;
	mes "[Heinz]";
	mes "Oh espere... Me desculpe.";
	mes "Eu não sei o que tem de errado comigo.";
	mes "Pedindo para completos estranhos fazerem favores para mim.";
	mes "É completamente rude!";
	mes "Eu quero dizer, quem faria isso?";
	next;
	mes "[Heinz]";
	mes "Mas...";
	mes "Estou além de me preocupar com meu orgulho.";
	mes "Por causa de tudo que é bom e santo.";
	mes "Estou te implorando, por favor mate estas criaturas nojentas e más.";
	mes "Por favor!!";
	close;
}

// ------------------------------------------------------------------
einbech,128,238,5	script	Mogan#ein	4_M_EINMINER,{
	mes "[Mogan]";
	mes "Recentemente, houve alguns desmoronamentos onde muitos mineradores ficaram feridos.";
	mes "Isto foi discutido no Conselho da Cidade e na minha opinião...";
	mes "Acho que os minerados cavaram muito fundo e causaram isso.";
	next;
	mes "[Mogan]";
	mes "Sim, eles despertaram Ungoliant, o mestre das cavernas que existia desde os tempos antigos.";
	mes "Eu não sei quantos mais seram feitos de vitima pelo Ungolian no futuro.";
	mes "Não há relatos...";
	next;
	mes "[Mogan]";
	mes "Aventureiro, tome cuidado se você se aventurar dentro das minas.";
	mes "Para que os seus passos não atrapalhem o sono de Ungoliant.";
	close;
}

// ------------------------------------------------------------------
einbech,129,234,5	script	Hander#ein	4_M_EINMINER,{
	mes "[Hander]";
	mes "Aqueles bastardos de Einbroch!";
	mes "Vivendo dos recursos que nós escavamos enquanto nós continuamos trabalhando para aqueles babacas!";
	mes "Maldição!";
	next;
	mes "[Hander]";
	mes "Todo dia, nós arriscamos nossa droga de vida exatamente assim nós podemos nos sustentar!";
	mes "Porque os mais velhos não fazem alguma coisa sobre isto, como aumentar o preço dos nossos minérios?";
	next;
	mes "[Hander]";
	mes "O horário de trabalho é irracional.";
	mes "A esposa de Cavitar foi atacada por uma criatura da mina.";
	mes "O hospital é muito longe e nós não temos qualquer comida para comer!";
	mes "Por quê...?!";
	close;
}

// ------------------------------------------------------------------
einbech,105,218,5	script	Gushenmu#ein	4_M_EINMINER,{
	mes "[Gushenmu]"; 
	mes "Eu moro aqui a um longo tempo e, acredite ou não.";
	mes "As coisas não eram no passado como elas são agora.";
	next;
	mes "[Gushenmu]"; 
	mes "Por muitas diferentes razões, o trabalho é mais perigoso e nós estamos tendo reais baixas de trabalho.";
	mes "E as fábricas em Einbroch fazem muita poluição.";
	mes "Nós não conseguimos nem mesmo ver a luz do sol aqui.";
	next;
	mes "[Gushenmu]"; 
	mes "A triste realidade da vida de minerador é exatamente essa.";
	mes "Nós acordamos...";
	mes "Vamos para o trabalho, e no final do dia alguns de nós estão machucados enquanto alguns outros nunca retornaram ao trabalho no dia seguinte.";
	next;
	mes "[Gushenmu]"; 
	mes "E a medida que Einbech e Einbroch cresceram.";
	mes "Eu ouço mais e mais rumores que monstros não familiares estão formando uma enxame fora da cidade.";
	mes "Este é realmente o pior tempo de Einbech...";
	close;
}

// ------------------------------------------------------------------
einbech,157,215,3	script	Gerente da Estação#ei	4_M_EIN_SOLDIER,{
	mes "[Gerente da Estação]";
	mes "Esta Estação de Tem é estritamente para trens indo de Einbech para Einbroch.";
	mes "Por favor fale com a Equipe, indo ao noroeste se você quiser subir a bordo.";
	close;
}

// ------------------------------------------------------------------
einbech,151,168,3	script	Tollaf#ein	4_M_EINMAN,{
	mes "[Tollaf]";
	mes "Ah...!";
	mes "Isto esta me matando!";
	mes "Eu não tenho dinheiro para me mudar, mas eu não quero mais viver neste cidade!";
	next;
	mes "[Tollaf]";
	mes "As pessoas vivem em tantos outros lugares melhor que nós, especialmente aqueles esnobes de Einbroch!";
	mes "Einbech deve ser a pior cidade da República de Schwartzwald.";
	mes "Não, deve ser a pior cidade do mundo!";
	close;
}

// ------------------------------------------------------------------
einbech,93,139,5	script	Raust#ein	4_M_EINOLD,{
	mes "[Raust]";
	mes "Eu não consegui!";
	mes "Einbroch esta crescendo e nossa cidade está se tornando cada vez mais suja.";
	mes "Mas que inferno?!";
	next;
	mes "[Raust]";
	mes "Não somente as pessoas parecem mais ásperas.";
	mes "Nós parecemos mais cansados e mais velhos também!";
	mes "Está sujo, está amontoado, tudo nessa cidade está uma bagunça!";
	mes "O que, você quer uma lista?!";
	next;
	mes "[Raust]";
	mes "A comida, literalmente, está um lixo!";
	mes "Os serviços aqui são uma violação aos direitos humanos.";
	mes "Nós temos poucas mulheres aqui e as poucas que temos fedem muito!";
	mes "Não está convencido ainda?!";
	next;
	mes "[Raust]";
	mes "Porque tudo está bom ainda em Einbroch?!";
	mes "Eu odeio isso!";
	mes "^333333*Grumble*^000000";
	close;
}

// ------------------------------------------------------------------
einbech,149,154,3	script	Mjunia#ein	4_F_EINWOMAN,{
	mes "[Mjunia]";
	mes "É dificil ser uma mulher aqui nesta cidade, nascida aqui.";
	mes "É como se o destino decidiu ser especialmente cruel comigo.";
	next;
	mes "[Mjunia]";
	mes "Minha pele e minhas mãos estão ásperas de tanto trabalho que eu tenho que fazer.";
	mes "Mas o pior de tudo...";
	mes "Eu... Eu...";
	mes "Eu desenvolvi tantos músculos quanto a maioria dos rapazes!";
	mes "Waaaaaah!";
	next;
	mes "[Mjunia]";
	mes "Eu desejo poder encontrar um belo rapaz de Einbroch e casar então poder sair desta cidade.";
	mes "Mas parece que isso não vai acontecer...";
	next;
	mes "[Mjunia]";
	mes "E eu nunca me casaria com qualquer um de Einbech!";
	mes "Eu preferiria morrer de frio e sozinha do que morrer de frio e casada com algum brigão de Einbech.";
	next;
	mes "[Mjunia]";
	mes "Olhe para estes músculos.";
	mes "O que você acha?";
	mes "Eu sou bonita?";
	mes "^333333*Sniff*^000000";
	mes "Eu deixei de tentar ser feminina anos atrás.";
	mes "Eu tenho que trabalhar muito...";
	close;
}

// ------------------------------------------------------------------
einbech,130,253,1	script	Ekuri#ein	4_M_EINMINER,{
	mes "[Ekuri]";
	mes "O que eu estou fazendo aqui?";
	mes "Pro inferno, Eu estou morrendo de medo de entrar na mina!";
	mes "Mas eu posso ganhar dinheiro aqui na entrada juntando essas sucatas!";
	mes "Esperto, huh?";
	next;
	mes "[Ekuri]";
	mes "Às vezes, eu tenho sorte e consigo um minério inteiro!";
	mes "Claro, Eu sou um covarde, mas pelo menos eu estou vivo.";
	mes "Bem, por enquanto.";
	next;
	mes "[Ekuri]";
	mes "Agora você sabe o quê eu estou fazendo aqui.";
	mes "Então porque você não me deixa voltar para meu trabalho?";
	mes "Minérios, venham para mim!";
	close;
}

// ------------------------------------------------------------------
einbech,46,107,6	script	Shena#ein::EinMonsters	4_F_EINOLD,{
	mes "[Shena]";
	mes "Como pode vocês jovens não aprender tudo isso?";
	next;
	mes "[Shena]";
	mes "Bem, estou certa que as próximas gerações farão algo à isso.";
	mes "Mas estou surpreso que pessoas experientes não conhecem muito.";
	next;
	switch(select("Do que está falando?","Ignorar")) {
		case 1:
		mes "[Shena]";
		mes "Oh? bem, bem...";
		mes "Você não é a mais adorável garotinha?";
		mes "Olá, Querida.";
		next;
		if (Sex == SEX_MALE) {
			select("Desculpe-me, mas eu sou homem.");
			mes "[Shena]";
			mes "Por meus olhos estarem ficando ruims pela minha idade.";
			mes "Fica difícil para ver as diferenças...";
			next;
		}
		mes "[Shena]";
		mes "Eu estava apenas sobre monstros perto de Einbroch.";
		mes "Aparentemente, vocês novatos não conhecem muito como deveriam.";
		next;
		mes "[Shena]";
		mes "Se aventura é seu seu negócio, você deve saber contra o que está lutando.";
		mes "Você tem alguma dúvida sobre monstros das redondezas daqui, minha pequena?";
		next;
		if (Sex == SEX_MALE) {
			select("Eu não sou mulher!");
			mes "[Shena]";
			mes "Então querido, qual monstro você está interessado em ouvir sobre?";
			next;
		}
		while(1) {
			switch(select("Metalling","Mineral","Mineiros","Fornalha Velha","Sair")) {
				case 1:
				mes "[Shena]";
				mes "Bom, os Metalings foram criados durante nos tempos em que os deuses mandavam sobre este mundo.";
				next;
				mes "[Shena]";
				mes "Eu não estou certo se sabe sobre isso ou não.";
				mes "Mas de acordo com o mito, Porings e Drops foram criados a partir da saliva de Odin.";
				mes "Eu acho que você não iria querer saber sobre o Poporing...";
				next;
				mes "[Shena]";
				mes "Metalings, na outra mão, foram criados de sangue de máquinas que nós acreditamos ser chamadas de 'Gigantes.'";
				next;
				mes "[Shena]";
				mes "Os Metalings são como essas gelatinas que vivem pulando eles pegam tudo que encontram no chão.";
				next;
				mes "[Shena]";
				mes "Se você matar um Metaling, você pode dropar um Jellopy Tamanho Família, Minério ou até mesmo Aço.";
				mes "Isso pode ser bom em se saber, não?";
				next;
				mes "[Shena]";
				mes "Há mais alguma coisa que deseja saber?";
				next;
				break;
				case 2:
				mes "[Shena]";
				mes "Você sabia que as estalactites e cristais das cavernas levam centenas e centenas de anos para se formarem?";
				next;
				mes "[Shena]";
				mes "Agora, se alguma coisa anda nascendo em centenas de anos só pode fazer sentido se tiver atualmente vivo.";
				mes "Agora monstros do minério são estalactites vivas.";
				next;
				mes "[Shena]";
				mes "Há rumores de que estão nascendo na caverna negra em algum ponto la dentro onde há influencias malignas muito forte sobre elas.";
				next;
				mes "[Shena]";
				mes "Minerais podem se defender, mas eles podem dropar Fragmentos de Cristais, Topázio e Emveretarcon se você derrotar um.";
				mes "Há sempre uma chance de eles derrubarem jóias raras, mas não tenho certeza.";
				next;
				mes "[Shena]";
				mes "Mais alguma coisa?";
				next;
				break;
				case 3:
				mes "[Shena]";
				mes "Mineiros são fantasmas de mineiros mortos que usam velhos e enferrujados carrinhos.";
				mes "Por alguma razão, eles não podem deixar esse mundo, então eles continuam vagando pelas minas.";
				next;
				mes "[Shena]";
				mes "Se você derrotar algum deles, poderá conseguir uma Picareta Velha, Lampião, Aço, Ferro, Carvão e Lanterna de Bolso";
				next;
				mes "[Shena]";
				mes "Você quer perguntar mais algumas coisa sobre os monstros?";
				next;
				break;
				case 4:
				mes "[Shena]";
				mes "É somente uma maligna, Fornalha Velha comedora de homens.";
				next;
				switch(select("...Isso seria?","H-horripilante!")) {
					case 1:
					mes "[Shena]";
					mes "Agora, você sabe a importância de reciclar e preservar nossos recursos naturais, certo?";
					mes "Agora, você me fara se sentir bem se recilcar esses pedaços de ferro dessas Fornalhas Velhas.";
					next;
					mes "[Shena]";
					mes "Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Minério.";
					mes "Mas eventualmente podem peças interessantes como Ferro Enferrujado ou mesmo Galho Seco.";
					next;
					break;
					case 2:
					mes "[Shena]";
					mes "Criação divina, essa criatura é cruel e sem piedade, contudo um simbolo do mal puro do qual você jamais viu.";
					next;
					mes "[Shena]";
					mes "Ao contrário dos novos dispositivos, as Fornalhas Velhas foram feitas por";
					mes "Mestres-Ferreiros que, eu acho, criaram as almas delas também.";
					mes "Eles usaram-nas para produzir um benevolente calor.";
					next;
					mes "[Shena]";
					mes "Por anos serviram seus mestres com lealdade.";
					mes "Mas as tecnologias avançadas e elas ficaram obsoletas, elas foram descartadas como lixo velho.";
					mes "Isso as transforamaram em seres ^FF0000malígnos^000000.";
					next;
					mes "[Shena]";
					mes "Fornalhas Velhas geralmente deixam Panelha Velha, Madeira Queimada, Ferro e Minério.";
					mes "Mas eventualmente podem peças interessantes como Ferro Enferrujado ou mesmo Galho Seco.";
					next;
					break;
				}
				mes "Então, ainda tem mais algo que quer que eu compartilhe com você?";
				next;
				break;
				case 5:
				mes "[Shena]";
				mes "Certo então.";
				mes "tenha um bom.";
				close;
			}
		}
		case 2:
		mes "[Shena]";
		mes "Você não viveu o suficiente para ser experiente como eu e não aprendeu nem um pouco sobre nosso vasto mundo.";
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,242,5	script	Jung#ein	4_M_EINMAN,{
	mes "[Jung]";
	mes "Eu sou uma das poucas pessoas que viveram em ambas Einbech e Einbroch por um longo tempo.";
	mes "Então eu acho que eu sou um dos melhores guias desta área.";
	next;
	mes "[Jung]";
	mes "Diga, se você está pensando em entrar na caverna.";
	mes "Eu posso contar a você tudo que eu sei sobre os monstros daquele lugar de forma que você ficara melhor preparado.";
	next;
	switch(select("Claro, porque não?","Não, mesmo.")) {
		case 1:
		mes "[Jung]";
		mes "Deixe-me ver.";
		mes "Ah, os monstros que são únicos da Mina são Nuvem Tóxicas, Nuvem Venenosa, Porcellio e Obsidiana.";
		mes "Qual destes você deseja saber mais?";
		next;
		switch(select("Nuvem Tóxica e Nuvem Venenosa","Porcellio","Obsidiana")) {
			case 1:
			mes "[Jung]";
			mes "Você sabe, ninguem parece saber de onde as Nuvem Tóxicas e Nuvem Venenosa vieram se formar.";
			mes "Isto é, como eles apareceram fora de parte alguma quando Einbroch começou se industrializar.";
			next;
			mes "[Jung]";
			mes "Agora que eu penso sobre isto, não acretido que eles são monstros criados naturalmente.";
			mes "Eles tem este olha fixo de desespero e sofrimento e tendem a agir como eles precisassem matar seus inimigos.";
			next;
			mes "[Jung]";
			mes "Mas, você deveria ter mais cuidado!";
			mes "Nuvem Tóxica e a Nuvem Venenosa são monstros furtivos que podem planar silênciosamente pelo ar e o atacar antes de você reparar...";
			next;
			mes "[Jung]";
			mes "Você deve saber que Nuvem Tóxica tem propriedade de Fantasma e Nuvem Venenosa é venenoso.";
			mes "Ambos são médios de tamanho, monstros sem forma.";
			next;
			mes "[Jung]";
			mes "Ambos deixam Maçã, Poeira Poluente, Gás Tóxico, Poeira Venenosa, Bactérias, Pó de Bolor e Analgésico.";
			next;
			mes "[Jung]";
			mes "Isto é tudo por enquanto.";
			mes "Sinta-se livre para me perguntar se você tiver qualquer duvida sobre os monstros da Mina, tome cuidado.";
			close;
			case 2:
			mes "[Jung]";
			mes "Porcellio é um inseto que vive nas cavernas e bebe água gotejada das estalactites.";
			mes "É diferente do Ungoliant porque eles gostam de diferentes tipos de minerais e minérios.";
			next;
			mes "[Jung]";
			mes "Porcellio deixa Jubileu, Perna de Inseto, Célula Única, Líquido Fluorescente e algumas outras coisas que eu não consigo me lembrar.";
			next;
			mes "[Jung]";
			mes "Finalmente, Porcellio é um monstro da propriedade Terra.";
			mes "Isto é tudo que eu sei sobre ele.";
			mes "Mas se você deseja saber mais sobre alguns monstros da Mina, sinta-se livre para perguntar.";
			close;
			case 3:
			mes "[Jung]";
			mes "Você sabe sobre a crença de minerais subterrâneos que contém altas quantidades de energia realmente têm alma?";
			mes "Obsidiana é uma dessas rochas vivas.";
			next;
			mes "[Jung]";
			mes "Supostamente, apenas um pedaço de um Obsidiana em um Processador Jung tem bastante energia para iluminar um céu anoitecido.";
			mes "Infelizmente, é impossivel de capturar um vivo e os caçar não é tão fácil.";
			next;
			mes "[Jung]";
			mes "Obsidiana é um pequeno monstro sem forma que deixa Fragmento de Cristal Negro, Carvão, Elunium, Ferro e Aço.";
			next;
			mes "[Jung]";
			mes "Isto é tudo sobre Obsidiana.";
			mes "Se você tiver qualquer dúvida sobre outros monstros que vivem na Mina, sinta-se livre para me perguntar.";
			close;
		}
		case 2:
		mes "[Jung]";
		mes "Eu entendo se você estiver com tanta pressa.";
		mes "Apesar, se você for novo por aqui.";
		mes "Você deveria aprender tanto quanto você puder antes de entrar em qualquer calabouço.";
		next;
		mes "[Jung]";
		mes "Certo então, tome cuidado em suas aventuras, tudo bem?";
		close;
	}
}

// ------------------------------------------------------------------
einbech,148,246,5	script	Franz#ein	4_M_REPAIR,{
	mes "[Franz]";
	mes "Tão entediante...";
	mes "morrer de fome para conversar.";
	mes "A-alguém...";
	next;
	mes "[Franz]";
	mes "Hei, um viajante!";
	mes "Você esta planejando explorar a Mina ou os campos aos arredores daqui?";
	mes "Vamos conversar um pouco e talvez você aprenderá algo.";
	next;
	switch(select("Certo, tudo bem.","Não, obrigado.")) {
		case 1:
		mes "[Franz]";
		mes "Ooh, você que ouvir sobre a criatura da Mina ou o que aconteceu na cidade recentemente?";
		mes "O que você gostaria de saber mais?";
		next;
		switch(select("Criatura da Mina","Incidente da Cidade")) {
			case 1:
			mes "[Franz]";
			mes "A criatura que eu estou falando é Ungoliant, que também é chamado por aqui de Mestre das Cavernas.";
			mes "Dizem que ele vive na cavernas profundas onde ele guarda minérios raros e minerais com estranhos poderes.";
			next;
			mes "[Franz]";
			mes "No começo eu achava que ele era apenas um velho conto de fadas.";
			mes "Mas ele realmente começou a aparecer novamente cerca de dez anos atrás quando os desmoronamentos dos túneis começaram a acontecer.";
			next;
			mes "[Franz]";
			mes "Com as aparições de Ungoliant aumentando, mais e mais descoronamentos dos túneis aconteceram.";
			mes "Eu acho que os mineradores indevidamente entraram no território dele.";
			next;
			mes "[Franz]";
			mes "De acordo com a lenda, antigos gigantes entraram na mina para roubar carvão dos humanos.";
			mes "Mas eles fizeram muito barulho enquanto estavam escavando e despertaram Ungoliant.";
			next;
			mes "[Franz]";
			mes "Quandos os mineradores foram trabalhar na manhã seguinte, eles acharam os corpos desses gigantes todos ensangüentados.";
			mes "Depois disso, as pessoas ficaram com medo do que Ungoliant pode fazer com qualquer um que entrar na mina.";
			next;
			mes "[Franz]";
			mes "Agora, um aventureiro que conseguiu matar um Ungoliant me contou que ele deixa Mandíbula de Formiga, Casco Arco-Íris, Líquido Fluorescente e Zircônio.";
			close;
			case 2:
			mes "[Franz]";
			mes "Em Einbroch, havia uma moda de ter ursinho de pelúcia.";
			mes "No entanto, uma série de misteriosos acidentes e assassinatos onde famílias inteiras foram mortas aconteceram.";
			next;
			mes "[Franz]";
			mes "Acontece que todas as famílias que foram assassinadas tinham comprado um desses ursinhos de pelúcia.";
			mes "Havia certos rumores que esses ursinhos de pelúcia ganhavam vida.";
			next;
			mes "[Franz]";
			mes "Depois de uma investigação, as autoridades descobriram que todos os comerciantes que vendiam esses ursos tinham os comprados de um mesmo atacadista, um estranho que ninguém conhecia.";
			next;
			mes "[Franz]";
			mes "Considerando que esses ursinhos de pelúcia, claramente não foram feitos para serem, brinquedos inofensivos, soldados foram enviados para assegurar que todos os ursinhos de pelúcias fossem jogados para fora da cidade.";
			next;
			mes "[Franz]";
			mes "Mas assim que os ursinhos de pelúcia foram expulsos da cidade, eles ganharam vida e começaram a se revoltar!";
			mes "Esta é uma prova clara que esses ursinhos são controlados pelas forças do mal.";
			next;
			mes "[Franz]";
			mes "Agora esses ursinhos agressivos estão espalhados por todo lugar e o governo os classficou como monstros.";
			mes "Mate com dano extremo!";
			next;
			mes "[Franz]";
			mes "De acordo com os aventureiros";
			mes "que enfrentaram esses ursos,";
			mes "eles são monstros pequenos, de propriedade neutra";
			mes "que deixam Mel, Prego Enferrujado, Biscoito de";
			mes "Gengibre e Martelo de Oridecon.";
			next;
			mes "[Franz]";
			mes "Isto é tudo que eu sei sobre eles.";
			mes "Tome cuidado com esses ursinhos se você sair para explorar, certo?";
			mes "Eles podem ser fofinhos, mas eles são conhecidos por serem extremamente crueis!";
			close;
		}
		case 2:
		mes "[Franz]";
		mes "Oh, certo.";
		mes "Você esta ocupado e tem coisas para fazer, eu entendo.";
		mes "Você provavelmente tem algum lugar para ir agora mesmo.";
		mes "Certo. Vá.";
		next;
		mes "[Franz]";
		mes "Eu...";
		mes "Eu tenho um material no qual eu deveria estar trabalhando.";
		mes "Sim. Ando muito ocupado.";
		close;
	}
}

// ------------------------------------------------------------------
// - [ Casas ] -
// ------------------------------------------------------------------
ein_in01,279,92,3	script	Senhorita#ein	4_M_EINMAN2,{
	mes "[Senhorita]";
	mes "A maioria dos homens de Einbech são brutos, primitivos e machistas!";
	mes "Eles me enojam!";
	next;
	mes "[Senhorita]";
	mes "Eu quero dizer que, não há nada de bom neles!";
	mes "Eles são selvagens, violentos, cabeças ocas e ignorantes.";
	mes "Eles resolvem todos os seus problemas na força e eles são assim... mente fechada!";
	next;
	mes "[Senhorita]";
	mes "Como eles não podem saber que as mulheres querem homens suaves, sensíveis, com quem possam compartilhar seus sentimentos e beber um chá de chamille sobre uma toalha tricotada?";
	close;
}

// ------------------------------------------------------------------
ein_in01,277,95,7	script	Kim#einbech	4_M_EINMAN,{
	mes "[R.D. Kim]";
	mes "Oooh...";
	next;
	mes "[R.D. Kim]";
	mes "Oooh...";
	mes "Mamãe.";
	next;
	mes "[R.D. Kim]";
	mes "Oooh...";
	mes "Mamãe.";
	mes "Você é assim...";
	next;
	mes "[R.D. Kim]";
	mes "Oooh...";
	mes "Mamãe.";
	mes "Você é assim...";
	mes "^FF0000Quente^000000!";
	next;
	mes "[R.D. Kim]";
	mes "Por quê você não tirar essas roupas pesadas, incômodas?";
	mes "Eu vou comprar tudo que";
	mes "você desejar, estou aqui! Venha.";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "N-no...!";
	mes "I-I-I-I...";
	mes "^666666Este é o sujeito mais sombrio que eu já vi!^000000";
	next;
	mes "[R.D. Kim]";
	mes "Hm? Não...?";
	mes "Absolutamente não?";
	mes "Você tem certeza?";
	mes "Tudo bem, tudo bem.";
	mes "Me desculpe, eu peço desculpas.";
	mes "Eu esta fora de mim.";
	next;
	mes "[R.D. Kim]";
	mes "...";
	mes "Ou eu estava?";
	mes "Bwahahahaha!";
	next;
	mes "["+strcharinfo(PC_NAME)+"]";
	mes "Es-este sujeito deve estar bêbado, com a mente drogada";
	close;
}

// ------------------------------------------------------------------
ein_in01,281,85,3	script	Bêbado#einbech	4_M_DIEMAN,{
	mes "[Bêbado]";
	mes "...^333333*Hiccup*^000000...";
	mes "^333333*Hiccup*^000000...";
	mes "^333333*Yawn*^000000.....";
	mes ".................";
	mes "..^333333*Hiccup*^000000.....";
	mes "^333333*Hiccup*^000000..";
	close;
}