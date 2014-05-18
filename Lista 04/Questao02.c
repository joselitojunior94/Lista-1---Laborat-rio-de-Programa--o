int consulta(){
     char str02[100000],str01[100000];
     int i,j,tam;

 printf("Digite uma string \n");
 gets(str01);
 tam = strlen(str01);

  for(i=0,j=tam;(i<=tam);i++,j--){
    if(str01[i] == str01[j]){
      printf("Nao eh\n");
      system("pause");
      return 0;
    }

  }

 printf("Eh\n");
 return 0;
}


int main(){

 return consulta();

}
