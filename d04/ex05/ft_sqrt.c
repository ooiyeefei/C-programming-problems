/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 18:31:00 by yooi              #+#    #+#             */
/*   Updated: 2016/08/13 20:01:51 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int a;

	a = 1;
	while ((a * a) < nb)
	{
		a++;
	}
	if ((a * a) % nb == 0)
		return (a);
	else
		return (0);
}