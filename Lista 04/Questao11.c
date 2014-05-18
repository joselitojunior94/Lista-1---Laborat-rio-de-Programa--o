#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void troca(){
    char string01[1000],string02[1000];
    int i,tam01,tam02;

   printf("Digite uma string\n");
   scanf("%s",&string01);
   tam01 = strlen(string01);
   printf("Digite uma string\n");
   scanf("%s",&string02);
   tam02 = strlen(string02);
   for(i=1;i<=tam01;i++){
     if(string01[i] == 'a' || string01[i] == 'A'){
        string01[i] = '*';
     }
   }
    for(i=1;i<=tam02;i++){
     if(string02[i] == 'a' || string02[i] == 'A'){
        string02[i] = '*';
     }
   }

  printf("A string 01 com a troca de a por * e  invertida eh:  %s\n",strrev(string01));
  printf("A string 02 com a troca de a por * e  invertida eh:  %s\n",strrev(string02));

}

void main(){
 troca();


}
