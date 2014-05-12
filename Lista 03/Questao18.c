#include <stdio.h>
#include <stdlib.h>

int main(){
    int j=0, num, cont;
    cont=0;
    num=20;

    while(cont != 9){
        cont=0;
        num+=20;

        for(j=19; j>=11; j--){
            if(num%j==0)
                cont++;
            else
				break;
        }

    }
    printf("O menor numero divisivel por cada um dos numeros de 1 a 20 eh:\ %d\n\n\n", num);

system("pause");
return 0;
}
