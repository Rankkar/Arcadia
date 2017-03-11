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

#ifndef COMMON_SPINLOCK_H
#define COMMON_SPINLOCK_H

// CAS based Spinlock Implementation
//
// CamelCase names are chosen to be consistent with Microsoft's WinAPI
// which implements CriticalSection by this naming...
//
// Author: Florian Wilkemeyer <fw@f-ws.de>

#include "common/atomic.h"
#include "common/cbasetypes.h"
#include "common/thread.h"

#ifdef WIN32
#include "common/winapi.h"
#endif

#ifdef WIN32
struct __declspec(align(64)) spin_lock {
	volatile LONG lock;
	volatile LONG nest;
	volatile LONG sync_lock;
};
#else
struct spin_lock {
	volatile int32 lock;
	volatile int32 nest; // nesting level.
	volatile int32 sync_lock;
} __attribute__((aligned(64)));
#endif

#ifdef HPM_MAIN_CORE
static forceinline void InitializeSpinLock(struct spin_lock *lck)
{
	lck->lock = 0;
	lck->nest = 0;
	lck->sync_lock = 0;
}

static forceinline void FinalizeSpinLock(struct spin_lock *lck)
{
		return;
}


#define getsynclock(l) do { if(InterlockedCompareExchange((l), 1, 0) == 0) break; thread->yield(); } while(/*always*/1)
#define dropsynclock(l) do { InterlockedExchange((l), 0); } while(0)

static forceinline void EnterSpinLock(struct spin_lock *lck)
{
	int tid = thread->get_tid();

	// Get Sync Lock && Check if the requester thread already owns the lock.
	// if it owns, increase nesting level
	getsynclock(&lck->sync_lock);
	if (InterlockedCompareExchange(&lck->lock, tid, tid) == tid) {
		InterlockedIncrement(&lck->nest);
		dropsynclock(&lck->sync_lock);
		return; // Got Lock
	}
	// drop sync lock
	dropsynclock(&lck->sync_lock);

	// Spin until we've got it !
	while (true) {
		if (InterlockedCompareExchange(&lck->lock, tid, 0) == 0) {
			InterlockedIncrement(&lck->nest);
			return; // Got Lock
		}
		thread->yield(); // Force ctxswitch to another thread.
	}

}


static forceinline void LeaveSpinLock(struct spin_lock *lck)
{
	int tid = thread->get_tid();

	getsynclock(&lck->sync_lock);

	if (InterlockedCompareExchange(&lck->lock, tid, tid) == tid) { // this thread owns the lock.
		if (InterlockedDecrement(&lck->nest) == 0)
			InterlockedExchange(&lck->lock, 0); // Unlock!
	}

	dropsynclock(&lck->sync_lock);
}

#endif // HPM_MAIN_CORE

#endif /* COMMON_SPINLOCK_H */
