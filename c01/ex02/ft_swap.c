/*#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void)
{
	int	a;
	int	b;

	a = 0;
	b = 5;
	ft_swap(&a, &b);
	printf("%d", a);
	printf("%d", b);
	return (0);
}*/
