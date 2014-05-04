#include <stdio.h>
#include <stdlib.h>

int main(){
  int i,t,c,soma;

  soma = 0;
  i = 1;

  while(i != 1000){
    t = i%3;
    c = i%5;
   if((t == 0) || (c == 0)){
      soma = soma+i;
      i++;
   }else{
      i++;
   }
  }
  printf("A soma dos 1000 numeros que sao multiplos de 3 ou 5 eh %d\n\n",soma);

  system("pause");
  return 0;


}
