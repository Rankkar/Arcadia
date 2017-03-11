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

#ifndef COMMON_MD5CALC_H
#define COMMON_MD5CALC_H

#include "common/HPExport.h"

/** @file
 * md5 calculation algorithm.
 *
 * The source code referred to the following URL.
 * http://www.geocities.co.jp/SiliconValley-Oakland/8878/lab17/lab17.html
 */

/// The md5 interface
struct md5_interface {
	/**
	 * Hashes a string, returning the hash in string format.
	 *
	 * @param[in]  string The source string (NUL terminated).
	 * @param[out] output Output buffer (at least 33 bytes available).
	 */
	void (*string) (const char *string, char *output);

	/**
	 * Hashes a string, returning the buffer in binary format.
	 *
	 * @param[in]  string The source string.
	 * @param[out] output Output buffer (at least 16 bytes available).
	 */
	void (*binary) (const char *string, unsigned char *output);

	/**
	 * Generates a random salt.
	 *
	 * @param[in]  len    The desired salt length.
	 * @param[out] output The output buffer (at least len bytes available).
	 */
	void (*salt) (int len, char *output);
};

#ifdef HPM_MAIN_CORE
void md5_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct md5_interface *md5; ///< Pointer to the md5 interface.

#endif /* COMMON_MD5CALC_H */
