/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:06:31 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/22 15:52:01 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	int				dest_len;

	i = 0;
	dest_len = 0;
	while (dest[dest_len] != '\0')
		dest_len++;
	while (src[i] != '\0' && i < nb)
	{
		dest[dest_len] = src[i];
		dest_len++;
		i++;
	}
	dest[dest_len] = '\0';
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char dest[] = "Hola, ";
    char src[] = "Bola!";
    unsigned int nb = 3;
    printf("Resultado de ft_strncat: %s\n", strncat(dest, src, nb));
    return (0);
}*/