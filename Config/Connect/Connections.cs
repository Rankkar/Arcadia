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
| - Descrição: Configuação para Conexão                                |
+----------------------------------------------------------------------+
| * Configure aqui os endereços de IP/Login e senha de acesso.         |
\*--------------------------------------------------------------------*/

sql_connection: {
	//default_codepage: ""  // Você pode especificar a cofificação das tabelas mySQL aqui.
	//case_sensitive: false // O `userid` em account_db diferencia maiúsculas de minúsculas?

	db_hostname: "127.0.0.1"          // Ip do banco de dados no servidor MySql onde estão armazenas as tabelas do servidor
	db_port: 3306                     // Porta de acesso ao servidor MySql
	db_username: "arcadiasqluser"     // Login do usuário MySql que tem permissão de acessar o banco de dados
	db_password: "arcadiasqluserpass" // Senha do usuário MySql que tem permissão de acessar o banco de dados
	db_database: "arcadia"            // Nome do Banco de dados onde estão armazenadas as tabelas do servidor
	//codepage:""                     // Você pode especificar a cofificação expecífica das tabelas aqui.

	log_db_hostname: "127.0.0.1"          // Ip do banco de dados no servidor MySql onde estão armazenas as tabelas de logs
	log_db_port: 3306                     // Porta de acesso ao servidor MySql
	log_db_username: "arcadiasqluser"     // Login do usuário MySql que tem permissão de acessar o banco de dados
	log_db_password: "arcadiasqluserpass" // Senha do usuário MySql que tem permissão de acessar o banco de dados
	log_db_database: "arcadia_logs"       // Nome do Banco de dados onde estão armazenadas as tabelas de logs
	log_login_db: "loginlog"              // Nome da tabela para gerar logs do servidor de login
}

inter: {
	userid: "arcadiauser" // Login da conta principal usada para fazer comunicação entre os servidores (Jamais loge nessa conta!)
	passwd: "arcadiapass" // Senha da conta principal usada para fazer comunicação entre os servidores

	char_ip: "127.0.0.1" // Ip do servidor do Char-Serve
	char_port: 6121      // Porta de acesso ao Char-Serve

	map_ip: "127.0.0.1" // Ip do servidor do Map-Serve
	map_port: 5121      // Porta de acesso ao Map-Serve

	login_ip: "127.0.0.1"  // Ip do servidor de Login-Serve
	login_port: 6900       // Porta de acesso ao Login-Serve

	//bind_ip: "127.0.0.1" // IP compartilhado por mais de 1 emulador
	//ip_sync_interval: 10 // Intervalo (em minutos) para executar uma atualização DNS / IP. Desativado por padrão.
}