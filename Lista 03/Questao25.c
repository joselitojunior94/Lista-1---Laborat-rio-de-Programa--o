#include <stdio.h>
#include <stdlib.h>
#define N 10

void insere_no_vetor(int n,int *x){
    int i;

    for(i=1;i<=n;i++){
      scanf("%d  ",&x[i]);
    }

}

int subtracao_matriz(int i,int *x,int *y){
    return (x[i] - y[i]);

}

void visualiza(int n,int *z){
   int i;

 for(i=1;i<n;i++){
    printf("%d  ",z[i]);
 }
}

int main(){
 int VetA[10],VetB[10],VetC[10];
 int i;

 printf("Digite o primeiro vetor\n");
 insere_no_vetor(N,VetA);

 printf("Digite o segundo vetor\n");
 insere_no_vetor(N,VetB);

 for(i=1;i<N;i++){
    VetC[i] = subtracao_matriz(i,VetA,VetB);
 }

 printf("A operacao A - B gera uma matriz C\n");
 visualiza(N,VetC);
 printf("\n");

 system("pause");
 return 0;
}
