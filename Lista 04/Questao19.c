#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void op(){
     char s[100000];
     int  in[10];
     int i;

    printf("Digite a string\n");
    scanf("%s",s);

    for(i=0;i<100000;i++){
       scanf("%d",&in[i]);
    }
  for(i=0;i<100000;i++){
    printf("%c",s[in[i]]);
  }
}


void main(){
 op();

}
