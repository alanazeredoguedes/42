/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeredo <aazeredo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 12:29:45 by aazeredo          #+#    #+#             */
/*   Updated: 2023/10/29 12:29:47 by aazeredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*copy_s;
	size_t	i;

	if (!s)
		return (NULL);
	copy_s = (char *)malloc((ft_strlen(s) + 1) * sizeof(*s));
	if (!copy_s)
		return (NULL);
	i = 0;
	while (s[i])
	{
		copy_s[i] = s[i];
		i++;
	}
	copy_s[i] = 0;
	return (copy_s);
}
