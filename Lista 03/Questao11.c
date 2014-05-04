#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(){
   char palavra [20];
   int i,quant;
  i = 0;
   printf("Digite o binario de 20 caracteres\n");
   gets(palavra);

  quant = strlen(palavra);

  while(i<quant){
    if(palavra[i] = '0'){
        palavra[i] = '1';
    }
    i++;
  };
  printf("%s",palavra);
  printf("\n");
  system("pause");
  return 0;


}
