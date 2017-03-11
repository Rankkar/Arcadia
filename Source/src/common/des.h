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

#ifndef COMMON_DES_H
#define COMMON_DES_H

#include "common/HPExport.h"

/**
 * @file
 *
 * DES (Data Encryption Standard) algorithm, modified version.
 *
 * @see http://www.eathena.ws/board/index.php?autocom=bugtracker&showbug=5099
 * @see http://en.wikipedia.org/wiki/Data_Encryption_Standard
 * @see http://en.wikipedia.org/wiki/DES_supplementary_material
 */

/* Struct definitions */

/// One 64-bit block.
struct des_bit64 {
	uint8_t b[8];
};

/* Interface */

/// The des interface.
struct des_interface {
	/**
	 * Decrypts a block.
	 *
	 * @param[in,out] block The block to decrypt (in-place).
	 */
	void (*decrypt_block) (struct des_bit64 *block);

	/**
	 * Decrypts a buffer.
	 *
	 * @param [in,out] data The buffer to decrypt (in-place).
	 * @param [in]     size The size of the data.
	 */
	void (*decrypt) (unsigned char *data, size_t size);
};

#ifdef HPM_MAIN_CORE
void des_defaults(void);
#endif // HPM_MAIN_CORE

HPShared struct des_interface *des; ///< Pointer to the des interface implementation.

#endif // COMMON_DES_H
