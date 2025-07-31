/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:04:39 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/25 14:04:40 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	size;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	size = max - min;
	*range = malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	i = 0;
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (size);
}
/* #include <stdio.h>
int main (void)
{
	int *range;
	int min = 1;
	int max = 10;
	int size;
	int i;

	i = 0;
	size = ft_ultimate_range(&range, min, max);
	printf("Size: %d\n", size);
	while (range[i])
	{
		printf("%d ", range[i]);
		i++;
	}
	return (0);
} */
