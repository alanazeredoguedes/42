#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	aux;
	int	i;

	i = 0;
	while (i < size)
	{
		if( tab [i] < tab [size - 1 - i])
		{
			aux = tab [size - 1 - i];
			tab [size - 1 - i] = tab [i];
			tab [i] = aux;
		}
		i++;
	}
}

int	main(void)
{
	int 	array_int[10] = { 5, 9, 8, 7, 6, 10, 4, 3, 2, 1};
	int 	i;

	i = 0;
	ft_sort_int_tab(array_int, 10);
	while (i<10)
	{
		printf("%d", array_int[i]);
		i++;
	}
	return (0);
}
