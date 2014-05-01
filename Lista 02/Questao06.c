#include <stdio.h>
#include <stdlib.h>

int main (){
   int dias;
   float salario;

 printf("Digite quantos dias o encanador trabalhou\n");
 scanf("%d",&dias);
 salario = (30*dias);
 salario = (salario - (salario*0.08));

 printf("O salario com desconto de 8%% do imposto de renda eh RS %.2f\n",salario);

 system("pause");
 return 0;


}
