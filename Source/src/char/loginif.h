/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|    Source code          \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                      Projeto Ragnarok Online                      |
+-------------------------------------------------------------------+
| - Este código é livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercialização desse software está previsto    |
| em leis internacionais, junto com este(s) código(s) você recebeu  |
| uma cópia de licença de uso.                                      |
| - Caso não tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef CHAR_LOGINIF_H
#define CHAR_LOGINIF_H

#include "common/HPExport.h"

struct char_session_data;

/**
 * loginif interface
 **/
struct loginif_interface {
	void (*init) (void);
	void (*final) (void);
	void (*reset) (void);
	void (*check_shutdown) (void);
	void (*on_disconnect) (void);
	void (*on_ready) (void);
	void (*block_account) (int account_id, int flag);
	void (*ban_account) (int account_id, short year, short month, short day, short hour, short minute, short second);
	void (*unban_account) (int account_id);
	void (*changesex) (int account_id);
	void (*auth) (int fd, struct char_session_data* sd, uint32 ipl);
	void (*send_users_count) (int users);
	void (*connect_to_server) (void);
};

#ifdef HPM_MAIN_CORE
void loginif_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct loginif_interface *loginif;

#endif /* CHAR_LOGINIF_H */
