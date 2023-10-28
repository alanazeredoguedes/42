/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aazeredo <aazeredo@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/23 20:12:44 by aazeredo          #+#    #+#             */
/*   Updated: 2023/10/23 20:12:47 by aazeredo         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memset(void *s, int c, size_t n) //size_t
{
	char	*str;

	str = (char *)s;
	while (n > 0)
	{
		str[n - 1] = c;
		n--;
	}
	return (s);
}
/*
#include <stdio.h>
#include <string.h>

int main()
{
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);

   ft_memset(str,'$',7);
   puts(str);

   return(0);
}
*/
