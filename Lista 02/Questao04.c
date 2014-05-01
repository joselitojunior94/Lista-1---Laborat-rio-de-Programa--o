#include <stdio.h>
#include <stdlib.h>

int main(){
  float salario;

  printf("Digite o valor do seu salario atual.\n");
  scanf("%f",&salario);

  salario = salario +(salario*0.25);

  printf("O salario com 25%% de aumento eh %.2f\n\n",salario);


  system("pause");
  return 0;

}
