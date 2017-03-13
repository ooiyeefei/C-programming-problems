#include <stdio.h>
#include <string.h>

char		*ft_strcpy(char *dest, char *src);

int		main(void)
{
	char src[] = "Super job!";
	char dest[] = "Holding...XXXXXXX";

	printf("Lib: %s\n", strcpy(dest, src));
	printf("You: %s\n", ft_strcpy(dest, src));
	if(dest[12] == 'X')
		printf(" Found X at src[9] as expected. Looks good!");
/*	ft_strcpy(dest, src);
	printf("ft_strcpy: %s\n", dest);
	strcpy(dest, src);
	printf("strcpy dest: %s\n", dest);
//	printf("strcpy src: %s\n", src);
	printf("src: %s\n", src);
*/	return (0);
}
