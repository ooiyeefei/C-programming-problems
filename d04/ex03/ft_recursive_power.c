/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 14:00:39 by yooi              #+#    #+#             */
/*   Updated: 2016/08/13 14:52:41 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_power(int nb, int power)
{
	int ans;

	ans = nb;
	if (power > 0)
		ans = ans * ft_recursive_power(nb, --power);
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	return (ans);
}
