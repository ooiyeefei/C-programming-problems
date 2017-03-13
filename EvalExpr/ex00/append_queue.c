/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   append_queue.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 15:37:46 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 23:17:48 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

void	append_queue(char *queue, char *str, int *q, int *s)
{
	int temp_q;
	int temp_s;

	temp_q = *q;
	temp_s = *s;
	queue[temp_q] = str[temp_s];
	temp_q++;
	temp_s++;
	if (NUM(str[temp_s + 1]) == 1)
		append_queue(queue, str, &temp_q, &temp_s);
	queue[temp_q] = ' ';
	*s = temp_s;
	*q = temp_q;
}
