
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
	//char *s = "semper congue, euismod non, mi.";
	char *j = "a,b,c,d";
//	char *j = "lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.";
	i = 0;
	array = ft_split(j, ',');
//	array = ft_split(j, 'z');
	while(array[i])
	{
		printf("%s\n", array[i]);
		i++;
	}
}
