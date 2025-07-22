/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <mvasquez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/18 10:07:00 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/22 15:58:52 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
    int i;

    i = 0;
    if (*to_find == '\0')
        return (str);
    while (str[i] != '\0')
    {
        int j = 0;
        while (str[i + j] == to_find[j] && to_find[j] != '\0')
        {
            j++;
        }
        if (to_find[j] == '\0')
            return (&str[i]);
        i++;
    }
    return (0);
}

/*#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hola, mundo!";
    char to_find[] = "\n";
    char *result, *result2;

    result = strstr(str, to_find);
    result2 = ft_strstr(str, to_find);
    printf("Resultado de ft_strstr: %s\n", result);
    printf("Resultado de ft_strstr: %s\n", result2);
    return 0;
}*/