char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

/*
#include <stdio.h>
#include <string.h>
int	main()
{
	char src[] = "Alan Guedes";
	char dest[] = "";
	char src2[] = "Alan Guedes";
	char dest2[] = "";

	printf("%s", ft_strncpy(dest, src, 2));
	printf("\n%s", strncpy(dest2, src2, 2));
}
*/
