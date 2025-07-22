/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:37:50 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/21 13:36:59 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	rush_01(int input[16]) // Función principal que recibe el input y llama a las funciones necesarias
{
	int	matrix[4][4]; // Matriz de 4x4 para el tablero

	initialize_matrix(matrix); // Inicializa la matriz con ceros
	if (backtrack_rush(matrix, input, 0, 0)) // Llama a la función de backtracking para resolver el tablero
		print_matrix(matrix); // Si se encuentra una solución, imprime la matriz
	else
		write(2, "Error\n", 6); // Si no se encuentra solución, imprime "Error"
}
