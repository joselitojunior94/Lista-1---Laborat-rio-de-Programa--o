#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "MyLib.h"


void main(){
    FILE *arquivo;

    arquivo = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q01.txt");
    printf("A quantidade de linhas eh: %d\n",Conta_Linhas(arquivo,"C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q01.txt"));
    fclose(arquivo);
    system("pause");

}
