/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 11:09:42 by spiro             #+#    #+#             */
/*   Updated: 2016/08/18 11:09:46 by spiro            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int g_y;

int		ft_count_words(char *str)
{
	int wordcount;
	int i;
	int trigger;

	wordcount = 0;
	i = 0;
	trigger = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
			trigger = 1;
		else if (trigger == 1)
		{
			trigger = 0;
			wordcount++;
		}
		i++;
	}
	return (wordcount);
}

char	**ft_create_words(char **pnts, char **words)
{
	int		x;
	int		i;

	i = 0;
	x = 0;
	while (pnts[i] != 0)
	{
		while ((pnts[i][x] != ' ' && pnts[i][x] != '\n' && pnts[i][x] != '\t'))
		{
			words[i][x] = pnts[i][x];
			x++;
		}
		words[i][x] = '\0';
		x = 0;
		i++;
	}
	words[i] = 0;
	return (words);
}

char	**ft_create_array(char *str, char **pnts, char **words)
{
	int		x;
	int		i;
	int		trigger;

	i = 0;
	x = 0;
	trigger = 1;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '\n' || str[i] == '\t')
		{
			trigger = 1;
		}
		else if (trigger == 1)
		{
			trigger = 0;
			pnts[x] = &str[i];
			x++;
		}
		i++;
	}
	pnts[x] = 0;
	return (ft_create_words(pnts, words));
}

int		ft_word_length(char *str, int g_y)
{
	int		x;
	int		z;

	z = 0;
	x = 0;
	while (str[g_y] != '\0')
	{
		while ((str[z] != ' ' && str[z] != '\n' && str[z] != '\t'))
		{
			x++;
			z++;
		}
		z = 0;
		g_y++;
		break ;
	}
	return (x);
}

char	**ft_split_whitespaces(char *str)
{
	char	**pnts;
	int		i;
	char	**words;

	pnts = (char**)malloc(sizeof(char*) * ft_count_words(str) + 1);
	words = (char**)malloc(sizeof(char*) * (ft_count_words(str) + 1));
	i = 0;
	g_y = 0;
	while (i < ft_count_words(str))
	{
		words[i] = (char*)malloc(sizeof(char) * (ft_word_length(str, g_y) + 1));
		i++;
	}
	return (ft_create_array(str, pnts, words));
}
