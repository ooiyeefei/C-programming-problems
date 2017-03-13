#include <stdio.h>

int	ft_recursive_factorial(int ab);

int		main(void)
{
	int ans;
	int i;

	i = 12;
	ans = ft_recursive_factorial(i);
	printf("ans is %i", ans);
}
