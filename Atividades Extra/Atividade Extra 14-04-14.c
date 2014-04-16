#include <stdio.h>
#include <string.h>


void main(){
  char letra[2];

do{

 printf("Digite S ou N\n");
  scanf("%s",&letra);

 }while(letra!= 's' || letra!= 'n');

   if(letra = 's'){
     printf("Digitou Sim\n");
   }else{
      printf("Digitou Nao\n");
   }



 system("pause");

}
