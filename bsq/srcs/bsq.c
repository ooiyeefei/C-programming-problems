/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/31 17:46:54 by schoque           #+#    #+#             */
/*   Updated: 2016/08/31 17:46:56 by schoque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	test_square(int x, int y, t_map *map)
{
	int obstacle_in_sq;
	int a;

	obstacle_in_sq = 0;
	if (map->bsq == 0)
		map->bsq = 1;
	if (map->rows[x][y] == map->rows[x][y + map->bsq])
		if (map->cols[x][y] == map->cols[x + map->bsq][y])
		{
			a = map->bsq + 1;
			while (!obstacle_in_sq && --a)
				if (map->cols[x][y + a] != map->cols[x + map->bsq][y + a])
					obstacle_in_sq = 1;
			if (!a)
			{
				map->bsq++;
				map->bsq_x = x;
				map->bsq_y = y;
				test_square(x, y, map);
			}
		}
}

int		find_bsq(t_map *map)
{
	int a;
	int b;

	a = -1;
	map->bsq = 0;
	while (++a + map->bsq < map->length)
	{
		b = -1;
		while ((++b + map->bsq < map->width)
				&& (map->array[a][b] != map->obstacle))
			test_square(a, b, map);
	}
	if (map->bsq == 0)
		return (3);
	a = map->bsq_x - 1;
	while (++a < (map->bsq_x + map->bsq))
	{
		b = map->bsq_y - 1;
		while (++b < (map->bsq_y + map->bsq))
			map->array[a][b] = map->filler;
	}
	return (0);
}
