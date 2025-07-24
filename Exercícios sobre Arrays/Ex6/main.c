#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	float preco[15];
	int i;
	int j;
	int escolha;
	
	printf("Digite o preco de 15 produtos:\n");
		for(i=0;i<15;i++)
		scanf("%f", &preco[i]);
	
	printf("Indice -- Preco\n");
		for(i=0;i<15;i++){
			printf("%d -- %.2f\n",i,preco[i]);
		}
	
	printf("De acordo com o indice, escolha qual o valor desejado para mostrar na tela\n=>");
	scanf("%d", &escolha);
		if (escolha>=0 && escolha<15){
			printf("\nVoce escolheu o indice %d, cujo o valor definido eh de %.2f\n", escolha, preco[escolha]);
		}else{
			printf("Invalido\n");
		}
		
	system("pause");	
	return 0;
}
