#include <stdio.h>

int fibonnacci(int n){

   if((n==1) || (n==2)){
     return 1;
   }else{
     return fibonnacci(n-1) + fibonnacci(n-2);
   }
}

int main(){
  int i,num1;

  printf("Digite um numero\n");
  scanf("%d",&num1);
  for(i=1;i<=num1;i++){
  printf("%d,",fibonnacci(i));
  }
  return 0;


}
