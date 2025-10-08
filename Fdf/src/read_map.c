/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jose-vda <jose-vda@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/06 10:18:38 by jose-vda          #+#    #+#             */
/*   Updated: 2025/08/20 11:45:34 by jose-vda         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

static int	ft_count_width(char *line)
{
	int	width;
	int	i;

	width = 0;
	i = 0;
	while (line[i])
	{
		while (line[i] && (line[i] == ' ' || line[i] == '\n'))
			i++;
		if (line[i])
		{
			width++;
			while (line[i] && (line[i] != ' ' && line[i] != '\n'))
				i++;
		}
	}
	return (width);
}

static void	ft_count_dimensions(char *line, int fd, t_map *map)
{
	map->height = 0;
	map->width = 0;
	line = get_next_line(fd);
	while (line)
	{
		if (map->width == 0)
			map->width = ft_count_width(line);
		map->height++;
		free(line);
		line = get_next_line(fd);
	}
	free(line);
}

static void	ft_fill_row(t_point *row, char *line, int y)
{
	char	**nums;
	int		x;

	nums = ft_split(line, ' ');
	x = -1;
	while (nums[++x])
	{
		row[x].x = x;
		row[x].y = y;
		row[x].z = ft_atoi(nums[x]);
		free(nums[x]);
	}
	free(nums);
}

static void	ft_fill_map(t_map *map, int fd, char *line)
{
	int	y;

	y = -1;
	line = get_next_line(fd);
	while (line)
	{
		map->points[++y] = malloc(sizeof(t_point) * map->width);
		ft_fill_row(map->points[y], line, y);
		free(line);
		line = get_next_line(fd);
	}
	free(line);
}

t_map	*ft_read_map(const char *file)
{
	t_map	*map;
	char	*line;
	int		fd;

	line = NULL;
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (write(2, "Invalid map!\n", 14), NULL);
	map = malloc(sizeof(t_map));
	if (!map)
		return (NULL);
	ft_count_dimensions(line, fd, map);
	close(fd);
	map->points = malloc(sizeof(t_point *) * map->height);
	if (!map->points)
		return (free(map), NULL);
	fd = open(file, O_RDONLY);
	if (fd < 0)
		return (write(2, "Invalid map!\n", 14), NULL);
	ft_fill_map(map, fd, line);
	close(fd);
	return (map);
}
