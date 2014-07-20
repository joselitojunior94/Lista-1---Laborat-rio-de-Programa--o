#ifndef MYLIB_H_INCLUDED
#define MYLIB_H_INCLUDED
#endif //MYLIB_H_INCLUDED

FILE *inicializa_arquivo(char *des){

    if(fopen(des,"a") == NULL){
        printf("Arquivo Criado\n");
        return fopen(des,"w");
    }else{
        printf("Arquivo Aberto\n");
        return fopen(des,"a");
    }
}

void escrever_arquivo(FILE *arq){
    char palavra[1000];
    int i = 0;

    while(palavra[0] != '0'){
        fgets(palavra,1000, stdin);

        while(palavra[i] != '\0'){
            i = 0;
            do{
                fputc(palavra[i],arq);
                i++;
            }while(palavra[i] != '\0');
        }
    }
}

void escrever_arquivo2(FILE *arq, char *palavra){
    int i;

    while(palavra[i] != '\0'){
        i = 0;
        if(palavra[i]!= '\0'){
            do{
                fputc(palavra[i],arq);
                i++;
            }while(palavra[i] != '\0');
            fputc('\n',arq);
        }
    }

}

int escrever_arquivo3(FILE *arq){
    char palavra[1000];
    int i = 0;

    while(palavra[0] != '0'){
        fgets(palavra,1000, stdin);

        while(palavra[i] != '\0'){
            i = 0;
            do{
                fputc(palavra[i],arq);
                i++;
            }while(palavra[i] != '\0');
        }
    return 1;
    }
    return 0;
}

void Le_Palavra(FILE *arq,char *des){
	char ch;

	arq = fopen(des,"r");
    printf("\n");
	printf("                               Conteudo do Arquivo:\n\n");
	if(arq == NULL){
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	}else{
	    while(((ch=fgetc(arq))!= EOF) && (ch != '\0')){
           if(ch == '\n'){
                printf("\n");
           }
           printf(" ");
           putchar(ch);
	    }
    }
}

int Le_Palavra2(FILE *arq,char *des){
	char ch;
	int total = 0, cont;

	arq = fopen(des,"r");
	if(arq == NULL){
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	}else{
	    while(((ch=fgetc(arq))!= EOF) && (ch != '\0')){
            cont = (int)atoi(&ch);
            total = total + cont;
	    }
    }
   return total;
}

int Conta_Linhas(FILE *arq,char *des){
	char ch;
	int cont = 0;

	arq = fopen(des,"r");
	if(arq == NULL){
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	}else{
	    while(((ch=fgetc(arq))!= EOF) && (ch != '\0')){
           if(ch == '\n'){
                cont++;
           }
	    }
    }
    return cont;
}

void merge_files(FILE *A1, FILE *A2, char *des01, char *des02){
    char ch;
    A1 = fopen(des01,"r");
    A2 = fopen(des02,"a");

    while(((ch=fgetc(A1))!= EOF)){
        fputc(ch,A2);
    }
    printf("Arquivo Copiado!\n");

}

void merge_files_toupper(FILE *A1, FILE *A2, char *des01, char *des02){
    char ch;
    A1 = fopen(des01,"r");
    A2 = fopen(des02,"a");

    while(((ch=fgetc(A1))!= EOF)){
        ch = toupper(ch);
        fputc(ch,A2);
    }
    printf("Arquivo Copiado!\n");

}

int comp_palavra(char *a, char *b){
    int cont,len_b,i;

    i = 0;
    while(a[i] != '\0'){
        if(a[i] != ' '){
            if(toupper(a[i]) != toupper(b[i])){
                return 0;
            }
        }
        i++;
    }
    return 1;
}

int Busca_Palavra(FILE *arq,char *des, char *palavra){
	char ch;
	int cont = 0;


	if(arq == NULL){
	    printf("Erro, nao foi possivel abrir o arquivo\n");
	}else{
	    while(((ch=fgetc(arq))!= EOF)){
           printf("%s", ch);
            if(comp_palavra(&ch,palavra) == 1){
                cont++;
            }
	    }
    }
    return cont;
}

void vetcan(int *v, int n){
    int i;

    printf("Entre com os numeros\n");
    for(i = 0; i<n; i++){
        scanf("%d",&v[i]);
    }
}

void Deci_to_Bin(int *number, char *b){
	int a = *number ;

	itoa(a,b,2); //Converte para base 2

}

