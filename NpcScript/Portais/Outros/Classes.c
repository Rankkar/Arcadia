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
| - Versão: Spell Master                                            |
| - Nota: Potais nas Areas de Mudança de Classe                     |
\*-----------------------------------------------------------------*/

// ------------------------------------------------------------------
// - [ Monje ] -
// ------------------------------------------------------------------
monk_in,128,46,0	warp	monk03	1,3,monk_in,161,38
monk_in,128,84,0	warp	monk04	1,3,monk_in,161,90
monk_in,159,38,0	warp	monk03-1	1,3,monk_in,126,46
monk_in,159,90,0	warp	monk04-1	1,3,monk_in,126,84
monk_in,40,38,0	warp	monk05	1,3,monk_in,71,46
monk_in,40,92,0	warp	monk06	1,3,monk_in,71,84
monk_in,69,46,0	warp	monk05-1	1,3,monk_in,38,38
monk_in,69,84,0	warp	monk06-1	1,3,monk_in,38,92
monk_in,98,186,0	warp	monk02-1	3,2,prt_monk,245,139
monk_in,98,27,0	warp	monk01-1	5,2,prt_monk,245,104
monk_in,99,102,0	warp	monk07	5,1,monk_in,99,143
monk_in,99,141,0	warp	monk07-1	3,1,monk_in,99,100

// ------------------------------------------------------------------
prt_monk,22,248,0	warp	monk001	2,2,prt_fild03,368,256
prt_monk,245,106,0	warp	monk01	1,1,monk_in,98,30
prt_monk,245,137,0	warp	monk02	1,1,monk_in,98,183
prt_monk,192,172,0	warp	monk15	1,1,monk_test,329,50

// ------------------------------------------------------------------
monk_test,329,47,0	warp	monk16	1,1,prt_monk,193,166
monk_test,329,76,0	warp	monk17	1,1,monk_test,259,118
monk_test,259,115,0	warp	monk18	1,1,monk_test,329,71
monk_test,272,125,0	warp	monk19	1,1,monk_test,301,127
monk_test,298,127,0	warp	monk20	1,1,monk_test,268,125

// ------------------------------------------------------------------
// - [ Gaturno ] -
// ------------------------------------------------------------------
job_thief1,180,15,0	warp	jthf	7,1,moc_ruins,145,117

// ------------------------------------------------------------------
// - [ Mercenário ] -
// ------------------------------------------------------------------
in_moc_16,18,8,0	warp	guild_to_16	2,2,moc_fild16,205,291

// ------------------------------------------------------------------
// - [ Caçador ] -
// ------------------------------------------------------------------
in_hunter,100,15,0	warp	jhun01	0,0,pay_fild10,143,250

// ------------------------------------------------------------------
// - [ Alquimista ] -
// ------------------------------------------------------------------
alde_alche,19,171,0	warp	alche#1-1	1,1,aldebaran,68,56
alde_alche,42,171,0	warp	alche#1-2	1,1,aldebaran,56,68
alde_alche,41,186,0	warp	alche#1F_2F	1,1,alde_alche,113,178
alde_alche,114,183,0	warp	alche#2F_1F	1,1,alde_alche,42,182
alde_alche,13,184,0	warp	alche#1F_B1	1,1,alde_alche,88,113
alde_alche,88,117,0	warp	alche#B1_1F	1,1,alde_alche,13,181
alde_alche,46,104,0	warp	alche#B1_r1	1,1,alde_alche,157,17
alde_alche,160,17,0	warp	alche#r1_b1	1,1,alde_alche,50,103
alde_alche,46,77,0	warp	alche#B1_r2	1,1,alde_alche,88,17
alde_alche,93,17,0	warp	alche#r2_b1	1,1,alde_alche,50,77
alde_alche,89,62,0	warp	alche#B1_r3	1,1,alde_alche,17,23
alde_alche,17,29,0	warp	alche#r3_b1	1,1,alde_alche,89,67
alde_alche,133,77,0	warp	alche#B1_r4	1,1,alde_alche,162,107
alde_alche,158,107,0	warp	alche#r4_b1	1,1,alde_alche,129,77
alde_alche,133,103,0	warp	alche#B1_r5	1,1,alde_alche,164,164
alde_alche,158,163,0	warp	alche#r5_b1	1,1,alde_alche,129,103

