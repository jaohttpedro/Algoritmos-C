#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n[4] = {40,33,3,6};

	printf("O valor da soma da 1 posicao com a da 2 posicao eh de %d\n", n[0] + n[1] );
	printf("O valor da soma da 1 posicao com a da 3 posicao eh de %d\n", n[0] - n[2] );
	printf("O valor da multiplicacao da 2 posicao com a da 4 posicao eh de %d\n", n[1] * n[3]);
	printf("O valor da divisao da 4 posicao com a da 3 posicao eh de %d\n", n[3] / n[2] );
	system("pause");
	return 0;
}
