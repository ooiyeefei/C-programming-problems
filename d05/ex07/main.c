#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n);

int		main(void)
{
	printf("1. mine: %i\n", ft_strncmp("abcdef", "abcdef", 3));
	printf("1. lib: %i\n", strncmp("abcdef", "abcdef", 3));
	printf("\n");
	//test case-sensitivity
	printf("2. mine: %i\n", ft_strncmp("\0One Two Three", "\200one two three", 5));
	printf("2. lib: %i\n", strncmp("\0One Two Three", "\200one two three", 5));
	printf("\n");
	printf("3. mine: %i\n", ft_strncmp("Hello", "Hellooo", 4));
	printf("3. lib: %i\n", strncmp("Hello", "Hellooo", 4));
	printf("\n");
	printf("4. mine: %i\n", ft_strncmp("Helloooo", "Hllooo", 2));
	printf("4. lib: %i\n", strncmp("Helloooo", "Hllooo", 2));
	printf("\n");
	printf("5. mine: %i\n", ft_strncmp("Hellooo", "Hellooo", 6));
	printf("5. lib: %i\n", strncmp("Hellooo", "Hellooo", 6));
	printf("\n");
/*	printf("6. mine: %s\n", ft_strncmp"AbCdEfG", "cde"));
	printf("6. lib: %s\n", strncmp("AbCdEfG", "cde" ));
	printf("\n");
	printf("7. mine: %s\n", ft_strncmp"1234567", "cde"));
	printf("7. lib: %s\n", strncmp("1234567", "cde"));
	printf("\n");
	printf("8. mine: %s\n", ft_strncmp"zzzz", "zz"));
	printf("8. lib: %s\n", strncmp("zzzz", "zz"));
	printf("\n");
	printf("9. mine: %s\n", ft_strncmp"zz", "zzzzz"));
	printf("9. lib: %s\n", strncmp("zz", "zzzzz"));
	printf("\n");
	printf("10. mine: %s\n", ft_strncmp"", ""));
	printf("10. lib: %s\n", strncmp("", ""));
	printf("\n");
	printf("11. mine: %s\n", ft_strncmp"zzzzz", ""));
	printf("11. lib: %s\n", strncmp("zzzzz", ""));
	printf("\n");
	printf("12. mine: %s\n", ft_strncmp"", "zzzz"));
	printf("12. lib: %s\n", strncmp("", "zzzz"));
	printf("\n");
	printf("13. mine: %s\n", ft_strncmp"zzzz abcd", "zzzz"));
	printf("13. lib: %s\n", strncmp("zzzz abcd", "zzzz"));
	printf("\n");
	printf("14. mine: %s\n", ft_strncmp"ststop", "stop"));
	printf("14. lib: %s\n", strncmp("ststop", "stop"));
	printf("\n");
	printf("14. mine: %s\n", ft_strncmp"123 hahahahohaha", "haho"));
	printf("14. lib: %s\n", strncmp("123 hahahahohaha", "haho"));
*/	printf("\n");
	return (0);
}
