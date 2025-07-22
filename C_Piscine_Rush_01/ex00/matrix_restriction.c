/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_restriction.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:46:18 by matroche          #+#    #+#             */
/*   Updated: 2025/07/21 18:18:07 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "functions.h"

static int	check_column_visibility(
	int matrix[4][4],
	int input[16],
	int col,
	int index
)
{
	int	j; // Índice para recorrer las filas
	int	line[4]; // Array para almacenar los valores de la columna actual
	int	visibles; // Variable para contar los valores visibles en la columna

	j = 0;
	while (j < 4)
	{
		line[j] = matrix[j][col]; // Copia los valores de la columna actual en el array line
		j++; // Incrementa el índice de la fila
	}
	visibles = visible_count(line); // Llama a la función visible_count para contar los valores visibles en la columna
	if (visibles != input[col]) // Verifica si el número de valores visibles coincide con el valor esperado en input
		return (0);
	j = 0; // Reinicia el índice para recorrer la columna en sentido inverso
	while (j < 4)
	{
		line[j] = matrix[3 - j][col]; // Copia los valores de la columna actual en sentido inverso en el array line
		j++;
	}
	visibles = visible_count(line); // Llama a la función visible_count para contar los valores visibles en la columna en sentido inverso
	if (input[index] != 0 && visibles != input[index]) // Verifica si el número de valores visibles en sentido inverso coincide con el valor esperado en input
		return (0); // Si el valor en input es diferente de 0 y no coincide, retorna 0
	return (1); // Si la columna cumple con las restricciones de visibilidad, retorna 1
}

static int	check_row_visibility(
	int matrix[4][4],
	int input[16],
	int row,
	int index)
{
	int	j;
	int	line[4];
	int	visibles;

	j = 0;
	while (j < 4)
	{
		line[j] = matrix[row][j]; // Copia los valores de la fila actual en el array line
		j++;
	}
	visibles = visible_count(line);
	if (input[index] != 0 && visibles != input[index])
		return (0);
	j = 0;
	while (j < 4)
	{
		line[j] = matrix[row][3 - j]; // Copia los valores de la fila actual en sentido inverso en el array line
		j++;
	}
	visibles = visible_count(line);
	if (input[index + 4] != 0 && visibles != input[index + 4]) // Verifica si el número de valores visibles en sentido inverso coincide con el valor esperado en input
		return (0);
	return (1);
}

int	restriction(int matrix[4][4], int input[16]) // Una vez completada la tabla se procede a validar si cumple con la condición de visibilidad
{
	int	i; // Índice para recorrer las columnas y filas

	i = 0;
	while (i < 4)
	{
		if (!check_column_visibility(matrix, input, i, i + 4)) // Verifica la visibilidad de las columnas
			return (0); // Si no cumple con la visibilidad de las columnas, retorna 0
		i++; // Incrementa el índice de la columna
	}
	i = 0;
	while (i < 4)
	{
		if (!check_row_visibility(matrix, input, i, i + 8)) // Verifica la visibilidad de las filas
			return (0); // Si no cumple con la visibilidad de las filas, retorna 0
		i++; // Incrementa el índice de la fila
	}
	return (1); // Si cumple con todas las restricciones de visibilidad, retorna 1
}
