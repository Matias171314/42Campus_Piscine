/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:40:51 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/16 13:41:47 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Declaración de la función
void	ft_div_mod(int a, int b, int *div, int *mod);

int	main(void)
{
	int a = 20;
	int b = 6;
	int division;
	int modulo;

	ft_div_mod(a, b, &division, &modulo);

	printf("División: %d\n", division);  // Debería mostrar 3
	printf("Módulo: %d\n", modulo);      // Debería mostrar 2

	return (0);
}
