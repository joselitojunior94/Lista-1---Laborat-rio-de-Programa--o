#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void imprime(){
      char palavra[1000];

  printf("Digite uma palavra\n");
  scanf("%s",&palavra);
   if((palavra[0] == 'A') || (palavra[0] == 'a')){
    printf("%s",palavra);
   }

}

void main(){
 imprime();


}
