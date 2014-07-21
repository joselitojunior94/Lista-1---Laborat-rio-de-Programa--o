#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "MyLIB.h"

typedef struct Dados_Cidades{
    char cidade[40];
    int habitantes;
}Dados;

int binario_save(FILE *arquivo){
    Dados aux;

    if((arquivo = fopen("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q10.txt","ab")) == NULL){
        printf("Erro ao abrir\n");
        return 0;
    }
    printf("Digite a cidade\n");
    scanf(" %s",&aux.cidade);
    printf("Digite o  numero de habitantes\n");
    scanf(" %d",&aux.habitantes);

    fwrite(&aux, sizeof (Dados),1,arquivo);
    return 1;
}

int binario_read(FILE *arquivo){
    FILE *ARQ;
    Dados aux, aux02;

    if((arquivo = fopen("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q10.txt","ab")) == NULL){
        printf("Erro\n");
        return 0;
    }
    rewind(arquivo);
    while(fread(&aux,sizeof(Dados),1,arquivo) == 1){
        if(aux.habitantes>aux02.habitantes){
            aux02 = aux;
            printf("%d",aux02.habitantes);
        }
    }

    ARQ = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q101.txt");
    fprintf(ARQ," %s %d\n", &aux02.cidade,aux02.habitantes);
    fclose(ARQ);
    fclose(arquivo);
}


void main(){
    FILE *arquivo;
    char c;

    arquivo = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q10.txt");
    while(c != 'n'){
        binario_save(arquivo);
        printf("Deseja continuar? s ou n\n");
        scanf(" %c",&c);

    }
    binario_read(arquivo);


}
