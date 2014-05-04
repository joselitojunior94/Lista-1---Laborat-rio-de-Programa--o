#include <stdio.h>
#include <stdlib.h>

int main(){
   int i;

 printf("        1 ate 100 comando for\n\n");

 for (i=1;i<=100;i++){
    printf("%d\n",i);
 };
 printf("\n");
  printf("      1 ate 100 comando while\n\n");
  i = 1;
  while(i!= 100){
    printf("%d\n",i);
    i++;
  };
  printf("\n");
  printf("      1 ate 100 comando do while\n\n");
  i = 0;
  do{
    i++;
    printf("%d\n",i);
  }while(i !=100);

 system("pause");
 return 0;

}


