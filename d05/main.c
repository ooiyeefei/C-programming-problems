#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find);

int		main(void)
{
	printf("1. mine: %s\n", ft_strcmp("abcdef"));
	printf("1. lib: %s\n", strcmp("abcdef"));
	printf("\n");
	//test case-sensitivity
	printf("2. ft_strstr: %s\n", ft_strstr("One Two Three", "two"));
	printf("2. strstr: %s\n", strstr("One Two Three", "two"));
	printf("\n");
	printf("3. ft_strstr: %s\n", ft_strstr("One wot Three", "two"));
	printf("3. strstr: %s\n", strstr("One wot Three", "two"));
	printf("\n");
	printf("4. ft_strstr: %s\n", ft_strstr("abcdefg", "cde"));
	printf("4. strstr: %s\n", strstr("abcdefg", "cde"));
	printf("\n");
	printf("5. ft_strstr: %s\n", ft_strstr("ABCDEFG", "cde"));
	printf("5. strstr: %s\n", strstr("ABCDEFG", "cde"));
	printf("\n");
	printf("6. ft_strstr: %s\n", ft_strstr("AbCdEfG", "cde"));
	printf("6. strstr: %s\n", strstr("AbCdEfG", "cde" ));
	printf("\n");
	printf("7. ft_strstr: %s\n", ft_strstr("1234567", "cde"));
	printf("7. strstr: %s\n", strstr("1234567", "cde"));
	printf("\n");
	printf("8. ft_strstr: %s\n", ft_strstr("zzzz", "zz"));
	printf("8. strstr: %s\n", strstr("zzzz", "zz"));
	printf("\n");
	printf("9. ft_strstr: %s\n", ft_strstr("zz", "zzzzz"));
	printf("9. strstr: %s\n", strstr("zz", "zzzzz"));
	printf("\n");
	printf("10. ft_strstr: %s\n", ft_strstr("", ""));
	printf("10. strstr: %s\n", strstr("", ""));
	printf("\n");
	printf("11. ft_strstr: %s\n", ft_strstr("zzzzz", ""));
	printf("11. strstr: %s\n", strstr("zzzzz", ""));
	printf("\n");
	printf("12. ft_strstr: %s\n", ft_strstr("", "zzzz"));
	printf("12. strstr: %s\n", strstr("", "zzzz"));
	printf("\n");
	printf("13. ft_strstr: %s\n", ft_strstr("zzzz abcd", "zzzz"));
	printf("13. strstr: %s\n", strstr("zzzz abcd", "zzzz"));
	printf("\n");
	printf("14. ft_strstr: %s\n", ft_strstr("ststop", "stop"));
	printf("14. strstr: %s\n", strstr("ststop", "stop"));
	printf("\n");
	printf("14. ft_strstr: %s\n", ft_strstr("123 hahahahohaha", "haho"));
	printf("14. strstr: %s\n", strstr("123 hahahahohaha", "haho"));
	printf("\n");
	return (0);
}
