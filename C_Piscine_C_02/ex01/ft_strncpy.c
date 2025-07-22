/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:55:13 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/21 12:32:03 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*#include <stdio.h>
#include <string.h>

int	main (void)
{
	char src[] = "prueba123";
	char dest[20] = {0};
	printf("dest antes: %s\n", dest);
	printf("dest despues: %s\n", ft_strncpy(dest, src, 15));
	printf("dest despues con strncpy: %s\n", strncpy(dest, src, 15));
	return (0);
}*/