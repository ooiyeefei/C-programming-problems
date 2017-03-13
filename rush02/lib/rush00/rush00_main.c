/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00_main.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yooi <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/08/27 19:19:41 by yooi              #+#    #+#             */
/*   Updated: 2016/08/28 18:18:54 by yooi             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void		rush(int a, int b);
void		ft_putchar(char c);

#define NUM(x) (x>='0' && x<='9')

int			main(int argc, char **argv)
{
	int width;
	int height;

	if (argc == 3)
	{
		if (NUM(argv[1][0]) && NUM(argv[2][0]))
		{
			width = argv[1][0] - '0';
			height = argv[2][0] - '0';
			rush(width, height);
		}
	}
	return (0);
}
