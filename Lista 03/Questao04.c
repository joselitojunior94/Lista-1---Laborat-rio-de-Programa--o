#include <stdio.h>
#include <stdlib.h>


int main(){
  int i,f;
  while(i<17){
    f = i%3;
     if( f != 0){
        i++;
     }else{
        printf("%d\n",i);
        i++;
       };
  };

 printf("\n");
 system("pause");
 return 0;

}
