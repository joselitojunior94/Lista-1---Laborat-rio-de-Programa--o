#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

int consulta(){
     char str01[15];
     int i,j,tam;

 printf("Digite uma string de 15 caracteres\n");
 gets(str01);
 tam = strlen(str01);

  for(i=0,j=tam;(i<=tam);i++,j--){
    if(str01[i] == str01[j]){
      printf("Nao eh\n");
      system("pause");
      return 0;
    }
  }

 printf("Eh\n");
 return 0;
}


int main(){

 return consulta();

}


