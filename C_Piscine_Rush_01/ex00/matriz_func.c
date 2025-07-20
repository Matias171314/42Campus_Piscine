/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   matriz_func.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/20 01:32:55 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/20 04:28:21 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inicializar_matriz(int matriz[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			matriz[i][j] = 0;
			j++;
		}
		i++;
	}
}

void	print_matriz(int matriz[4][4])
{
	int	i;
	int	j;
	char	c;

    i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			c = matriz[i][j] + '0';
			write(1, &c, 1);
			if (j < 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}

int	es_valido (int matriz[4][4], int fila, int col, int val)
{
	int i;

	i = 0;
	while (i < 4)
	{
		if (matriz[fila][i] == val)
			return 0;
		i++;
	}
	i = 0;
	while (i < 4)
	{
		if (matriz[i][col] == val)
			return 0;
		i++;
	}
	return 1;
}

int	contar_visibles(int *linea)
{
	int max = 0;
	int count = 0;
	int i = 0;

	while (i < 4)
	{
		if (linea[i] > max)
		{
			max = linea[i];
			count++;
		}
		i++;
	}
	return count;
}

int	restriccion(int matriz[4][4], int entrada[16])
{
	int i = 0;
	int j;
	int linea[4];
	int visibles;

	// Comprobar columnas (vista arriba y abajo)
	while (i < 4)
	{
		// Vista desde arriba (entrada[i])
		j = 0;
		while (j < 4)
		{
			linea[j] = matriz[j][i];
			j++;
		}
		visibles = contar_visibles(linea);
		if (entrada[i] != 0 && visibles != entrada[i])
			return 0;

		// Vista desde abajo (entrada[i + 4])
		j = 0;
		while (j < 4)
		{
			linea[j] = matriz[3 - j][i];
			j++;
		}
		visibles = contar_visibles(linea);
		if (entrada[i + 4] != 0 && visibles != entrada[i + 4])
			return 0;

		i++;
	}

	// Comprobar filas (vista izquierda y derecha)
	i = 0;
    while (i < 4)
    {
		// Vista desde la izquierda (entrada[i + 8])
		j = 0;
		while (j < 4)
		{
			linea[j] = matriz[i][j];
			j++;
		}
		visibles = contar_visibles(linea);
		if (entrada[i + 8] != 0 && visibles != entrada[i + 8])
			return 0;

		// Vista desde la derecha (entrada[i + 12])
		j = 0;
		while (j < 4)
		{
			linea[j] = matriz[i][3 - j];
			j++;
		}
		visibles = contar_visibles(linea);
		if (entrada[i + 12] != 0 && visibles != entrada[i + 12])
			return 0;

		i++;
	}

	return 1;
}

int	backtrack_rush(int matriz[4][4], int entrada[16], int fila, int col)
{
	int val;
	if (fila == 4)
		return restriccion(matriz, entrada);
	if (col == 4)
		return backtrack_rush(matriz, entrada, fila + 1, 0);

	val = 1;
	while (val <= 4)
	{
		if (es_valido(matriz, fila, col, val))
		{
			matriz[fila][col] = val;
			if (backtrack_rush(matriz, entrada, fila, col + 1))
				return 1;
			matriz[fila][col] = 0;
		}
		val++;
	}
	return 0;
}
