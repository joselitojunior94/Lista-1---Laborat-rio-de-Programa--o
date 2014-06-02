#include <stdio.h>
#include <stdlib.h>

void soma(int *x,int *y){

    *x = (*x + *y);

}

void mostra_dados(int *x){
    printf("A soma dos dois numeros eh %d\n",*x);
}

void le_dados(){
    int a,b;

    printf("Digite dois numeros\n");
    scanf("%d",&a);
    scanf("%d",&b);
    soma(&a,&b);
    mostra_dados(&a);
}


void main(){
    le_dados();

}
