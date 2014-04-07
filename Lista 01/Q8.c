#include <stdio.h>
#include <stdlib.h>

int main(){
    float nota01 = 0;
    float nota02 = 0;
    float nota03 = 0;
    float nota04 = 0;

  printf("Digite a nota 01\n");
  scanf("%f",&nota01);

  printf("Digite a nota 02\n");
  scanf("%f",&nota02);

  printf("Digite a nota 03\n");
  scanf("%f",&nota03);

  printf("Digite a nota 04\n");
  scanf("%f",&nota04);

  printf("A media delas sao: %.2f\n",(nota01+nota02+nota03+nota04)/4);

  system("pause");
  return 0;

}


