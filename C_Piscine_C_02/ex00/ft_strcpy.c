/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/17 11:53:18 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/17 12:59:48 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
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
	printf("dest despues: %s", ft_strcpy(dest, src));
	return (0);
}*/