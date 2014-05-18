#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int calc(){
     char string[10000],carac[10000];
     int i,tam,plc;

   printf("Digite uma palavra\n");
   scanf("%s",&string);
   tam = strlen(string);
   printf("Digite um caracter\n");
   scanf("%s",&carac);

   for(i=0;i<tam;i++){
    if(string[i] == carac[0]){
        return i;
    }
   }

}

void main(){

printf("A string aparece na posicao %d da string.\n",calc());


}
