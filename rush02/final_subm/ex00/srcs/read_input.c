/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   read_input.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:28:02 by jhan              #+#    #+#             */
/*   Updated: 2016/08/30 16:41:16 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		read_input(char *input, int *x, int *y)
{
	int		ret;
	int		tol;
	char	c;
	int		i;

	c = '0';
	i = 0;
	tol = 0;
	while ((ret = read(0, &c, 1)) > 0)
	{
		tol = tol + ret;
		input[i] = c;
		if (c == '\n')
			*y = *y + 1;
		else
			*x = *x + 1;
		i++;
	}
	input[i] = '\0';
	if (*x != 0 && *y != 0)
		*x = *x / *y;
	return (tol);
}
