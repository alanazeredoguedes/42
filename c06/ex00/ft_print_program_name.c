#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		write(1, &str[i++], 1);
}

int	main(int ac, char *av[])
{
	if (ac == 1)
		ft_putchar(av[0]);
	return (0);
}
