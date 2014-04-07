#include <stdio.h>
#include <stdlib.h>

int main(){
   float tam_arq,veloc_arq,temp_down;


   printf("Digite o tamanho do arquivo\n");
   scanf("%f",&tam_arq);
   printf("Digite a velocidade da sua internet");
   scanf("%f",&veloc_arq);

   temp_down = ((tam_arq*1024)/veloc_arq)/60;

   printf("O tempo de download eh %.2f\n minutos.",temp_down);

   system("pause");
   return 0;


}
