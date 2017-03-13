#include <stdlib.h>
#include <stdio.h>

int		ft_atoi(char *str);

int		main(void)
{
/*	int a;
	char c[]= "abc234";
	char d;
	int ans;
	char test[] = "abc234";

	d = '8';
**	a = atoi(c);
**	d = atoi(&d);
**	ans = ft_atoi(test);
*/	printf("ft_atoi: %d\n", ft_atoi("123456"));
	printf("atoi: %d\n", atoi("123456"));
	printf("ft_atoi: %d\n", ft_atoi("12Three45678"));
	printf("atoi: %d\n", atoi("12Three45678"));
	printf("ft_atoi: %d\n", ft_atoi("Hello World!"));
	printf("atoi: %d\n", atoi("Hello World!"));
	printf("ft_atoi: %d\n", ft_atoi("+42"));
	printf("atoi: %d\n", atoi("+42"));
	printf("ft_atoi: %d\n", ft_atoi("-42"));
	printf("atoi: %d\n", atoi("-42"));
	printf("ft_atoi: %d\n", ft_atoi("          -42"));
	printf("atoi: %d\n", atoi("          -42"));
	printf("ft_atoi: %d\n", ft_atoi("          +42"));
	printf("atoi: %d\n", atoi("          +42"));
	printf("ft_atoi: %d\n", ft_atoi("\t\n\v\f\r 42"));
	printf("atoi: %d\n", atoi("\t\n\v\f\r 42"));
	printf("ft_atoi: %d\n", ft_atoi("+ 42"));
	printf("atoi: %d\n", atoi("+ 42"));
	printf("ft_atoi: %d\n", ft_atoi("2147483647"));
	printf("atoi: %d\n", atoi("2147483647"));
	printf("ft_atoi: %d\n", ft_atoi("-2147483648"));
	printf("atoi: %d\n", atoi("-2147483648"));
	printf("ft_atoi: %d\n", ft_atoi("0000123"));
	printf("atoi: %d\n", atoi("0000123"));
	printf("ft_atoi: %d\n", ft_atoi("1000"));
	printf("atoi: %d\n", atoi("1000"));
	printf("ft_atoi: %d\n", ft_atoi("+-42"));
	printf("atoi: %d\n", atoi("+-42"));
	printf("ft_atoi: %d\n", ft_atoi("\\1"));
	printf("atoi: %d\n", atoi("\\1"));
	printf("ft_atoi: %d\n", ft_atoi("+"));
	printf("atoi: %d\n", atoi("+"));
	printf("ft_atoi: %d\n", ft_atoi("-"));
	printf("atoi: %d\n", atoi("-"));
	printf("ft_atoi: %d\n", ft_atoi("-+"));
	printf("atoi: %d\n", atoi("-+"));
	printf("ft_atoi: %d\n", ft_atoi("+-"));
	printf("atoi: %d\n", atoi("+-"));
//	printf("ft_atoi: %d\n", ft_atoi("-2147483649"));
//	printf("atoi: %d\n", atoi("-2147483649"));
	printf("ft_atoi: %d\n", ft_atoi("11221f11"));
	printf("atoi: %d\n", atoi("11221f11"));
	printf("ft_atoi: %d\n", ft_atoi("42 43 44 45 46"));
	printf("atoi: %d\n", atoi("42 43 44 45 46"));
	printf("ft_atoi: %d\n", ft_atoi("+042"));
	printf("atoi: %d\n", atoi("+042"));
	printf("last ft_atoi: %d\n", ft_atoi("-042"));
	printf("last atoi: %d\n", atoi("-042"));
/*	
 *	test cases for unsigned long long which is not necessarily to be included
 *	in this case. atoi lib do take care of the fixes to return -1s and 1s. 
 *	
 *	printf("ft_atoi: %d\n", ft_atoi("9223372036854775809"));
	printf("atoi: %d\n", atoi("9223372036854775809"));
	printf("ft_atoi: %d\n", ft_atoi("-9223372036854775807"));
	printf("atoi: %d\n", atoi("-9223372036854775807"));
	printf("ft_atoi: %d\n", ft_atoi("-9223372036854775808"));
	printf("atoi: %d\n", atoi("-9223372036854775808"));
	printf("ft_atoi: %d\n", ft_atoi("-9223372036854775809"));
	printf("atoi: %d\n", atoi("-9223372036854775809"));
	printf("ft_atoi: %d\n", ft_atoi("      9223372036854775809"));
	printf("atoi: %d\n", atoi("      9223372036854775809"));
	printf("ft_atoi: %d\n", ft_atoi("  \r\n\t\v\f    9223372036854775806"));
	printf("atoi: %d\n", atoi("  \r\n\t\v\f    9223372036854775806"));
	printf("ft_atoi: %d\n", ft_atoi("10000000000000000000"));
	printf("atoi: %d\n", atoi("10000000000000000000"));
	printf("ft_atoi: %d\n", ft_atoi("-10000000000000000000"));
	printf("atoi: %d\n", atoi("-10000000000000000000"));
	printf("ft_atoi: %d\n", ft_atoi("-33333333333333333333"));
	printf("atoi: %d\n", atoi("-33333333333333333333"));
	printf("ft_atoi: %d\n", ft_atoi("-333333333333333333333"));
	printf("atoi: %d\n", atoi("-333333333333333333333"));
	printf("%i, second is %i, my test %i", a, d, ans);
*/	return (0);
}
