/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01_map.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:28:29 by jhan              #+#    #+#             */
/*   Updated: 2016/08/28 21:28:38 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rush01(int x, int y, char *str)
{
	int		i;
	int		j;
	int		k;

	init_value(&j, &k);
	while (j < y)
	{
		i = 0;
		while (i < x)
		{
			if ((i == 0 && j == 0))
				str[k] = '/';
			else if (i == (x - 1) && j == (y - 1) && x > 1 && y > 1)
				str[k] = '/';
			else if ((i == 0 && j == (y - 1)) || (i == (x - 1) && j == 0))
				str[k] = '\\';
			else if (i == 0 || i == (x - 1) || j == 0 || j == (y - 1))
				str[k] = '*';
			else
				str[k] = ' ';
			increment(&i, &k);
		}
		last_value(str, &k, &j);
	}
	str[k] = '\0';
}
