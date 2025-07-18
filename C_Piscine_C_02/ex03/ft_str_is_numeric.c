/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 14:22:53 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/18 12:39:25 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	is_numeric;
	int	i;

	is_numeric = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= '0' && str[i] <= '9')))
		{
			is_numeric = 0;
			return (is_numeric);
		}
		i++;
	}
	return (is_numeric);
}

/*include <stdio.h>

int	main(void)
{
	char test1[] = "14854";
	char test2[] = "14862";
	char test3[] = "817a";
	char test4[] = "";
	printf("Test 1: %d\n", ft_str_is_numeric(test1));
	printf("Test 2: %d\n", ft_str_is_numeric(test2));
	printf("Test 3: %d\n", ft_str_is_numeric(test3));
	printf("Test 4: %d\n", ft_str_is_numeric(test4));
	return (0);
}*/
