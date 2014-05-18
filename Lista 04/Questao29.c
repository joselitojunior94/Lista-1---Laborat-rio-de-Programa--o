#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quant(){
     char str01[1000];

  printf("Digite um nome\n");
  scanf("%s",&str01);
  printf("\n");
  printf("Esse nome tem %d caracteres\n",strlen(str01));

}

void main(){
 quant();
}
