#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*Faça um programa na linguagem C capaz de mostrar quantos bytes cada um dos seguintes tipos de dados
ocupa na memória: char, int, float, double.*/

int main(){

    printf("Tamanho do char %d\n",sizeof(char));
    printf("Tamanho do int %d\n", sizeof(int));
    printf("Tamanho do float: %d\n", sizeof(float));
    printf("Tamanho do double %d\n", sizeof(double));

return 0;
}