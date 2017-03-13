#include <stdio.h>

int	*ft_map(int *tab, int length, int (*f)(int));

int f(int tab)
{
	return (9);
}

int	main(void)	
{
	int i;
	int tab[9] = {0};
	int *k;
	
	i = 0;
	k = ft_map(tab, 9, &f);
	while (i < 9)
	{
		printf("%i", k[i]);
		i++;
	}
	return (0);
}
