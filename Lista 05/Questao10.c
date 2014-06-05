#include <stdio.h>
#include <stdlib.h>

int dobro(int *x){
    return 2*(*x);
}

int soma_dados(int *x,int *y){
    return ((*x) + (*y));

}

void le_dados(){
    int a,b;

    printf("Digite dois numeros\n");
    scanf("%d",&a);
    scanf("%d",&b);

    a = dobro(&a);
    b = dobro(&b);

    printf("A soma do dobro dos dois numeros eh %d\n ",soma_dados(&a,&b));


}

void main(){

    le_dados();

}
