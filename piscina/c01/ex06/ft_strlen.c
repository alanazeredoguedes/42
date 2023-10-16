/*#include <stdio.h>*/

int	ft_strlen(char *str)
{
	int	count;
	char	string;

	count = 0;
	string = str[0];
	while (string != '\0')
	{
		count++;
		string = str[count];
	}
	return (count);
}

/*int	main(int argc, char *argv[])
{
	int	length;

	if(argc != 2)
	{
		printf("%s", "Argumento não passado como parametro");
		return (0);
	}

	length = ft_strlen(argv[1]);
	printf("%d", length);
	return (0);
}*/
