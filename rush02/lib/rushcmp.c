/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rushcmp.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 17:15:58 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 18:10:19 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	rushcmp(char *input, char *rush, int x, int y, char *rush_tag)
{
	rush00(x, y, rush);
	if(ft_strcmp(rush, input) == 0)
		rush_tag[0] = 1;
	else
		rush_tag[0] = 0;
	rush01(x, y, rush);
	if(ft_strcmp(rush, input) == 0)
		rush_tag[1] = 1;
	else
		rush_tag[1] = 0;
	rush02(x, y, rush);
	if(ft_strcmp(rush, input) == 0)
		rush_tag[2] = 1;
	else
		rush_tag[2] = 0;
	rush03(x, y, rush);
	if(ft_strcmp(rush, input) == 0)
		rush_tag[3] = 1;
	else
		rush_tag[3] = 0;
	rush04(x, y, rush);
	if(ft_strcmp(rush, input) == 0)
		rush_tag[4] = 1;
	else
		rush_tag[4] = 0;
}
