#include "bsq.h"

int **build_matrix(char *map_buf, t_map *map)
{
	int **matrix;
	int i = 0, j = 0, k = 0;

	matrix = (int **)malloc(sizeof(int *) * map->rows);
	if (!matrix)
		return (NULL);

	while (i < map->rows)
	{
		matrix[i] = (int *)malloc(sizeof(int) * map->cols);
		if (!matrix[i])
		{
			while (i > 0)
				free(matrix[--i]);
			free(matrix);
			return (NULL);
		}
		j = 0;
		while (j < map->cols)
		{
			while (map_buf[k] == '\n') // Saltar saltos de línea
				k++;

			if (map_buf[k] == map->empty)
				matrix[i][j] = 1;
			else
				matrix[i][j] = 0;

			k++;
			j++;
		}
		i++;
	}
	return (matrix);
}


char	**create_char_matrix(char *map_buf, t_map *map)
{
	char	**matrix;
	int		i;
	int		j;
	int		k;

	matrix = (char **)malloc(sizeof(char *) * map->rows);
	if (!matrix)
		return (NULL);

	i = 0;
	k = 0;
	while (i < map->rows)
	{
		matrix[i] = (char *)malloc(sizeof(char) * (map->cols + 1));
		if (!matrix[i])
			return (NULL);
		j = 0;
		while (j < map->cols)
		{
			while (map_buf[k] == '\n') // saltar saltos de línea
				k++;
			matrix[i][j] = map_buf[k];
			k++;
			j++;
		}
		matrix[i][j] = '\0'; // null-terminate por si quieres imprimir con puts
		i++;
	}
	return (matrix);
}

void print_int_matrix(int **int_matrix, t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			ft_putchar(int_matrix[i][j] + '0');
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}
void print_char_matrix(char **char_matrix, t_map *map)
{
	int	i;
	int	j;

	i = 0;
	while (i < map->rows)
	{
		j = 0;
		while (j < map->cols)
		{
			ft_putchar(char_matrix[i][j]);
			j++;
		}
		ft_putchar('\n');
		i++;
	}
}

void	apply_result_to_matrix(char **char_matrix, t_map *map, t_result res)
{
	int	start_i = res.row - res.size + 1;
	int	start_j = res.col - res.size + 1;
	int	end_i = res.row;
	int	end_j = res.col;
	int	i;
	int	j;

	i = start_i;
	while (i <= end_i)
	{
		j = start_j;
		while (j <= end_j)
		{
			char_matrix[i][j] = map->fill; // normalmente 'x'
			j++;
		}
		i++;
	}
}