/*-----------------------------------------------------------------*\
|             ______ ____ _____ ___   __                            |
|            / ____ / _  / ____/  /  /  /                           |
|            \___  /  __/ __/ /  /__/  /___                         |
|           /_____/_ / /____//_____/______/                         |
|                /\  /|   __    __________ _________                |
|               /  \/ |  /  |  /  ___  __/ ___/ _  /                |
|              /      | / ' | _\  \ / / / __//  __/                 |
|             /  /\/| |/_/|_|/____//_/ /____/_/\ \                  |
|            /__/   |_|      npc Script         \/                  |
|                                                                   |
+-------------------------------------------------------------------+
|                     Projeto Ragnarok Online                       |
+-------------------------------------------------------------------+
| - Versão: Spell Master                                            |
| - Nota: Potais em Izlude                                          |
\*-----------------------------------------------------------------*/

izlude,20,98,0	warp	iz001	3,3,prt_fild08,367,212
izlude,110,182,0	warp	iz01	2,2,izlude_in,65,87
izlude,52,172,0	warp	iz04	2,2,izlude_in,74,161
izlude,125,257,0	warp	#to_ac01	2,2,iz_ac01,99,29
izlude,130,257,0	warp	#to_ac02	2,2,iz_ac01,99,29

// ------------------------------------------------------------------
izlude_in,116,46,0	warp	iz02-1	3,2,izlude,128,98
izlude_in,65,84,0	warp	iz01-1	2,2,izlude,112,179
izlude_in,74,158,0	warp	iz04-1	3,2,izlude,52,168
izlude_in,43,169,0	warp	w219	2,3,izlude_in,63,169
izlude_in,87,169,0	warp	iz05-1	2,3,izlude_in,111,169
izlude_in,108,169,0	warp	iz05	2,3,izlude_in,84,169
izlude_in,148,127,0	warp	iz03-1	2,5,izlude,210,161
izlude_in,172,139,0	warp	iz07	3,2,izlude_in,172,161
izlude_in,172,158,0	warp	iz07-1	3,2,izlude_in,172,136
izlude_in,172,116,0	warp	iz06-1	3,2,izlude_in,172,94
izlude_in,171,97,0	warp	iz06	3,2,izlude_in,172,119

// ------------------------------------------------------------------
// - Não usados no projeto os mapas clones de Izlude e campos 
// de prontera
// ------------------------------------------------------------------
/*
prt_fild08a,371,212,0	warp	prtf005_a	3,3,izlude_a,24,98
prt_fild08b,371,212,0	warp	prtf005_b	3,3,izlude_b,24,98
prt_fild08c,371,212,0	warp	prtf005_c	3,3,izlude_c,24,98
prt_fild08d,371,212,0	warp	prtf005_d	3,3,izlude_d,24,98

izlude_a,20,98,0	warp	iz001_a	3,3,prt_fild08a,367,212
izlude_b,20,98,0	warp	iz001_b	3,3,prt_fild08b,367,212
izlude_c,20,98,0	warp	iz001_c	3,3,prt_fild08c,367,212
izlude_d,20,98,0	warp	iz001_d	3,3,prt_fild08d,367,212
izlude_a,110,182,0	warp	iz01_a	2,2,izlude_in,65,87
izlude_b,110,182,0	warp	iz01_b	2,2,izlude_in,65,87
izlude_c,110,182,0	warp	iz01_c	2,2,izlude_in,65,87
izlude_d,110,182,0	warp	iz01_d	2,2,izlude_in,65,87
izlude_a,52,172,0	warp	iz04_a	2,2,izlude_in,74,161
izlude_b,52,172,0	warp	iz04_b	2,2,izlude_in,74,161
izlude_c,52,172,0	warp	iz04_c	2,2,izlude_in,74,161
izlude_d,52,172,0	warp	iz04_d	2,2,izlude_in,74,161
*/