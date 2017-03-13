/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 11:15:25 by yooi              #+#    #+#             */
/*   Updated: 2016/08/13 12:10:01 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_recursive_factorial(int nb)
{
	int ans;

	if (nb > 0)
	{
		ans = nb * ft_recursive_factorial(nb - 1);
		return (ans);
	}
	else
	{
		if (nb < 0)
			ans = 0;
		else
			ans = 1;
		return (ans);
	}
}
