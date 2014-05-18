#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(){
      char palavra[1000];

  printf("Digite uma palavra\n");
  scanf("%s",&palavra);
  printf("\n");
  printf("A palavra invertida eh : %s",strrev(palavra));
  printf("\n");

}

void main(){
 imprime();


}
