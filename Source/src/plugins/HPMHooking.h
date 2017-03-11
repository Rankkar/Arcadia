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

#ifndef PLUGINS_HPMHOOKING_H
#define PLUGINS_HPMHOOKING_H

#include "common/HPExport.h"

enum HPluginHookType {
	HOOK_TYPE_PRE,
	HOOK_TYPE_POST,
};

struct HPMHooking_interface {
	bool (*AddHook) (enum HPluginHookType type, const char *target, void *hook, unsigned int pID);
	void (*HookStop) (const char *func, unsigned int pID);
	bool (*HookStopped) (void);
};

#ifdef HPM_MAIN_CORE
struct HPMHooking_core_interface {
	bool enabled;
	bool force_return;
	bool (*addhook_sub) (enum HPluginHookType type, const char *target, void *hook, unsigned int pID);
	const char *(*Hooked)(bool *fr);
};
#else // ! HPM_MAIN_CORE
HPExport struct HPMHooking_interface HPMHooking_s;

#include "HPMHooking/HPMHooking.Defs.inc"

#define addHookPre(ifname, funcname, hook) ( \
		(void)((HPMHOOK_pre_ ## ifname ## _ ## funcname)0 == (hook)), \
		HPMi->hooking->AddHook(HOOK_TYPE_PRE, #ifname "->" #funcname, (hook), HPMi->pid) \
		)

#define addHookPost(ifname, funcname, hook) ( \
		(void)((HPMHOOK_post_ ## ifname ## _ ## funcname)0 == (hook)), \
		HPMi->hooking->AddHook(HOOK_TYPE_POST, #ifname "->" #funcname, (hook), HPMi->pid) \
		)

/* need better names ;/ */
/* will not run the original function after pre-hook processing is complete (other hooks will run) */
#define hookStop() (HPMi->hooking->HookStop(__func__,HPMi->pid))
#define hookStopped() (HPMi->hooking->HookStopped())

#endif // ! HPM_MAIN_CORE

#endif // PLUGINS_HPMHOOKING_H
