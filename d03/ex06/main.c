#include <stdio.h>

int	ft_strlen(char *str);

int		main(void)
{
	char a[] = "ooi yee fei";
	int answer;

	answer =	ft_strlen(a);
	printf("this string has %i number of characters", answer);
}
