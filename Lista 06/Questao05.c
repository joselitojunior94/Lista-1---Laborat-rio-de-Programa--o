#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "MyLib.h"


void main(){
    FILE *arquivo;
    char palav[700];

    arquivo = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a1.txt");
    fgets(palav, 700, stdin);

    printf("%d",Busca_Palavra(arquivo,"C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a1.txt",palav));


}
