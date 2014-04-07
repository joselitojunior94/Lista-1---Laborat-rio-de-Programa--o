#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.141592

int main(){
    float raio;


  printf("Digite o valor do raio\n");
  scanf("%f",&raio);

  raio = (pow(raio,2))* PI;

 printf("A area eh %.2f\n",raio);

  system("pause");
  return 0;

}


