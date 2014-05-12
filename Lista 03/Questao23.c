#include <stdio.h>
#include <stdlib.h>

void insere_no_vetor(float *x){
    int i;

    for(i=1;i<=15;i++){
      scanf("%f\n",&x[i]);
    }

}

float calculo_media(float *x){
      int i;
      float media = 0;

    for(i=1;i<=15;i++){
       media = media + x[i];
    }
    media = (media/15);
   return (media);
}

void visualiza_vetor(int n,int *x){
   int i;

 for(i=1;i<=n;i++){
    printf("%d ",x[i]);
 }
}


int main(){
   float vet[15];
   float m;
   int i;

   printf("Digite a nota dos 15 alunos\n");
   insere_no_vetor(&vet);

   m = calculo_media(&vet);
   printf("A media da classe foi %.2f\n",m);

   system("pause");
   return 0;

}
