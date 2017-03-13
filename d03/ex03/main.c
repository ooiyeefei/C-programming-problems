#include <stdio.h>

void ft_div_mod(int a, int b, int *div, int *mod);

int		main(void)	
{
	int i = 11;
	int j = 2;
	int a;
	int b;

	ft_div_mod(i, j, &a, &b);
	printf("div = %i, rem = %i", a, b);
	return (0);
}
