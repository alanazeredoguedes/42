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
#include <stdio.h>

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
	if (string)
	{
		while (params[0] <= params[1])
		{
			string[i] = s[params[0]];
			params[0]++;
			i++;
		}
		string[i] = '\0';
		array[params[2]] = string;
	}else{
		params[3] = 1;
	}
}

char	**ft_split(char const *s, char c)
{
	int		params[4];
	char	**array;

	array = malloc((count_number_string(s, c) + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	params[0] = 0; // posicao inicial string a copiar
	params[1] = 0; // index
	params[2] = 0; // posicao array onde alocar string
	params[3] = 0; // sinal de retorno alocacao
	while (s[params[1]])
	{
		if (s[params[1]] != c && ((s[params[1] + 1] == c) || (s[params[1] + 1] == '\0')))
		{
			copy_string(s, array, params);
			if (params[3] == 1)
				return (NULL);
			params[2]++;
		}
		if (s[params[1]] == c)
			params[0] = params[1] + 1;
		params[1]++;
	}
	array[params[2]] = NULL;
	return (array);
}
