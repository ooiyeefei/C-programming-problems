/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/16 16:16:24 by yooi              #+#    #+#             */
/*   Updated: 2016/08/16 21:24:37 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_strcmp(char *s1, char *s2)
{
	int answer;

	answer = 0;
	while (*s1 != '\0')
	{
		if(*s1 < *s2)
			answer = *(unsigned char *)s1 - *(unsigned char *)s2;
		if(*s1 > *s2)
			answer = *(unsigned char *)s1 - *(unsigned char *)s2;
		if(*s2 == '\0')
			answer = *(unsigned char *)s1 - *(unsigned char *)s2;
		s1++;
		s2++;
	}
	if (*s2 != '\0')
		answer = *(unsigned char *)s1 - *(unsigned char *)s2;
	else
		return (0);
	return (answer);
}
