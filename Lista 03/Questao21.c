#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void insere_no_vetor(int n,int *x){
    int i;

    for(i=1;i<=n;i++){
      scanf("%d\n",&x[i]);
    }

}

void verifica_pares(int n,int *x){
    int i;
 for(i=1;i<=n;i++){
    if(x[i] % 2 == 0){
       printf("%d   ",x[i]) ;
    }
 }



}

int main(){
   int vet[10];

    printf("Digite 10 elementos\n");
    insere_no_vetor(10,vet);
    printf("Os numeros pares deste vetor eh:\n");
    verifica_pares(10,vet);

    system("pause");
    return 0;

}
