/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_wordtab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 18:33:43 by yooi              #+#    #+#             */
/*   Updated: 2016/08/23 22:36:50 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

void	ft_sort_wordtab(char **tab)
{
	int		i;
	char	*temp;
	int		sort;

	sort = 1;
	while (sort == 1)
	{
		sort = 0;
		i = 0;
		while (tab[i + 1] != 0)
		{
			if (ft_strcmp(tab[i], tab[i + 1]) > 0)
			{
				sort = 1;
				temp = tab[i];
				tab[i] = tab[i + 1];
				tab[i + 1] = temp;
			}
			i++;
		}
	}
}
