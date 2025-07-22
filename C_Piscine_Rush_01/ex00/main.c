/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:38:17 by matroche          #+#    #+#             */
/*   Updated: 2025/07/21 14:48:16 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "functions.h"

void	rush_01(int input[16]);

int	validate_argv(char *str, int *input) // Función que valida el input de argv[1] y lo guarda en el array input
{
	int	i; // Índice para recorrer el str
	int	j; // Índice para recorrer el input

	i = 0;
	j = 0;
	while (j < 16)
	{
		if (str[i] >= '1' && str[i] <= '4' && str[31] == '\0') // Verifica si el carácter es un número entre 1 y 4 y que el último carácter sea '\0'
		{
			input[j] = str[i] - '0'; // Convertir el carácter a entero y lo añade en el input
			j++; // Incrementa el índice del input
			i++; // Incrementa el índice del str
			if (j < 16)			
			{
				if (str[i] != ' ')
					return (0);
				i++;
			}
		}
		else
		{
			return (0);
		}
	}
	return (1);
}

int	main(int argc, char **argv)
{
	int	input[16]; // Array de input de tamaño 16 para el tablero 4x4

	if (argc != 2) // Necesariamente debe haber 2 argc, sino error
	{
		write(2, "Error\n", 6);
		return (1);
	}
	if (!validate_argv(argv[1], input)) // Si son argc es 2 se valida si la argv[1] es válido, sino error
	{
		write(2, "Error\n", 6);
		return (1);
	}
	rush_01(input); // Si todo es correcto, se llama a la función rush_01 con el input validado
	return (0);
}
