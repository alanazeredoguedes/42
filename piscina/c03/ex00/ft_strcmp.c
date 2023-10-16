int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] || s2[i]))
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>
int	main()
{
	printf("%d\n", ft_strcmp("Alan", "Alan"));
	printf("%d\n", ft_strcmp("Alan", "Ala"));
	printf("%d\n", ft_strcmp("Ala", "Alan"));
}
*/