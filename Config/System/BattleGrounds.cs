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
| - Descrição: Configuação para o sistema de Batalha Campal            |
+----------------------------------------------------------------------+
| - NOTA: É necessário cincronia com os npcs e client para que isso    |
|         funcione.                                                    |
//        Estes npcs ainda não foram criados                           |
\*--------------------------------------------------------------------*/

battlegrounds: ({
	feature_off: true
	global_delay_var: "BG_Delay_Tick"
	maximum_afk_seconds: 30

	arenas: (
		{
			name: "Tierra Gorge"
			event: "Tierra_BG2::OnPlayerListReady"
			allowedTypes: "All"
			minLevel: 80
			maxLevel: 150
			reward: {
				win: 3
				loss: 1
				draw: 1
			}
			minPlayers: 6
			maxPlayers: 60
			minTeamPlayers: 6
			delay_var: "Tierra_BG_Tick"
			maxDuration: 30
			fillDuration: 20
			pGameDuration: 20
		},
		{
			name: "Flavius"
			event: "start#bat_b01::OnPlayerListReady"
			allowedTypes: "All"
			minLevel: 80
			maxLevel: 150
			reward: {
				win: 9
				loss: 3
				draw: 3
			}
			minPlayers: 2
			maxPlayers: 60
			minTeamPlayers: 6
			delay_var: "Flavius_BG_Tick"
			maxDuration: 30
			fillDuration: 20
			pGameDuration: 20
		},
		{
			name: "KVM (Level 80 and up)"
			event: "KvM03_BG::OnPlayerListReady"
			allowedTypes: "All"
			minLevel: 80
			maxLevel: 150
			reward: {
				win: 5
				loss: 1
				draw: 1
			}
			minPlayers: 4
			maxPlayers: 60
			minTeamPlayers: 5
			delay_var: "KVM_BG_Tick"
			maxDuration: 30
			fillDuration: 20
			pGameDuration: 20
		},
		{
			name: "KVM (Level 60~79)"
			event: "KvM03_BG::OnPlayerListReady"
			allowedTypes: "All"
			minLevel: 60
			maxLevel: 79
			reward: {
				win: 2
				loss: 0
				draw: 1
			}
			minPlayers: 4
			maxPlayers: 60
			minTeamPlayers: 5
			delay_var: "KVM_BG_Tick"
			maxDuration: 30
			fillDuration: 20
			pGameDuration: 20
		},
		{
			name: "KVM (Level 59 and below)"
			event: "KvM03_BG::OnPlayerListReady"
			allowedTypes: "All"
			minLevel: 1
			maxLevel: 59
			reward: {
				win: 1
				loss: 0
				draw: 0
			}
			minPlayers: 4
			maxPlayers: 60
			minTeamPlayers: 5
			delay_var: "KVM_BG_Tick"
			maxDuration: 30
			fillDuration: 20
			pGameDuration: 20
		}
	)
})
