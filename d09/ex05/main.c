#include <stdio.h>

int	ft_button(int i, int j, int k);

int	main(void)
{
	printf("ans between 1-8-7 is %i\n", ft_button(1, 8 , 7));
	printf("ans between 2-3-1 is %i\n", ft_button(2, 3 , 1));
	printf("ans between 5-4-2 is %i\n", ft_button(5, 4 , 2));
	printf("ans between 11-1-100 is %i\n", ft_button(11, 1 , 100));
	printf("ans between 9-8-7 is %i\n", ft_button(9, 8 , 7));
	return (0);
}
