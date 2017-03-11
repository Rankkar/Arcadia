/*--------------------------------------------------------------------*\
|              ______ ____ _____ ___   __                              |
|             / ____ / _  / ____/  /  /  /                             |
|             \___  /  __/ __/ /  /__/  /___                           |
|            /_____/__/ /____//_____/______/                           |
|                 /\  /|   __    __________ _________                  |
|                /  \/ |  /  |  /  ___  __/ ___/ _  /                  |
|               /      | / ' | _\  \ / / / __//  __/                   |
|              /  /\/| |/_/|_|/____//_/ /____/_/\ \                    |
|             /__/   |_|    Config File          \/                    |
|                                                                      |
+----------------------------------------------------------------------+
|                      Projeto Ragnarok Online                         |
+----------------------------------------------------------------------+
| - Descrição: Configuação para Map-Serve                              |
\*--------------------------------------------------------------------*/

map_configuration: {
	@include "Config/System/Console.cs"
	@include "Config/Connect/Connections.cs"

	// Listas de mapa
	@include "Config/Common/Maps.cs"

	// Quando @help ou @h é digitado quando você é um gm, isso é exibido para ajudar os novos gms a entender os comandos gm.
	help_txt: "Config/help.txt"
	charhelp_txt: "Config/charhelp.txt"

	// Ativar os comandos @guildspy e @partyspy em?
	// Note que habilitá-los diminui o desempenho de envio de pacotes.
	enable_spy: false

	// Leia dados de mapa de GATs e RSWs em arquivos GRF ou um diretório de dados
	// como referenciado por grf-files.txt em vez de partir do mapcache?
	use_grf: false

	// Informações relacionadas ao comportamento entre servidores
	database: {
		// Onde devem ser lidos todos os dados do banco de dados?
		db_path: "db"

		// Tempo de salvamento automático da base de dados
		// Todos os caracteres são salvos neste tempo em segundos (exemplo:
		// autosave de 60 segundos com 60 caracteres on-line -> um char é
		// salvo a cada segundo)
		autosave_time: 300

		// Min banco de dados salvar intervalos (em ms)
		// Evita salvar caracteres mais rápido do que a essa taxa (evita
		// char-server save-load ficando muito alto como character-count
		// aumenta)
		minsave_time: 100

		// Além do autosave_time, os jogadores também serão salvos
		// quando envolvido no seguinte (adicione conforme necessário):
		// 0x001: Após cada troca bem-sucedida
		// 0x002: Após cada transação de venda automática
		// 0x004: Após fechar armazenamento / guild armazenamento.
		// 0x008: Após a eclosão / retorno para ovo de um animal de estimação.
		// 0x010: depois de enviar com êxito um email com anexo
		// 0x020: Após enviar com êxito um item para leilão
		// 0x040: Depois de obter / excluir / concluir com êxito uma missão
		// 0x080: após cada transação de loja de compra
		// 0x100: Após cada transação bancária (depósito / retirada)
		// NOTA: Essas configurações diminuem a chance de dupes / itens perdidos
		// quando há um crash do servidor à custa de aumentar o
		// map / char lag do servidor. Se o seu servidor raramente falhar, mas
		// experimenta o intervalo interserver, você pode querer ajustá-los fora.
		save_settings: 0x1ff
	}
}