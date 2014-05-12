#include <stdio.h>
#include <stdlib.h>

int main(){
  int num, i, div = 0;

  printf("\n Digite um numero inteiro:\n");
  scanf("%d", &num);
   for(i=1;i<=num;i++){
     if(num%i==0){
        div = div + 1;
      }
   }
      if(div > 2){
         printf ("\n Este numero nao eh primo\n");
      }else{
         printf ("\n Este numero eh primo\n");
      }
  return 0;
}
