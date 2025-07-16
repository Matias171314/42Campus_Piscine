/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/16 13:41:12 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/16 13:41:43 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str);

int	main(void)
{
	char	*texto = "Hola, soy Matías! Esta es una prueba de ft_putstr.\n";

	ft_putstr(texto);
	return (0);
}
