/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:17:37 by yooi              #+#    #+#             */
/*   Updated: 2016/08/18 15:13:30 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int	i;
	int j;
	int	*new_str;

	if (min >= max)
		return (NULL);
	new_str = (int *)malloc(sizeof(*new_str) * ((max - min) + 1));
	i = 0;
	j = min;
	while (j < max)
	{
		new_str[i] = j;
		i++;
		j++;
	}
	new_str[i] = '\0';
	return (new_str);
}
