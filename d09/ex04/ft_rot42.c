/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rot42.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/19 08:18:05 by yooi              #+#    #+#             */
/*   Updated: 2016/08/19 10:04:46 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define UPPER(x)((x>='A')&&(x<='Z'))
#define LOWER(x)((x>='a')&&(x<='z'))

char	ft_upper_rot(char c)
{
	c = c - 65;
	c = ((c + 42) % 26);
	c = c + 65;
	return (c);
}

char	ft_lower_rot(char c)
{
	c = c - 97;
	c = ((c + 42) % 26);
	c = c + 97;
	return (c);
}

char	ft_scramble(char c)
{
	if (UPPER(c))
		return (ft_upper_rot(c));
	else if (LOWER(c))
		return (ft_lower_rot(c));
	else
		return (c);
}

char	*ft_rot42(char *str)
{
	int i;

	i = 0;
	while (str[i])
	{
		str[i] = ft_scramble(str[i]);
		i++;
	}
	return (str);
}
