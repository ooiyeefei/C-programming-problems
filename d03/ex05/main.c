#include <stdio.h>

int	ft_putstr(char *str);

int		main(void)
{
	char b[10];
	char *a = "abcd";	
	
	b[0] = 'a';
	ft_putstr(a);
	printf("first element %c", b[0]);
	ft_putstr(b);
	return (0);
}
