#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n[4];
	
	printf("Digite tres numeros inteiros\n");
	scanf("%d %d %d", &n[0], &n[1], &n[2]);
	
	n[3]= n[0] + n[1] + n[2];
	
	printf("A soma dos 3 valores digitados eh igual a %d\n", n[3]);
	system("pause");
	return 0;
}
