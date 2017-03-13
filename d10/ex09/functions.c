/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 23:02:56 by yooi              #+#    #+#             */
/*   Updated: 2016/08/23 23:26:31 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_add(int x, int y)
{
	return (x + y);
}

int		ft_sub(int x, int y)
{
	return (x - y);
}

int		ft_mul(int x, int y)
{
	return (x * y);
}

int		ft_div(int x, int y)
{
	return (x / y);
}

int		ft_mod(int x, int y)
{
	return (x % y);
}

int		ft_usage(int x, int y)
{
	ft_putstr("error : only [ - + * / % ] are accepted.\n");
	return (0);
}
