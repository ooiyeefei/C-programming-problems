/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/13 16:35:30 by yooi              #+#    #+#             */
/*   Updated: 2016/08/13 18:28:58 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_fibonacci(int index)
{
	int ans;

	if (index <= 0)
		if (index < 0)
			return (-1);
		else
			return (0);
	else
	{
		if (index == 1)
			return (1);
		ans = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	}
	return (ans);
}
