/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:36:43 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/23 17:42:35 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void ft_putnbr(int nb)
{
	if (nb < 0)
	{
		ft_putchar('-');
		if (nb == -2147483648)
		{
			ft_putchar('2');
			nb = 147483648;
		}
		else
			nb = -nb;
	}
	if (nb >= 10)
		ft_putnbr(nb / 10);
	ft_putchar((nb % 10) + '0');
}

/*#include <stdio.h>
int main(void)
{
	ft_putnbr(42);
	write(1, "\n", 1); // Para agregar un salto de línea al final
	ft_putnbr(-2147483648);
	write(1, "\n", 1); // Para agregar un salto de línea al final
	ft_putnbr(0);
	write(1, "\n", 1); // Para agregar un salto de línea al final
	return 0;
}*/