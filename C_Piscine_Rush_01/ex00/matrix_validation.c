/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_validation.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:49:18 by matroche          #+#    #+#             */
/*   Updated: 2025/07/21 13:42:14 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_valid(int matrix[4][4], int fila, int col, int val) // Función que verifica si un valor es válido para colocar en la celda (fila, col) de la matriz
{
	int	i; // Índice para recorrer las filas y columnas

	i = 0;
	while (i < 4) // Recorre las filas de la matriz
	{
		if (matrix[fila][i] == val) // Verifica si el valor ya está en la fila actual
			return (0); // Si el valor ya está en la fila, no es válido
		i++;
	}
	i = 0;
	while (i < 4) // Recorre las columnas de la matriz
	{
		if (matrix[i][col] == val) // Verifica si el valor ya está en la columna actual
			return (0); // Si el valor ya está en la columna, no es válido
		i++;
	}
	return (1); // Si el valor no está en la fila ni en la columna, es válido
}
