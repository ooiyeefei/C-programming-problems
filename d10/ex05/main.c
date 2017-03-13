#include <stdlib.h>
#include <stdio.h>

int ft_is_sort(int *tab, int length, int(*f)(int, int));

int	ft_strcmp(int x, int y)
{
	if (x < y)
		return (-1);
	else if (x == y)
		return (0);
	else
		return (1);
}

int	main(void)	
{
	int tab[5] = {4,4,6,7,8};

	printf("%i", ft_is_sort(tab, 5, &ft_strcmp));
	return (0);
}
