#include <string.h>
#include <stdio.h>

char	*ft_strdup(char *src);

int		main(void)
{
	printf("1. ft_strdup: %s\n", ft_strdup("abcd*&@hnm"));
	printf("1. strdup: %s\n", strdup("abcd*&@hnm"));
	printf("2. ft_strdup: %s\n", ft_strdup(""));
	printf("2. strdup: %s\n", strdup(""));
	printf("3. ft_strdup: %s\n", ft_strdup("1234"));
	printf("3. strdup: %s\n", strdup("1234"));
	printf("4. ft_strdup: %s\n", ft_strdup("123 4ab"));
	printf("4. strdup: %s\n", strdup("123 4ab"));

	return (0);
}	
