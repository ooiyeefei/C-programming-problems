/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 11:38:44 by yooi              #+#    #+#             */
/*   Updated: 2016/08/11 22:34:10 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		ft_print_comb(void)
{
	char alpha[3];

	alpha[0] = '0';
	while (alpha[0] <= '9')
	{
		alpha[1] = alpha[0] + 1;
		while (alpha[1] <= '9')
		{
			alpha[2] = alpha[1] + 1;
			while (alpha[2] <= '9')
			{
				ft_putchar(alpha[0]);
				ft_putchar(alpha[1]);
				ft_putchar(alpha[2]);
				if (alpha[0] != '7' || alpha[1] != '8' || alpha[2] != '9')
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
				alpha[2]++;
			}
			alpha[1]++;
		}
		alpha[0]++;
	}
}
