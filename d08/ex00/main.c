/*char **ft_split_whitespaces(char *str);

int		main(void)
{
	char arr[] = "This \t\r\n   is     not  ";
	ft_split_whitespaces(arr);
	return (0);
}*/

#include <stdio.h>

char	**ft_split_whitespaces(char *str);

int		main(void)
{
		int i;
		char *string = "this    is 	 testing ";
		char **words = ft_split_whitespaces(string);
			
		i = 0;
			printf ("%s ", words[0]);
			printf ("\n");
	    return (0);
}
