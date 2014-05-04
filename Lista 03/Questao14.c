#include <stdio.h>
#include <stdlib.h>

int main(){
  int i;
  float num,soma;

  for(i=1;i<=10;i++){
    printf("Digite um numero\n");
    scanf("%f",&num);

    soma = soma + num;

  }
  printf("A soma dos 10 numeros digitados eh %.2f\n",soma);

  system("pause");
  return 0;


}
