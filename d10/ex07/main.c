/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: spiro <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 16:06:03 by spiro             #+#    #+#             */
/*   Updated: 2016/08/23 22:23:12 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

void	ft_sort_wordtab(char **tab);

int		main(void)
{
	int i;
	char *string = "this    is	a	 test ";
	char **words = ft_split_whitespaces(string);
	
	ft_sort_wordtab(words);

	i = 0;
	while (words[i] != 0)
	{
		printf ("%s ", words[i]);
		printf ("\n");
		i++;
	}
    return (0);
}
