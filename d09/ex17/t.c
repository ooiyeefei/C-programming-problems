
int		ft_max(int *tab, int length)
{
	int i;
	int largest;

	i = 1;
	largest = tab[0];
	while (i < length)
	{
		if (tab[i] > largest)
			largest = tab[i];
		i++;
	}
	return (largest);
}
