#include <stdio.h>

void ft_ultimate_div_mod(int *a, int *b);

int main(){

 int a = 10;
 int b = 5;

 printf("a: %d \n", a);
 printf("b: %d \n", b);

 ft_ultimate_div_mod(&a, &b);

 printf("a: %d \n", a);
 printf("b: %d \n", b);

 return 0;
}

void ft_ultimate_div_mod(int *a, int *b){

 int result = *a / *b;
 int rest = *a - (result * *b);
 *a = result;
 *b = rest;

}
