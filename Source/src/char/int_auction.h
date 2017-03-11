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

#ifndef CHAR_INT_AUCTION_H
#define CHAR_INT_AUCTION_H

#include "common/HPExport.h"
#include "common/mmo.h"

/* Forward Declarations */
struct DBMap; // common/db.h

/**
 * inter_auction_interface interface
 **/
struct inter_auction_interface {
	struct DBMap *db; // int auction_id -> struct auction_data*
	int (*count) (int char_id, bool buy);
	void (*save) (struct auction_data *auction);
	unsigned int (*create) (struct auction_data *auction);
	int (*end_timer) (int tid, int64 tick, int id, intptr_t data);
	void (*delete_) (struct auction_data *auction);
	void (*fromsql) (void);
	int (*parse_frommap) (int fd);
	int (*sql_init) (void);
	void (*sql_final) (void);
};

#ifdef HPM_MAIN_CORE
void inter_auction_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct inter_auction_interface *inter_auction;

#endif /* CHAR_INT_AUCTION_H */
