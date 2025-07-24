#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int numero_1, numero_2, resultado;
	
	printf("Digite o primeiro numero inteiro:");
	scanf("%d",&numero_1);
	
	printf("Digite o segundo numero inteiro:");
	scanf("%d",&numero_2);
	
	resultado = numero_1 - numero_2;
	
	printf ("O resultado da subtração e = %d\n", resultado);
	return 0;
}
