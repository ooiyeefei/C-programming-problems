/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 20:45:21 by yooi              #+#    #+#             */
/*   Updated: 2016/08/13 21:13:42 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_prime(int nb)
{
	int	a;
	int	count;

	a = 2;
	count = 0;
	if (nb <= 1)
		return (0);
	while (a < nb)
	{
		if ((nb % a) == 0)
		{
			count++;
		}
		a++;
	}
	if (count == 0)
		return (1);
	else
		return (0);
}

int		ft_find_next_prime(int nb)
{
	int a;

	a = nb;
	while ((ft_is_prime(a)) == 0)
	{
		if (nb % 2 == 0)
			a++;
		else
			a = a + 2;
	}
	return (a);
}
