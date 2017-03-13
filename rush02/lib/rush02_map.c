/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 17:53:18 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 17:53:52 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	set_var(char *c, int j, int y)
{
	if (j == 0)
		*c = 'A';
	else if (j == (y - 1))
		*c = 'C';
	else
		*c = 'B';
}

void	rush02(int x, int y, char *str)
{
	int		i;
	int		j;
	int		k;

	k = 0;
	j = 0;
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if (i == 0 || i == (x - 1))
				set_var(&str[k], j, y);
			else
			{
				if (j == 0 || j == (y - 1))
					str[k] = 'B';
				else
					str[k] = ' ';
			}
			increment(&i, &k);
		}
		last_value(str, &k, &j);
	}
	str[k] = '\0';
}

