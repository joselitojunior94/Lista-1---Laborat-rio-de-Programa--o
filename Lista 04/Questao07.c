#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void sem_vogais (){

 char palavra[1000];
     int i,j,cont;

     printf("Digite uma palavra\n");
    scanf("%s",&palavra);

  for(i=0;palavra[i]!= '\0';i++){
   if(palavra[i] != ' '){
    if((palavra[i] =='a') || (palavra[i] =='e') || (palavra[i] =='i') || (palavra[i] =='o') || (palavra[i] =='u')){
      for(j=i;j<=strlen(palavra);j++){
       palavra[j]  = palavra[j+1];
      }
    }
  }
} printf("%s",palavra);
}

void main(){
 sem_vogais();
}
