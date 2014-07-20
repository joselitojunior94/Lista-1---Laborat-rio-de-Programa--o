#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include "MyLib.h"


void main(){
    FILE *arquivo;
    char ch;
    int i,k;

    arquivo = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q01.txt");
    escrever_arquivo(arquivo);
    rewind(arquivo);
    Le_Palavra(arquivo,"C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q01.txt");
    fclose(arquivo);
}
