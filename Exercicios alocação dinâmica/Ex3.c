#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Escreva um programa na linguagem C que recebe um valor inteiro positivo N do usuário. Crie um array de
números inteiros de tamanho N. O array deve ser alocado dinamicamente. Depois, peça para o usuário
digitar os valores nesse array. Ao final, mostre a soma dos valores contidos no array*/

int main(){

    int n;
    
    printf("Type your array size: ");
    scanf("%d", &n);

   int *p = NULL;
    p = (int *) malloc (n * sizeof(int));

    printf("Type %d numbers for your new array:\n", n);
    int i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &p[i]);
    }
    
    int soma = 0;

    for ( i = 0; i < n; i++)
    {
        soma += p[i];
    }

    printf("The result of the sum of this array  is: %d", soma);
    
    return 0;
}