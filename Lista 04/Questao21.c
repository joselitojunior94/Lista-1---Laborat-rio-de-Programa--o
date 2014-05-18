#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
   char string01[1000],string02[1000];
   int i;

   printf("Digite uma string\n");
   scanf("%s",&string01);
   printf("Digite uma string\n");
   scanf("%s",&string02);
    if(strcmp(string01,string02)< 0 ){
       printf("%s , %s",string01,string02);
    }else{
          printf("%s , %s",string02,string01);
    }

}
