#include <stdio.h>
#include <math.h>

int ft_sqrt(int nb);

int		main(void)
{
	int a;
	int b;

	b = 9;
	a = ft_sqrt(b);
	printf("the sqrt of %i is %i", b, a);
	return (0);
}
