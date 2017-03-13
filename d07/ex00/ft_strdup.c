/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 08:29:28 by yooi              #+#    #+#             */
/*   Updated: 2016/08/18 22:51:48 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
//#define ALPHA(x)(((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z')))

char	*ft_strcpy(char *dest, char *src)
{
	int i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int		ft_strlen(char *str)
{
	int count;

	count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strdup(char *src)
{
	int		strlen;
	char	*new_str;

	strlen = ft_strlen(src) + 1;
	new_str = (char *)malloc(sizeof(*new_str) * strlen);
	ft_strcpy(new_str, src);
	if (new_str == NULL)
		return (NULL);
	return (new_str);
}
