#ifndef __FT_BSQ_H__
#define __FT_BSQ_H__

// Include libraries
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

typedef struct	s_map
{
	int rows;
	int cols;
	char empty;
	char obstacle;
	char fill;
}	t_map;

typedef struct s_result
{
	int size;
	int row;
	int col;
}	t_result;

// Function matrix.c
int	**build_matrix(char *map_buf, t_map *map);
void	print_int_matrix(int **int_matrix, t_map *map);
void	print_char_matrix(char **char_matrix, t_map *map);
char	**create_char_matrix(char *map_buf, t_map *map);
void	apply_result_to_matrix(char **char_matrix, t_map *map, t_result res);


// Function read_map.c
int	size_file(char *filename);
char	*read_map(char *filename);
char	*get_metadata_part(char *buffer);
char	*get_map_part(char *buffer);
int	count_columns(char *map_buf);
t_map	*parse_map(char *metadata, char *map_buf);

// Function solve_map.c
int	get_min(int a, int b, int c);
void	update_result(t_result *res, int size, int i, int j);
t_result	find_largest_square(int **matrix, t_map *map);

// Function utils.c
void	ft_putchar(char c);
void	ft_putstr(char *str);
void	ft_putnbr(int nb);
int	ft_strlen(char *str);
char	*ft_strncpy(char *dest, char *src, unsigned int n);
char	*ft_strcpy(char *dest, char *src);
// Function ft_atoi.c
int	ft_atoi(char *str);

#endif