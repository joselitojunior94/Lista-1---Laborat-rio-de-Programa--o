#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 5


void pega_dados(int *x,int *y){
    int i;

    printf("Digite %d valores para vetor 01\n",N);
    for(i=0;i<N;i++){
        scanf("%d",&x[i]);
    }

    printf("Digite %d valores para vetor 02\n",M);
    for(i=0;i<M;i++){
        scanf("%d",&y[i]);
    }
}

void mostra(int *x){
    int i;

    for(i=0;i<N;i++){
        printf("\n%d\n",2*(x[i]));
    }
}


void le_dados(){

    int vet01[N],vet02[M];
    int i;

   pega_dados(vet01,vet02);

   printf("O vetor 01 eh:\n");
   mostra(vet01);
   printf("O vetor 02 eh:\n");
   mostra(vet02);



}

void main(){

    le_dados();
}
