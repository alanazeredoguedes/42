#include <stdio.h>
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	dlen;
	unsigned int	slen;

	i = 0;
	j = 0;

	j = ft_strlen(dest);
	slen = ft_strlen(src);
	dlen = j;
	if (size == 0 || size <= dlen)
		return (slen + size);

	while (src[i] && i < size - dlen - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (dlen + slen);
}

int main (void)
{
	char dest [] = "Alan ";
	char src[] = "Lindão e Bonitão";
    printf("%i \n", ft_strlcat(dest, src, 4));
    printf("%s \n", dest);
}	
