#include <stdio.h>

char	**ft_split_whitespaces(char *str);

void	ft_advanced_sort_wordtab(char **tab, int (*cmp)(char *, char *));

int		ft_strcmp(char *s1, char *s2)
{
	unsigned char s1r;
	unsigned char s2r;

	while (*s1 || *s2)
	{
		if (*s1 != *s2)
		{
			s1r = *s1;
			s2r = *s2;
			return (s1r - s2r);
		}
		s1++;
		s2++;
	}
	return (0);
}

int	main(void)
{
	int i;
	char *str = "this is another test";
	char **split = ft_split_whitespaces(str);

	i = 0;
	ft_advanced_sort_wordtab(split, &ft_strcmp);

	while (split[i] != 0)
	{
		printf("%s\n", split[i]);
		i++; 
	}
	return (0);
}
