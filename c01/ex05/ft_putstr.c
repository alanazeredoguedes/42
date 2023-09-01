#include <unistd.h>
#include <stdio.h>

int strlenn(char *s);
void ft_putstr(char *str);

int main(){

 char *string = "Amen";
 ft_putstr(string);

 return 0;
}

void ft_putstr(char *str){

 write(1, str, strlenn(str));

}


int strlenn(char * str) {
  int count = 0;
  char ch = str[0];
  for(int i=0; ch!='\0'; i++){
    count++;
    ch = str[i];
  }

 return count;
}
