/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:04:59 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/25 14:05:00 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int	size_of_strs(int size, char **strs)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	return (total);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*str;
	int		i;
	int		total;

	if (!size)
	{
		str = malloc(sizeof(char));
		str[0] = '\0';
		return (str);
	}
	total = size_of_strs(size, strs);
	str = malloc(sizeof(char) * (total + ft_strlen(sep)));
	if (!str)
		return (NULL);
	ft_strcat(str, strs[0]);
	i = 1;
	while (i < size)
	{
		ft_strcat(str, sep);
		ft_strcat(str, strs[i]);
		i++;
	}
	return (str);
}

/* #include <unistd.h>
int	main(void)
{
	char *strs[] = {"Hello", "42", "Nemo", "Shell"};
	char *sep = "_";
	char *result;

	result = ft_strjoin(4, strs, sep);
	if (result[1] != '\0')
	{
		write(1, result, ft_strlen(result));
		free(result);
	}
	return (0);
} */