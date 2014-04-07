#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float real,result;
    int  int01,int02;

 printf("Digite um numero inteiro\n");
 scanf("%d",&int01);

 printf("Digite um numero inteiro\n");
 scanf("%d",&int02);

 printf("Digite um numero real\n");
 scanf("%f",&real);

 result = ((2*int01)*(int02/2));

 printf("O produto do dobro do primeiro com metade do segundo eh %.2f.\n",result);
 printf("A soma do triplo do primeiro com o terceiro eh %.2f.\n",(int01*3)+real);
 printf("O terceiro elevado ao cubo eh %.2f.\n",pow(real,3));

  system("pause");
  return 0;

}


