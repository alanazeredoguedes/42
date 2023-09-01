#include <unistd.h>

void ft_print_numbers(void);

int main(){

 ft_print_numbers();

 return 0;
}

void ft_print_numbers(void){

 for(int d=0; d<=9; d++){
  char show = d+'0';
  write(1, &show, 1);

 }

}
