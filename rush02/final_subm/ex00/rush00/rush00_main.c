/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:33:11 by jhan              #+#    #+#             */
/*   Updated: 2016/08/28 21:49:57 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

#define NUM(x) (x>='0' && x<='9')

int			main(int argc, char **argv)
{
	int width;
	int height;

	if (argc == 3)
	{
		if (NUM(argv[1][0]) && NUM(argv[2][0]))
		{
			width = argv[1][0] - '0';
			height = argv[2][0] - '0';
			rush(width, height);
		}
	}
	return (0);
}
