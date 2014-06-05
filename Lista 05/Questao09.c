#include <stdio.h>
#include <stdlib.h>



int soma_vetores(int *x,int *y,int *z,int N, int M){
    int i;

    if(N != M){
        return 0;
    }else{
        for(i=0;i<N;i++){
            z[i] = x[i] +  y[i];
        }
         return 1;
    }
}

void pega_dados(int *x,int *y,int *N,int *M){
    int i;

    printf("Digite %d valores para vetor 01\n",*N);
    for(i=0;i<*N;i++){
        scanf("%d",&x[i]);
    }

    printf("Digite %d valores para vetor 01\n",*M);
    for(i=0;i<*M;i++){
        scanf("%d",&y[i]);
    }
}

void mostra(int *x,int N){
    int i;

    printf("O vetor soma eh:\n");

    for(i=0;i<N;i++){
        printf("\n%d\n",x[i]);
    }
}


void le_dados(){
    int N,M;

    printf("Digite a quantidade de elementos do primeiro vetor\n");
    scanf("%d",&N);

    printf("Digite a quantidade de elementos do segundo vetor\n");
    scanf("%d",&M);

    int vet01[N],vet02[M],soma[N];
    int i;

   pega_dados(vet01,vet02,&N,&M);

   if(soma_vetores(vet01,vet02,soma,N,M) == 1){
     mostra(soma,N);
   }else{
     printf("Vetores com indices diferentes\n");
   }



}

void main(){

    le_dados();
}
