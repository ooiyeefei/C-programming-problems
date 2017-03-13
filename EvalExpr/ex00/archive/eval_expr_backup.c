/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   postfix_conv.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 11:07:56 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 12:19:52 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
void	postfix_conv(char *str, char *queue)
{
	int 	i;
	//int		strlen;
	int		a;
//	char 	*pf;
	t_stack	*stack;

	i = 0;
	a = 0;
	printf("test1\n");
	stack = (t_stack*)malloc(sizeof(t_stack));
//	strlen = ft_strlen(str);
//	pf = (char*)malloc(sizeof(char) * (strlen + 1));
	STACK_INIT(stack);
	printf("test2\n");
	while (str[i] != '\0') //while tokens are  available
	{
		if (NUM(str[i])) //if that is an operand, send to the output queue
		{
			queue[a] = str[i];
			a++;
		}
		printf("test\n");
		if (str[i] == '(') //if that's a left parentheses, push to stack
			push_stack(stack, str[i]);
		if (str[i] == ')') //if it's a right parentheses,
		{
			while (EMPTY_STACK(stack->top) == 0 && TOP_OP != '(')
			{
				queue[a] = pop_stack(stack);
				a++;
			}
			pop_stack(stack);
		}
		if (OPR(str[i])) //if operator > check precedence with the topmost opr on stack 
			//(1) if higher precedence than that of the topmost, push to stack.
			//(2) else pop opr from stack (add to queue) and repeat this.
		{
			if (EMPTY_STACK(stack->top) == 1 || TOP_OP == '(')
				push_stack(stack, str[i]);
			else
			{
				while ((EMPTY_STACK(stack->top) != 1 && TOP_OP != '(' && priority(str[i]) <= priority(TOP_OP)))
				{	
					queue[a] = pop_stack(stack);
					a++;
				}
				push_stack(stack, str[i]);
			}
		}
		i++;
	}
	while ((EMPTY_STACK(stack->top) != 1))
	{
		queue[a] = pop_stack(stack);
		a++;
	}
	queue[a] = '\0';
}
