#include <stdio.h>
#include <stdlib.h>

int main(){
    int i,soma;

    for (i = 0;i<=50;i++){

       if(i%2 == 0){
         soma = soma + i;
        }
     }
     printf("A soma dos numeros sao %d\n",soma);

 return 0;
 system("pause");



}
