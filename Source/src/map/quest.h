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
| - Este c�digo � livre para editar, redistribuir de acordo com os  |
| termos da GNU General Public License, publicada sobre conselho    |
| pela Free Software Foundation.                                    |
|                                                                   |
| - Qualquer ato de comercializa��o desse software est� previsto    |
| em leis internacionais, junto com este(s) c�digo(s) voc� recebeu  |
| uma c�pia de licen�a de uso.                                      |
| - Caso n�o tenha recebido veja: http://www.gnu.org/licenses/      |
\*-----------------------------------------------------------------*/

#ifndef MAP_QUEST_H
#define MAP_QUEST_H

#include "common/HPExport.h"
#include "common/mmo.h" // enum quest_state

/* Forward Declarations */
struct block_list;
struct config_setting_t;
struct map_session_data;

#define MAX_QUEST_DB (60355+1) // Highest quest ID + 1

struct quest_dropitem {
	int mob_id;
	int nameid;
	int rate;
};

struct quest_objective {
	int mob;
	int count;
};

struct quest_db {
	int id;
	unsigned int time;
	int objectives_count;
	struct quest_objective *objectives;
	int dropitem_count;
	struct quest_dropitem *dropitem;
	//char name[NAME_LENGTH];
};

// Questlog check types
enum quest_check_type {
	HAVEQUEST, ///< Query the state of the given quest
	PLAYTIME,  ///< Check if the given quest has been completed or has yet to expire
	HUNTING,   ///< Check if the given hunting quest's requirements have been met
};

struct quest_interface {
	struct quest_db **db_data; ///< Quest database
	struct quest_db dummy;                  ///< Dummy entry for invalid quest lookups
	/* */
	void (*init) (bool minimal);
	void (*final) (void);
	void (*reload) (void);
	/* */
	struct quest_db *(*db) (int quest_id);
	int (*pc_login) (struct map_session_data *sd);
	int (*add) (struct map_session_data *sd, int quest_id);
	int (*change) (struct map_session_data *sd, int qid1, int qid2);
	int (*delete) (struct map_session_data *sd, int quest_id);
	int (*update_objective_sub) (struct block_list *bl, va_list ap);
	void (*update_objective) (struct map_session_data *sd, int mob_id);
	int (*update_status) (struct map_session_data *sd, int quest_id, enum quest_state qs);
	int (*check) (struct map_session_data *sd, int quest_id, enum quest_check_type type);
	void (*clear) (void);
	int (*read_db) (void);
	struct quest_db *(*read_db_sub) (struct config_setting_t *cs, int n, const char *source);
};

#ifdef HPM_MAIN_CORE
void quest_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct quest_interface *quest;

#endif /* MAP_QUEST_H */
