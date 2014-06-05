#include <stdio.h>
#include <stdlib.h>
#define N 3

int maior_elemento(int *x){
    int i,maior;

    for(i=0;i<N;i++){
       if(x[i] > maior){
        maior = x[i];
       }
    }

    return maior;

}

int cont_maior(int *x, int *y){
    int i,cont = 0;

    for(i=0;i<N;i++){
        if(x[i] == *y){
          cont++;
        }
    }

    return cont;

}

void le_dados(){
    int i,maior;
    int vetor[N];


    printf("Digite %d valores inteiros para o vetor\n",N);

    for(i=0;i<N;i++){
        scanf("%d",&vetor[i]);

    }

   maior = maior_elemento(vetor);

   printf("\nO maior eh %d\n",maior_elemento(vetor));
   printf("\nA quantidade de vezes que ele aparece neste vetor eh %d\n",cont_maior(vetor,&maior));


}

void main(){

    le_dados();
}
