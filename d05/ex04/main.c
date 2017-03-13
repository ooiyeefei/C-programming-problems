#include <stdio.h>
#include <string.h>

char		*ft_strncpy(char *dest, char *src, unsigned int n);

int		main(void)
{
	unsigned int i;

	i = 0;
/*	
**	test case 1 - n is longer than src elements.
**	the remaining n number of elements  will be replaced with \0s.
**	values stored in dest should be "Sup\0\0ng...XXXXXXX"
**	printed output should be "Sup".
*/
	char lib_src1[] = "Sup";
	char lib_dest1[] = "Holding...XXXXXXX";
	char src1[] = "Sup";
	char dest1[] = "Holding...XXXXXXX";
	printf("Test 1 Lib: %s\n", strncpy(lib_dest1, lib_src1, 5));
	printf("Test 1 You: %s\n", ft_strncpy(dest1, src1, 5));
	if(dest1[12] == 'X')
		printf(" Found X at src[9] as expected. Looks good!");
/*	
**	test case 2 - n equals to src elements.
**	values stored in dest should be "Supding...XXXXXXX".
**	printed output should be "Supding...XXXXXXX".
*/
	char lib_src2[] = "Sup";
	char lib_dest2[] = "Holding...XXXXXXX";
	char src2[] = "Sup";
	char dest2[] = "Holding...XXXXXXX";
	printf("Test 2 Lib: %s\n", strncpy(lib_dest2, lib_src2, 3));
	printf("Test 2 You: %s\n", ft_strncpy(dest2, src2, 3));
	if(dest2[12] == 'X')
		printf(" Found X at src[9] as expected. Looks good!");
	
/*	
**	test case 3 - n  src is shorter than src elements. (standard case)
**	values stored in dest should be "Supding...XXXXXXX".
**	printed output should be "Supding...XXXXXXX".
*/
	char lib_src3[] = "Super";
	char lib_dest3[] = "Holding...XXXXXXX";
	char src3[] = "Super";
	char dest3[] = "Holding...XXXXXXX";
	printf("Test 3 Lib: %s\n", strncpy(lib_dest3, lib_src3, 3));
	printf("Test 3 You: %s\n", ft_strncpy(dest3, src3, 3));
	if(dest3[12] == 'X')
		printf(" Found X at src[9] as expected. Looks good!");
	/*printf("ft_strncpy: %s\n", dest);
	ft_strncpy(dest, src, 5);
	while (i < sizeof(dest)) 
	{
		c = dest[i];
		c == '\0' ? printf("\\0") : printf("%c", c);
		i++;
	}
	printf("\n");
	strncpy(dest, src, 5);
	i = 0;
	while (i < sizeof(dest)) 
	{
		c = dest[i];
		c ? printf("%c", c) : printf("%i", c);
		i++;
	}
	printf("\n");
	printf("strncpy: %s\n", dest);
	//printf("src: %s\n", src);
*/	return (0);
}
