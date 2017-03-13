#include <stdio.h>

char *ft_strlowcase(char *str);

int	main(void)
{
	char a[] = "aBcDeFg123HiJk";

	printf("original %s", a);
	ft_strlowcase(a);
	printf("final %s", a);
	return (0);	
}
