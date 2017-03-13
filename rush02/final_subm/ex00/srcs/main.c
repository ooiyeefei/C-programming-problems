/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:32:26 by jhan              #+#    #+#             */
/*   Updated: 2016/08/30 16:41:26 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		main(void)
{
	int		len;
	int		dim[2];
	char	*rush;
	char	*input;
	char	rush_tag[5];

	dim[0] = 0;
	dim[1] = 0;
	input = (char*)malloc(sizeof(char) * MAX_BUF);
	if (read_input(input, &dim[0], &dim[1]) == 0)
		return (0);
	else
	{
		len = (dim[0] * dim[1]) + dim[1];
		rush = (char*)malloc(sizeof(char) * (len + 1));
		rushcmp(input, rush, dim, rush_tag);
		gen_result(rush_tag, dim[0], dim[1]);
	}
	free(input);
	free(rush);
	return (0);
}
