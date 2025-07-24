#include<stdio.h>
#include<stdlib.h>

/*7. Escreva um programa que aloque dinamicamente uma matriz de inteiros. As dimensões da matriz deverão
ser lidas do usuário. Em seguida, escreva uma função que receba um valor e retorne 1, caso o valor esteja na
matriz, ou retorne 0, no caso contrário.*/

int buscaValor(int **matriz, int linhas, int colunas, int valor){
    int i,j;
        for ( i = 0; i < linhas; i++)
        {
            for ( j = 0; j < colunas; j++)
            {
                if(matriz[i][j] == valor){
                    return 1;
                }
            }
            
        }
        return 0;
}

int main(){

    int linhas;
    int colunas;

    printf("Digite o numero de linhas da sua matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da sua matriz: ");
    scanf("%d", &colunas);

    int **matriz = NULL;
    matriz = (int**) malloc (linhas * sizeof(int*));
    for(int i = 0; i < linhas; i++)
    {
        matriz[i] = (int*) malloc (colunas * sizeof(int));
    }

    printf("Preencha a sua matriz: \n");
    int i,j;
    for (i=0;i<linhas;i++){
        for(j=0;j<colunas;j++){
            printf("Matriz[%d][%d]: ", i,j);
            scanf("%d", &matriz[i][j]);
        }
    }

    int vProcura;
    printf("Digite o valor que deseja procurar na matriz: ");
    scanf("%d", &vProcura);

    int encontrado = buscaValor(matriz, linhas, colunas, vProcura);

    if(encontrado){
        printf("Encontrado\n");
    } else{
        printf("Nao encontrado\n");
    }

    printf("Matriz utilizada\n");
    for(i=0; i<linhas; i++){
        for ( j = 0; j < colunas; j++)
        {
            printf("|\t%d\t|", matriz[i][j]);
            
        }
        printf("\n");
    }


    for(i=0; i<linhas; i++){
        free(matriz[i]);
    }

    free (matriz);
    return 0;
}
