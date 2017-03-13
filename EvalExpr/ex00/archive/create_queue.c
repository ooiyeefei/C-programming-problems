/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   create_queue.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 13:27:03 by yooi              #+#    #+#             */
/*   Updated: 2016/08/27 13:29:37 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*create_queue(void *data)
{
	t_list *pf;

	pf = (t_list*)malloc(sizeof(t_list));
	if (pf != NULL)
	{
		pf->data = data;
		pf->next = NULL;
	}
	return (pf);
}
