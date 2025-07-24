#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva um programa que leia do usuário os nomes de dois arquivos texto. Crie um terceiro arquivo texto
com o conteúdo dos dois primeiros juntos (o conteúdo do primeiro seguido do conteúdo do segundo).*/

int main(int argc, char *argv[]) {
	
	FILE *arq1;
	arq1 = fopen("arquivo1.txt", "w+");
	if(arq1 == NULL){
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	
	FILE *arq2;
	arq2 = fopen("arquivo2.txt", "w+");
	if(arq2 == NULL){
		printf("Erro na aabertura do arquivo");
		system("pause");
		exit(1);
	}
	
	char txt[50];
	
	printf("Preencha com o que deseja no arquivo de texto 1: ");
	gets(txt);
	int i;
	for(i = 0; i < strlen(txt); i++){
		fputc(txt[i], arq1);
	}
	
	fflush(stdin);
	
	printf("Preencha com o que deseja no arquivo de texto 2: ");
	gets(txt);
	for(i = 0; i < strlen(txt); i++){
		fputc(txt[i], arq2);
	}
	
	rewind(arq1);
	rewind(arq2);
	FILE *arq3;
	arq3 = fopen("arquivo2.txt","r+");
	if(arq3 ==  NULL){
		printf("Erro na aabertura do arquivo");
		system("pause");
		exit(1);
	}
	char c;
	while((c = fgetc(arq1)) != EOF){
		fputc(c, arq3);
		
	}
	
	fflush(stdin);
	
	while((c = fgetc(arq2)) != EOF){
		fputc(c, arq3);
		
	}
	rewind(arq3);
	
	char r;
	while((r = fgetc(arq3))!= EOF){
		printf("\n%c", r);
	}
	
	
	//int result = fputs()*/
	
	
	
	fclose(arq1);
	fclose(arq2);
	fclose(arq3);
	
	return 0;
}
