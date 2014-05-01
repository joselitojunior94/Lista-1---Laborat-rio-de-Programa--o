#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(){
 float num1,num2,num3;

 printf("Digite tres valores\n");
 scanf("%f",&num1);
 scanf("%f",&num2);
 scanf("%f",&num3);

 num1 = pow(num1,2);
 num2 = pow(num2,2);
 num3 = pow(num3,2);

 num1 = num1+num2+num3;

 printf("O resultado da soma dos quadrados dos numeros digitados eh %.2f\n\n",num1);

 system("pause");
 return 0;




}
