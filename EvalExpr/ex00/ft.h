/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 08:43:23 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 22:57:45 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# include <unistd.h>
# include <stdlib.h>

# define WHSP(x) (x==' '||x=='\t'||x=='\n'||x=='\v'||x=='\f'||x=='\r')
# define NUM(x) (x>='0' && x<='9')
# define OPR(x) (x=='+'||x=='-'||x=='*'||x=='/'||x=='%')
# define EMPTY_STACK(x) (x == -1 ? 1 : 0)
# define STACK_INIT(x) (x->top=-1)
# define TOP_OP stack->data[stack->top]
# define MAX 100

typedef	struct			s_list
{
	struct s_list		*next;
	void				*data;
}						t_list;

typedef struct			s_stack
{
	char				data[MAX];
	int					top;
}						t_stack;

void					ft_putchar(char c);
void					ft_putnbr(int nb);
int						ft_atoi(char *str);
int						ft_strlen(char *str);
void					push_stack(t_stack *stack, char x);
char					pop_stack(t_stack *stack);
void					eval_expr(char *str);
t_list					*create_queue(void *data);
void					append_queue(char *queue, char *str, int *q, int *s);
int						priority(char c);
void					postfix_conv(char *str, char *queue);
char					*ft_split_whitespaces(char *str);

#endif
