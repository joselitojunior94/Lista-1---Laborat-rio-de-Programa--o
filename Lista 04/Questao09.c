#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void maiusculas(){
    char str[100];
    int str_maisc[100];
    int i,tam;

 printf("Digite uma string\n");
 gets(str);
 tam = strlen(str);
 for(i=0;i<tam;i++){
   str_maisc[i] = str[i];
   str_maisc[i] = str_maisc[i]-32;
 }
 printf("\n");
 printf("O nome em maiusculo eh: ");
 printf("\n");
 for(i=0;i<tam;i++){
  printf("%c",str_maisc[i]);

 }
}


 void main(){
 maiusculas();
 }
