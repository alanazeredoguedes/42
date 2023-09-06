/*#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	result;
	int	rest;

	result = *a / *b;
	rest = *a - (result * *b);
	*a = result;
	*b = rest;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 3;
	printf("a: %d \n", a);
	printf("b: %d \n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a: %d \n", a);
	printf("b: %d \n", b);
	return (0);
}*/
