#include <stdio.h>
#include <stdlib.h>

int main(){
   float valor_hora,salario_bruto,pago_inss,pago_sindicato,salario_liqui,pago_impost;
   int num_horas;

  printf("Digite o valor de 1h trabalhada\n",valor_hora);
  scanf("%f",&valor_hora);
  printf("Digite o numero de horas trabalhadas\n");
  scanf("%d",&num_horas);

  salario_bruto = num_horas*valor_hora;
  pago_inss = salario_bruto*0.08;
  pago_sindicato = salario_bruto*0.05;
  pago_impost = salario_bruto*0.11;
  salario_liqui = ((salario_bruto - pago_inss)- pago_sindicato) -  pago_impost;

  printf("O salario bruto eh R$ %.2f.\n",salario_bruto);
  printf("Quantia paga ao INSS R$ %.2f.\n",pago_inss);
  printf("Quantia paga ao Imposto de Renda R$ %.2f.\n",pago_impost);
  printf("Quantia paga ao Sindicato R$ %.2f.\n",pago_sindicato);
  printf("___________________________________________________\n\n");
  printf("O salario liquido eh R$ %.2f.\n",salario_liqui);
  printf("\n");

  system("pause");
  return 0;

}
