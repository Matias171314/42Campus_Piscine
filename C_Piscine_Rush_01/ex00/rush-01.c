/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush-01.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 22:37:50 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/20 04:21:33 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	inicializar_matriz(int matriz[4][4]);
void	print_matriz(int matriz[4][4]);
int	backtrack_rush(int matriz[4][4], int entrada[16], int fila, int col);

void	rush_01(int entrada[16])
{
	int	matriz[4][4];

	inicializar_matriz(matriz);
	if (backtrack_rush(matriz, entrada, 0, 0))
		print_matriz(matriz);
	else
		write(1, "Error: No hay solucion\n", 24);
}
