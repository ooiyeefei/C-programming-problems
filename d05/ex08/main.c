#include <stdio.h>

char *ft_strupcase(char *str);

int	main(void)
{
	char a[] = "aBcDeFg123HiJk";

	printf("original %s", a);
	ft_strupcase(a);
	printf("final %s", a);
	return (0);	
}
