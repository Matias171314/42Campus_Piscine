/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 12:29:56 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/29 12:29:57 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	int		i;
	char	*buffer;
	char	*metada;
	char	*map_buf;
	t_map	*map;
	int		**matrix;
	char **char_matrix;
	t_result res;

	if (argc < 2)
		write(2, "map error\n", 10);
	else
	{
		i = 1;
		while (i < argc)
		{
			buffer = read_map(argv[i]);
			metada = get_metadata_part(buffer);
			map_buf = get_map_part(buffer);
			map = parse_map(metada, map_buf);
			ft_putstr(map_buf);
			ft_putstr("\n");
			ft_putstr("\n");
			matrix = build_matrix(map_buf, map);
			print_int_matrix(matrix, map);
			ft_putstr("\n");
			res = find_largest_square(matrix, map);
			char_matrix = create_char_matrix(map_buf, map);
			apply_result_to_matrix(char_matrix, map, res);
			print_char_matrix(char_matrix, map);
			i++;
			free(buffer);
			free(metada);
			free(map_buf);
			free(map);
			free(matrix);
			free(char_matrix);
			ft_putstr("\n");
		}
	}
	return (0);
}

