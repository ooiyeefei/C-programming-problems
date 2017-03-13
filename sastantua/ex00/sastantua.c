/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sastantua.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/14 16:17:52 by yooi              #+#    #+#             */
/*   Updated: 2016/08/14 23:30:38 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	print_pyramid(int size, int total_space, int total_height)
{
	int height;
	int space;
	int star;
	int total_star;
	int section_height;
	int initstar;
	int jump;

	height = 1;
	total_star = 1;
	n = initstar = 1;
	while (n < size)
	{	
		initstar = laststar + jump;
		laststar = print_section(n, initstar, section_height);
		section_height++;
	}
	while (height <= total_height)
	{
		space = 1;
		star = 1;
		while (space <= total_space)
		{
			ft_putchar(' ');
			space++;
		}
		ft_putchar('/');
		while (star <= total_star)
		{
			ft_putchar('*');
			star++;
		}
		ft_putchar('\\');
		ft_putchar('\n');
		height++;
		total_star += 2;
		total_space -= 1;
	}
}

void	print_section(int section, int init_star, int total_height)
{
	
}

void	sastantua(int size)
{
	int total_space;
	int height;
	int total_height;
	int n;

	n = 1;
	total_height = 3;
	while (n < size)
	{
		total_height = total_height + (total_height + n);
		n++;
	}
	total_space = total_height - 1;
	print_pyramid(size, total_space, total_height);
}
