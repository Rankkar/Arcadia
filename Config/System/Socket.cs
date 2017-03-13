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
| - Descrição: Configuação para Sockets                                |
\*--------------------------------------------------------------------*/

socket_configuration: {
	// Por quanto tempo um soquete pode ser mantido antes da conexão ser interrompida (em segundos)
	stall_time: 60

	// Exibir relatório de depuração (quando acontece algo errado durante o relatório, o mesmo é salvo).
	debug: false

	// Linux / Epoll: Eventos máximos por ciclo
	// Valor padrão:
	// (Máximo de conexões suportadas) / 2
	// NOTA: isso controla o máximo coletado socket-eventos por ciclo (chamada para epoll_wait ())
	// Por exemplo, as configurações para 32 permitirão até 32 eventos (dados de entrada / novas conexões
	// por ciclo de servidor.
	// NOTA: Configurações recomendadas é pelo menos metade das conexões suportadas maxmimum
	// Ajusta este valor para um valor inferior, pode causar atrasos / atrasos
	// Dependendo do tempo de CPU disponível
	// OBSERVAÇÃO: Esta configuração está disponível apenas no Linux quando construir usando EPoll como distribuidor de eventos!
	//
	//epoll_maxevents: 1024

	// Tamanho máximo permitido para pacotes de clientes em bytes.
	// 24576 (Clients < 20131223)
	// 65535 (Clients >= 20131223)
	// NOTA: Para reduzir o tamanho dos pacotes relatados, diminua os valores de define, que
	// foram personalizados, como MAX_STORAGE, MAX_GUILD_STORAGE ou MAX_CART.
	// Observação: Não modifique esta configuração, a menos que o cliente tenha sido modificado para suporte
	// pacotes maiores. O cliente irá falhar, quando recebe pacotes maiores.
	//
	//socket_max_client_packet: 65535

	//----- IP Rules Settings -----
	ip_rules: {
		// If IP's are checked when connecting.
		// This also enables DDoS protection.
		enable: true

		//   deny,allow     : Checa as regras de proibição e então as de permissão. Permite caso as regras não coincidam.
		//   allow,deny     : Checa as regras de permissão e então as de proibição. Permite caso as regras não coincidam.
		//   mutual-failure : Permite apenas se as regras de permissão e de proibição concidirem.
		// (o padrão é deny,allow)
		order: "deny,allow"

		// IP rules
		// allow: Aceita conexões do intervalo ip (mesmo se marcado como DDoS)
		// deny: Rejeita conexões do intervalo ip
		// As regras são processadas em ordem, a primeira regra de correspondência de cada lista (permitir e negar) é usada
		allow_list: (
			//"127.0.0.1",
			//"192.168.0.0/16",
			//"10.0.0.0/255.0.0.0",
			//"all",
		)
		deny_list: (
			//"127.0.0.1",
		)
	}

	//---- Proteção contra DDoS ----
	// Se a solicitação de conexão ddos.count for feita dentro ddos.interval ms, ele assume que é um ataque DDoS
	ddos: {
		// Se a permissão de conexão ddos_count é realizada com o ddos_interval msec, isso configura um ataque DDoS
		// Intervalos de tentativas consecutivas (msec)
		// (o padrão é 3000 msecs, 3 segundos)
		interval: 3000 //ddos_interval

		// Gatilho de tentativas consecutivas
		// (o padrão é 5 tentativas)
		count: 5 //ddos_count

		// O intervalo de tempo em que as ameaças de ataque DDoS não serão mais configuradas. (msec)
		// Após esse tempo, as restrições de DDoS são levantadas.
		// (o padrão é 600000 msecs, 10 minutos)
		autoreset: 600000 //ddos_autoreset
	}
}