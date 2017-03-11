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

#ifndef COMMON_CONSOLE_H
#define COMMON_CONSOLE_H

#include "common/HPExport.h"
#include "common/db.h"
#include "common/spinlock.h"

/* Forward Declarations */
struct Sql; // common/sql.h
struct cond_data;
struct mutex_data;
struct spin_lock;
struct thread_handle;

/**
 * Queue Max
 * why is there a limit, why not make it dynamic? - I'm playing it safe, I'd rather not play with memory management between threads
 **/
#define CONSOLE_PARSE_SIZE 10

/**
 * Default parsing function abstract prototype
 **/
typedef void (*CParseFunc)(char *line);

/**
 * Console parsing function prototypes
 * CPCMD: Console Parsing CoMmand
 * x - command
 * y - category
 **/
#define CPCMD(x) void console_parse_ ##x (char *line)
#define CPCMD_A(x) console_parse_ ##x
#define CPCMD_C(x,y) void console_parse_ ##y ##x (char *line)
#define CPCMD_C_A(x,y) console_parse_ ##y ##x

#define CP_CMD_LENGTH 20

enum CONSOLE_PARSE_ENTRY_TYPE {
	CPET_UNKNOWN,
	CPET_FUNCTION,
	CPET_CATEGORY,
};

struct CParseEntry {
	char cmd[CP_CMD_LENGTH];
	int type; ///< Entry type (@see enum CONSOLE_PARSE_ENTRY_TYPE)
	union {
		CParseFunc func;
		VECTOR_DECL(struct CParseEntry *) children;
	} u;
};

struct console_input_interface {
#ifdef CONSOLE_INPUT
	/* vars */
	struct spin_lock *ptlock;      ///< parse thread lock.
	struct thread_handle *pthread; ///< parse thread.
	volatile int32 ptstate;        ///< parse thread state.
	struct mutex_data *ptmutex;    ///< parse thread mutex.
	struct cond_data *ptcond;      ///< parse thread conditional variable.
	/* */
	VECTOR_DECL(struct CParseEntry *) command_list;
	VECTOR_DECL(struct CParseEntry *) commands;
	/* */
	struct Sql *SQL;
	/* */
	void (*parse_init) (void);
	void (*parse_final) (void);
	int (*parse_timer) (int tid, int64 tick, int id, intptr_t data);
	void *(*pthread_main) (void *x);
	void (*parse) (char* line);
	void (*parse_sub) (char* line);
	int (*key_pressed) (void);
	void (*load_defaults) (void);
	void (*parse_list_subs) (struct CParseEntry *cmd, unsigned char depth);
	void (*addCommand) (char *name, CParseFunc func);
	void (*setSQL) (struct Sql *SQL_handle);
#else // not CONSOLE_INPUT
	UNAVAILABLE_STRUCT;
#endif
};

struct console_interface {
	void (*init) (void);
	void (*final) (void);
	void (*display_title) (void);
	void (*display_gplnotice) (void);

	struct console_input_interface *input;
};

#ifdef HPM_MAIN_CORE
void console_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct console_interface *console;

#endif /* COMMON_CONSOLE_H */
