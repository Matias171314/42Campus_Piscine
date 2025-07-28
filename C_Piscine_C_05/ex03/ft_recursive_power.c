/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 01:07:54 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/24 01:27:02 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	else
		return (nb * ft_recursive_power(nb, power - 1));
}

/*#include <stdio.h>
int main(void)
{
	int result;

	result = ft_recursive_power(2, 3);
	printf("2 elevado a 3 	= %d\n", result); // 8
	result = ft_recursive_power(5, 0);
	printf("5 elevado a 0 	= %d\n", result); // 1
	result = ft_recursive_power(7, -2);
	printf("7 elevado a -2 	= %d\n", result); // 0
	result = ft_recursive_power(3, 4);
	printf("3 elevado a 4 	= %d\n", result); // 81
	return (0);
}*/