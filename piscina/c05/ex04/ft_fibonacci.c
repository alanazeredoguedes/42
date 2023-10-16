int	aux(int index)
{
	if (index < 0)
		return (-1);
	if (index < 2)
		return (index);
	return (aux(index - 2) + aux(index - 1));
}

int	ft_fibonacci(int index)
{
	return (aux(index));
}
/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_fibonacci(7));
	return (0);
}
*/
