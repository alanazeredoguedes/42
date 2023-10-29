/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeredo <aazeredo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:23:02 by aazeredo          #+#    #+#             */
/*   Updated: 2023/10/29 12:23:04 by aazeredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	char	*st1;
	char	*st2;
	size_t	i;

	i = 0;
	st1 = (char *)s1;
	st2 = (char *)s2;
	while (i < n)
	{
		if (st1[i] != st2[i])
			return ((unsigned char)st1[i] - (unsigned char)st2[i]);
		i++;
	}
	return (0);
}
