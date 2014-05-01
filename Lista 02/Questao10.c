#include <stdio.h>
#include <stdlib.h>

int main(){
   int selecao;
   float num1,num2,result;

   do{
    printf("             Digite a opcao desejada\n\n");
    printf("             1. Somar entre 2 numeros\n");
    printf("             2.Diferenca entre 2 numeros\n");
    printf("             3.Produto entre 2 numeros\n");
    printf("             4.Divisao entre 2 numeros\n");
    scanf("%d",&selecao);

    switch(selecao){

      case 1: //Bloco da adição
          printf("Digite dois numeros\n");
          scanf("%f",&num1);
          scanf("%f",&num2);

          result = num1 + num2;

          printf("O resultado de %.2f + %.2f = %.2f\n",num1,num2,result);
     break;
      case 2: //Bloco da subtração
        do{
            printf("Digite dois numeros\n");
            scanf("%f",&num1);
            scanf("%f",&num2);
              if(num1<num2){
                printf("Digite o primeiro numero maior que o segundo\n");
              }
       }while(num1<num2);
        result = num1 - num2;

        printf("O resultado de %.2f - %.2f = %.2f\n",num1,num2,result);

    break;
      case 3: //Bloco da multiplicação
        printf("Digite dois numeros\n");
        scanf("%f",&num1);
        scanf("%f",&num2);

        result = num1 * num2;

        printf("O resultado de %.2f X %.2f = %.2f\n",num1,num2,result);
    break;
      case 4://Bloco da divisão

            printf("Digite dois numeros\n");
            scanf("%f",&num1);
             do{
            printf("Digite o denominador\n");
            scanf("%f",&num2);
              if( num2 == 0){
                printf("Digite  o denominador diferente de zero\n\n");
              }
          }while( num2 == 0);

        result = num1 / num2;

        printf("O resultado de %.2f / %.2f = %.2f\n",num1,num2,result);
      break;
       default:
        printf("Selecao errada. Digite novamente\n");
   }

   }while(selecao>5);

 system("pause");
 return 0;

}
