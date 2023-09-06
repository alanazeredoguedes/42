/*#include <unistd.h>*/

int	str_count(char *str)
{
	int	i;
	int	count;
	char	ch;

	count = 0;
	ch = str[0];
	i = 0;
	while (ch != '\0')
	{
		count++;
		ch = str[i];
		i++;
	}
	return (count);
}

void	ft_putstr(char *str)
{
	write(1, str, str_count(str));
}
/*
int	main(void)
{
	char	*string;

	string = "Alan Teste";
	ft_putstr(string);
	return (0);
}*/
