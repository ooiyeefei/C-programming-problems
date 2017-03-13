/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_do_op.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 12:13:02 by yooi              #+#    #+#             */
/*   Updated: 2016/08/23 13:02:54 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_do_op(int x, char op, int y)
{
	int ans;

	if (op == '+')
		ans = x + y;
	else if (op == '-')
		ans = x - y;
	else if (op == '*')
		ans = x * y;
	else if (op == '/')
		ans = x / y;
	else if (op == '%')
		ans = x % y;
	else
		return (0);
	return (ans);
}
