/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:30:13 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/23 18:36:27 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int res;
	
	res = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
	{
		res *= nb;
		nb--;
	}
	return (res);
}

#include <stdio.h>
int main(void)
{
	int result;
	result = ft_iterative_factorial(1);
	printf("El factorial de 1 es: %d\n", result);
	result = ft_iterative_factorial(5);
	printf("El factorial de 5 es: %d\n", result);
	result = ft_iterative_factorial(10);
	printf("El factorial de 10 es: %d\n", result);
}

