/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
|----------------------------------------------------------------------|
| - Descrição: Configuação para os Consoles                            |
\*--------------------------------------------------------------------*/

console: {
	// Formato de data e hora que será impresso antes de todas as mensagens.
	// Pode ser no máximo 20 caracteres.
	// Formatos mais comuns:
	//% I:% M:% S% p (hora: minuto: segundo 12 horas, formato AM / PM)
	//% H:% M:% S (hora: minuto: segundo, formato 24 horas)
	//% d /% b /% Y (dia / mês / ano)
	// Para informações de formato completo, consulte o manual strftime ().
	//
	//timestamp_format: "[%d/%b %H:%M]"

	//Se a saída redirecionada contém seqüências de escape (códigos de cores)
	stdout_with_ansisequence: false

	// Torna a saída do servidor mais silenciosa ao omitir determinados tipos de mensagens:
	// 1: Ocultar mensagens de informação
	// 2: Ocultar mensagens de status
	// 4: Ocultar mensagens de aviso
	// 8: Ocultar mensagens de aviso
	// 16: Ocultar mensagens de erro e erro SQL.
	// 32: Ocultar mensagens de depuração
	// Exemplo: "console_silent: 7" Oculta informações, status e mensagens de aviso (1 + 2 + 4)
	console_silent: 0

	// [CHAR] Exibe informações no console sempre que os personagens / guildas / partes / 
	// animais de estimação são carregados / salvos?
	save_log: false

	// [MAP] Faz com que o log do servidor selecione tipos de mensagem em um arquivo na pasta / log /
	// 1: Registrar mensagens de aviso
	// 2: Log Error e mensagens de erro SQL.
	// 4: Registrar mensagens de depuração
	// Exemplo: "console_msg_log: 7" registra todos os 3 tipos
	// As mensagens registradas por isso substituem a configuração console_silent
	console_msg_log: 0
}