/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:48:48 by yooi              #+#    #+#             */
/*   Updated: 2016/08/27 21:48:07 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

t_list	*ft_create_elem(char data)
{
	t_list *list;

	list = (t_list*)malloc((sizeof(t_list)));
	if (list != NULL)
	{
		list->data = data;
		list->next = NULL;
	}
	return (list);
}

