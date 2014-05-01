#include <stdio.h>
#include <stdlib.h>


int main(){
  int num,i=0;
  float f=0;
  printf("Digite um numero\n ");
   scanf("%d",&num);
   printf("\n");
  while(i<=num){
    f = i%2;
     if( f != 0){
        printf("%d\n",i);
        i++;
     }else{

        i++;
       };
  };

 printf("\n");
 system("pause");
 return 0;

}

