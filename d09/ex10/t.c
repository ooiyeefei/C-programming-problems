void	ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
		int	temp_a;
			int	temp_b;
				int	temp_c;
					int	temp_d;

						temp_a = ***a;
							temp_b = *b;
								temp_c = *******c;
									temp_d = ****d;
										***a = temp_b;
											*b = temp_d;
												*******c = ***a;
													****d = *******c;
}

void		ft_scrambler(int ***a, int *b, int *******c, int ****d)
{
		int		tmp_a;
			int		tmp_b;
				int		tmp_c;
					int		tmp_d;

						tmp_a = ***a;
							tmp_b = *b;
								tmp_c = *******c;
									tmp_d = ****d;
										*******c = tmp_a;
											****d = tmp_c;
												*b = tmp_d;
													***a = tmp_b;
}

