/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 13:01:50 by yooi              #+#    #+#             */
/*   Updated: 2016/08/23 13:10:16 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(int argc, char **argv)
{
	int x;
	int y;
	int ans;

	if (argc != 4)
		return (0);
	x = ft_atoi(argv[1]);
	y = ft_atoi(argv[3]);
	if (y == 0 && argv[2][0] == '/')
	{
		ft_putstr(DIV_ERR);
		return (0);
	}
	else if (y == 0 && argv[2][0] == '%')
	{
		ft_putstr(MOD_ERR);
		return (0);
	}
	else
		ans = ft_do_op(x, argv[2][0], y);
	ft_putnbr(ans);
	return (0);
}
