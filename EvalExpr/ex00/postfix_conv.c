/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   postfix_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 11:07:56 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 23:41:10 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	if_r_paren_part(t_stack *stack, char *str, int *i, int *a)
{
	while (EMPTY_STACK(stack->top) == 0 && TOP_OP != '(')
		append_queue(queue, str, &a, &i);
	pop_stack(stack);
}

void	if_opr_part(t_stack *stack, char *str, int *i, int *a)
{
	if (EMPTY_STACK(stack->top) == 1 || TOP_OP == '(')
		push_stack(stack, str[i]);
	else
	{
		while ((EMPTY_STACK(stack->top) != 1 && TOP_OP != '(' \
					&& priority(str[i]) <= priority(TOP_OP)))
			append_queue(queue, str, &a, &i);
		push_stack(stack, str[i]);
	}
}

void	postfix_conv(char *str, char *queue)
{
	int		i;
	int		a;
	t_stack	*stack;

	i = 0;
	a = 0;
	stack = (t_stack*)malloc(sizeof(t_stack));
	STACK_INIT(stack);
	while (str[i] != '\0')
	{
		if (NUM(str[i]))
			append_queue(queue, str, &a, &i);
		if (str[i] == '(')
			push_stack(stack, str[i]);
		if (str[i] == ')')
			if_r_paren_part(stack, str, &i, &a);
		if (OPR(str[i]))
			if_part(stack, str, &i, &a);
		i++;
	}
	while ((EMPTY_STACK(stack->top) != 1))
		append_queue(queue, str, &a, &i);
	queue[a] = '\0';
}
