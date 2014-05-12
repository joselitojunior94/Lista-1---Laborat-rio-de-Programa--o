#include <stdio.h>

int main(){
  int vetA[100],vetB[100];
  int i,j,num;

  j = 1;
  printf("Digite o vetor\n");
    for (i=1;i<=100;i++){
      scanf("%d",&vetA[i]);
        if(vetA[i]% 2 !=0){
         vetB[j] = vetA[i];
         j++;

       }
    }
  for(i=1;i<=100;i++){
   if(vetB[i]% 2 !=0){
    printf("Os impares sao %d\n",vetB[i]);
   }
  }
printf("%d",j);


   return 0;



   }
