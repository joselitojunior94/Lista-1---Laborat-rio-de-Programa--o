#include <stdio.h>

int main(){
    int aux1= 0, aux2= 1, fibon=0, i=0, num=32,soma=0;

    for(i = 1; i <= num; i++){
        fibon = aux1 + aux2;
        aux1 = aux2;
        aux2 = fibon;

        if (i%2==0){
            soma=soma+fibon;
        }
    }

    printf("\n\n A soma dos termos pares da Sequencia de Fibonacci eh: %d.\n", soma);

    return 0;
}
