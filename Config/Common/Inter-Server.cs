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
| - Descrição: Configuação para Comunicação                            |
\*--------------------------------------------------------------------*/

inter_configuration: {
	// Diferença em level para compartilhar experiência
	party_share_level: 10

	log: {
		log_inter: false
		inter_log_filename: "log/inter.log"
		@include "Config/Connect/Connections.cs"
	}

	mysql_reconnect: {
		// == Configurações do MySQL Reconnect
		// ===========================
		// - mysql_reconnect_type
		// - 1: quando o mysql se desconecta durante o tempo de execução, o servidor tenta reconectar mysql_reconnect_count vezes e,
		// - se não tiver êxito, o servidor será desligado
		// - 2: quando o mysql se desconecta durante o tempo de execução ele tenta se reconectar indefinidamente
		type: 2

		// - mysql_reconnect_count
		// - número de tentativas de reconexão que o servidor deve fazer quando o banco de dados é desconectado durante o tempo de execução
		// - usado somente quando mysql_reconnect_type é 1
		count: 1
	}

	// TODOS os nomes de tabelas da base de dados MySQL
	// NÃO MUDE ALGUMA COISA ALÉM DESTE LINHA A MENOS QUE VOCÊ CONHEÇA SEUS DATABASE DAMN BEM
	// isso é para pessoas que CONHECEM suas coisas e, por algum motivo, querem mudar suas
	// layout do banco de dados.
	database_names: {
		account_db: "login"
		login_db: "loginlog"
		ipban_table: "ipbanlist"
		char_db: "char"
		interlog_db: "interlog"
		ragsrvinfo_db: "ragsrvinfo"
		registry: {
			acc_reg_num_db: "acc_reg_num_db"
			acc_reg_str_db: "acc_reg_str_db"
			char_reg_str_db: "char_reg_str_db"
			char_reg_num_db: "char_reg_num_db"

			global_acc_reg_num_db: "global_acc_reg_num_db"
			global_acc_reg_str_db: "global_acc_reg_str_db"
		}
		pc: {
			hotkey_db: "hotkey"
			scdata_db: "sc_data"
			cart_db: "cart_inventory"
			inventory_db: "inventory"
			charlog_db: "charlog"
			storage_db: "storage"
			skill_db: "skill"
			memo_db: "memo"
			party_db: "party"
			pet_db: "pet"
			friend_db: "friends"
			mail_db: "mail"
			auction_db: "auction"
			quest_db: "quest"
			homunculus_db: "homunculus"
			skill_homunculus_db: "skill_homunculus"
			mercenary_db: "mercenary"
			mercenary_owner_db: "mercenary_owner"
			elemental_db: "elemental"
			account_data_db: "account_data"
		}
		guild: {
			main_db: "guild"
			alliance_db: "guild_alliance"
			castle_db: "guild_castle"
			expulsion_db: "guild_expulsion"
			member_db: "guild_member"
			skill_db: "guild_skill"
			position_db: "guild_position"
			storage_db: "guild_storage"
		}
		mapreg_db: "mapreg"
		autotrade_merchants_db: "autotrade_merchants"
		autotrade_data_db: "autotrade_data"
		npc_market_data_db: "npc_market_data"
	}
}