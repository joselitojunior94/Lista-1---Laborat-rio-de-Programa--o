#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
     char string01[30],carac[30];
     char *ptr = NULL;
     printf("Digite uma string\n");
     scanf("%s",&string01);
     printf("Digite uma string\n");
     scanf("%s",&carac);
    ptr = strrchr(string01,*carac);
    if(*ptr){
        printf("Esta contida\n");
    }else{
         printf("Nao Esta contida\n");
    }

}
