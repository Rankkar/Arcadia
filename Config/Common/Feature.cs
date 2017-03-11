/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/__/ /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|    Config File          \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                      Projeto Ragnarok Online                      |
+-------------------------------------------------------------------+
| - Descrição: Configuação para o Client                            |
+-------------------------------------------------------------------+
| - Nota: O valor é configurado por (true/false)                    |
\*-----------------------------------------------------------------*/

features: {
	// Loja de compras (Nota 1)
	// Necessita de 2010-04-27aRagexeRE ou mais novo
	buying_store: false

	// Search store (Nota 1)
	// Necessita de 2010-08-03aRagexeRE ou mais novo
	search_stores: true

	// Sugestão no atcommand (Nota 1)
	// Se for digitado um atcommand incompleto, irá ser sugerido o correto.
	atcommand_suggestions: false

	// Banco (Nota 1)
	// Necessário 2013-07-24aRagexe ou mais atualizado
	// Padrão: off
	banking: false

	// Leilão (Nota 1)
	// Se tornou instável nos últimos Clientes 2012.
	// De qualquer maneira, nos clientes mais atualizados que 15-05-2013 tornou-se funcional novamente
	// Padrão: off
	auction: false

	// Roleta (Note 1)
	// Requere: 2014-10-22bRagexe ou mais atual
	// Desativado por padrão. Em fase de testes, habilite por sua conta e risco!
	roulette: false
}
