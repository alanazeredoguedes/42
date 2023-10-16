/* 04 - strrev: Escreva uma funcao que inverta uma string recebida como argumento e a retorne. */

#include <stdio.h>

char	*rev(char *str)
{
	int i;
	int count;
	char temp;

	i = 0;
	count = 0;

	while(str[count])
		count++;

	while(i < (count/2))
	{
		temp = str[i];
		str[i] = str[count - 1 - i];
		str[count - 1 - i] = temp;
		i++;
	}

	return (str);
}


int main()
{
	char str[] = "Alan Guedes";

	printf("%s", rev(str));
	//printf("%s", rev("Alan Guedes"));

}
