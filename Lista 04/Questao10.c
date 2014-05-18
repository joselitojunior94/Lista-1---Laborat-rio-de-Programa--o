#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void sem_espacos(){
    char str01[1000];
    int i,j,tam;

    printf("Digite uma string\n");
    gets(str01);

    tam = strlen(str01);
    i = 0;
    while(i<=tam){
        if(str01[i] != ' '){
          i++;
          }else{
           for(j=i;j<=tam;j++){
            str01[j] = str01[j+1];
           }
          }
        }
   printf("\n");
  printf("O resultado da string sem espacos eh: ");
  printf("%s",str01);
  printf("\n");

}


void main(){

 sem_espacos();

}
