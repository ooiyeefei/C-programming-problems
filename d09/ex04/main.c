#include <stdio.h>

char	*ft_rot42(char *str);

int	main(void)	
{
	char	str[] = "yooi";
	char	*str2;

	str2 = ft_rot42(str);
	printf("%s\n", str);
	return (0);
}
