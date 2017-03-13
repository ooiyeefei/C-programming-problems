#include <stdio.h>

int	ft_count_if(char **tab, int (*f)(char*));

int	f(char *arr)
{
	if(arr[0] == '1')
		return (1);
	else
		return (0);
}

int	main(void)	
{
	int i;
	char *arr[4] = {"110", "100", "10", "0"};

	i = 0;
	printf("%i", ft_count_if(arr, &f));
	return (0);
}
