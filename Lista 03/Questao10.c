#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    char palavra[10];
    int i,quant,quant_one;

 quant = 0;
 quant_one = 0;

 printf("Digite apenas numeros binarios\n ");
 gets(palavra);

 quant = strlen(palavra);
  if(palavra[1]= '0'){
    for (i=1;i<quant;i++){
       if(palavra[i] != '0'){
       quant_one++;
       }
    }
  }

 printf("A quantidade de caracteres totais eh %d\n",quant);
 printf("A quantidade de 1 na string eh %d\n",quant_one);



 system("pause");
 return 0;
}
