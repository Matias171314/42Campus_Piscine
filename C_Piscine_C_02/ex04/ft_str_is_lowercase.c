/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:27:39 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/17 16:15:24 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;
	int	i;

	is_lowercase = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z')))
		{
			is_lowercase = 0;
			return (is_lowercase);
		}
		i++;
	}
	return (is_lowercase);
}

//#include <stdio.h>

/*int	main(void)
{
	char test1[] = "awdwada";
	char test2[] = "awdwS";
	char test3[] = "adxawv";
	char test4[] = "";
	printf("Test 1: %d\n", ft_str_is_lowercase(test1));
	printf("Test 2: %d\n", ft_str_is_lowercase(test2));
	printf("Test 3: %d\n", ft_str_is_lowercase(test3));
	printf("Test 4: %d\n", ft_str_is_lowercase(test4));
	return (0);
}*/
