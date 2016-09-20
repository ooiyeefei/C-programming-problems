/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 21:01:51 by schoque           #+#    #+#             */
/*   Updated: 2016/08/30 21:01:52 by schoque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int		main(int argc, char **argv)
{
	t_map	map;
	int		a;
	int		ret;

	a = 0;
	ret = 0;
	if (argc > 1)
		while (++a < argc)
		{
			if (!(ret = get_info(argv[a], &map)))
				if (!(ret = read_map(argv[a], &map)))
					if (!(ret = pre_check(&map)))
						if (!(ret = find_bsq(&map)))
							ft_putlist(map.array);
			if (ret == 1)
				write(2, "failed to open file\n", 21);
			if (ret == 2)
				write(2, "map error\n", 10);
			if (ret == 3)
				write(2, "map full\n", 9);
			if (ret == 5)
				write(2, "mem error\n", 10);
			free_arrays(&map);
		}
	return (0);
}
