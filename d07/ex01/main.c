#include <string.h>
#include <stdio.h>
#define ALPHA(x)(((x>='A')&&(x<='Z'))||((x>='a')&&(x<='z')))

int		*ft_range(int min, int max);

int		main(void)
{
	int	*arr;
	int i;
	int min;
	int max;

	min = -8;
	max = -1;
	arr = ft_range(min, max);
	i = 0;
	while (i < (max - min)) 
	{
		printf("%i ", arr[i]);
		i++;
	}
	return (0);
}	
