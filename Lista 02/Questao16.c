#include <stdio.h>
#include <stdlib.h>

int main(){
  float alt,peso;
  int selec;

  printf("Digite o sua altura\n");
  scanf("%f",&alt);
  printf("Digite o seu sexo (1) para Masculino ou (0) para Feminino\n");
  scanf("%d",&selec);

  if(selec == 1){
    peso = (72.7*alt) - 58;
   }

    if(selec == 0){
    peso = (62.1*alt) - 44.7;
   }

  printf("O peso  eh %.2f\n\n",peso);

  system("pause");
  return 0 ;

}
