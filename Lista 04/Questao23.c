#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void op(){
     char nome[10000],nac[20],sexo;
     int idade;

   printf("Digite o nome\n");
   scanf("%s",&nome);


   printf("Digite a nacionalidade\n");
   scanf("%s",&nac);

   printf("Digite o sexo\n");
   scanf("%s",&sexo);


   printf("Digite a idade\n");
   scanf("%d",&idade);

   if(idade<18){
     printf("%s  nao pode dirigir",nome,nac);
   }else{
      printf("%s  pode dirigir",nome,nac);
   }


}

void main(){
 op();

}
