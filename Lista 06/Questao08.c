#include <stdio.h>
#include <stdlib.h>
#include "MyLib.h"
#include <stdbool.h>



void main(){
    FILE *arquivo;
    char cond;



    arquivo = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q08.txt");
    printf("Digite os dados ou 0 para sair\n");
    while(cond != '0'){
        escrever_arquivo3(arquivo);
        escrever_arquivo3(arquivo);
        scanf("%c",&cond);
    }
    fclose(arquivo);

}
