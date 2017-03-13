#include <stdio.h>
#include <math.h>

int ft_is_prime(int nb);

int		main(void)
{
	int b;

	b = 2147483647;
	if (ft_is_prime(b) == 1)
		printf("%i is a prime number", b);
	else
		printf("NO!");
	return (0);
}
