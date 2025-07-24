#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int salario;
	float aumento=252.35 , novo_salario;
	
	printf("Digite aqui o valor do seu salario:");
	scanf ("%d",&salario);
	
	novo_salario = salario + aumento;
	
	printf ("Seu novo salario e de = %.2f\n", novo_salario);
	
	
	return 0;
}
