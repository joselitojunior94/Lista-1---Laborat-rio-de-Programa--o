#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
   char matr [10];
   char nome[100];
   char cod_disc[10];
   float nota01;
   float nota02;
   float media;
}Dados_alunos;

void op(){
    Dados_alunos Vet_alunos[2];
    int i = 0;
  while(i!=2){
   printf("Digite a matricula\n");
   scanf("%s",&Vet_alunos[i].matr);
   printf("Digite o nome do aluno\n");
   scanf("%s",&Vet_alunos[i].nome);
   printf("Digite o codigo da disciplina\n");
   scanf("%s",&Vet_alunos[i].cod_disc);
   printf("Digite a primeira nota\n");
   scanf("%f",&Vet_alunos[i].nota01);
   printf("Digite a segunda nota\n");
   scanf("%f",&Vet_alunos[i].nota02);
   Vet_alunos[i].media = (Vet_alunos[i].nota01 +(Vet_alunos[i].nota02*2))/3;
   i++;
  }
 for(i=0;i<2;i++){
   printf("A media do aluno %s eh %.2f\n",Vet_alunos[i].nome,Vet_alunos[i].media);
 }
}

void main(){
op();
}
