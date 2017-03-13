/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 17:07:50 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 18:01:07 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rush04(int x, int y, char *str)
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
				str[k] = 'A';
			else if (i == (x - 1) && j == (y - 1) && x > 1 && y > 1)
				str[k] = 'A';
			else if ((i == 0 && j == (y - 1)) || (i == (x - 1) && j == 0))
				str[k] = 'C';
			else if (i == 0 || i == (x - 1) || j == 0 || j == (y - 1))
				str[k] = 'B';
			else
				str[k] = ' ';
			increment(&i, &k);
		}
		last_value(str, &k, &j);
	}
	str[k] = '\0';
}

