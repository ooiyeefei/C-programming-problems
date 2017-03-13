/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   gen_result.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 19:11:17 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 19:22:37 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	printout(int nb, int x, int y)
{
	ft_putstr("[rush-0");
	ft_putnbr(nb);
	ft_putstr("] [");
	ft_putnbr(x);
	ft_putstr("] [");
	ft_putnbr(y);
	ft_putstr("]");
}

void	gen_result(char *rush_tag, int x, int y)
{
	int i;
	int count;
	
	i = 0;
	count = 0;
	while (i < 5)
	{
		if (rush_tag[i] == 1)
		{
			if (count > 0)
				ft_putstr(" || ");
			printout(i, x, y);
			count++;
		}
		i++;
	}
	ft_putchar('\n');
	if (count == 0)
		ft_putstr("aucune\n");
}
