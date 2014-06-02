#include <stdio.h>
#include <stdlib.h>

void troca (int *x, int *y){
    int aux;

    printf("A = %d e B = %d\n",*x,*y);
    aux = *x;
    *x = *y;
    *y = aux;

    printf("A = %d e B = %d\n",*x,*y);

}

void entrada(){
    int x,y;

    printf("Digite dois numeros\n");
    scanf("%d",&x);
    scanf("%d",&y);
    troca(&x,&y);
}

void main(){
    entrada();
}
