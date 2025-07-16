/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:41:03 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/16 13:41:45 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b);

int	main(void)
{
	int	x = 20;
	int	y = 3;

	printf("Antes de ft_ultimate_div_mod:\n");
	printf("x = %d, y = %d\n", x, y);

	ft_ultimate_div_mod(&x, &y);

	printf("Después de ft_ultimate_div_mod:\n");
	printf("División (x) = %d\n", x);
	printf("Módulo (y) = %d\n", y);

	return (0);
}
