/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 17:55:57 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 19:18:33 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h> //to delete!!!!

int		main(int argc, char **argv)
{
	int x;
	int y;
	int i;
	char c;
	char *rush;
	char *input;
	char rush_tag[5];

	i = 0;
	x = 0;
	y = 0;
	input  = (char*)malloc(sizeof(char) * MAX_BUF);
	read_input(input, &x, &y);
/*	while (read(0, &c, 1))
	{
		input[i] = c;
		if (c == '\n')
			y++;
		else
			x++;
		i++;
	}
	input[i] = '\0';
	x = x / y;
*/	rush = (char*)malloc(sizeof(char) * (x * y + y + 1));
	rushcmp(input, rush, x, y, rush_tag);
	gen_result(rush_tag, x, y);
	return (0);
}
