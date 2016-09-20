/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_tools.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 10:02:26 by schoque           #+#    #+#             */
/*   Updated: 2016/08/31 10:02:27 by schoque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		get_info(char *file, t_map *map)
{
	char	buffer[16];
	char	c;
	int		a;
	int		fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	a = -1;
	while ((read(fd, &c, 1)) && (c != '\n'))
		buffer[++a] = c;
	if (a < 3)
		return (2);
	map->empty = buffer[a - 2];
	map->obstacle = buffer[a - 1];
	map->filler = buffer[a];
	buffer[a - 2] = 0;
	if ((map->length = ft_atoi(buffer)) < 1)
		return (2);
	a = 0;
	while ((read(fd, &c, 1)) && (c != '\n'))
		++a;
	map->width = a;
	close(fd);
	return (0);
}

int		read_map(char *file, t_map *map)
{
	char	buffer[map->width + 1];
	char	c;
	int		a;
	int		fd;

	if ((fd = open(file, O_RDONLY)) == -1)
		return (1);
	while ((read(fd, &c, 1)) && (c != '\n'))
		;
	if (malloc_arrays(map))
		return (3);
	map->array[map->length] = 0;
	buffer[map->width] = 0;
	a = -1;
	while (++a < map->length)
	{
		if (map->width == (read(fd, &buffer, map->width)))
			ft_strcpy(map->array[a], buffer);
		if (!(read(fd, &c, 1)) || (c != '\n'))
			return (2);
	}
	if ((read(fd, &c, 1)))
		return (2);
	close(fd);
	return (0);
}

int		pre_check(t_map *map)
{
	int a;
	int b;

	a = -1;
	while (++a < map->length)
	{
		b = -1;
		while (++b < map->width)
			if (map->array[a][b] == map->obstacle)
				map->rows[a][b] = (b == 0) ? 1 : map->rows[a][b - 1] + 1;
			else if (map->array[a][b] != map->empty)
				return (2);
			else
				map->rows[a][b] = (b == 0) ? 0 : map->rows[a][b - 1];
	}
	b = -1;
	while (++b < map->width)
	{
		a = -1;
		while (++a < map->length)
			if (map->array[a][b] == map->obstacle)
				map->cols[a][b] = (a == 0) ? 1 : map->cols[a - 1][b] + 1;
			else
				map->cols[a][b] = (a == 0) ? 0 : map->cols[a - 1][b];
	}
	return (0);
}

int		malloc_arrays(t_map *map)
{
	int a;

	a = -1;
	if (!(map->rows = (int **)malloc(sizeof(int *) * map->length)))
		return (5);
	if (!(map->cols = (int **)malloc(sizeof(int *) * map->length)))
		return (5);
	if (!(map->array = (char **)malloc(sizeof(char *) * map->length)))
		return (5);
	while (++a < map->length)
	{
		if (!(map->rows[a] = (int *)malloc(sizeof(int) * map->width)))
			return (5);
		if (!(map->cols[a] = (int *)malloc(sizeof(int) * map->width)))
			return (5);
		if (!(map->array[a] = (char *)malloc(sizeof(char) * map->width)))
			return (5);
	}
	return (0);
}

void	free_arrays(t_map *map)
{
	int a;

	a = -1;
	while (++a < map->length)
	{
		free(map->rows[a]);
		free(map->cols[a]);
		free(map->array[a]);
	}
	free(map->rows);
	free(map->cols);
	free(map->array);
}
