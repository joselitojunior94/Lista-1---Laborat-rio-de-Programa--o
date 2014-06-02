#include <stdio.h>
#include <stdlib.h>

float calc_media(float *x,float *y){

    return (*x+*y)/2;
}

float calc_media_ponderada(float *x,float *y){

    return (*x+(*y * 2))/3;
}

void exibe_dados(float *x){
 printf("\nA media eh %.2f\n",*x);
}

void le_notas(){
    float n1,n2,media;

    printf("Digite duas notas\n");
    scanf("%f",&n1);
    scanf("%f",&n2);
    media = calc_media(&n1,&n2);
    exibe_dados(&media);
    media = calc_media_ponderada(&n1,&n2);
    exibe_dados(&media);
}

void main(){
    le_notas();
}
