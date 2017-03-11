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

#ifndef CHAR_INT_PET_H
#define CHAR_INT_PET_H

#include "common/HPExport.h"

struct s_pet;

/**
 * inter_pet interface
 **/
struct inter_pet_interface {
	struct s_pet *pt;
	int (*tosql) (const struct s_pet *p);
	int (*fromsql) (int pet_id, struct s_pet* p);
	int (*sql_init) (void);
	void (*sql_final) (void);
	int (*delete_) (int pet_id);
	int (*parse_frommap) (int fd);
};

#ifdef HPM_MAIN_CORE
void inter_pet_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct inter_pet_interface *inter_pet;

#endif /* CHAR_INT_PET_H */
