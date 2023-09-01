void ft_div_mod(int a, int b, int *div, int *mod);

int main(){

 int a = 7;
 int b = 5;
 int div;
 int mod;

 ft_div_mod(a, b, &div, &mod);

 return 0;
}

void ft_div_mod(int a, int b, int *div, int *mod){

 *div = a/b;
 *mod = a - (*div * b); 

}
