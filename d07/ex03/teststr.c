#include	<stdio.h>

int	ft_strlen(char *arr)
{
	int count;

	count = 0;
	while (*arr)
	{
		count++;
		arr++;
	}
	return (count);
}

int	main(void)
{
	int count;

	count = ft_strlen("abcd");
	printf("length of str %i", count);
	return (0);
}
