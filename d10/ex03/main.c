#include <stdio.h>

int		ft_any(char **tab, int (*f)(char*));

int		ft_strlen(char *arr)
{
	int i;

	i = 0;
	while (arr[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	main(void)	
{
	char *arr[4] = {"", "", "s", "0l"};

	printf("%i",ft_any(arr, &ft_strlen));
	return (0);
}
