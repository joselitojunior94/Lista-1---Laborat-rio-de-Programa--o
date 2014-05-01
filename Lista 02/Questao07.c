#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float a,b,c;


  printf("Digite os lados do triangulo\n\n");
  scanf("%f",&b);
  scanf("%f",&c);

  a = pow(b,2) + pow(c,2);

  printf("O tamanho do cateto eh %.2f\n\n",a);

  system("pause");
  return 0;


}
