/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:34:27 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/18 12:39:46 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;
	int	i;

	is_uppercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
		{
			is_uppercase = 0;
			return (is_uppercase);
		}
		i++;
	}
	return (is_uppercase);
}

/*#include <stdio.h>

int	main(void)
{
	char test1[] = "awdAada";
	char test2[] = "XWADXAWDXX";
	char test3[] = "1231A";
	char test4[] = "";
	printf("Test 1: %d\n", ft_str_is_uppercase(test1));
	printf("Test 2: %d\n", ft_str_is_uppercase(test2));
	printf("Test 3: %d\n", ft_str_is_uppercase(test3));
	printf("Test 4: %d\n", ft_str_is_uppercase(test4));
	return (0);
}*/
