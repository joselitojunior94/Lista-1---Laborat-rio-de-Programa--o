#include <stdio.h>
#include <stdlib.h>

int main(){
   float salario,vlr_empres;

 printf("Digite o salario do cliente\n");
 scanf("%f",&salario);
 printf("Digite o valor da prestacao\n");
 scanf("%f",&vlr_empres);

  if((salario*0.2)<vlr_empres){
    printf("Emprestimo nao concedido\n");
  }else{
    printf("Emprestimo concedido\n");
  }

  system("pause");
  return 0;
}
