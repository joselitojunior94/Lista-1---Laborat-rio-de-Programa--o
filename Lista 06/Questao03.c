#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#include "MyLib.h"


void main(){
    FILE *arquivo01;
    FILE *arquivo02;
    FILE *arquivo03;

    arquivo01 = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a1.txt");
    arquivo02 = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a2.txt");
    arquivo03 = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a3.txt");
    merge_files(arquivo01,arquivo03,"C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a1.txt",
                "C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a3.txt");
    merge_files(arquivo02,arquivo03,"C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a2.txt",
                "C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\Questao 03_testes\\q03_a3.txt");





}
