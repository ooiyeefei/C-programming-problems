/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 19:25:44 by yooi              #+#    #+#             */
/*   Updated: 2016/08/19 10:12:49 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

void	ft_takes_place(int hour)
{
	int h;

	if ((hour <= 24) && (hour >= 0))
	{
		if ((hour > 12) && (hour < 24))
			h = hour % 12;
		else if ((hour == 0) || (hour == 24))
			h = 12;
		else
			h = hour;
		printf("THE FOLLOWING TAKES PLACE BETWEEN ");
		if (hour == 11)
			printf("%i.00 A.M. AND 12.00 P.M.\n", h);
		else if (hour == 23)
			printf("%i.00 P.M. AND 12.00 A.M.\n", h);
		else if ((hour >= 12) && (hour <= 22))
			printf("%i.00 P.M. AND %i.00 P.M.\n", h, (hour + 1) % 12);
		else
			printf("%i.00 A.M. AND %i.00 A.M.\n", h, (hour + 1) % 12);
	}
}
