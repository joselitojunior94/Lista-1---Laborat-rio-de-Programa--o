#include <stdio.h>
#include <stdlib.h>

int main(){
  int idade,temp_serv;

  printf("Digite a idade.\n");
  scanf("%d",&idade);
  printf("Digite o tempo de servico.\n");
  scanf("%d",&temp_serv);

   if(idade>=60 && temp_serv >=25){
       printf("Pode aposentar\n");
       return 0;
   }

   if(idade>=65 || temp_serv>=30){
       printf("Pode aposentar\n");
   }else{
       printf("Nao pode aposentar\n");
   }


 system("pause");
 return 0;

}
