/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:21:34 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/18 12:40:06 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
	return (str);
}

/*#include <stdio.h>

int	main(void)
{
	char test1[] = "HOLA AMIGO";
	char test2[] = "123MAYUSCULA";
	char test3[] = "+-¡/";
	char test4[] = "";
	printf("Test 1: %s\n", ft_strlowcase(test1));
	printf("Test 2: %s\n", ft_strlowcase(test2));
	printf("Test 3: %s\n", ft_strlowcase(test3));
	printf("Test 4: %s\n", ft_strlowcase(test4));
	return (0);
}*/
