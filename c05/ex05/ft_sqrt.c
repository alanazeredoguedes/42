int	ft_sqrt(int nb)
{
	int	i;

	i = 1;
	if (nb <= 0)
		return (0);
	if (nb == 1)
		return (1);
	while (nb >= i * i)
	{
		if (nb == i * i)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d", ft_sqrt(3));
	return (0);
}
*/
