/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   visibility_count.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 14:51:40 by matroche          #+#    #+#             */
/*   Updated: 2025/07/21 19:20:45 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	visible_count(int *line) // Función que cuenta cuántos números son visibles en una línea de la matriz
{
	int	max; // Variable para almacenar el valor máximo encontrado en la línea
	int	counter; // Variable para contar cuántos números son visibles
	int	i; // Índice para recorrer la línea

	max = 0;
	counter = 0;
	i = 0;
	while (i < 4)
	{
		if (line[i] > max) // Si el número actual es mayor que el máximo encontrado hasta ahora
		{
			max = line[i]; // Actualiza el máximo
			counter++; // Incrementa el contador de números visibles
		}
		i++; // Incrementa el índice para pasar al siguiente número en la línea
	}
	return (counter); // Retorna el número de números visibles en la línea
}