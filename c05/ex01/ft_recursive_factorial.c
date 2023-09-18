void	aux(int nb, int *result)
{
	*result *= nb;
	if (nb > 1)
		aux(nb - 1, result);
}

int	ft_recursive_factorial(int nb)
{
	int	result;

	result = 1;
	if (nb < 0)
		return (0);
	aux(nb, &result);
	return (result);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_recursive_factorial(3));
	return (0);
}
*/
