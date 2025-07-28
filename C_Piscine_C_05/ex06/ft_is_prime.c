/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 01:09:20 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/24 01:29:21 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	i = 2;
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}
/*#include <stdio.h>
int main (void)
{
	printf("Negativos no son primos:	%d\n", ft_is_prime(-4));
	printf("Es 0 primo?:	%d\n", ft_is_prime(0));
	printf("Es 1 primo?:	%d\n", ft_is_prime(1));
	printf("Es 2 primo?:	%d\n", ft_is_prime(2));
	printf("Es 11 primo?:	%d\n", ft_is_prime(11));
	printf("Es 29 primo?:	%d", ft_is_prime(29));
}*/