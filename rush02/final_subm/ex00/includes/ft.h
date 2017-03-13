/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jhan <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 21:35:04 by jhan              #+#    #+#             */
/*   Updated: 2016/08/30 16:34:26 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <stdlib.h>
# include <unistd.h>
# include <fcntl.h>

# define NUM(x) (x>='0' && x<='9')
# define MAX_BUF 100000

void				ft_putchar(char c);
void				ft_putstr(char *str);
void				ft_putnbr(int nb);
int					ft_strcmp(char *s1, char *s2);
void				gen_result(char *rush_tag, int x, int y);
void				rush00(int x, int y, char *str);
void				rush01(int x, int y, char *str);
void				rush02(int x, int y, char *str);
void				rush03(int x, int y, char *str);
void				rush04(int x, int y, char *str);
char				*ft_strcat(char *s1, char *s2);
void				last_value(char *str, int *k, int *j);
void				increment(int *i, int *k);
void				init_value(int *k, int *j);
void				rushcmp(char *input, char *rush, int *dim, char *rush_tag);
int					read_input(char *input, int *x, int *y);
void				rush_printline(int width, char start, \
		char ending, char fill);
void				rush_solver(int w, int h, int type, char part[]);
void				rush_printfirstline(int w, int type, char part[]);
void				rush_printlastline(int w, int type, char part[]);
void				rush(int a, int b);

#endif
