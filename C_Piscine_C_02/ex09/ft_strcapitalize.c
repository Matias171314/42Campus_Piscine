/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 15:29:32 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/17 18:44:31 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_alpha_numeric(char c)
{
	return ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		if (is_alpha_numeric(str[i]))
		{
			if (new_word && (str[i] >= 'a' && str[i] <= 'z'))
				str[i] -= 32;
			else if (!new_word && (str[i] >= 'A' && str[i] <= 'Z'))
				str[i] += 32;
			new_word = 0;
		}
		else
			new_word = 1;
		i++;
	}
	return (str);
}

//#include <stdio.h>

/*int	main(void)
{
	char test1[] = "hOla amigo";
	char test2[] = "123_mayuscula";
	char test3[] = "salut,comment tu vas ?";
    char test4[] = "42mots quarante-deux; cinquante+et+un";
	char test5[] = "";
	printf("Test 1: %s\n", ft_strcapitalize(test1));
	printf("Test 2: %s\n", ft_strcapitalize(test2));
	printf("Test 3: %s\n", ft_strcapitalize(test3));
	printf("Test 4: %s\n", ft_strcapitalize(test4));
	printf("Test 5: %s\n", ft_strcapitalize(test5));
	return (0);
}*/