// ------------------------------------------------------------------
// - [ Arruaceiro ] -
// ------------------------------------------------------------------
in_rogue,375,46,0	warp	rogue00-fild07	1,1,cmd_fild07,196,117
in_rogue,375,34,0	warp	rogue01-02	1,1,in_rogue,380,125
in_rogue,375,125,0	warp	rogue02-01	1,1,in_rogue,379,33
in_rogue,247,122,0	warp	rogue03-fild07	1,1,cmd_fild07,349,285
in_rogue,244,21,0	warp	rogue04-fild09	1,1,cmd_fild09,106,191
in_rogue,172,34,0	warp	rogue05-fild09	1,1,cmd_fild09,341,143
in_rogue,161,103,0	warp	rogue06-fild04	1,1,cmd_fild04,302,177
in_rogue,8,9,0	warp	stair_to_ro	1,1,in_rogue,389,389

// ------------------------------------------------------------------
// - [ Odalisca ] -
// ------------------------------------------------------------------
job_duncer,69,43,0	warp	duncer1	1,1,comodo,185,156

// ------------------------------------------------------------------
// - [ Justiceiro ] -
// ------------------------------------------------------------------
que_ng,130,166,0	warp	gswarp2	1,1,einbroch,130,197
que_ng,178,162,0	warp	gswarp3	1,1,que_ng,172,86
que_ng,166,85,0	warp	gswarp4	1,1,que_ng,182,161
que_ng,165,137,0	warp	gswarp5	1,1,que_ng,177,41
que_ng,172,42,0	warp	gswarp6	1,1,que_ng,160,139

// ------------------------------------------------------------------
// - [ Ninja ] -
// ------------------------------------------------------------------
que_ng,20,138,0	warp	ninja02	1,1,amatsu,147,136
que_ng,10,183,0	warp	ninja03	1,1,que_ng,33,64
que_ng,37,64,0	warp	ninja04	1,1,que_ng,15,182
que_ng,30,37,0	warp	ninja05	1,1,que_ng,67,28
que_ng,63,30,0	warp	ninja06	1,1,que_ng,25,37

// ------------------------------------------------------------------
// - [ Arcebispo ] -
// ------------------------------------------------------------------
job3_arch01,29,24,0	warp	#archout	1,1,odin_tem02,282,263

// ------------------------------------------------------------------
// - [ Cicario ] -
// ------------------------------------------------------------------
job3_guil01,6,93,0	warp	#gate_to_guil02	1,1,veins,254,255
job3_guil01,18,48,0	warp	#gate_to_guil03	1,1,job3_guil01,68,91
job3_guil01,67,95,0	warp	#gate_to_guil04	1,1,job3_guil01,18,53
job3_guil01,65,50,0	warp	#gate_to_guil06	1,1,job3_guil01,83,77
job3_guil01,11,4,0	warp	#gate_to_guil08	1,1,job3_guil01,51,50
job3_guil01,79,27,0	warp	#gate_to_guil10	1,1,job3_guil01,51,50
job3_guil01,143,61,0	warp	#gate_to_guil11	1,1,job3_guil01,51,50

// ------------------------------------------------------------------
// - [ Bioquimico ] -
// ------------------------------------------------------------------
job3_gen01,49,49,0	warp	#gentolight	1,1,lighthalzen,54,132
job3_gen01,7,59,0	warp	#from1to2gen	1,1,job3_gen01,72,52
job3_gen01,71,56,0	warp	#from2to1gen	1,1,job3_gen01,11,60

// ------------------------------------------------------------------
// - [ Renegado ] -
// ------------------------------------------------------------------
job3_sha01,71,19,0	warp	shadowc1	1,1,tha_t01,149,224