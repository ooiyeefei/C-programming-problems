/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pop_stack.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 16:30:08 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 22:59:31 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	pop_stack(t_stack *stack)
{
	int x;

	x = stack->data[stack->top];
	stack->top = stack->top - 1;
	return (x);
}