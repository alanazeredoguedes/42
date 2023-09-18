int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb <= 1)
		return (0);
	while (i <= (nb / 2))
	{
		if (!(nb % i))
			return (0);
		else
			i++;
	}
	return (1);
}

#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(5));
	return (0);
}
