#include <stdio.h>
#include <stdlib.h>

int main(){
    float quant = 780000;


  printf("O primeiro ganhador recebera RS %.2f.\n\n",quant - (quant*0.46));
  printf("O segundo ganhador recebera  RS %.2f.\n\n",quant - (quant*0.32));
  printf("O terceiro ganhador recebera RS %.2f.\n\n",((quant - (quant*0.46) + (quant - (quant*0.32))) - quant)) ;

  system("pause");
  return 0;


}
