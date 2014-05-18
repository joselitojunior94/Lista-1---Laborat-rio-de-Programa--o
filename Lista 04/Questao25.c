#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
     char car_name[100];
     float consumo;
     float consumo_mil;

}Dados_Carro;

void op(){
    Dados_Carro Vet_Carro[2];
    char economic_car[100];
    int i = 0;
    float economic = 10000000;
 while(i!=2){
 printf("Digite o nome do carro\n");
 scanf("%s",&Vet_Carro[i].car_name);
 printf("Digite o consumo \n");
 scanf("%f",&Vet_Carro[i].consumo);
 Vet_Carro[i].consumo_mil = Vet_Carro[i].consumo * 1000;
 i++;
 }

  for(i=0;i<2;i++){
    if(Vet_Carro[i].consumo<economic){
      strcpy(economic_car,Vet_Carro[i].car_name);
      economic =  Vet_Carro[i].consumo;
    }
  }

  for(i=0;i<2;i++){
    printf("O carro %s consome %.2f litros para percorrer 1000 km\n",Vet_Carro[i].car_name,Vet_Carro[i].consumo_mil);
  }
 printf("O carro mais economico eh o %s",economic_car);



}

void main(){

op();

}
