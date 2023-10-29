
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy_s;
	size_t	i;

	if (!s)
		return (NULL);
	if (!( copy_s = (char*)malloc((ft_strlen(s) + 1) * sizeof(*s)) ))
		return (NULL);
	i = 0;
	while(s[i])
	{
		copy_s[i] = s[i];
		i++;
	}
	copy_s[i] = 0;
	return (copy_s);
}
