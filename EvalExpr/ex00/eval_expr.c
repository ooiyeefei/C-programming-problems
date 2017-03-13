/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   eval_expr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/28 11:09:48 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 23:09:44 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"
#include <stdio.h>
void	eval_expr(char *str)
{
	int		strlen;
	char	*queue;

	strlen = ft_strlen(str);
	queue = (char*)malloc(sizeof(char) * (strlen + 1));
	postfix_conv(str, queue);
	printf("%s", queue);
}
