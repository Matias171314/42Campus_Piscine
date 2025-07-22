/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_initialization.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:39:30 by matroche          #+#    #+#             */
/*   Updated: 2025/07/21 13:37:50 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	initialize_matrix(int matrix[4][4]) // Función que inicializa la matriz 4x4 con ceros
{
	int	i; // Índice para recorrer las filas
	int	j; // Índice para recorrer las columnas

	i = 0;
	while (i < 4) // Recorre las filas de la matriz
	{
		j = 0;
		while (j < 4) // Recorre las columnas de la matriz
		{
			matrix[i][j] = 0; // Asigna el valor 0 a cada celda de la matriz
			j++;
		}
		i++;
	}
}
