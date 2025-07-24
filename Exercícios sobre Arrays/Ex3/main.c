#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int n[10];
	int i,j;
	int soma;
	printf("Digite 10 numeros inteiros\n");
	for (i=0; i<10; i++){
		scanf("%d", &n[i]);
	}
	
	for (j=0;j<10;j++){
		soma+=n[j];
	}
	
	printf("A soma dos 10 numeros digitados eh igual a %d\n", soma);
	system("pause");
	return 0;
}
