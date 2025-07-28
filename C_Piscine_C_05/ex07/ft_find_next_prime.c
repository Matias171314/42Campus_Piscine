/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 01:09:39 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/24 01:29:45 by mvasquez         ###   ########.fr       */
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

int	ft_find_next_prime(int nb)
{
	if (!(ft_is_prime(nb)))
		return (ft_find_next_prime(nb + 1));
	return (nb);
}

/*#include <stdio.h>
int main(void)
{
	printf("Siguiente primo de -8:	%d\n", ft_find_next_prime(-8));
	printf("Siguiente primo de 11:	%d\n", ft_find_next_prime(11));
	printf("Siguiente primo de 34:	%d\n", ft_find_next_prime(34));
	printf("Siguiente primo de 78:	%d\n", ft_find_next_prime(78));
	printf("Siguiente primo de 89:	%d", ft_find_next_prime(89));
}*/