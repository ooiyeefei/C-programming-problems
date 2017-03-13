/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:45:44 by yooi              #+#    #+#             */
/*   Updated: 2016/08/27 22:30:21 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h> //to delete!!!!
int		main(int argc, char **argv)
{
	int ret;
	char c[1];
	t_list *input;

	input = NULL;
	while ((ret = read(0, c, 1)))
	{
		ft_list_push_back(&input, c[0]);
	}
	while (input)
	{
		printf("%c", input->data);
		input = input->next;
	}
	return (0);
}
