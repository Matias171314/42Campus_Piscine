/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:10:53 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/17 16:17:32 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}

//#include <stdio.h>

/*int	main(void)
{
	char test1[] = "hola amigo";
	char test2[] = "123mayuscula";
	char test3[] = "+-`/";
	char test4[] = "";
	printf("Test 1: %s\n", ft_strupcase(test1));
	printf("Test 2: %s\n", ft_strupcase(test2));
	printf("Test 3: %s\n", ft_strupcase(test3));
	printf("Test 4: %s\n", ft_strupcase(test4));
	return (0);
}*/
