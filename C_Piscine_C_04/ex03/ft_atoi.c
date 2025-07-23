/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:37:03 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/23 18:15:27 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 0;
	result = 0;
	while (!(str[i] >= '0' && str[i] <= '9'))
	{
		i++;
		if (str[i] == '-')
			sign++;
	}

	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	while (sign != 0)
	{
		result *= -1;
		sign--;
	}
	return (result);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char str1[] = "   -42";
	char str2[] = "42";
	char str3[] = "   -+42";
	char str4[] = " ---+--+1234ab567";
	char str5[] = "  2147483647";

	printf("Resultado de ft_atoi(\"%s\"): %d\n", str1, ft_atoi(str1));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str2, ft_atoi(str2));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str3, ft_atoi(str3));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str4, ft_atoi(str4));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str5, ft_atoi(str5));

	printf("Resultado de ft_atoi(\"%s\"): %d\n", str1, atoi(str1));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str2, atoi(str2));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str3, atoi(str3));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str4, atoi(str4));
	printf("Resultado de ft_atoi(\"%s\"): %d\n", str5, atoi(str5));
	return 0;
}