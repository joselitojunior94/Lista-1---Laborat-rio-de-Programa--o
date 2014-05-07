#include <stdio.h>
#include <stdlib.h>

int main(){
 int hora_ent,min_ent,hora_sai,horas,min_sai,valor;
 printf("Bem Vindo a sistema de estacionamento\n");

 do{
   printf("Digite apenas em formato 24 horas\n");
   printf("Digite a hora de entrada\n");
   scanf("%d",&hora_ent);
   printf("Digite os minutos\n");
   scanf("%d",&min_ent);
 }while((hora_ent>24) && (min_ent >60));

 do{
   printf("Digite apenas em formato 24 horas\n");
   printf("Digite a hora de saida\n");
   scanf("%d",&hora_sai);
   printf("Digite os minutos\n");
   scanf("%d",&min_sai);
 }while((hora_ent>24) && (min_ent >60));
  hora_ent = (hora_ent*60) + min_ent;
  hora_sai = (hora_sai*60) + min_sai;
 horas = (hora_sai-hora_ent);
   if(horas>=300){
      if(horas>=240){
         if(horas>=180){
            if(horas<=120){
               if(horas<=60){
                      valor = valor+1;

               }
               valor = valor+1;
             }
            valor = valor+1,40;
         }
       valor = valor+1,40;
      }
    valor = valor+(horas*2);
   }
 printf("O valor eh RS %d\n",valor);
 system("pause");
 return 0;
}
