/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   new.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 17:32:58 by yooi              #+#    #+#             */
/*   Updated: 2016/08/23 21:19:55 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#define DELIM(x)(x==' '||x=='\n'||x=='\t')

char	*ft_putstr(char *str, char *arr, int strlen, int start)
{
	int i;
	
	i = 0;
	while (i < strlen)
	{
		arr[i] = str[start];
		i++;
	}
	arr[i] = '\0';
	return (arr);
}

int		ft_strlen(char *str, int x)
{
	int strlen;

	strlen = 0;
	while (str[x] != DELIM(str[x]))
	{
		strlen++;
		x++;
	}
	return (strlen);
}

int		ft_wordcount(char *str, char **ptr, char **arr)
{
	int i;
	int j;
	int word;
	int strlen;

	i = 0;
	j = 0;
	word = 0;
	while (str[i] != '\0')
	{
		if (DELIM(str[i]) && !DELIM(str[i - 1]))
		{
			word++;
			strlen = 0;
			ptr[j] = &str[i + 1];
			strlen = ft_strlen(str, i + 1);
			arr[j] = (char*)malloc(sizeof(char)  * (strlen + 1));
			arr[j] = ft_putstr(str, arr[j], strlen, i + 1);
			j++;
		}
		i++;
	}
	ptr[j] = 0;
	return (word);
}

char	**ft_split_whitespaces(char *str)
{
	int word;
	char **ptr;
	char **arr;

	word = ft_wordcount(str, ptr, arr);
	ptr = (char**)malloc(sizeof(*ptr) * (word + 1));
	return(ptr);
}
