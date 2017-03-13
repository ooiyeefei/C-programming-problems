/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_checks.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 18:33:41 by yooi              #+#    #+#             */
/*   Updated: 2016/08/21 22:46:01 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int		check_rook(char nb, char arr[9][9], int row, int col)
{
	int		i;

	i = 0;
	while (i < 9)
	{
		if (arr[i][col] == nb)
			return (0);
		if (arr[row][i] == nb)
			return (0);
		i++;
	}
	return (1);
}

int		checkbox(char nb, char arr[9][9], int row, int col)
{
	int		rowsec;
	int		colsec;
	int		row1;
	int		col1;
	int		col2;

	rowsec = 3 * (row / 3);
	colsec = 3 * (col / 3);
	row1 = (row + 2) % 3;
	col1 = (col + 2) % 3;
	col2 = (col + 4) % 3;
	if (arr[row1 + rowsec][col1 + colsec] == nb)
		return (0);
	if (arr[row1 + rowsec][col2 + colsec] == nb)
		return (0);
	row1 = (row + 4) % 3;
	if (arr[row1 + rowsec][col1 + colsec] == nb)
		return (0);
	if (arr[row1 + rowsec][col2 + colsec] == nb)
		return (0);
	return (1);
}

int		is_valid(char nb, char arr[9][9], int row, int col)
{
	if (check_rook(nb, arr, row, col) == 0)
		return (0);
	if (checkbox(nb, arr, row, col) == 0)
		return (0);
	return (1);
}

int		ft_strlen(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

int		valid_input(char **argv)
{
	int i;

	i = 1;
	while (i < 10)
	{
		if (ft_strlen(argv[i]) != 9)
			return (0);
		i++;
	}
	return (1);
}
