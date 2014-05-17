#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int cont_string(int x,char *p){
  int i,quant = 0;
for(i=1;i<=x;i++){
     if(p[i]!= ' '){
       quant++;
     }
   }
 return (quant);

}

int main(){

  char palavra[10000];
  int i,tam;

   printf("Digite uma palavra\n");
   gets(palavra);
   tam = strlen(palavra);
   tam = cont_string(tam,&palavra);
   printf("A palavra tem %d caracteres\n", tam);

   system("pause");
   return 0;
}
