/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/23 10:47:10 by yooi              #+#    #+#             */
/*   Updated: 2016/08/23 13:10:02 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>

int		ft_atoi(char *str);

void	ft_putchar(char c);

void	ft_putnbr(int nb);

void	ft_putstr(char *str);

int		ft_do_op(int x, char op, int y);

# define DIV_ERR	"Stop : division by zero\n"
# define MOD_ERR	"Stop : modulo by zero\n"

#endif
