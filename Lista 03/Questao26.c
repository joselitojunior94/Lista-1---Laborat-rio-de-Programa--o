#include <stdio.h>

void compara(int *x){
  int i;

  for(i=1;i<=10;i++){
    if(x[i] == x[i+1]){
      printf("O numero %d esta repetido\n",x[i]);
    }
  }

}


int main(){
   int i;
   int vetor[10];

   printf("Digite o vetor\n");
    for(i=1;i<10;i++){
      scanf("%d",&vetor[i]);
    }
  compara(&vetor);
  return 0;

}
