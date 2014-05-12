#include <stdio.h>
#include <stdlib.h>


void insere_no_vetor(int n,int *x){
    int i;

    for(i=1;i<=n;i++){
      scanf("%d\n",&x[i]);
    }

}

void atribui_zero(int n,int *x){
   int i;

 for (i=1;i<=n;i++){
    if(x[i] <= -1){
       x[i] = 0;
    }
 }

}

void visualiza_vetor(int n,int *x){
   int i;

 for(i=1;i<=n;i++){
    printf("%d ",x[i]);
 }
}

int main(){
  int vet[10];

  printf("Digite 10 elementos\n");

  insere_no_vetor(10,vet);

  atribui_zero(10,vet);
  printf("O novo vetor eh \n ");
  visualiza_vetor(10,vet);
  printf("\n");

  system("pause");
  return 0;
}
