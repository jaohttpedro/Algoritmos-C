#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* Escreva um programa carrega o texto do arquivo “texto.txt”. Em seguida pergunte pro usuário quantas vezes 
ele deseja repetir o conteúdo do arquivo. Ao final, o seu programa deverá salvar num novo arquivo o 
conteúdo repetidamente. Por exemplo, se o usuário disse que a quantidade é 3, então o seu novo arquivo 
terá o 3x conteúdo do arquivo “texto.txt*/

int main(int argc, char *argv[]) {
	
	FILE *txt;
	txt = fopen("texto.txt", "w");
	if(txt == NULL){
		return 1;
		exit(1);
		system("pause");
	}
	
	char b[2]= "\n";
	int i;
	char a[50];
	printf("Digite o que deseja salvar dentro do arquivo: ");
	scanf("%s", a);
	int num;
	printf("Agora digite quantas vezes deseja escrever o que foi digitado dentro do arquivo texto.txt: ");
	scanf("%d", &num);
	
	
	int result;
	
	for(i=0; i<num; i++){
		//for(i = 0; i<strlen(a); i++){
			result = fputs(a, txt);
			fputs(b, txt);
	}
	//}
	
	if(result == 0){
		printf("Gravacao realizada com sucesso!\n");
	}
	
	rewind(txt);
	fclose(txt);
	
	txt = fopen("texto.txt", "r");
	if(txt == NULL){
		return 1;
		exit(1);
		system("pause");
	}
	
	int qtd = 0;
	char linha[256];
	
	while(fgets(linha, sizeof(linha), txt)){
		qtd++;
	}
	
	printf("quantidade = %d",qtd);
	fclose(txt);
	
	
	return 0;
}
