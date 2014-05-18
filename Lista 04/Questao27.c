#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void quant(){
     char str01[1000];
     int i;
  printf("Digite um nome\n");
  scanf("%s",&str01);

 for(i=0;i<4;i++){
    printf("%c",str01[i]);

  }
}

void main(){
 quant();
}
