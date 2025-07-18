/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:48:59 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/18 12:39:53 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	is_printable;
	int	i;
	int	ascii;

	is_printable = 1;
	i = 0;
	while (str[i] != '\0')
	{
		ascii = str[i];
		if (!(ascii >= 32 && ascii <= 126))
		{
			is_printable = 0;
			return (is_printable);
		}
		i++;
	}
	return (is_printable);
}

/*#include <stdio.h>

int	main(void)
{
	char test1[] = "awdAada";
	char test2[] = "XWADdñññWDXX";
	char test3[] = "/´/";
	char test4[] = "";
	printf("Test 1: %d\n", ft_str_is_printable(test1));
	printf("Test 2: %d\n", ft_str_is_printable(test2));
	printf("Test 3: %d\n", ft_str_is_printable(test3));
	printf("Test 4: %d\n", ft_str_is_printable(test4));
	return (0);
}*/
