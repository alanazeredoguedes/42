/**
01  - ft_sub: escreva uma funcao que tem como argumentos um ponteiro para um inteiro e um inteiro, e subtraia do valor da variavel apontada pelo inteiro.
*/
#include <stdio.h>

void	ft_sub(int *pont, int val)
{
	*pont = *pont - val;
}

int main (void)
{

	int a = 15;
	int b = 5;

	ft_sub(&a, b);

	printf("%d",a );

}
