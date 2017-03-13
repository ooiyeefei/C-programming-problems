/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:27:29 by jhan              #+#    #+#             */
/*   Updated: 2016/08/28 21:27:37 by jhan             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char s1r;
	unsigned char s2r;

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			s1r = *s1;
			s2r = *s2;
			return (s1r - s2r);
		}
		s1++;
		s2++;
	}
	return (0);
}
