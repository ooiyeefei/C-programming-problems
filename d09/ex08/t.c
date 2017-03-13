#include <unistd.h>

int		check_str(char *str, char *av)
{
		int	i;

			i = 0;
				while (av[i] == ' ')
							i++;
					if (av[i - 1] == ' ' && av[i] != *str)
								return (0);
						while (*str == av[i] && av[i] && *str)
								{
											i++;
													str = str + 1;
														}
							if (*str)
										return (0);
								while (av[i])
										{
													if (av[i] != ' ')
																	return (0);
															i++;
																}
									return (1);
}

int		ft_check_args(char *str1, char *str2, char *str3, char **av)
{
		int		i;

			i = 1;
				while (av[i])
						{
									if ((check_str(str1, av[i]) == 1 || check_str(str2, av[i]) == 1
															|| check_str(str3, av[i]) == 1))
													return (1);
											i++;
												}
					return (0);
}

char	ft_lower_case(char c)
{
		c = c + 32;
			return (c);
}

int		main(int ac, char **av)
{
		int		i;
			int		y;

				i = 0;
					if (ac < 2)
								return (0);
						while (av[i])
								{
											y = 0;
													while (av[i][y])
																{
																				if (av[i][y] >= 65 && av[i][y] <= 90)
																									av[i][y] = ft_lower_case(av[i][y]);
																							y++;
																									}
															i++;
																}
							if ((ft_check_args("powers", "president", "attack", av)) == 1)
										write(1, "Alert!!!\n", 9);
								return (0);
}

