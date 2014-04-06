#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
  char st1[10];
  char st2[10];

  printf("Digite duas strings\n");
  gets(st1);
  gets(st2);

  printf("A segunda letra da string 1 eh %c\n",st1[1]);
  printf("A segunda letra da string 2 eh %c\n",st2[1]);


  system("pause");
  return 0;


}

