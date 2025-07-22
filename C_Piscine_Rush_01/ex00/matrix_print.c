/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matrix_print.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:45:51 by matroche          #+#    #+#             */
/*   Updated: 2025/07/21 13:48:43 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_matrix(int matrix[4][4]) // Función que imprime la matriz 4x4 en la salida estándar
{
	int		i; // Índice para recorrer las filas
	int		j; // Índice para recorrer las columnas
	char	c; // Variable para almacenar el carácter a imprimir

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = matrix[i][j] + '0'; // Convierte el valor entero de la celda a carácter
			write(1, &c, 1); // Imprime el carácter correspondiente al valor de la celda
			if (j < 3) // Si no es la última columna, imprime un espacio
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1); // Imprime un salto de línea al final de cada fila
		i++;
	}
}
