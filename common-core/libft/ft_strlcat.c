
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	d;
	size_t	s;
	size_t	len_dst;
	size_t	len_src;

	len_dst = ft_strlen(dst);
	len_src = ft_strlen(src);
	d = len_dst;
	s = 0;
	if(len_dst > size -1 || size <= 0)
		return (size + len_src);
	while(src[s] && (len_dst + s) < size - 1)
	{
		dst[d] = src[s];
		d++;
		s++;
	}
	dst[d] = 0;
	return (len_dst + len_src);
}
