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
| - Descrição: Configuação de rede                                     |
\*--------------------------------------------------------------------*/

// Arquivo de configuração de rede

/*
 * Lista aqui qualquer sub-rede ou LAN que o servidor estará.
 * Exemplo:
 * - char- (ou map-) IP do servidor na LAN é 192.168.0.10
 * - O IP público é 198.51.100.37
 * Se a lista contiver "192.168.0.10:255.255.255.0",
 * todos os clientes que se ligam a partir da mesma rede 192.168.0.0/24
 * serão apresentados com o IP da LAN (192.168.0.10) na lista de servidores,
 * em vez do IP público (198.51.100.37).
*/
lan_subnets: (
	"127.0.0.1:255.0.0.0",
	// "192.168.1.1:255.255.255.0",
)

/*
 * Lista aqui qualquer IP intervalos um char ou mapa de servidor pode se conectar.
 * Um curinga de "0.0.0.0.0.0.0.0" significa que as conexões do servidor são permitidas de QUALQUER IP. (não recomendado).
*/
allowed: (
	"127.0.0.1:255.0.0.0",
	//"0.0.0.0:0.0.0.0",
)

/*
 * Lista aqui qualquer intervalo de IP de um servidor de cartografia ou de mapa pode se conectar.
 * Esses intervalos também serão excluídos do ipban automático em caso de falha de senha.
 * Qualquer entrada presente nesta lista também é automaticamente incluída na lista IP permitida.
 * Nota: Isso pode ser uma ameaça à segurança.
         Edite apenas esta lista se souber o que está a fazer.
*/
trusted: (
	"127.0.0.1:255.0.0.0",
)
