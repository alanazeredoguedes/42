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
	int	count = 0;

	count = 0;
	i = 0;
	while(s[i])
	{
		if( (i != 0) && (s[i+1] != '\0') && s[i] == c && (s[i+1] != c) )
			count++;
		i++;
	}
	if(count != 0)
		count += 1;

	return (count);
}

void	copy_string(char const *s, char **array, int p1, int pend, int arrayp)
{
	int	i;
	char	*string;

	i = 0;
	string = malloc((pend-p1+1) * sizeof(char*));
	//if(!string)
		//return (NULL);

	//printf("%d %d\n", p1, pend);
	while(p1 <= pend)
	{
		string[i] = s[p1];
		p1++;
		i++;
	//	printf("-");
	}
	//printf("\n");
	string[i] = '\0';
	array[arrayp] = string;
}


char	**ft_split(char const *s, char c)
{
	int	p1;
	int	i;
	char	**array;
	int	arrayP;

	array = malloc((count_number_string(s, c)+1) * sizeof(char*));

	arrayP = 0;
	i = 0;
	p1 = 0;
	while(s[i])
	{

		if(s[i] != c && ( (s[i+1] == c) || (s[i+1] == '\0') ) )
		{
			copy_string(s, array, p1, i, arrayP);
			arrayP++;
		}
		if(s[i] == c)
			p1 = i+1;

		i++;
	}

	array[arrayP] = NULL;

	return (array);
}
/*
int	main()
{
	char	**array;
	int	i;

	i=0;
	//array = ft_split("Alan e lindao, o Carlos e feio, Jose e mais ou menos!", ' ');
	//array = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse", ' ');
//	array = ft_split("   lorem   ipsum dolor     sit amet, consectetur   adipiscing elit. Sed non risus. Suspendisse   ", ' ');
	array = ft_split("lorem ipsum dolor sit amet, consectetur adipiscing elit. Sed non risus. Suspendisse lectus tortor, dignissim sit amet, adipiscing nec, ultricies sed, dolor. Cras elementum ultricies diam. Maecenas ligula massa, varius a, semper congue, euismod non, mi.", 'z');

	while(array[i])
	{
		printf("%s\n", array[i]);
		free(array[i]);
		i++;
	}

	//printf("%s\n", array[0]);
	//printf("%s\n", array[1]);
	//printf("%s\n", array[2]);

	free(array);

}
*/
