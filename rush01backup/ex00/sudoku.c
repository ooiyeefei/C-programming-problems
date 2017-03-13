/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:34:55 by yooi              #+#    #+#             */
/*   Updated: 2016/08/21 22:20:16 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

void	sudoku_create(char **argv, char arr[9][9])
{
	int		row;
	int		col;

	row = 1;
	col = 0;
	while (row < 10)
	{
		col = 0;
		while (col < 9)
		{
			arr[row - 1][col] = argv[row][col];
			col++;
		}
		row++;
	}
}

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

int		is_unique(char arr[9][9], char arr2[9][9])
{
	int i;

	i = 0;
	while (i < 9)
	{
		if (ft_strcmp(arr[i], arr2[i]) != 0)
			return (0);
		i++;
	}
	return (1);
}

int		main(int argc, char **argv)
{
	char	arr[9][9];
	char	arr2[9][9];

	if (argc == 10)
	{
		sudoku_create(argv, arr);
		sudoku_create(argv, arr2);
		if (valid_input(argv) != 1 || sudoku_solver(arr, 0, 0) != 1)
		{
			ft_putstr("Error\n");
			return (0);
		}
		sudoku_double_checker(arr2, 0, 0);
		if (is_unique(arr, arr2))
			print_sudoku(arr);
		else
			ft_putstr("Error\n");
	}
	else
		ft_putstr("Error\n");
	return (0);
}
