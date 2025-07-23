/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:05:50 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/24 00:57:49 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (i < n - 1 && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "abcd";
    char str2[] = "aBcD";
    
    int result0 = strncmp(str1, str2, 2);
    int result1 = ft_strncmp(str1, str2, 2);
    
    printf("Usando strncmp: %d\n", result0);
    printf("Usando ft_strncmp: %d\n", result1);
    
    return (0);
}*/