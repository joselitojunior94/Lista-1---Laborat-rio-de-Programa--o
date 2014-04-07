#include <stdio.h>
#include <stdlib.h>

int main(){
    float temp;

  printf("Digite o valor da temperatura em Fahrenheit\n");
  scanf("%f",&temp);


  temp = (5 * (temp-32)/ 9);

 printf("A temperatura de Fahrenheit para Celsius eh %.2f\n",temp);

  system("pause");
  return 0;

}


