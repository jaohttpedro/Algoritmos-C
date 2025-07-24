#include <stdio.h>
#include <string.h>
/*Crie uma função recursiva que retorne a soma dos elementos de um vetor de inteiros.
*/

int somaArray(int vetor[], int tamanho){
    if(tamanho==0){
        return 0;
    }
    else{
        return vetor[0] + somaArray(vetor+1, tamanho-1);
        /*vetor[0]: pega o primeiro elemento do array*/
        /*vetor+1: soma com o proximo elemento do array*/
        /*tamanho-1: de acordo com a recusividade vai-se diminuindo o tamanho do array, tendo cada vez menos um elemento*/
    }
}

int main(){
    int numeros[]= {1,1,1,1,1,1,1};
    int tamanho = 7;

    int resultado = somaArray(numeros, tamanho);
    printf("Resultado = %d", resultado);
    
}