/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 18:39:19 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/24 01:27:40 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	else if (nb == 0)
		return (1);
	else
	{
		result = 1;
		while (power != 0)
		{
			result *= nb;
			power--;
		}
		return (result);
	}
}
/*#include <stdio.h>
int main(void)
{
	int result;
	result = ft_iterative_power(2, 3);
	printf("2 elevado a 3 	= %d\n", result); // 8
	result = ft_iterative_power(5, 0);
	printf("5 elevado a 0 	= %d\n", result); // 1
	result = ft_iterative_power(7, -2);
	printf("7 elevado a -2 	= %d\n", result); // 0
	result = ft_iterative_power(3, 4);
	printf("3 elevado a 4 	= %d\n", result); // 81
	return (0);
}*/