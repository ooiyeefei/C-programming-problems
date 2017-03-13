/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 20:53:14 by yooi              #+#    #+#             */
/*   Updated: 2016/08/19 12:00:42 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

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

void	ft_swap(char **a, char **b)
{
	char *temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

void	ft_print_params(int argc, char **argv)
{
	int i;
	int j;

	i = argc - 1;
	while (i > 0)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			ft_putchar(argv[i][j]);
			j++;
		}
		ft_putchar('\n');
		i--;
	}
}

int		main(int argc, char **argv)
{
	int		i;
	int		sort;

	sort = 1;
	while (sort)
	{
		sort = 0;
		i = 1;
		while (i < (argc - 1))
		{
			if (ft_strcmp(argv[i], argv[i + 1]) < 0)
			{
				ft_swap(&argv[i], &argv[i + 1]);
				sort = 1;
			}
			i++;
		}
	}
	ft_print_params(argc, argv);
	return (0);
}
