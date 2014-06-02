#include <stdio.h>
#include <stdlib.h>

void troca(int *x,int *y){

    if(*x>*y){
        *y = *x;
    }else{
        *x = *y;
    }
    printf("X = %d & Y = %d",*x,*y);

}

void recebe(){
    int n1,n2;

    printf("Digite dois numeros\n");
    scanf("%d",&n1);
    scanf("%d",&n2);
    printf("Os numeros digitados foram : X = %d e Y = %d\n",n1,n2);
    troca(&n1,&n2);

}

void main(){
    recebe();
}
