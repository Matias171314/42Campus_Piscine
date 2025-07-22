/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:07:46 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/22 16:00:19 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int	i;
    unsigned int	j;
    unsigned int	dest_len;

    i = 0;
    j = 0;
    dest_len = 0;

    while (dest[dest_len] != '\0' && dest_len < size)
        dest_len++;

    if (size == 0 || dest_len >= size - 1)
        return (dest_len + ft_strlen(src));

    while (src[j] != '\0' && dest_len + j < size - 1)
    {
        dest[dest_len + j] = src[j];
        j++;
    }

    dest[dest_len + j] = '\0';

    while (src[j] != '\0')
        j++;

    return (dest_len + j);
}

unsigned int	ft_strlen(char *str)
{
    unsigned int	len;

    len = 0;
    while (str[len] != '\0')
        len++;
    return (len);
}

#include <stdio.h>
int main(void)
{
    char dest[20] = "Hola, ";
    char src[] = "Bola!";
    unsigned int size = 20;

    unsigned int result = ft_strlcat(dest, src, size);
    printf("Resultado de ft_strlcat: %s\n", dest);
    printf("Longitud total: %u\n", result);

    return 0;
}