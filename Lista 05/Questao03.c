#include <stdio.h>
#include <stdlib.h>

void ordenacao(int *n1,int *n2,int *n3){
    int aux;

    while(!((*n1<*n2) && (*n2<*n3))){
        if(*n1>*n2){
            aux = *n2;
            *n2= *n1;
            *n1 = aux;
        }
        if(*n2>*n3){
            aux = *n3;
            *n3 = *n2;
            *n2 = aux;
        }

    }
    printf(" X = %d  Y = %d  Z = %d",*n1,*n2,*n3);
}

void recebe(){
    int x,y,z;

    printf("Digite tres valores\n");
    scanf("%d",&x);
    scanf("%d",&y);
    scanf("%d",&z);
    ordenacao(&x,&y,&z);
}

void main(){
    recebe();

}
