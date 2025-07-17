/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 12:55:13 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/17 13:48:33 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i != n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//#include <stdio.h>

/*int	main (void)
{
	char src[] = "prueba123";
	char dest[] = "";
	printf("dest antes: %s\n", dest);
	printf("dest despues: %s", ft_strncpy(dest, src, 6));
	return (0);
}*/