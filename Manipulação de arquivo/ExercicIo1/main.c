#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*EXERCÍCIOS
1) Escreva um programa que conte quantas vezes a letra ‘a’ aparece no conteúdo do arquivo “texto.txt”.*/

int main(int argc, char *argv[]) {
	
	FILE *fp;
	fp = fopen("texto.txt", "w");
	
	if(fp == NULL){
		printf("Erro na abertura do arquivo");
		system("pause");
		exit(1);
	}
	char string[50];
	int i;
	printf("Digite abaixo o que deseja gravar dentro do arquivo de texto: \n");
	gets(string);
	for (i = 0; i < strlen(string); i++){
		fputc(string[i], fp);
	}
	int qtdsA = 0;
	
	for (i = 0; i< strlen(string); i++){
		if (string[i] == 'a' || string[i] == 'A'){
			qtdsA++;
		}
	}
	
	printf("Quantidade de letras 'A' = %d\n", qtdsA);
	fclose(fp);
	system("pause");
	
	return 0;
}
