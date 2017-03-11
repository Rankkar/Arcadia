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

#ifndef MAP_INSTANCE_H
#define MAP_INSTANCE_H

#include "map/script.h" // struct reg_db
#include "common/HPExport.h"
#include "common/mmo.h" // struct point

struct hplugin_data_store;
struct block_list;
struct map_session_data;

#define INSTANCE_NAME_LENGTH (60+1)

typedef enum instance_state {
	INSTANCE_FREE,
	INSTANCE_IDLE,
	INSTANCE_BUSY
} instance_state;

enum instance_owner_type {
	IOT_NONE,
	IOT_CHAR,
	IOT_PARTY,
	IOT_GUILD,
	/* ... */
	IOT_MAX,
};

struct instance_data {
	unsigned short id;
	char name[INSTANCE_NAME_LENGTH]; ///< Instance Name - required for clif functions.
	instance_state state;
	enum instance_owner_type owner_type;
	int owner_id;

	unsigned short *map;
	unsigned short num_map;
	unsigned short users;

	struct reg_db regs; ///< Instance variables for scripts

	int progress_timer;
	unsigned int progress_timeout;

	int idle_timer;
	unsigned int idle_timeout, idle_timeoutval;

	unsigned int original_progress_timeout;

	struct point respawn; ///< reload spawn
	struct hplugin_data_store *hdata; ///< HPM Plugin Data Store
};

struct instance_interface {
	void (*init) (bool minimal);
	void (*final) (void);
	void (*reload) (void);
	/* start point */
	unsigned short start_id;
	unsigned short instances;/* count */
	/* */
	struct instance_data *list;/* pointer to a chunk of consecutive memory, access via instance->list[0]..etc */
	/* */
	int (*create) (int party_id, const char *name, enum instance_owner_type type);
	int (*add_map) (const char *name, int instance_id, bool usebasename, const char *map_name);
	void (*del_map) (int16 m);
	int (*map2imap) (int16 m, int instance_id);
	int (*mapid2imapid) (int16 m, int instance_id);
	int (*mapname2imap) (const char *map_name, int instance_id);
	int (*map_npcsub) (struct block_list* bl, va_list args);
	int (*init_npc) (struct block_list* bl, va_list args);
	void (*destroy) (int instance_id);
	void (*start) (int instance_id);
	void (*check_idle) (int instance_id);
	void (*check_kick) (struct map_session_data *sd);
	void (*set_timeout) (int instance_id, unsigned int progress_timeout, unsigned int idle_timeout);
	bool (*valid) (int instance_id);
	int (*destroy_timer) (int tid, int64 tick, int id, intptr_t data);
};

#ifdef HPM_MAIN_CORE
void instance_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct instance_interface *instance;

#endif /* MAP_INSTANCE_H */