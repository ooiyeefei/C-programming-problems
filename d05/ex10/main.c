#include <stdio.h>

char *ft_strcapitalize(char *str);

int	main(void)
{
	char a[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";

	printf("original %s\n", a);
	ft_strcapitalize(a);
	printf("final %s\n", a);
	return (0);	
}
