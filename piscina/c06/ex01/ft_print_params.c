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
	int	i;

	i = 1;
	while (i < ac)
	{
		ft_putchar(av[i++]);
		ft_putchar("\n");
	}
	return (0);
}
