/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeredo <aazeredo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:35:31 by aazeredo          #+#    #+#             */
/*   Updated: 2023/10/23 20:35:34 by aazeredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	count;
	size_t	i;

	count = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] && s[i] != c)
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}

static void	free_result(size_t i, char **result)
{
	while (i > 0)
	{
		--i;
		free(result[i]);
	}
	free(result);
}

static char	**start_split(char const *s, char c, char **result, size_t words)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	while (i < words)
	{
		while (s[j] && s[j] == c)
			j++;
		result[i] = ft_substr(s, j, word_len(&s[j], c));
		if (!result[i])
		{
			free_result(i, result);
			return (NULL);
		}
		while (s[j] && s[j] != c)
			j++;
		i++;
	}
	result[i] = NULL;
	return (result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;

	if (!s)
		return (NULL);
	result = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	result = start_split(s, c, result, count_words(s, c));
	return (result);
}
