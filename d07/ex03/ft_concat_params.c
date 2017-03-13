/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/18 22:47:14 by yooi              #+#    #+#             */
/*   Updated: 2016/08/18 22:57:04 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strcat(char **argv, int count)
{
	int i;
	int j;
	int k;

	i = 0;
	j = 1;
	k = 0;
	while (i < count)
	{
		k = 0;
		while (argv[j][k])
		{
			argv[0][i] = argv[j][k];
			i++;
			k++;
		}
		j++;
		if (i == count)
			argv[0][i] = '\0';
		else
			argv[0][i] = '\n';
		i++;
	}
	argv[0][i] = '\0';
	return (*argv);
}

int		ft_strlen(int argc, char **argv)
{
	int i;
	int j;
	int count;

	i = 1;
	count = 0;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			count++;
			j++;
		}
		if (i == (argc - 1))
			count++;
		i++;
	}
	return (count);
}

char	*ft_concat_params(int argc, char **argv)
{
	int count;

	count = ft_strlen(argc, argv);
	*argv = (char*)malloc(sizeof(**argv) * (count + 1));
	ft_strcat(argv, count);
	return (*argv);
}
