#include <stdio.h>
#include <stdlib.h>
#include <string.h>

float calc_comiss(float x){

  if(x>=10000){
    return (700 + (x*0.16));
  }

  if(x>=80000 || x<100000 ){
    return 650 + (x*0.14);
  }

  if(x>=60000 || x<80000){
    return 600 + (x*0.14);
  }

  if(x>=40000 || x<60000){
    return 550 + (x*0.14);
  }

  if(x>=20000 || x<40000){
    return 500 + (x*0.14);
  }

  if(x<2000){
     return 400 + (x*0.14);
  }
}

int main(){
 float val_venda,val_e_comiss;
 char selecao ;

do{
 printf("Digite o valor de venda do vendedor\n");
 scanf("%f",&val_venda);

 val_e_comiss = calc_comiss(val_venda);

 printf("O valor da comissao deve ser de %.2f\n",val_e_comiss);
 printf("Deseja fazer outra operacao? (s) ou (n)\n");
 scanf("%s",&selecao);

}while(selecao != 'n');
return 0;
}
