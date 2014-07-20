#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include "MyLib.h"

void main(){
    FILE *arquivo;
    float n;

    arquivo = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q07.txt");
    printf("O valor do mercado eh :%d",Le_Palavra2(arquivo,"C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q07.txt"));
    fclose(arquivo);
}
