#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void calculo(){
   char palavra[300];
   int x[100];
   int i,tam;
 printf("Digite a palavra\n");
 gets(palavra);
 tam = strlen(palavra);

 for(i=0;(i<tam) && (palavra[i]!= '/0');i++){
    x[i] = palavra[i];
 }

 for(i=0;(i<tam);i++){
  if(x[i] != ' '){
   if((x[i]>=97) || (x[i]<=119)){
      x[i] = x[i]+3;
   }else{
       x[i] = x[i] - 23;
  }
}
}
printf("\n");
printf("O codigo de Cesar eh:\n");
for(i=0;(i<tam);i++){
  printf("%c",x[i]);
}
printf("\n");

}

void main(){

 calculo();



}
