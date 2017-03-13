#include <stdio.h>
#include <math.h>

int ft_recursive_power(int nb, int power);

int		main(void)
{
	int a;
	int b;

	a = ft_recursive_power(5,3);
	b = pow(5,3);
	printf("ans is %i, correct ans is %i", a, b);
	return (0);
}
