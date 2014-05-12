#include <stdio.h>


int main(){
  int quant_dig=0,quant_pares=0,soma_pares=0,soma_dig=0,num,maior = 0;
  int menor = 10000;

  while(num!=0){
    printf("Digite numeros. Para sair digite 0\n");
    if(num<menor){
       menor = num;
     }
    scanf("%d",&num);
    quant_dig++;
    soma_dig = soma_dig + num;


     if(num>maior){
      maior = num;
     }


     if(num % 2 == 0){
       soma_pares = soma_pares + num;
       quant_pares++;
     }

  }
  printf("\n");
  printf("Foram digitados %d digitos.\n",quant_dig);
  printf("A soma deles eh %d\n",soma_dig);
  printf("A media dos numeros digitados eh %d\n",(soma_dig/quant_dig));
  printf("O maior numero foi %d\n",maior);
  printf("O menor numero foi %d\n",menor);
  printf("A media dos numeros pares eh %d\n",(soma_pares/quant_pares));

  return 0;

}
