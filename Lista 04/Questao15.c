#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    char str01[15],str02[15],str_conc[30];
    int f,i,j,tam01,tam02;

  printf("Digite uma palavra\n");
  scanf("%s",&str01);
  tam01 = strlen(str01);

  printf("Digite outra palavra\n");
  scanf("%s",str02);
  tam02 = strlen(str02);

  for(i=0;i<tam01;i++){
    str_conc[i] = str01[i];
  }

  for(j=i ,f=0, i=0;f<tam02;j++,f++){
    str_conc[j] = str02[f];

  }
 tam02 = strlen(str_conc);
printf("As strings  concatenadas sem funcao padrao eh : ");
 for(i=0;i<=(tam02-1) ;i++){
   if(str_conc[i] != ' ') {
    printf("%c",str_conc[i]);
   }
 }


}
