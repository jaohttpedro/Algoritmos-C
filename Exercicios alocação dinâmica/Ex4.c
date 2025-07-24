#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva uma função na linguagem C que receba um valor inteiro positivo N por parâmetro e retorne o
ponteiro para um vetor de tamanho N alocado dinamicamente. Esse vetor deverá ter os seus elementos
preenchidos com certo valor, também passado por parâmetro. Se N for negativo ou igual a zero, um
ponteiro nulo deverá ser retornado.*/

int* criaVetor(int n, int valor){

    if(n<=0){
        return NULL;
    }

    int* vetor = (int*) malloc (n*sizeof(int));

    if(vetor == NULL){
        printf("Erro grave");
        return NULL;
    }

    int i;

    for (i=0; i<n;i++){
        vetor[i] = valor;
    }
    return vetor;
}


int main(){
    int n;
    int valor;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    printf("Digite o numero que ocupara os espacos desse vetor: ");
    scanf("%d", &valor);

    int * novoVetor = criaVetor(n,valor);

    int i;

    for (i=0;i<n;i++){
        printf("%d   ", novoVetor[i]);
    }
    free(novoVetor);
    return 0;
}