/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_stack.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 12:27:19 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 12:08:19 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* pushing to a stack constitute of two parts:
 * (1) increase the top level count by 1
 * (2) assigning the value of the top level with new data x.
 */

#include "ft.h"

void	push_stack(t_stack *stack, char x)
{
	stack->top = stack->top + 1;
	stack->data[stack->top] = x;
}
