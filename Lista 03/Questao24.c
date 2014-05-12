#include <stdio.h>


int main(){
 int aux,i,j;
 int Vet[11];

 printf("Digite os numeros do vetor\n");

 for(i=1;i<=11;i++){
    scanf("%d",&Vet[i]);
 }

 for(j=2;j<=11;j++){
    aux = Vet[j];
    i = j-1;
    while((i>0) && (Vet[i]>aux)){
        Vet[i+1] = Vet[i];
        i = i-1;
    }
    Vet[i+1] = aux;
 }
  for(i=1;i<11;i++){
    printf("%d, ",Vet[i]);
 }
 return 0;
}
