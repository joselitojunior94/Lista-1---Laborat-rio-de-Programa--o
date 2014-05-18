#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vogais (){

 char palavra[1000],carac[1000];
     int i,cont = 0;

     printf("Digite uma palavra\n");
     scanf("%s",&palavra);
      printf("Digite uma palavra que queira substituir\n");
    scanf("%s",&carac);

  for(i=0;palavra[i]!= '\0';i++){
   if(palavra[i] != ' '){
    if((palavra[i] =='a') || (palavra[i] =='e') || (palavra[i] =='i') || (palavra[i] =='o') || (palavra[i] =='u')){
      cont++;
     palavra[i]  = carac[0];

    }
  }
}
 printf("A palavra possuia %d vogais\n",cont);
 printf("A palavra agora eh:%s",palavra);
}

void main(){
 vogais();
}
