#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include<string.h>
#include "MyLib.h"



void main(){
    FILE *arquivo;
    int N;
    int i;
    char b[10];

    arquivo = inicializa_arquivo("C:\\Users\\JoselitoJr\\Desktop\\Lista 06\\q06.txt");
    printf("Entre com o tamanho do vetor\n");
    scanf("%d",&N);

    int v[N];
    vetcan(v,N);

    for(i = 0; i<N;i++){
        Deci_to_Bin(&v[i], b);
        escrever_arquivo2(arquivo,b);
    }


    fclose(arquivo);

}
