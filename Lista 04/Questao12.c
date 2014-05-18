#include <stdio.h>
#include <stdlib.h>
#include <string.h>


typedef struct{
    char nome[100];
}Dados_alunos;


void op(){
     Dados_alunos Vet_alunos[5];
     char nome_procurar[100];
     char op;
     int i = 0,j;

  while((i!= 5) && (op != 'n')){
    printf("Digite o nome do aluno\n");
    scanf("%s",&Vet_alunos[i].nome);

   printf("Deseja adicionar mais um aluno? (s ou n)\n");
   scanf("%s",&op);
     i++;
  }
 printf("Digite qual aluno voce quer procurar\n");
  scanf("%s",&nome_procurar);

 for(j=0;j<i;j++){
   if(strcmp(Vet_alunos[j].nome,nome_procurar) == 0){
     printf("O nome %s esta na posicao %d do vetor\n",Vet_alunos[j].nome,j);
   }
 }

}

void main(){
 op();
}




