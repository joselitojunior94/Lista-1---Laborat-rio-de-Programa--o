#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char string[50];
    int string_int[50];
    int i,tam;

    printf("Digite uma string\n");
    scanf("%s",&string);

    tam = strlen(string);

     for(i=0;i<tam;i++){
        string_int[i] = string[i];
        string_int[i] =  string_int[i] + 1;
        string[i] = string_int[i];
     }

 printf("%s",string);


}
