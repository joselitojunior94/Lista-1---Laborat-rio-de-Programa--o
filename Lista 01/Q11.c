#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
    float area;


  printf("Digite o valor do lado\n");
  scanf("%f",&area);

  area = (pow(area,2));

 printf("O dobro da area do quadrado eh %.2f\n",area*2);

  system("pause");
  return 0;

}


