#include <stdio.h>
#include <stdlib.h>


int main(){
  int i,num,t;

  i = 1;
  printf("Digite um numero inteiro\n");
  scanf("%d",&num);
  printf("\n");
  printf("Os divisores deste numero sao: \n ");
  printf("\n");

  while (i<=num){
    t = num%i;
    if(t != 0){
      i++;
    }else{
       printf("%d\n",i);
       i++;
    }
   }

 return 0;


}
