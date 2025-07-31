/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvasquez <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:28:32 by mvasquez          #+#    #+#             */
/*   Updated: 2025/07/29 15:28:34 by mvasquez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	size_file(char *filename)
{
	int		fd;
	int		bytes;
	char	buf;

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (-1);
	bytes = 0;
	while (read(fd, &buf, 1) > 0)
		bytes++;
	close(fd);
	return (bytes);
}

char	*read_map(char *filename)
{
	int		fd;
	int		size;
	char	*buffer;

	size = size_file(filename);
	if (size <= 0)
		return (NULL);
	buffer = (char *)malloc(sizeof(char) * (size + 1));
	if (!buffer)
		return (NULL);
	fd = open(filename, O_RDONLY);
	if (fd < 0)
	{
		free(buffer);
		return (NULL);
	}
	if (read(fd, buffer, size) != size)
	{
		close(fd);
		free(buffer);
		return (NULL);
	}
	buffer[size] = '\0';
	close(fd);
	return (buffer);
}

char	*get_metadata_part(char *buffer)
{
	int		i;
	char	*metadata;

	i = 0;
	while (buffer[i] && buffer[i] != '\n')
		i++;
	if (i < 4)
		return (NULL);
	metadata = (char *)malloc(i + 1);
	if (!metadata)
		return (NULL);
	ft_strncpy(metadata, buffer, i);
	metadata[i] = '\0';
	return (metadata);
}

char	*get_map_part(char *buffer)
{
	int		start;
	int		len;
	char	*map;

	start = 0;
	while (buffer[start] && buffer[start] != '\n')
		start++;
	if (buffer[start] == '\n')
		start++;
	len = ft_strlen(buffer + start);
	map = (char *)malloc(len + 1);
	if (!map)
		return (NULL);
	ft_strcpy(map, buffer + start);
	return (map);
}

int	count_columns(char *map_buf)
{
	int	cols;

	cols = 0;
	while (map_buf[cols] && map_buf[cols] != '\n')
		cols++;
	return (cols);
}

t_map	*parse_map(char *metadata, char *map_buf)
{
	t_map	*map;
	int		len;

	if (!metadata || !map_buf)
		return (NULL);
	len = ft_strlen(metadata);
	if (len < 4)
		return (NULL);
	map = (t_map *)malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	map->fill = metadata[len - 1];
	map->obstacle = metadata[len - 2];
	map->empty = metadata[len - 3];
	map->rows = ft_atoi(metadata);
	map->cols = count_columns(map_buf);
	return (map);
}
