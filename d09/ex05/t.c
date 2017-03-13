int	ft_antidote(int i, int j, int k)
{
		if ((i > k && i < j) || (i < k && i > j))
					return (i);
			else if ((j > k && j < i) || (j < k && j > i))
						return (j);
				return (k);
}


int		ft_bouton(int i, int j, int k)
{
		if (i >= j && j >= k || k >= j && j >= i)
					return (j);
			else if ( j >= i && i >= k || k >= i && i >= j)
						return (i);
				return (k);
}
