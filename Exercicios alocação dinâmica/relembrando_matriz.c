#include<stdio.h>
#include<stdlib.h>


int main(){

    int linhas;
    int colunas;
    

    printf("Digite o numero de linhas da sua matriz: ");
    scanf("%d", &linhas);

    printf("Digite o numero de colunas da sua matriz: ");
    scanf("%d", &colunas);

    int matriz[linhas][colunas];
    int i; 

    printf("Digite os elementos desta coluna\n");

    for(i=0; i<linhas; i++){
        int j;
        for ( j = 0; j < colunas; j++)
        {   
            printf("matriz[%d][%d]: ", i,j);
            scanf("%d",&matriz[i][j]);
        } 
    }

    for(i=0; i<linhas; i++){
        int j;
        for ( j = 0; j < colunas; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}