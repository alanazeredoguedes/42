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

#include <stdio.h>
#include <stdlib.h>

int	count_number_string(char const *s, char c)
{
	int	i;
	int	count;

	count = 0;
	i = 0;
	while (s[i])
	{
		if ((i != 0) && (s[i + 1] != '\0') && s[i] == c && (s[i + 1] != c))
			count++;
		i++;
	}
	if (count != 0)
		count += 1;
	return (count);
}

void	copy_string(char const *s, char **array, int *params)
{
	int		i;
	char	*string;

	i = 0;
	string = malloc((params[1] - params[0] + 1) * sizeof(char *));
	while (params[0] <= params[1])
	{
		string[i] = s[params[0]];
		params[0]++;
		i++;
	}
	string[i] = '\0';
	array[params[2]] = string;
}

char	**ft_split(char const *s, char c)
{
	int		i;
	int		params[3];
	char	**array;

	array = malloc((count_number_string(s, c) + 1) * sizeof(char *));
	i = 0;
	params[0] = 0;//copy_index
	params[2] = 0;
	while (s[i])
	{
		if (s[i] != c && ((s[i + 1] == c) || (s[i + 1] == '\0')))
		{
			copy_string(s, array, params);
			params[2]++;
		}
		if (s[i] == c)
			params[0] = i + 1;
		i++;
	}
	array[params[2]] = NULL;
	return (array);
}
