#include <stdio.h>
#include <stdlib.h>

int main(){

     char carac;
     int num ;

    printf("Entre com um caracter:\n");
    scanf("%c",&carac);

    num = (int)carac;

    printf("O codigo ASCII do caracter eh: %d.\n",num);

    system("pause");
    return 0;



}
