#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void op(){
     char nome[100],velhas[100],novas[100];
     int idade,velha = 0,nova;

  while(idade!=-1){

    printf("Digite o nome\n");
    scanf("%s",&nome);
    printf("Digite a idade\n");
    scanf("%d",&idade);


   if(idade>velha){
        velha = idade;
        strcpy(velhas,nome);

   }

    if((idade<nova) && (idade!= -1)){
       nova = idade;
       strcpy(novas,nome);

   }
  }

printf("O nome e a idade da mais velha: %s e %d anos\n",velhas,velha);
printf("O nome e a idade da mais nova: %s e %d anos\n",novas,nova);
}

void main(){
 op();

}
