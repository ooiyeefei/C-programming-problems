/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:25:31 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 19:27:02 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		ft_putchar(char c)
{
	write(1, &c, 1);
}
