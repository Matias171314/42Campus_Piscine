/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:05:50 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/18 12:24:17 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;
    
    i = 0;
	while (i < n - 1)
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
    char str1[] = "Holad";
    char str2[] = "Holac";
    
    int result0 = strncmp(str1, str2, 5);
    int result1 = ft_strncmp(str1, str2, 5);
    
    printf("Using strncmp: %d\n", result0);
    printf("Using ft_strncmp: %d\n", result1);
    
    return 0;
}