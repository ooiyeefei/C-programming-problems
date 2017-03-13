#include <stdio.h>

int	ft_iterative_factorial(int ab);

int		main(void)
{
	int ans;
	int i;

	i = 8;
	ans = ft_iterative_factorial(i);
	printf("ans is %i", ans);
}
