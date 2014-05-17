#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>

bool compara(char *p1,char *p2){
    int i;
  for(i=1;p1[i]!='\0';i++){
    if(p1[i]!= p2[i]){
      return false;
    }
  }
 return true;
}



int main(){
    char palavra1[1000];
    char palavra2[1000];

   printf("Digite a primeira palavra\n");
   gets(palavra1);
   printf("Digite a segunda palavra\n");
   gets(palavra2);

   if (compara(&palavra1,&palavra2) == true){
     printf("As duas palavras sao iguais\n");
   }else{
     printf("As duas palavras sao diferentes\n");
   }

  system("pause");
  return 0;

}
