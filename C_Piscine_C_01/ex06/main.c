/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:41:27 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/16 13:41:39 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_strlen(char *str);

int	main(void)
{
	char	*test1 = "Hola, mundo!";
	char	*test2 = "";
	char	*test3 = "42 Madrid";
	char	*test4 = "¡Vamos con todo, Matías!";
	char	*test5 = "1234567890";

	printf("Longitud de \"%s\" = %d\n", test1, ft_strlen(test1));
	printf("Longitud de \"%s\" = %d\n", test2, ft_strlen(test2));
	printf("Longitud de \"%s\" = %d\n", test3, ft_strlen(test3));
	printf("Longitud de \"%s\" = %d\n", test4, ft_strlen(test4));
	printf("Longitud de \"%s\" = %d\n", test5, ft_strlen(test5));

	return (0);
}
