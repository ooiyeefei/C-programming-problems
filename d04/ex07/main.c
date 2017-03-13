#include <stdio.h>
#include <math.h>

int ft_find_next_prime(int nb);

int		main(void)
{
	int b;
	int a;

	b = 4;
	a = ft_find_next_prime(b);
	printf("the next prime number is %i", a);
	return (0);
}
