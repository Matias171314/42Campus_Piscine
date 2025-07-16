/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:40:34 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/16 13:41:49 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// Declaración de la función
void	ft_swap(int *a, int *b);

int	main(void)
{
	int a;
    int b;

    a = 1;
    b = 4;

	printf("Antes de ft_swap: %d\n", a);
    printf("Antes de ft_swap: %d\n", b);

	ft_swap(&a, &b);

    printf("Después de ft_swap: %d\n", a);
    printf("Después de ft_swap: %d\n", b);
	return (0);
}
