/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 16:30:08 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 22:59:12 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** To pop the operators stored in stack, there will be two steps:
** (1) retrieve value from the top level
** (2) decrease level count by 1
** (3) return the value
*/

#include "ft.h"

char	pop_stack(t_stack *stack)
{
	int x;

	x = stack->data[stack->top];
	stack->top = stack->top - 1;
	return (x);
}
