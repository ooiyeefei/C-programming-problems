/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/17 11:52:37 by yooi              #+#    #+#             */
/*   Updated: 2016/08/17 23:40:06 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

int		main(char **argv)
{
	while (**argv != '\0')
	{
		ft_putchar(**argv);
		(*argv)++;
	}
	ft_putchar('\n');
	return (0);
}