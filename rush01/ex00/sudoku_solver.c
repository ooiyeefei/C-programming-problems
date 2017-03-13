/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sudoku_solver.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/21 13:16:28 by yooi              #+#    #+#             */
/*   Updated: 2016/08/21 22:34:29 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_sudoku.h"

int		else_part(char arr[9][9], int row, int col)
{
	char nb;

	nb = '1';
	while (nb <= '9')
	{
		if (is_valid(nb, arr, row, col))
		{
			arr[row][col] = nb;
			if (sudoku_solver(arr, row, col))
				return (1);
			else
				arr[row][col] = '.';
		}
		nb++;
	}
	return (0);
}

int		sudoku_solver(char arr[9][9], int row, int col)
{
	if (row < 9 && col < 9)
	{
		if (arr[row][col] != '.')
		{
			if ((col + 1) < 9)
				return (sudoku_solver(arr, row, col + 1));
			else if ((row + 1) < 9)
				return (sudoku_solver(arr, row + 1, 0));
			else
				return (1);
		}
		else
			return (else_part(arr, row, col));
		return (0);
	}
	else
		return (1);
}
