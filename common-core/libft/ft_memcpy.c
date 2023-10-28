#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (!dst)
		return (NULL);
	i = 0;
	while (i < n)
	{
		*(char*)(dst + i) = *(char*)(src + i);
		i++;
	}
	return (dst);
}
/*
#include "stdio.h"
int main ()
{
	char string[100] = "Alan";
	char cpy[100];

	ft_memcpy(cpy, string, 3);

	printf("%s", cpy);



}
*/
