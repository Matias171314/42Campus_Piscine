/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 13:49:54 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/17 15:01:22 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;
	int	i;

	is_alpha = 1;
	i = 0;
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'A' && str[i] <= 'Z')
				|| (str[i] >= 'a' && str[i] <= 'z' )))
		{
			is_alpha = 0;
			return (is_alpha);
		}
		i++;
	}
	return (is_alpha);
}

// #include <stdio.h>

/*int	main(void)
{
	char test1[] = "Prueba";
	char test2[] = "/dwxaxwd";
	char test3[] = "dawxdw2";
	char test4[] = "";
	printf("Test 1: %d\n", ft_str_is_alpha(test1));
	printf("Test 2: %d\n", ft_str_is_alpha(test2));
	printf("Test 3: %d\n", ft_str_is_alpha(test3));
	printf("Test 4: %d\n", ft_str_is_alpha(test4));
	return (0);
}*/
