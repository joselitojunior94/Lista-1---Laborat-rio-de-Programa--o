#include <stdio.h>



void visualiza(int *x){
  int i;

  for(i=0;i<5;i++){
    printf("%d ",x[i]);
  }
}

void contrario(int *x){
  int i;

  for (i=4;i>=0;i--){
    printf("%d ",x[i]);
  }
}

int main(){
  int vetor[6];
  int i,ver;


  printf("Digite o vetor\n");
  for(i=0;i<=4;i++){
    scanf("%d",&vetor[i]);
  }
  do{
  printf("Deseja ver em ordem direta(1) ou em ordem inversa(2)\n?");
  scanf("%d",&ver);

  if(ver == 1){
  visualiza(&vetor);
  }
  if(ver == 2){
   contrario(&vetor);
  }
 }while((ver!= 1) && (ver!=2));
  printf("\n");
  return 0;

}
