#include <stdio.h>
#include <stdlib.h>

int main(){
  int x,y,z;        //Atividade de sala de aula - Laboratório de Programação

   x=y=10;
   z=(x++);
   printf("X = %d\n",x);
   printf("Y = %d\n",y);
   printf("Z = %d\n",z);
   printf("__________________________\n\n");
   x=-x;
   y++;
    printf("X = %d\n",x);
    printf("Y = %d\n",y);
    printf("Z = %d\n",z);
   printf("__________________________\n\n");

   x = x+y-(z--);

   printf("X = %d\n",x);
   printf("Y = %d\n",y);
   printf("Z = %d\n",z);

   system("pause");
   return 0;


}
