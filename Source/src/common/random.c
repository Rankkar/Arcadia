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

#define HPM_MAIN_CORE

#include "random.h"

#include "common/cbasetypes.h" // for WIN32
#include "common/showmsg.h"
#include "common/timer.h" // gettick

#include <mt19937ar/mt19937ar.h> // init_genrand, genrand_int32, genrand_res53
#include <stdlib.h>

#if defined(WIN32)
#	include "common/winapi.h"
#elif defined(HAVE_GETPID) || defined(HAVE_GETTID)
#	include <sys/types.h>
#	include <unistd.h>
#endif

/** @file
 * Implementation of the random number generator interface.
 */

struct rnd_interface rnd_s;
struct rnd_interface *rnd;

/// @copydoc rnd_interface::init()
void rnd_init(void)
{
	unsigned long seed = (unsigned long)timer->gettick();
	seed += (unsigned long)time(NULL);
#if defined(WIN32)
	seed += (unsigned long)GetCurrentProcessId();
	seed += (unsigned long)GetCurrentThreadId();
#else
#if defined(HAVE_GETPID)
	seed += (unsigned long)getpid();
#endif // HAVE_GETPID
#if defined(HAVE_GETTID)
	seed += (unsigned long)gettid();
#endif // HAVE_GETTID
#endif
	init_genrand(seed);

	// Also initialize the stdlib rng, just in case it's used somewhere.
	srand((unsigned int)seed);
}

/// @copydoc rnd_interface::final()
void rnd_final(void)
{
}

/// @copydoc rnd_interface::seed()
void rnd_seed(uint32 seed)
{
	init_genrand(seed);
}

/// @copydoc rnd_interface::random()
int32 rnd_random(void)
{
	return (int32)genrand_int31();
}

/// @copydoc rnd_interface::roll()
uint32 rnd_roll(uint32 dice_faces)
{
	return (uint32)(rnd->uniform()*dice_faces);
}

/// @copydoc rnd_interface::value()
int32 rnd_value(int32 min, int32 max)
{
	if (min >= max)
		return min;
	return min + (int32)(rnd->uniform()*(max-min+1));
}

/// @copydoc rnd_interface::uniform()
double rnd_uniform(void)
{
	return ((uint32)genrand_int32())*(1.0/4294967296.0);// divided by 2^32
}

/// @copydoc rnd_interface::uniform53()
double rnd_uniform53(void)
{
	return genrand_res53();
}

/// Interface base initialization.
void rnd_defaults(void)
{
	rnd = &rnd_s;
	rnd->init = rnd_init;
	rnd->final = rnd_final;
	rnd->seed = rnd_seed;
	rnd->random = rnd_random;
	rnd->roll = rnd_roll;
	rnd->value = rnd_value;
	rnd->uniform = rnd_uniform;
	rnd->uniform53 = rnd_uniform53;
}
