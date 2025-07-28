/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:24:22 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/25 14:06:08 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}

/*#include <stdio.h>
int main(void)
{
	int result;
	result = ft_recursive_factorial(1);
	printf("El factorial de 1 es: %d\n", result);
	result = ft_recursive_factorial(5);
	printf("El factorial de 5 es: %d\n", result);
	result = ft_recursive_factorial(10);
	printf("El factorial de 10 es: %d\n", result);
	result = ft_recursive_factorial(0);
	printf("El factorial de 0 es: %d\n", result);
}*/