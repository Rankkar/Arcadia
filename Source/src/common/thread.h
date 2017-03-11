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

#ifndef COMMON_THREAD_H
#define COMMON_THREAD_H

#include "common/HPExport.h"

/** @file
 * Basic Threading abstraction (for pthread / win32 based systems).
 */

/* Opaque Types */
struct thread_handle;                ///< Thread handle.
typedef void *(*threadFunc)(void *); ///< Thread entry point function.

/* Enums */

/// Thread priority
enum thread_priority {
	THREADPRIO_LOW = 0,
	THREADPRIO_NORMAL,
	THREADPRIO_HIGH
};

/// The thread interface
struct thread_interface {
	/// Interface initialization.
	void (*init) (void);

	/// Interface finalization.
	void (*final) (void);

	/**
	 * Creates a new Thread.
	 *
	 * @param enty_point Thread's entry point.
	 * @param param      General purpose parameter, would be given as
	 *                   parameter to the thread's entry point.
	 *
	 * @return The created thread object.
	 * @retval NULL in vase of failure.
	 */
	struct thread_handle *(*create) (threadFunc entry_point, void *param);

	/**
	 * Creates a new Thread (with more creation options).
	 *
	 * @param enty_point Thread's entry point.
	 * @param param      General purpose parameter, would be given as
	 *                   parameter to the thread's entry point.
	 * @param stack_size Stack Size in bytes.
	 * @param prio       Priority of the Thread in the OS scheduler.
	 *
	 * @return The created thread object.
	 * @retval NULL in case of failure.
	 */
	struct thread_handle *(*create_opt) (threadFunc entry_point, void *param, size_t stack_size, enum thread_priority prio);

	/**
	 * Destroys the given Thread immediately.
	 *
	 * @remark
	 *   The Handle gets invalid after call! don't use it afterwards.
	 *
	 * @param handle The thread to destroy.
	 */
	void (*destroy) (struct thread_handle *handle);

	/**
	 * Returns the thread handle of the thread calling this function.
	 *
	 * @remark
	 *   This won't work in the program's main thread.
	 *
	 * @warning
	 *   The underlying implementation might not perform very well, cache
	 *   the value received!
	 *
	 * @return the thread handle.
	 * @retval NULL in case of failure.
	 */
	struct thread_handle *(*self) (void);

	/**
	 * Returns own thread id (TID).
	 *
	 * @remark
	 *   This is an unique identifier for the calling thread, and depends
	 *   on platform/ compiler, and may not be the systems Thread ID!
	 *
	 * @return the thread ID.
	 * @retval -1 in case of failure.
	 */
	int (*get_tid) (void);

	/**
	 * Waits for the given thread to terminate.
	 *
	 * @param[in]  handle        The thread to wait (join) for.
	 * @param[out] out_exit_code Pointer to return the exit code of the
	 *                           given thread after termination (optional).
	 *
	 * @retval true if the given thread has been terminated.
	 */
	bool (*wait) (struct thread_handle *handle, void **out_exit_code);

	/**
	 * Sets the given priority in the OS scheduler.
	 *
	 * @param handle The thread to set the priority for.
	 * @param prio   The priority to set (@see enum thread_priority).
	 */
	void (*prio_set) (struct thread_handle *handle, enum thread_priority prio);

	/**
	 * Gets the current priority of the given thread.
	 *
	 * @param handle The thread to get the priority for.
	 */
	enum thread_priority (*prio_get) (struct thread_handle *handle);

	/**
	 * Tells the OS scheduler to yield the execution of the calling thread.
	 *
	 * @remark
	 *   This will not "pause" the thread, it just allows the OS to spend
	 *   the remaining time of the slice to another thread.
	 */
	void (*yield) (void);
};

#ifdef HPM_MAIN_CORE
void thread_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct thread_interface *thread; ///< Pointer to the thread interface.

#endif /* COMMON_THREAD_H */
