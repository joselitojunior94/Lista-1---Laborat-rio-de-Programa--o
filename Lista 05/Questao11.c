#include <stdio.h>
#include <stdlib.h>

void pega_dados(int *x,int *N){
    int i;

    printf("Digite %d valores para vetor 01\n",*N);
    for(i=0;i<*N;i++){
        scanf("%d",&x[i]);
    }
}

void mostra(int *x,int *N,int *M){
    int i;

    if(*M<=*N){
    printf("O vetor soma eh:\n");

    for(i=0;i<*M;i++){
        printf("\n%d\n",x[i]);
    }
    }else{
        printf("Tamanho maior\n");
    }
}


void le_dados(){
    int N,M;

    printf("Digite a quantidade de elementos do primeiro vetor\n");
    scanf("%d",&N);

    printf("Digite a quantidade de elementos que quer exibir\n");
    scanf("%d",&M);

    int vet01[N];
    int i;

   pega_dados(vet01,&N);

   mostra(vet01,&N,&M);




}

void main(){

    le_dados();
}
