#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void raizes(float *a, float *b, float *c, float *x1,float *x2){
    float delta = 0;

    delta = pow(*b,2) - (4*(*a)*(*c));
  if(delta>0){
    *x1 = ( - *b + sqrt(delta))/(2*(*a));
    *x2 = ( - *b - sqrt(delta))/(2*(*a));
  }

}
void imprime_dados(float *a,float *b){
    printf("\n X1 = %.2f e X2 = %.2f\n",*a,*b);
}

void le_dados (){
    float a,b,c,x1 = 0,x2 = 0;

    printf("Digite o a = ");
    scanf("%f",&a);
    printf("\n");
    printf("Digite o b = ");
    scanf("%f",&b);
    printf("\n");
    printf("Digite o c = ");
    scanf("%f",&c);
    raizes(&a,&b,&c,&x1,&x2);
    imprime_dados(&x1,&x2);
}

void main(){
    le_dados();
}
