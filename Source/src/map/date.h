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

#ifndef MAP_DATE_H
#define MAP_DATE_H

#include "common/cbasetypes.h"

#ifdef HPM_MAIN_CORE
// TODO: Interface
int date_get_year(void);
int date_get_month(void);
int date_get_day(void);
int date_get_hour(void);
int date_get_min(void);
int date_get_sec(void);

bool is_day_of_sun(void);
bool is_day_of_moon(void);
bool is_day_of_star(void);
#endif // HPM_MAIN_CORE

#endif /* MAP_DATE_H */
