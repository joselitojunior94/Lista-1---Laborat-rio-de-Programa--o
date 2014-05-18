#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int concat(){
    char str01[1000],str02[1000];
    int n,tam;

    printf("Digite uma string\n");
    scanf("%s",&str01);

    printf("Digite outra string\n");
    scanf("%s",&str02);

    tam = strlen(str02);

    printf("Digite quantos caracteres da string 02 deseja copiar para string 01\n");
    scanf("%d",&n);
    printf("\n");
    str02[n] = '\0';

    strcat(str01, str02);

    printf("A string concatenada eh: ");
    printf("%s",str01);
    printf("\n");
}

void main(){
printf("\n");
  concat();
  printf("\n");


}

