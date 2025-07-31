/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 17:37:03 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/24 01:01:58 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_space(char c)
{
	return (c == ' ' || c == '\t' || c == '\n' ||
			c == '\r' || c == '\v' || c == '\f');
}

int	ft_atoi(char *str)
{
	int	i;
	int	negative;
	int	result;

	i = 0;
	negative = 0;
	result = 0;
	while (is_space(str[i]))
	{
		i++;
	}
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			negative++;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		result = result * 10 + (str[i] - '0');
		i++;
	}
	if (negative % 2 != 0)
		result *= -1;
	return (result);
}

/*#include <stdio.h>

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
	return 0;
}*/