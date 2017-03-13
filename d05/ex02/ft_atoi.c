/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/15 11:55:35 by yooi              #+#    #+#             */
/*   Updated: 2016/08/23 12:06:43 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		whitespace_check(char *str, int nth)
{
	if (str[nth] == ' ')
		return (1);
	if (str[nth] == '\t')
		return (1);
	if (str[nth] == '\n')
		return (1);
	if (str[nth] == '\v')
		return (1);
	if (str[nth] == '\f')
		return (1);
	if (str[nth] == '\r')
		return (1);
	else
		return (0);
}

int		count_power(char *str, int y)
{
	int count;

	count = 0;
	while ((str[y] >= '0') && (str[y] <= '9'))
	{
		count++;
		y++;
	}
	return (count);
}

int		real_value(int value, int power)
{
	int i;

	i = 1;
	while (i < power)
	{
		value = value * 10;
		i++;
	}
	return (value);
}

int		ft_atoi(char *str)
{
	int power;
	int value;
	int answer;
	int y;
	int neg;

	y = 0;
	neg = 1;
	while (whitespace_check(str, y))
	{
		y++;
	}
	answer = 0;
	if ((str[y] == '+') || (str[y] == '-'))
	{
		y++;
		if (str[y - 1] == '-')
			neg = -1;
	}
	power = count_power(str, y);
	while (power > 0)
	{
		value = str[y] - 48;
		value = real_value(value, power);
		y++;
		power--;
		answer = answer + value;
	}
	return (answer);
}
