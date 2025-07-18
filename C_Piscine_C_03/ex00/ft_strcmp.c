/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:05:25 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/18 12:25:12 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;
    
    i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[] = "ae";
    char str2[] = "ad";
    
    int result0 = strcmp(str1, str2);
    int result1 = ft_strcmp(str1, str2);
    
    printf("Usando strcmp: %d\n", result0);
    printf("Usando ft_strcmp: %d\n", result1);
    
    return 0;
}