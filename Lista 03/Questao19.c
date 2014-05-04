#include <stdio.h>
#include <stdlib.h>

int main(){
 int vet[10];
 int i,maior,pos;

 maior = 0;
 pos = 0;

 printf("Digite 10 numeros\n");

 for(i=1;i<=10;i++){
    scanf("%d",&vet[i]);
 }

 for(i=1;i<=10;i++){
   if(vet[i]>maior){
      maior = vet[i];
      pos = i;
   }
 }

 printf("O maior elemento desse vetor eh %d\n\n",maior);
 printf("A posicao dele eh %d\n\n",pos);

 system("pause");
 return 0;

}
