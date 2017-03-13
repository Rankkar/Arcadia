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
| - Descrição: Configuação para Login-Serve                            |
\*--------------------------------------------------------------------*/

login_configuration: {
	@include "Config/System/Console.cs"
	@include "Config/Connect/Connections.cs"

	log: {
		// Para registrar o servidor de login?
		// NOTA: O servidor de login-sql precisa dos logs de login para ativar as restrições de falha de passagem dinâmica.
		log_login: false

		// Indicar como exibir a data nos logs, nos jogadores, etc.
		date_format: "%Y-%m-%d %H:%M:%S"
	}

	// Configuração de conta
	account: {
		// Você pode usar _M / _F para criar novas contas no servidor?
		new_account: true

		// Se new_account estiver ativada, o comprimento mínimo para userid e senhas deve ser 4?
		// Deve ser 'true' a menos que seu cliente use 'Disable 4 LetterUserID / Password' Diffs
		new_acc_length_limit: true

		// Sistema de proteção contra inundações de registro de conta
		// allowed_regs é o número de registros permitidos em time_allowed (em segundos)
		allowed_regs: 1
		time_allowed: 10

		// Começando um segundo adicional a partir de agora pelo tempo limitado na criação da conta
		// -1: nova conta é criada com tempo ilimitado (valor padrão)
		// 0 ou mais: novas contas foram criadas por adição do valor (em segundos) ao tempo real (para definir o primeiro tempo limitado)
		start_limited_time: -1

		// Armazena senhas como MD5 hashes em vez de texto sem formatação?
		// Observação: não funcionará com clientes que usam <passwordencrypt>
		use_MD5_passwords: false

		// Configuração de armazenamento do mecanismo de dados da conta
		@include "Config/Connect/Connections.cs"

		//==================================================================
		// IP banning system
		//==================================================================
		ipban: {
			enabled: true

			// Intervalo (em segundos) para limpar proibições de IP expiradas. 0 = desativado. Padrão = 60.
			// OBSERVAÇÃO: Mesmo que isso esteja desativado, as proibições de IP expiradas serão limpas no início / término do servidor de login.
			// Os jogadores ainda poderão iniciar sessão se existir uma entrada ipban mas o tempo de expiração já tiver passado.
			cleanup_interval: 60

			// Configurações de conexão SQL
			@include "Config/Connect/Connections.cs"

			// Sistema de ipban de falha de senha dinâmica
			dynamic_pass_failure: {
				enabled: true

				// Intervalo em minutos entre tentativas falhadas
				// Somente as tentativas falhadas entre este intervalo serão contabilizadas ao
				ban_interval: 5

				// Quantas falhas antes de adicionar uma entrada de proibição temporária?
				ban_limit: 7

				// Duração da proibição em minutos
				ban_duration: 5
			}
		}
	}

	permission: {
		// ID do grupo de contas necessário para se conectar ao servidor.
		// -1: disabled
		// 0 ou mais: id do grupo
		group_id_to_connect: -1

		// ID do grupo de contas mínimo necessário para se conectar ao servidor.
		// Não funcionará se a configuração group_id_to_connect estiver habilitada.
		// -1: disabled
		// 0 ou mais: id do grupo
		min_group_id_to_connect: -1

		// Verificar A versão do cliente definida no clientinfo?
		check_client_version: false

		// Que versão permitiríamos para conectar? (Se check_client_version estiver ativada)
		client_version_to_connect: 20

		// Sistema de verificação de hash do cliente
		hash: {
			// Verificação de hash do cliente MD5
			// Se ativado, o servidor de login verificará se o hash do cliente corresponde
			// o valor abaixo, e não conectará clientes adulterados.
			enabled: false

			// Client hashes MD5
			// O cliente com o hash especificado pode ser utilizado para iniciar sessão com
			// um id_grupo igual ou maior que o valor especificado.
			// Se você especificar 'disabled' como hash, os jogadores com um group_id maior ou
			// igual ao valor especificado será capaz de fazer logon independentemente de hash (e até mesmo
			// se seu cliente não envia um hash.)
			MD5_hashes: (
			//{
			//	group_id: group id
			//	hash: client hash
			//},
			//{
			//	group_id: 0
			//	hash: "113e195e6c051bb1cfb12a644bb084c5"
			//},
			//{
			//	group_id: 10
			//	hash: "cb1ea78023d337c38e8ba5124e2338ae"
			//},
			//{
			//	group_id: 99
			//	hash: "disabled"
			//},
			)
		}

		DNS_blacklist: {
			// Bloqueio de lista negra DNS
			// Se ativado, cada conexão de entrada será testada em relação às listas negras
			// no dnsbl_servers especificado
			enabled: false

			dnsbl_servers: (
				// Aqui estão alguns serviços gratuitos da lista negra do DNS: http://en.wikipedia.org/wiki/Comparison_of_DNS_blacklists
				"Bl.blocklist.de", // Endereços IP que atacam outros servidores / honeypots através de SSH, FTP, IMAP, etc.
				//"ircbl.ahbl.org ", // AHBL (proxies abertos, máquinas comprometidas, spammers de comentário)
				//"safe.dnsbl.sorbs.net ", // Todas as zonas em dnsbl.sorbs.net exceto" recentes "e" escalations "
				//"sbl-xbl.spamhaus.org ", // Lista negra de Spamhaus (spammers, proxies abertos)
				"Socks.dnsbl.sorbs.net", // Abrir servidores proxy SOCKS
				//"tor.ahbl.org ", // Relé de corrente e nós de saída
			)
		}
	}
}