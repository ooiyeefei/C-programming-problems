#include <stdio.h>

char	*ft_rot42(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 65 && str[i] <= 90)
		{
			str[i] = str[i] - 65;
			str[i] = ((str[i] + 42) % 26);
			str[i] = str[i] + 65;
		}
		else if (str[i] >= 97 && str[i] <= 122)
		{
			str[i] = str[i] - 97;
			str[i] = ((str[i] + 42) % 26);
			str[i] = str[i] + 97;
		}
		i++;
	}
	return (str);
}

int	main(void)
{
	printf("%s", ft_rot42("yooi"));
	return (0);
}
