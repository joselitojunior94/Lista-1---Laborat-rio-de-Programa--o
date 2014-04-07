#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float peso_peixe = 0;
    float excess = 0;
    float valor_excess = 0;

 printf("Digite o peso do peixe\n");
 scanf("%f",&peso_peixe);

 if(peso_peixe>50){
  excess = peso_peixe - 50;
  valor_excess = excess*4;
 }

  printf("O peixe contem %.2f KG de excesso.\n",excess);
  printf("A multa eh de R$%.2f.\n",valor_excess);

  system("pause");
  return 0;

}


