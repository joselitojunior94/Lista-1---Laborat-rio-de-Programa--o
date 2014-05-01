#include <stdio.h>
#include <stdlib.h>

int main(){
    int num,aux1,aux2;

    printf("Digite um numero de tres digitos.\n");
    scanf("%d",&num);

    aux1 = (num %10);
    aux2 = aux1*100;

    aux1 = (num %100) - (aux1);
    aux2 = aux2+aux1;
    aux1 = num / 100;
    aux2 = aux2+aux1;

    printf("%d\n\n",aux2);

    system("pause");
    return 0;





}
