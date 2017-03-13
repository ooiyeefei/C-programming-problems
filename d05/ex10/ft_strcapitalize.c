/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 22:52:49 by yooi              #+#    #+#             */
/*   Updated: 2016/08/17 02:45:54 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

#define ALPHA(x) (((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z')))
#define NUM(x) ((x>='0'&&x<='9'))

char	*ft_strlowcase(char *str)
{
	while (*str != '\0')
	{
		if ((*str >= 'A') && (*str <= 'Z'))
		{
			*str = *str + 32;
			str++;
		}
		else
			str++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int count;

	count = 0;
	ft_strlowcase(str);
	while (*str != '\0')
	{
		if ((ALPHA(*str)) || (NUM(*str)))
			count++;
		else
		{
			if (!((ALPHA(*str)) || (NUM(*str))))
			{
				if (!((ALPHA(*(str - 1))) || (NUM(*(str - 1)))))
				{
					*(str - (count + 1)) = *(str - (count + 1)) - 32;
					str = str + count;
					count = 0;
				}
			}
		}
		str++;
	}
	return (str);
}
