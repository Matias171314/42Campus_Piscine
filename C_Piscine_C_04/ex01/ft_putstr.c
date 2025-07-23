/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:36:26 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/23 17:41:06 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

/*#include <stdio.h>
int main(void)
{
	char str[] = "esto_es \nuna prueba$\n hola'";
	ft_putstr(str);
	write(1, "\n", 1); // Para agregar un salto de línea al final
	return 0;
}*/