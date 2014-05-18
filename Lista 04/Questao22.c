#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void palavras (){

 char palavra[10000];

     printf("Digite uma palavra\n");
     scanf("%s",&palavra);

     printf("\n A palavra eh: %s \n",strupr( palavra));


}

void main(){
 palavras();
}
