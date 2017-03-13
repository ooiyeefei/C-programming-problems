/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/11 13:42:12 by yooi              #+#    #+#             */
/*   Updated: 2016/08/11 22:23:12 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_putchar(char c);

void		ft_printer(char a, char b, char c, char d)
{
	ft_putchar(a);
	ft_putchar(b);
	ft_putchar(' ');
	ft_putchar(c);
	ft_putchar(d);
	if (a != '9' || b != '8' || c != '9' || d != '9')
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void		ft_arrayinit(char arr[])
{
	int a;

	a = 0;
	while (a < 4)
	{
		arr[a] = '0';
		a++;
	}
}

void		ft_criteria(char arr[], int count_pass)
{
	int sum1;
	int sum2;
	int total;

	sum1 = arr[0] + arr[1];
	sum2 = arr[2] + arr[3];
	total = arr[0] + arr[1] + arr[2] + arr[3];
	if ((sum1 < sum2) && (total >= count_pass))
		ft_printer(arr[0], arr[1], arr[2], arr[3]);
}

void		ft_print_comb2(void)
{
	char	label[4];
	int		count;

	ft_arrayinit(label);
	while (label[0] <= '9')
	{
		label[1] = '0';
		while (label[1] < '9')
		{
			label[2] = '0';
			while (label[2] <= '9')
			{
				label[3] = '0';
				while (label[3] < '9')
				{
					label[3]++;
					count = label[0] + label[1] + label[2] + label[3];
					ft_criteria(label, count);
				}
				label[2]++;
			}
			label[1]++;
		}
		label[0]++;
	}
}
