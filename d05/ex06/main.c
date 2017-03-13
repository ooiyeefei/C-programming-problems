#include <stdio.h>
#include <string.h>

int		ft_strcmp(char *str, char *to_find);

int		main(void)
{
	printf("1. mine: %i\n", ft_strcmp("abcdef", "abcdef"));
	printf("1. lib: %i\n", strcmp("abcdef", "abcdef"));
	printf("\n");
	//test case-sensitivity
	printf("2. mine: %i\n", ft_strcmp("\0One Two Three", "\200one two three"));
	printf("2. lib: %i\n", strcmp("\0One Two Three", "\200one two three"));
	printf("\n");
	printf("3. mine: %i\n", ft_strcmp("Hello", "Hellooo"));
	printf("3. lib: %i\n", strcmp("Hello", "Hellooo"));
	printf("\n");
	printf("4. mine: %i\n", ft_strcmp("Helloooo", "Hellooo"));
	printf("4. lib: %i\n", strcmp("Helloooo", "Hellooo"));
	printf("\n");
	printf("5. mine: %i\n", ft_strcmp("Hellooo", "Hellooo"));
	printf("5. lib: %i\n", strcmp("Hellooo", "Hellooo"));
	printf("\n");
/*	printf("6. mine: %s\n", ft_strcmp("AbCdEfG", "cde"));
	printf("6. lib: %s\n", strcmp("AbCdEfG", "cde" ));
	printf("\n");
	printf("7. mine: %s\n", ft_strcmp("1234567", "cde"));
	printf("7. lib: %s\n", strcmp("1234567", "cde"));
	printf("\n");
	printf("8. mine: %s\n", ft_strcmp("zzzz", "zz"));
	printf("8. lib: %s\n", strcmp("zzzz", "zz"));
	printf("\n");
	printf("9. mine: %s\n", ft_strcmp("zz", "zzzzz"));
	printf("9. lib: %s\n", strcmp("zz", "zzzzz"));
	printf("\n");
	printf("10. mine: %s\n", ft_strcmp("", ""));
	printf("10. lib: %s\n", strcmp("", ""));
	printf("\n");
	printf("11. mine: %s\n", ft_strcmp("zzzzz", ""));
	printf("11. lib: %s\n", strcmp("zzzzz", ""));
	printf("\n");
	printf("12. mine: %s\n", ft_strcmp("", "zzzz"));
	printf("12. lib: %s\n", strcmp("", "zzzz"));
	printf("\n");
	printf("13. mine: %s\n", ft_strcmp("zzzz abcd", "zzzz"));
	printf("13. lib: %s\n", strcmp("zzzz abcd", "zzzz"));
	printf("\n");
	printf("14. mine: %s\n", ft_strcmp("ststop", "stop"));
	printf("14. lib: %s\n", strcmp("ststop", "stop"));
	printf("\n");
	printf("14. mine: %s\n", ft_strcmp("123 hahahahohaha", "haho"));
	printf("14. lib: %s\n", strcmp("123 hahahahohaha", "haho"));
*/	printf("\n");
	return (0);
}
