/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   backtracking.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:34:21 by matroche          #+#    #+#             */
/*   Updated: 2025/07/21 18:17:22 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

int	backtrack_rush(int matrix[4][4], int input[16], int fila, int col) // Función de backtracking que intenta llenar la matriz 4x4
{
	int	val; // Variable para almacenar el valor a intentar colocar en la matriz

	if (fila == 4) // Si se ha llegado a la última fila, se verifica si la matriz es válida (se explica mejor cuando se esta terminando el tablero)
		return (restriction(matrix, input)); // Llama a la función restriction para verificar si la matriz cumple con las restricciones del juego
	if (col == 4) // Si se ha llegado a la última columna, se pasa a la siguiente fila
		return (backtrack_rush(matrix, input, fila + 1, 0)); // Llama recursivamente a la función para intentar llenar la siguiente fila
	val = 1; // Comienza a intentar colocar valores del 1 al 4 en la celda actual
	while (val <= 4)
	{
		if (is_valid(matrix, fila, col, val)) // Verifica si el valor es válido para colocar en la celda actual
		{
			matrix[fila][col] = val; // Si es válido, lo coloca en la celda
			if (backtrack_rush(matrix, input, fila, col + 1)) // Llama recursivamente a la función para intentar llenar la siguiente celda
				return (1); // Si se encuentra una solución, retorna 1
			matrix[fila][col] = 0; // Si no se encuentra una solución, se deshace el cambio y se intenta con el siguiente valor
		}
		val++;
	}
	return (0);
}
