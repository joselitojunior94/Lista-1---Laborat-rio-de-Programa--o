#include <stdio.h>
#include <stdlib.h>
#include <math.h>




int main(){
  float alt,x,peso = 0;

  printf("Digite o peso \n");
  scanf("%f",&peso);
  printf("Digite a altura \n");
  scanf("%f",&alt);

  x = peso / (alt*alt);

 if(x<18.5){
    printf("Abaixo do peso\n");
 }

 if((x>=18.5) || (x<24.9)){
    printf("Saudavel\n");

 }

 if((x>=25) || (x<29.9)){
    printf("Peso em excesso\n");

 }

 if((x>=30) || (x<34.9)){
    printf("Obesidade Grau I\n");

 }

 if((x>=35) && (x<39.9)){
    printf("Obesidade Grau II (Severa)\n");

 }

 if(x>=40){
    printf("Obesidade Grau III(Morbida)\n");
 }


  system("pause");
  return 0;
}
