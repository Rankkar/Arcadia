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

#ifndef COMMON_UTILS_H
#define COMMON_UTILS_H

#include "common/HPExport.h"

#include <stdio.h> // FILE*
#ifndef WIN32
#	include <unistd.h> // sleep()
#endif

/* [HCache] 1-byte key to ensure our method is the latest, we can modify to ensure the method matches */
#define HCACHE_KEY 'k'

//Caps values to min/max
#define cap_value(a, min, max) (((a) >= (max)) ? (max) : ((a) <= (min)) ? (min) : (a))

#ifdef HPM_MAIN_CORE
// generate a hex dump of the first 'length' bytes of 'buffer'
void WriteDump(FILE* fp, const void* buffer, size_t length);
void ShowDump(const void* buffer, size_t length);

void findfile(const char *p, const char *pat, void (func)(const char*));
bool exists(const char* filename);

/// calculates the value of A / B, in percent (rounded down)
unsigned int get_percentage(const unsigned int A, const unsigned int B);

int64 apply_percentrate64(int64 value, int rate, int maxrate);
int apply_percentrate(int value, int rate, int maxrate);

const char* timestamp2string(char* str, size_t size, time_t timestamp, const char* format);

//////////////////////////////////////////////////////////////////////////
// byte word dword access [Shinomori]
//////////////////////////////////////////////////////////////////////////

extern uint8 GetByte(uint32 val, int idx);
extern uint16 GetWord(uint32 val, int idx);
extern uint16 MakeWord(uint8 byte0, uint8 byte1);
extern uint32 MakeDWord(uint16 word0, uint16 word1);

//////////////////////////////////////////////////////////////////////////
// Big-endian compatibility functions
//////////////////////////////////////////////////////////////////////////
extern int16 MakeShortLE(int16 val);
extern int32 MakeLongLE(int32 val);
extern uint16 GetUShort(const unsigned char* buf);
extern uint32 GetULong(const unsigned char* buf);
extern int32 GetLong(const unsigned char* buf);
extern float GetFloat(const unsigned char* buf);

size_t hread(void * ptr, size_t size, size_t count, FILE * stream);
size_t hwrite(const void * ptr, size_t size, size_t count, FILE * stream);
#endif // HPM_MAIN_CORE

#ifdef WIN32
#define HSleep(x) Sleep(1000 * (x))
#else // ! WIN32
#define HSleep(x) sleep(x)
#endif

/* Caching */
struct HCache_interface {
	void (*init) (void);
	/* */
	bool (*check) (const char *file);
	FILE *(*open) (const char *file, const char *opt);
	/* */
	time_t recompile_time;
	bool enabled;
};

#ifdef HPM_MAIN_CORE
void HCache_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct HCache_interface *HCache;

#endif /* COMMON_UTILS_H */
