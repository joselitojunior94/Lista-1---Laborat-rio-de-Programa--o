#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void op(){
     char nome[1000],sexo;
     int idade;

  printf("Digite o nome\n");
  scanf("%s",&nome);
  printf("Digite a idade\n");
  scanf("%d",&idade);
  printf("Digite o sexo\n");
  scanf("%s",&sexo);

  if(idade<=25){
    printf("  Foi aceito");
  }else{
    printf(" Nao foi aceito\n");
  }


}

void main(){

 op();
}
