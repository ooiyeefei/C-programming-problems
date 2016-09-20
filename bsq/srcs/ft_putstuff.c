/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstuff.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: schoque <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/30 21:36:40 by schoque           #+#    #+#             */
/*   Updated: 2016/08/30 21:36:41 by schoque          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	ft_putstr(char *str)
{
	while (*str)
		write(1, str++, 1);
}

void	ft_putlist(char **list)
{
	while (list && *list)
	{
		ft_putstr(*list++);
		ft_putstr("\n");
	}
}

char	*ft_strcpy(char *dest, char *src)
{
	while ((*dest++ = *src++))
		;
	return (dest);
}

int		ft_atoi(char *str)
{
	int i;
	int neg;
	int ans;

	i = 0;
	neg = 1;
	ans = 0;
	while (IS_WHSPC(str[i]))
		i++;
	if ((str[i] == '+') || (str[i] == '-'))
	{
		if (str[i] == '-')
			neg = -1;
		i++;
	}
	while (IS_NUM(str[i]))
	{
		ans = ans * 10 + str[i] - '0';
		i++;
	}
	return (ans * neg);
}
