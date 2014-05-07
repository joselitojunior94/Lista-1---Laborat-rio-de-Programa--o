#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define P 50

int main(){
 int num1 = 0 ;
 int num2 = 0;
 int resp,i,cont_act=0,error = 0;

 i =1;
 srand ( time(NULL) );

  printf("Bem Vindo a prova de Somar\n");
  while(i<=5){
  resp = 0;
  printf("\nQual eh a soma de %d + %d\n\n",num1 = rand()%P,num2 = rand()%P);
  printf("Resposta = ");
  scanf("%d",&resp);
    if(resp == (num1+num2)){
       printf("Voce acertou\n");
       cont_act++;
    }else{
       printf("Voce errou. O resultado era %d\n",num1+num2);
       error++;
    }
  i++;
 }
 printf("Voce obteve %d acertos e %d erros\n",cont_act,error);

 system("pause");
 return 0;
}







