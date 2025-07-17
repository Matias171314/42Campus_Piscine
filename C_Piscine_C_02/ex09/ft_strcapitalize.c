/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:29:32 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/17 16:13:53 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'a' && str[i] <= 'z' )
			&& (str[i - 1] < 'A'
				|| (str[i - 1] > '[' && str[i - 1] < '`' )
				|| str[i - 1] > 'z' ))
			str[i] -= 32;
		i++;
	}
	return (str);
}

//#include <stdio.h>

/*int	main(void)
{
	char test1[] = "hola amigo";
	char test2[] = "123_mayuscula";
	char test3[] = "salut, comment tu vas ?";
    char test3[] = "42mots quarante-deux; cinquante+et+un";
	char test4[] = "";
	printf("Test 1: %s\n", ft_strcapitalize(test1));
	printf("Test 2: %s\n", ft_strcapitalize(test2));
	printf("Test 3: %s\n", ft_strcapitalize(test3));
	printf("Test 4: %s\n", ft_strcapitalize(test4));
	return (0);
}*/
