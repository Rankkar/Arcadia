/*-----------------------------------------------------------------*\
|              ____                     _                           |
|             /    |                   | |_                         |
|            /     |_ __ ____  __ _  __| |_  __ _                   |
|           /  /|  | '__/  __|/ _` |/ _  | |/ _` |                  |
|          /  __   | | |  |__| (_| | (_| | | (_| |                  |
|         /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                  |
|        /__/   |__|  [ Ragnarok Emulator ]                         |
|                                                                   |
+-------------------------------------------------------------------+
| - Script: eAthena/ rAthena/ Hercules (Emuladores)                 |
| - Vers�o: Spell Master                                            |
| - Nota: Potais nos arredores de Payon                             |
\*-----------------------------------------------------------------*/

pay_fild01,333,361,0	warp	payonwarp004	5,3,payon,122,31
pay_fild01,13,152,0	warp	payf001	2,7,moc_fild03,299,170
pay_fild01,278,14,0	warp	payf01	13,2,pay_fild02,83,382
pay_fild01,353,14,0	warp	payf02	20,3,pay_fild02,160,381
pay_fild01,379,201,0	warp	payf03	2,6,pay_fild07,23,207

// ------------------------------------------------------------------
pay_fild02,167,390,0	warp	payf02-1	20,3,pay_fild01,354,18
pay_fild02,284,108,0	warp	payf07	2,7,pay_fild03,20,110
pay_fild02,83,386,0	warp	payf01-1	13,2,pay_fild01,278,18

// ------------------------------------------------------------------
pay_fild03,15,110,0	warp	payf07-1	2,10,pay_fild02,280,108
pay_fild03,172,281,0	warp	payf08	5,2,pay_fild07,167,20
pay_fild03,313,16,0	warp	payf09	4,2,pay_fild06,305,372
pay_fild03,392,63,0	warp	payf005	2,7,alberta,19,233

// ------------------------------------------------------------------
pay_fild04,17,165,0	warp	payf002	2,8,moc_fild01,376,162
pay_fild04,194,17,0	warp	payf003	7,2,moc_fild02,350,336

// ------------------------------------------------------------------
pay_fild06,305,375,0	warp	payf09-1	6,2,pay_fild03,313,19

// ------------------------------------------------------------------
pay_fild07,16,200,0	warp	payf03-1	3,3,pay_fild01,371,205
pay_fild07,163,17,0	warp	payf08-1	5,2,pay_fild03,177,275
pay_fild07,280,382,0	warp	payf11	4,2,pay_fild08,160,19
pay_fild07,382,290,0	warp	payf12	2,5,pay_fild10,19,290

// ------------------------------------------------------------------
pay_fild08,160,16,0	warp	payf11-1	4,2,pay_fild07,280,379
pay_fild08,17,75,0	warp	payf006	1,1,payon,265,92
pay_fild08,262,91,0	warp	payf13	2,4,pay_fild09,19,91

// ------------------------------------------------------------------
pay_fild09,112,16,0	warp	pay14	4,2,pay_fild10,112,379
pay_fild09,16,91,0	warp	payf13-1	2,4,pay_fild08,259,91

// ------------------------------------------------------------------
pay_fild10,112,382,0	warp	pay14-1	3,2,pay_fild09,112,19
pay_fild10,16,290,0	warp	payf12-1	2,5,pay_fild07,379,290
pay_fild10,99,13,0	warp	w1034	1,1,pay_fild10,148,252