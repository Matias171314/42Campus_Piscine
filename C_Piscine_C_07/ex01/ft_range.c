/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 14:04:22 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/25 14:04:23 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*range;
	int	size;
	int	i;

	if (min >= max)
		return (NULL);
	size = max - min;
	range = malloc(sizeof(int) * size);
	if (!range)
		return (NULL);
	i = 0;
	while (min < max)
	{
		range[i] = min;
		min++;
		i++;
	}
	return (range);
}

/*#include <stdio.h>
int main(void)
{
	int *range;
	int max;
	int min;
	int i;

	max = 20;
	min = 1;
	range = ft_range(min, max);
	if (range == NULL)
	{
		printf("Error: Range is NULL\n");
		return (1);
	}
	i = 0;
	while  (range[i])
	{
		printf("%d ", range[i]);
		i ++;
	}
	free(range);
	return (0);
}*/
