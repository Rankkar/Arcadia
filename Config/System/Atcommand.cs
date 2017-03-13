/*--------------------------------------------------------------------*\
|                ____                     _                            |
|               /    |                   | |_                          |
|              /     |_ __ ____  __ _  __| |_  __ _                    |
|             /  /|  | '__/  __|/ _` |/ _  | |/ _` |                   |
|            /  __   | | |  |__| (_| | (_| | | (_| |                   |
|           /  /  |  |_|  \____|\__,_|\__,_|_|\__,_|                   |
|          /__/   |__|  [ Ragnarok Emulator ]                          |
|                                                                      |
|----------------------------------------------------------------------|
| - Descrição: Configuação para máscaras de comandos                   |
\*--------------------------------------------------------------------*/

aliases: {
	mobinfo: ["monsterinfo", "mi"]
	iteminfo: ["ii"]
	time: ["date", "serverdate", "servertime"]
	autotrade: ["at"]
	help: ["h"]
	jumpto: ["goto", "warpto"]
	mount: ["mountpeco"]
	who: ["whois"]
	npctalk: ["npctalkc"]
	gvgon: ["gpvpon"]
	gvgoff: ["gpvpoff"]
	jobchange: ["job"]
	load: ["return"]
	warp: ["rura", "mapmove"]
	dye: ["ccolor"]
	hairstyle: ["hstyle"]
	haircolor: ["hcolor"]
	monster: ["spawn"]
	blvl: ["lvup", "blevel", "baselvl", "baselvup", "baselevel", "baselvlup"]
	jlvl: ["jlevel", "joblvl", "joblvup", "joblevel", "joblvlup"]
	glvl: ["glevel", "guildlvl", "guildlvup", "guildlevel", "guildlvlup"]
	allskill: ["allskills", "skillall", "skillsall"]
	allstats: ["allstat", "statall", "statsall"]
	ban: ["banish"]
	unban: ["unbanish"]
	unjail: ["discharge"]
	homlevel: ["hlvl", "hlevel", "homlvl", "homlvup"]
	homevolution: ["homevolve"]
	mutearea: ["stfu"]
	monsterignore: ["battleignore"]
	raise: ["revive"]
	kill: ["die"]
	guildstorage: ["gstorage"]
	accinfo: ["accountinfo"]
	itemreset: ["clearinventory"]
	channel: ["main"]
	autoloottype: ["aloottype"]
}

/* List of commands that should not be logged at all */
/* Add as many commands as you like */
nolog: {
	iteminfo: 0
	mobinfo: 0
}

/* Commands help file */
help: {
	@include "Config/help.txt"
}
