#include <string.h>
#include <stdio.h>

int		ft_ultimate_range(int **range, int min, int max);

int		main(void)
{
	int i;
	int *a;
	int count;
	int min;
	int max;

	min = -1;
	max = 9;

	count = ft_ultimate_range(&a, min, max);
	printf("range is %i\n", count);
	i = 0;
	while (i < count) 
	{
		printf("%i ", a[i]);
		i++;
	}
	return (0);
}	
