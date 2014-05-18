#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void desconto(){
  char nome[1000];
  float preco;

  printf("Digite o nome da mercadoria\n");
  gets(nome);
  printf("Digite o preco\n");
  scanf("%f",&preco);

  printf("O valor total eh  RS %.2f\n",preco);
  printf("A mercadoria %s  se pago a vista tera 10%% de desconto sera : RS %.2f\n",nome,(preco +(preco/10)));

}

void main(){
desconto();
}
