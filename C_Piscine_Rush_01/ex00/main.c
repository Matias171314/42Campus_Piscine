/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/19 23:41:29 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/20 04:22:43 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	rush_01(int entrada[16]);

int	parse_input(char *str, int *entrada)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '1' && str[i] <= '4')
		{
			if (j >= 16)
				return (0);
			entrada[j] = str[i] - '0';
			j++;
		}
		else if (str[i] != ' ')
		{
			return (0);
		}
		i++;
	}
	return (j == 16);
}

int	main(int argc, char **argv)
{
	int	entrada[16];

	if (argc != 2)
	{
		write(2, "Error: Numero invalido de argumentos\n", 36);
		return (1);
    }
	if (!parse_input(argv[1], entrada))
	{
		write(2, "Error: Argumento invalido\n", 27);
		return (1);
	}
	rush_01(entrada);
	return (0);
}
