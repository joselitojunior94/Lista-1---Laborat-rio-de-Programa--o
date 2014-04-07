#include <stdio.h>
#include <stdlib.h>

int main(){
    float metros;
    float centimetr;

  printf("Digite o numero em metros\n");
  scanf("%f",&metros);

  centimetr = metros*100;

  printf("%.2f m = %.2f cm\n",metros,centimetr);


  system("pause");
  return 0;

}


