#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int opc;
	int prefeitoneo, prefeitosmith;
	int vereador1, vereador2, vereador3, vereador4, vereador5, vereador6, vereador7;
	int numeleitores=0;
	
	do{
	printf("\nMENU:\n\n");
	printf("0 - Sair\n");
	printf("1 - Votar para prefeito e vereador\n");
	printf("2 - Imprimir quantos eleitores votaram\n");
	printf("3 - Imprimir quantos votos cada prefeito recebeu\n");
	printf("4 - Imprimir quantos votos cada vereador recebeu\n");
	printf("5 - Imprimir quem foi eleito\n\n");
	
	printf("Digite a opcao desejada: ");
	scanf("%d", &opc);
	
	switch (opc){
		
			case 0:
				printf("Encerrando o programa...\n");
				break;
			case 1:
				printf("\nEscolha os seus candidatos para prefeito e vereador:\n\n");
				printf ("Para Prefeito:\n Vote 99 para Neo \n Vote 87 para Agente Smith\n DIGITE:");
			
				int votoprefeito;
				scanf ("%d", &votoprefeito);
				
					if (votoprefeito == 99 || votoprefeito == 87){
						if (votoprefeito == 99) {
               			 prefeitoneo++;*
           				 } else {
            		    prefeitosmith++;
					}
				}
				printf("\nPara vereador:\n Vote 99001 para Trinity\n Vote 99002 para Morpheus\n Vote 87111 para Cypher \n Vote 87112 para Agente Brown\n Vote 87113 para Agente Jones\n Vote 76301 para Oraculo\n Vote 76302 para Garoto colher\nDIGITE:");
				int vereador;
				scanf ("%d", &vereador);
				
						if (vereador == 99001){
							vereador1++;
						} 
						else if (vereador == 99002){
							vereador2++;
						}
						else if (vereador == 87111){
							vereador3++;
						}
						else if (vereador == 87112){
							vereador4++;
						}
						else if (vereador == 87113){
							vereador5++;
						}
						else if (vereador == 76301){
							vereador6++;
						}
						else if(vereador == 76302){
							vereador7++;
						}
						else{
						printf("Candidato não encontrado");
						}
				numeleitores++;
				break;
			case 2:
				if (numeleitores==0){
					printf("\nNenhum eleitor votou ainda\n");
				}
				else if (numeleitores=1){
					printf("\nApenas 1 eleitor votou");
				}
				else{
					printf("\nAo todo votaram %d eleitores!", numeleitores);	
				}
				break;
			case 3: 
				printf("O candidato Neo recebeu %d de votos", prefeitoneo);
				printf ("O canditado Agente Smith recebeu %d de votos", prefeitosmith);
				break;
			case 4: 
				printf("A candidata Trinity recebeu %d votos", vereador1);
				printf("O candidato Morpheus recebeu %d votos", vereador2);
				printf("O candidato Cypher recebeu %d votos", vereador3);
				printf("O candidato Agente Brown recebeu %d votos", vereador4);
				printf("O candidato Agente Jones recebeu %d votos", vereador5);
				printf("O candidato Oraculo recebeu %d votos", vereador6);
				printf("O candidato Garoto colher recebeu %d votos", vereador7);
				break;
			case 5:
				printf("O prefeito eleito foi:\n");
				if (prefeitoneo > prefeitosmith){
					printf("Candidato Neo\n");
				}
				else if (prefeitosmith>prefeitoneo){
					printf("Candidato Agente Smith\n");
				}
				else {
					printf("Empate\n");
				}
				printf ("Os vereadores eleitos são:\n");
				if (vereador1 > numeleitores*0.1) printf("Trinity\n");
				if (vereador2 > numeleitores*0.1) printf("Morpheus\n");
				if (vereador3 > numeleitores*0.1) printf("Cypher\n");
				if (vereador4 > numeleitores*0.1) printf("Agente Brown\n");
				if (vereador5 > numeleitores*0.1) printf("Agente Jones\n");
				if (vereador6 > numeleitores*0.1) printf("Oraculo\n");
				if (vereador7 > numeleitores*0.1) printf("Garoto colher\n");
				break;
				
				defout:
				printf("\nOpção inválida! Por favor, escolha uma opção válida.\n");
	}
	
}
	while (opc!=0);
	system("pause");
	return 0;
}
