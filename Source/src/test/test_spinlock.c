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

#define HPM_MAIN_CORE

#include "common/atomic.h"
#include "common/cbasetypes.h"
#include "common/core.h"
#include "common/thread.h"
#include "common/spinlock.h"
#include "common/showmsg.h"

#include <stdio.h>
#include <stdlib.h>

//
// Simple test for the spinlock implementation to see if it works properly..
//

#define THRC 32 //thread Count
#define PERINC 100000
#define LOOPS 47

static struct spin_lock lock;
static unsigned int val = 0;
static volatile int32 done_threads = 0;

static  void *worker(void *p){
	register int i;

	for(i = 0; i < PERINC; i++){
		EnterSpinLock(&lock);
		EnterSpinLock(&lock);

		val++;

		LeaveSpinLock(&lock);
		LeaveSpinLock(&lock);
	}

	InterlockedIncrement(&done_threads);

	return NULL;
}//end: worker()

int do_init(int argc, char **argv)
{
	struct thread_handle *t[THRC];
	int j, i;
	int ok;

	ShowStatus("==========\n");
	ShowStatus("TEST: %d Runs,  (%d Threads)\n", LOOPS, THRC);
	ShowStatus("This can take a while\n");
	ShowStatus("\n\n");

	ok =0;
	for(j = 0; j < LOOPS; j++){
		val = 0;
		done_threads = 0;

		InitializeSpinLock(&lock);

		for(i =0; i < THRC; i++){
			t[i] = thread->create_opt(worker, NULL, 1024*512, THREADPRIO_NORMAL);
		}

		while(1){
			if(InterlockedCompareExchange(&done_threads, THRC, THRC) == THRC)
				break;
			thread->yield();
		}

		FinalizeSpinLock(&lock);

		// Everything fine?
		if (val != (THRC*PERINC)) {
			printf("FAILED! (Result: %u, Expected: %d)\n",  val,  (THRC*PERINC));
		} else {
			printf("OK! (Result: %u, Expected: %d)\n", val, (THRC*PERINC));
			ok++;
		}

	}

	if(ok != LOOPS){
		ShowFatalError("Test failed.\n");
		exit(1);
	}else{
		ShowStatus("Test passed.\n");
		exit(0);
	}
	return 0;
}//end: do_init()

void do_abort(void) {
}//end: do_abort()

void set_server_type(void) {
	SERVER_TYPE = SERVER_TYPE_UNKNOWN;
}//end: set_server_type()

int do_final(void) {
	return EXIT_SUCCESS;
}//end: do_final()

int parse_console(const char* command){
	return 0;
}//end: parse_console

void cmdline_args_init_local(void) { }
