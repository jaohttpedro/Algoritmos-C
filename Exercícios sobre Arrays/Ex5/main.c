#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int arr1[10];
	int arr2[10];
	int arr3[10];
	int i;
	
	printf("Multiplicacao de numeros\n");
	printf("Digite 10 valores inteiros para a primeira coluna\n");
		for(i=0;i<10;i++)
		scanf("%d",&arr1[i]);
	
	printf("Digite 10 valores inteiros para a segunda coluna\n");
		for(i=0;i<10;i++)
		scanf("%d",&arr2[i]);	
		
		for(i=0;i<10;i++)
		arr3[i] = arr1[i] * arr2[i];
	
		
	printf("\nOS RESULTADOS\n");
		for(i=0;i<10;i++)
		printf("%d x %d = %d\n",arr1[i],arr2[i],arr3[i]);
		
	system("pause");
	return 0;
	
	
}
