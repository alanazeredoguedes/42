
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <errno.h>
#include <bsd/string.h>
#include "libft.h"


void	test_strlcat();

int	main(void)
{

	printf("\n------------------\n");
	printf("- Inicio Testes! -\n");
	printf("------------------\n\n");

	//test_strlcat();


	return (0);
}


void	test_strlcat()
{
	printf("\n\n---ft_strlcat---\n\n");

	char	src[100] = "Alan Guedes";
	char	dst[100] = "Meu nome é ";
	char	src2[100] = "Alan Guedes";
	char	dst2[100] = "Meu nome é ";

	//ft_strlcat(dst, src, 100);
	//strlcat(dst2, src2, 100);
	printf("ft_strlcat - %ld - %s\n", ft_strlcat(dst, src, 15), dst);
	printf("strlcat - %ld - %s\n", strlcat(dst2, src2, 15),  dst2);
}
