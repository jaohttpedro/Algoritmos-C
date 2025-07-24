#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	char nomeProduto[15];
	float preco;
	int qtd;
	float total;
	
	printf("HORA DA COMPRA\n");
	printf("Digite o nome do produto desejado:\n=>");
	gets(nomeProduto);
	
	printf("Voce escolheu:%s.Digite o preco por unidade do item:\n=>", nomeProduto);
	scanf("%f", &preco);
	
	printf("Qual a quantidade desejada:\n=>");
	scanf("%d", &qtd);
	
	total = preco * qtd;
	
	printf("\n**NOTA FISCAL          **\n");
	printf("**Item escolhido:%s   **\n", nomeProduto);
	printf("**Total:%.2f          **\n", total);
	
	system("pause");
	
	
	return 0;
}
