#include <stdio.h>
#include <stdlib.h>


int main(){
   float num,maior = 0;

  while(num != -1){
   printf("Digite o numero\n");
   scanf("%f",&num);

    if(num>maior){
     maior = num;
    }
  }
  printf("O maior numero digitado foi %.2f\n\n",maior);
  system("pause");
  return 0;
}
