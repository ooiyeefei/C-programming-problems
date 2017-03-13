/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:29:42 by jhan              #+#    #+#             */
/*   Updated: 2016/08/28 21:29:47 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rushcmp(char *input, char *rush, int *dim, char *rush_tag)
{
	rush00(dim[0], dim[1], rush);
	if (ft_strcmp(rush, input) == 0)
		rush_tag[0] = 1;
	else
		rush_tag[0] = 0;
	rush01(dim[0], dim[1], rush);
	if (ft_strcmp(rush, input) == 0)
		rush_tag[1] = 1;
	else
		rush_tag[1] = 0;
	rush02(dim[0], dim[1], rush);
	if (ft_strcmp(rush, input) == 0)
		rush_tag[2] = 1;
	else
		rush_tag[2] = 0;
	rush03(dim[0], dim[1], rush);
	if (ft_strcmp(rush, input) == 0)
		rush_tag[3] = 1;
	else
		rush_tag[3] = 0;
	rush04(dim[0], dim[1], rush);
	if (ft_strcmp(rush, input) == 0)
		rush_tag[4] = 1;
	else
		rush_tag[4] = 0;
}
