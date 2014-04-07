#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    float altura,peso_id;



 printf("Digite a altura\n");
 scanf("%f",&altura);

 peso_id = ((72.7*altura) - 58);

 printf("O seu peso ideal eh %.2f.\n",peso_id);

  system("pause");
  return 0;

}


