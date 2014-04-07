#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    int horatrab;
    float valorsalar;
    float result;

  printf("Digite o valor de uma hora trabalhada\n");
  scanf("%f",&valorsalar);

  printf("Digite as horas trabalhadas\n");
  scanf("%d",&horatrab);

  result = horatrab*valorsalar;

 printf("Voce vai ganhar R$ %.2f\n",result);

  system("pause");
  return 0;

}


