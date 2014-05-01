#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
  float num;

  printf("Digite um numero real\n");
  scanf("%f",&num);

  num = pow(num,2);

  printf("O numero digitado ao quadrado eh %.3f\n",num);

  system("pause");
  return 0;

}
