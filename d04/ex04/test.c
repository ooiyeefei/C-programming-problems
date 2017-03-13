#include <stdio.h>
#include <math.h>

int ft_fibonacci(int index);

int		main(void)
{
	int a;
	int b;

	b = 5;
	a = ft_fibonacci(b);
	printf("the %ith element is %i", b, a);
	return (0);
}
