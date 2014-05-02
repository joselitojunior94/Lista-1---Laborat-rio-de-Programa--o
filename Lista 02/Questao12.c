#include <stdio.h>
#include <stdlib.h>
#include <math.h>



int menu(){
  int selecao = 0;
 printf("                          Digite a opcao.\n\n");
 printf("                       1. Media Geometrica.\n");
 printf("                       2. Media Ponderada.\n");
 printf("                       3. Media Harmonica.\n");
 printf("                       4. Media Aritmetica.\n");
 scanf("%d",&selecao);

 return selecao;
}

float geometrica(float x,float y,float z){
  float r;

  return cbrt(x*y*z);
}

float ponderada(float x,float y, float z){
     float r;

   return (x+2*y+3*z)/6;

}

float harmonica(float x, float y,float z){
  float r;

  return 1/((1/x)+(1/y)+(1/z));

}

float aritmetica(float x,float y,float z){
     float r;

     return (x+y+z)/3;

}



int main(){
  int select,selecao;
  float num1,num2,num3,result;

do{
 do{

  select = menu(); //Menu.
 }while(select <= 1 && select>=4);

     //entrada de dados.
  printf("Digite tres numeros\n");
  scanf("%f",&num1);
  scanf("%f",&num2);
  scanf("%f",&num3);




      //operacoes
   switch(select){

     case 1: result = geometrica(num1,num2,num3);break;

     case 2: result = ponderada(num1,num2,num3); break;

     case 3: result = harmonica(num1,num2,num3); break;

     case 4: result = aritmetica(num1,num2,num3); break;

     default: printf("Selecao Invalida\n");
   }


   printf("O resultado da operacao %d eh %.2f\n\n",select,result);
   printf("Digite 1 para fazer uma nova operacao ou 0 para sair\n");
   scanf("%d",&selecao);
}while(selecao == 1);

 return 0;



}
