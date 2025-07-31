/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve_map.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:28:45 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/29 15:28:46 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	get_min(int a, int b, int c)
{
	if (a <= b && a <= c)
		return (a);
	else if (b <= a && b <= c)
		return (b);
	return (c);
}

void	update_result(t_result *res, int size, int i, int j)
{
	if (size > res->size
		|| (size == res->size && (i < res->row || (i == res->row && j < res->col))))
	{
		res->size = size;
		res->row = i;
		res->col = j;
	}
}

t_result	find_largest_square(int **matrix, t_map *map)
{
	t_result	result;
	int			**dp;
	int			i, j;

	result.size = 0;
	result.row = 0;
	result.col = 0;

	dp = (int **)malloc(sizeof(int *) * map->rows);
	i = 0;
	while (i < map->rows)
	{
		dp[i] = (int *)malloc(sizeof(int) * map->cols);
		j = 0;
		while (j < map->cols)
		{
			if (matrix[i][j] == 1)
			{
				if (i == 0 || j == 0)
					dp[i][j] = 1;
				else
					dp[i][j] = 1 + get_min(dp[i - 1][j], dp[i][j - 1], dp[i - 1][j - 1]);
				update_result(&result, dp[i][j], i, j);
			}
			else
				dp[i][j] = 0;
			j++;
		}
		i++;
	}
	i = 0;
	while(i < map->rows)
	{
		free(dp[i++]);;
	}
	free(dp);
	return (result);
}
