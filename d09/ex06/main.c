/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyork <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 21:47:54 by kyork             #+#    #+#             */
/*   Updated: 2016/08/18 22:20:39 by kyork            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

static char		*ft_make_str(int k)
{
	char	*ret;
	int		idx;

	ret = malloc(sizeof(*ret) * (k + 1));
	idx = 0;
	while (idx < k)
	{
		ret[idx++] = 'A';
	}
	ret[idx] = 0;
	return (ret);
}

static char		**ft_make_table(int j, int k)
{
	char	**ret;
	int		idx;

	ret = malloc(sizeof(*ret) * (j + 1));
	idx = 0;
	while (idx < j)
	{
		ret[idx++] = ft_make_str(k);
	}
	ret[idx] = 0;
	return (ret);
}

static char		***ft_make_factory(int i, int j, int k)
{
	char	***ret;
	int		idx;

	ret = malloc(sizeof(*ret) * (i + 1));
	idx = 0;
	while (idx < i)
	{
		ret[idx++] = ft_make_table(j, k);
	}
	ret[idx] = 0;
	return (ret);
}

void			ft_destroy(char ***factory);

int				main(void)
{
	char	***factory;

	factory = ft_make_factory(5, 6, 7);
	ft_destroy(factory);
	factory = ft_make_factory(5, 6, 0);
	ft_destroy(factory);
	factory = ft_make_factory(5, 0, 0);
	ft_destroy(factory);
	factory = ft_make_factory(0, 0, 0);
	ft_destroy(factory);
	printf("Please use `grep` and `wc -l` to make sure the number of"
			"malloc() and free() calls are the same\n");
	return (0);
}
