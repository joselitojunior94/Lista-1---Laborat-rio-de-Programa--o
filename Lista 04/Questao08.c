#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int contachar(char string[], char letra){
    int i, tamanho, cont = 0;
    tamanho = strlen(string);
    for(i=0;i<= tamanho;i++)
      if(string[i] == letra)
         cont++;
    return(cont);
  }

void dados(){
    char *string[20000];
    char letra[20000];
    int nr;

    printf("Entre com a string :");
    scanf("%s",&string);
    printf("\n");
    printf("Entre com a letra :");
    scanf("%s",&letra);
    nr = contachar(string,letra[0]);
    printf("\n");
    printf("Contando o número de ocorrências : %d\n",nr);

 }

void main(){
  dados();
}


