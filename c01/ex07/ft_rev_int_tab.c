/*#include <stdio.h>*/

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i <= size / 2)
	{
		temp = tab[i];
		tab [i] = tab [size - 1 - i];
		tab [size - 1 - i] = temp;
		i++;
	}
}
/*
int	main(void)
{
	int array_int[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	ft_rev_int_tab(array_int, 10);
	return (0);
}*/
