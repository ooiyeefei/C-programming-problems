/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sudoku.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smifsud <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/20 21:08:51 by smifsud           #+#    #+#             */
/*   Updated: 2016/08/21 22:19:53 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_SUDOKU_H
# define FT_SUDOKU_H

# include <stdlib.h>
# include <unistd.h>

# define SIZE 9

int		check_row(char nb, char arr[9][9], int pos);

int		check_column(char nb, char arr[9][9], int pos);

int		check_box(char nb, char arr[9][9], int pos1, int pos2);

int		is_valid(char nb, char arr[9][9], int pos1, int pos2);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	print_sudoku(char arr[9][9]);

int		sudoku_solver(char arr[9][9], int row, int col);

int		sudoku_double_checker(char arr[9][9], int row, int col);

int		valid_input(char **argv);
#endif
