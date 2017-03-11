/*--------------------------------------------------------------------*\
|              ______ ____ _____ ___   __                              |
|             / ____ / _  / ____/  /  /  /                             |
|             \___  /  __/ __/ /  /__/  /___                           |
|            /_____/__/ /____//_____/______/                           |
|                 /\  /|   __    __________ _________                  |
|                /  \/ |  /  |  /  ___  __/ ___/ _  /                  |
|               /      | / ' | _\  \ / / / __//  __/                   |
|              /  /\/| |/_/|_|/____//_/ /____/_/\ \                    |
|             /__/   |_|    Config File          \/                    |
|                                                                      |
+----------------------------------------------------------------------+
|                      Projeto Ragnarok Online                         |
+----------------------------------------------------------------------+
| - Descrição: Configuação para o Script                               |
\*--------------------------------------------------------------------*/

script_configuration: {
	// Especifica se um erro deve ou não ser emitido quando houver uma
	// incompatibilidade entre o número de argumentos fornecidos
	// e os argumentos esperados
	// Padrão:  true
	warn_func_mismatch_paramnum: true

	// Especifica se os argumentos de cada função interna são verificados ou não para o tipo correto.
	// Quando uma função recebe um argumento diferente do que espera,
	// um aviso é lançado antes que a função seja executada de qualquer maneira.
	// Padrão:  true
	warn_func_mismatch_argtypes: true

	// Número máximo de operações antes de considerar um conjunto de operações muito intensas
	// Padrão é 655360
	check_cmdcount: 655360

	// Número máximo de iterações antes de considerar um loop infinito
	// Padrão é 2048
	check_gotocount: 2048

	// Valor padrão para o argumento 'min' do comando de script 'input'.
	// Quando o argumento 'min' não for especificado, este valor será usado.
	// O padrão é 0.
	//input_min_value: 0

	// Valor padrão para o argumento 'max' do comando de script 'input'.
	// Quando o argumento 'max' não for especificado, este valor será usado.
	// O padrão é INT_MAX.
	//input_max_value: 2147483647
	input_max_value: 10000000
}