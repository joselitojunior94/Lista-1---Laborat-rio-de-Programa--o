#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
   int suc,ant, num = 0;

   printf("Digite um numero inteiro\n");
   scanf("%d",&num);
   suc = num + 1;
   ant = num - 1;

   printf("O antecessor de %d eh %d. E o sucessor  eh %d\n\n",num,ant,suc);

   system("pause");
   return 0;


}
