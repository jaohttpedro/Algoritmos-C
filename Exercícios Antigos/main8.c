#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	 int numero_1, numero_2, resultado1, resultado2, resultado3, resultado4;
    
    printf("Digite o primeiro numero inteiro:");
    scanf("%d", &numero_1);
    
    printf("Digite o segundo numero inteiro:");
    scanf("%d", &numero_2);
    
    resultado1 = numero_1 + numero_2;
    resultado2 = numero_1 - numero_2;
    resultado3 = numero_1 * numero_2;
    resultado4 = numero_1 / numero_2;
    
    printf("O resultado da sua soma e: %d\n", resultado1);
      printf("O resultado da sua subtracao e: %d\n", resultado2);
        printf("O resultado da sua multiplicacao e: %d\n", resultado3);
          printf("O resultado da sua divisao e: %d\n", resultado4);
	return 0;
}
