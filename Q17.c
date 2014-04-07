#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float altura,peso_id;
    char sexo;


 printf("Digite a altura\n");
 scanf("%f",&altura);

 printf("Digite o seu sexo\n");
 scanf("%s",&sexo);

 if(sexo == 'm' || sexo =='M'){
  peso_id = (72.7*altura)- 58;
 }

  if(sexo == 'f' || sexo =='F'){
    peso_id = (62.1*altura)-44.7;
  }


 printf("O seu peso ideal eh %.2f.\n",peso_id);

  system("pause");
  return 0;

}


