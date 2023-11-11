
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <bsd/string.h>
#include "libft.h"



void	test_split();

int	main(void)
{

	printf("\n------------------\n");
	printf("- Inicio Testes! -\n");
	printf("------------------\n\n");

	test_split();


	return (0);
}


void	test_split()
{
	printf("\n\n---ft_split---\n");

	char    **array;
	int	i;
	char *j = "Alan, lindao";
	i = 0;
	array = ft_split(j, ',');
	while(array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}
