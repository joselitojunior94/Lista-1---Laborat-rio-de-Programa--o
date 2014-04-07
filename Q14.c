#include <stdio.h>
#include <stdlib.h>

int main(){
    float temp;

  printf("Digite o valor da temperatura em Celsius\n");
  scanf("%f",&temp);


  temp  = (temp * 1.8) + 32;

 printf("A temperatura de Celsius  para Fahrenheit eh %.2f\n",temp);

  system("pause");
  return 0;

}


