#include <stdio.h>
#include <stdlib.h>
#define N 2




void pega_dados(int *x){
    int i;

    printf("Digite %d valores para vetor 01\n",N);
    for(i=0;i<N;i++){
        scanf("%d",&x[i]);
    }

}

void mostra(int *x){
    int i;

       if(*x % 2 == 0){
            printf("\n%d\n",x);
       }

}


void le_dados(){

    int vet01[N];
    int i;

   pega_dados(vet01);

   printf("O vetor 01 eh:\n");
    printf("A posição de memoria dos pares sao:\n");
   for(i=0;i<N;i++){
    mostra(&vet01[i]);
   }


}

void main(){

    le_dados();
}
